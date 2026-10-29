unsigned __int64 __fastcall sub_2056960(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r10d
  __int64 *v5; // r9
  __int64 v6; // rax
  int i; // ebp
  unsigned int v8; // r12d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __m128 v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_QWORD *)a1;
  if ( !(_DWORD)v2 || (v4 = (v2 - 1) & *(_DWORD *)a2, v5 = (__int64 *)(v3 + 8LL * v4), v6 = *v5, *v5 == -4096) )
  {
LABEL_15:
    sub_20568F0(v15, (_QWORD *)(v3 + 8 * v2), (_QWORD *)(v3 + 8 * v2), a1, 1);
    return v15[0].m128_u64[0];
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      if ( v6 != -8192 && *(_QWORD *)(a2 + 8) == *(_QWORD *)(v6 + 8) )
      {
        v8 = *(_DWORD *)(v6 + 4) & 0x7FFFFFF;
        if ( *(_QWORD *)(a2 + 24) == v8 )
        {
          if ( !v8 )
            goto LABEL_14;
          v9 = *(_QWORD **)(a2 + 16);
          if ( *v9 == *(_QWORD *)(v6 - 32LL * v8) )
            break;
        }
      }
LABEL_6:
      v4 = (v2 - 1) & (i + v4);
      v5 = (__int64 *)(v3 + 8LL * v4);
      v6 = *v5;
      if ( *v5 == -4096 )
        goto LABEL_15;
    }
    v10 = v6 - 32LL * v8;
    v11 = 0;
    v12 = 8LL * (v8 - 1);
    while ( v11 != v12 )
    {
      v13 = v9[v11 / 8 + 1];
      v11 += 8LL;
      if ( v13 != *(_QWORD *)(v10 + 4 * v11) )
        goto LABEL_6;
    }
LABEL_14:
    sub_20568F0(v15, v5, (_QWORD *)(v3 + 8 * v2), a1, 1);
    return v15[0].m128_u64[0];
  }
}
