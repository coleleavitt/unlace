__int64 __fastcall sub_9C9F90(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int16 *v4; // rbx
  __int64 v5; // rdx
  unsigned __int16 *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v12; // r12
  unsigned __int16 *v13; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned __int16 **)a1;
  v5 = 2LL * *(_QWORD *)(a1 + 8);
  v6 = (unsigned __int16 *)(*(_QWORD *)a1 + v5);
  v7 = v5 >> 3;
  v8 = v5 >> 1;
  if ( v7 > 0 )
  {
    v9 = *a2;
    v13 = &v4[4 * v7];
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 8LL * *v4);
      if ( sub_9C9DA0((__int64 *)(v10 + 8), a3) )
        goto LABEL_8;
      v10 = *(_QWORD *)(v9 + 8LL * v4[1]);
      if ( sub_9C9DA0((__int64 *)(v10 + 8), a3) )
      {
        ++v4;
        goto LABEL_8;
      }
      v10 = *(_QWORD *)(v9 + 8LL * v4[2]);
      if ( sub_9C9DA0((__int64 *)(v10 + 8), a3) )
      {
        v4 += 2;
        goto LABEL_8;
      }
      v10 = *(_QWORD *)(v9 + 8LL * v4[3]);
      if ( sub_9C9DA0((__int64 *)(v10 + 8), a3) )
      {
        v4 += 3;
        goto LABEL_8;
      }
      v4 += 4;
      if ( v13 == v4 )
      {
        v8 = v6 - v4;
        break;
      }
    }
  }
  switch ( v8 )
  {
    case 2LL:
      v12 = *a2;
      break;
    case 3LL:
      v12 = *a2;
      v10 = *(_QWORD *)(*a2 + 8LL * *v4);
      if ( sub_9C9DA0((__int64 *)(v10 + 8), a3) )
        goto LABEL_8;
      ++v4;
      break;
    case 1LL:
      v12 = *a2;
      goto LABEL_19;
    default:
      return 0;
  }
  v10 = *(_QWORD *)(v12 + 8LL * *v4);
  if ( sub_9C9DA0((__int64 *)(v10 + 8), a3) )
    goto LABEL_8;
  ++v4;
LABEL_19:
  v10 = *(_QWORD *)(v12 + 8LL * *v4);
  if ( !sub_9C9DA0((__int64 *)(v10 + 8), a3) )
    return 0;
LABEL_8:
  if ( v6 == v4 )
    return 0;
  return v10;
}
