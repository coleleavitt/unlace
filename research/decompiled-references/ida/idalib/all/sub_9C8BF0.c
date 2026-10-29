__int64 __fastcall sub_9C8BF0(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rdi
  unsigned __int16 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int16 *v9; // r10
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v19; // r14

  v3 = *(unsigned __int16 **)a1;
  v4 = 2LL * *(_QWORD *)(a1 + 8);
  v5 = &v3[(unsigned __int64)v4 / 2];
  v6 = v4 >> 3;
  v7 = v4 >> 1;
  if ( v6 > 0 )
  {
    v8 = *a2;
    v9 = &v3[4 * v6];
    v10 = (*a3 >> 1) & 1;
    v11 = *a3 & 0xFFFFFFFFFFFFFFF8LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v8 + 8LL * *v3);
      if ( ((*(__int64 *)(v12 + 8) >> 1) & 1) == (_BYTE)v10 )
      {
        v13 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 )
        {
          if ( *(_BYTE *)v13 == 12
            && (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && *(_BYTE *)v11 == 12
            && *(_QWORD *)(v13 + 64) == *(_QWORD *)(v11 + 64) )
          {
            goto LABEL_13;
          }
        }
      }
      v12 = *(_QWORD *)(v8 + 8LL * v3[1]);
      if ( (_BYTE)v10 == ((*(__int64 *)(v12 + 8) >> 1) & 1) )
      {
        v17 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17 )
        {
          if ( *(_BYTE *)v17 == 12
            && (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && *(_BYTE *)v11 == 12
            && *(_QWORD *)(v17 + 64) == *(_QWORD *)(v11 + 64) )
          {
            ++v3;
            goto LABEL_13;
          }
        }
      }
      v12 = *(_QWORD *)(v8 + 8LL * v3[2]);
      if ( (_BYTE)v10 == ((*(__int64 *)(v12 + 8) >> 1) & 1) )
      {
        v16 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16 )
        {
          if ( *(_BYTE *)v16 == 12
            && (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && *(_BYTE *)v11 == 12
            && *(_QWORD *)(v16 + 64) == *(_QWORD *)(v11 + 64) )
          {
            v3 += 2;
            goto LABEL_13;
          }
        }
      }
      v12 = *(_QWORD *)(v8 + 8LL * v3[3]);
      if ( (_BYTE)v10 == ((*(__int64 *)(v12 + 8) >> 1) & 1) )
      {
        v15 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v15 )
        {
          if ( *(_BYTE *)v15 == 12
            && (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0
            && *(_BYTE *)v11 == 12
            && *(_QWORD *)(v15 + 64) == *(_QWORD *)(v11 + 64) )
          {
            v3 += 3;
            goto LABEL_13;
          }
        }
      }
      v3 += 4;
      if ( v9 == v3 )
      {
        v7 = v5 - v3;
        break;
      }
    }
  }
  if ( v7 == 2 )
  {
    v19 = *a2;
LABEL_45:
    v12 = *(_QWORD *)(v19 + 8LL * *v3);
    if ( sub_9C8BA0((__int64 *)(v12 + 8), a3) )
      goto LABEL_13;
    ++v3;
    goto LABEL_42;
  }
  if ( v7 == 3 )
  {
    v19 = *a2;
    v12 = *(_QWORD *)(*a2 + 8LL * *v3);
    if ( sub_9C8BA0((__int64 *)(v12 + 8), a3) )
      goto LABEL_13;
    ++v3;
    goto LABEL_45;
  }
  if ( v7 != 1 )
    return 0;
  v19 = *a2;
LABEL_42:
  v12 = *(_QWORD *)(v19 + 8LL * *v3);
  if ( !sub_9C8BA0((__int64 *)(v12 + 8), a3) )
    return 0;
LABEL_13:
  if ( v5 == v3 )
    return 0;
  return v12;
}
