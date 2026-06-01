__int64 __fastcall sub_84F710(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbp
  char v4; // r15
  char v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 *v10; // rax
  __m128 *v11; // rax
  __int64 result; // rax
  __int64 *i; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r10
  unsigned int *v20; // r12
  unsigned int *v21; // rdi
  int v22; // eax
  __int64 v23; // rbx
  unsigned int *v24; // rbx
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp-10h] [rbp-58h]
  __int64 v28; // [rsp+8h] [rbp-40h]
  __int64 v29; // [rsp+8h] [rbp-40h]

  v3 = *(unsigned int **)a1;
  v4 = **(_BYTE **)(a2 + 32);
  if ( v4 == -103 )
  {
    v28 = *(_QWORD *)(a2 + 32);
    sub_847F60(*(unsigned int **)a1, 32, 2, 0, 140, 0);
    v19 = v28;
    if ( *(int *)(a2 + 48) >= 0 )
    {
      if ( (*(_BYTE *)(v28 + 1) & 0xFD) != 0x81 )
      {
        v20 = *(unsigned int **)a1;
        if ( !**(_DWORD **)a1 )
        {
          v21 = *(unsigned int **)a1;
          v20[36] = 0;
          v22 = sub_848C40(v21, 12, 0, 12, 0, 127, 8);
          v19 = v28;
          if ( v22 == 4 )
          {
            sub_8498A0(v20, 0x5030100u, 12, 0, 12, 0, 127, 8);
            v19 = v28;
          }
        }
        v29 = v19;
        v5 = -103;
        v6 = sub_84A700(v3, 0, 2, 0, 127, 0);
        v4 = *(_BYTE *)(v29 + 1);
        goto LABEL_4;
      }
      sub_847F60(v3, 32, 140, 0, 127, 0);
      v23 = *(_QWORD *)(a2 + 56);
      result = (__int64)sub_84A700(v3, 1, 2, 0, 127, 0);
      if ( !v23 || !result )
      {
LABEL_38:
        v24 = *(unsigned int **)a1;
        if ( !**(_DWORD **)a1 )
        {
          v24[36] = 0;
          result = sub_848C40(v24, 12, 0, 12, 0, 127, 8);
          if ( (_DWORD)result == 4 )
          {
            sub_8498A0(v24, 0x5030100u, 12, 0, 12, 0, 127, 8);
            return v27;
          }
        }
        return result;
      }
LABEL_37:
      *(_QWORD *)(result + 16) &= ~1uLL;
      *(_QWORD *)(result + 24) = v23;
      goto LABEL_38;
    }
    result = (__int64)sub_845240((__int64)v3);
    v25 = *(__int64 **)(a2 + 24);
    if ( !v25 )
    {
LABEL_51:
      sub_847F60(v3, 32, 140, 0, 127, 0);
      v23 = *(_QWORD *)(a2 + 56);
      result = (__int64)sub_84A700(v3, 1, 2, 0, 127, 0);
      if ( !result || !v23 )
        goto LABEL_38;
      goto LABEL_37;
    }
    do
    {
LABEL_42:
      v26 = *v25;
      if ( *v25 && result )
      {
        *(_QWORD *)(v26 + 16) &= ~1uLL;
        *(_QWORD *)(v26 + 24) = result;
      }
      v25 = (__int64 *)v25[1];
    }
    while ( v25 );
    if ( v4 != -103 )
      return result;
    goto LABEL_51;
  }
  if ( *(int *)(a2 + 48) < 0 )
  {
    v4 = -119;
    result = (__int64)sub_845240(*(_QWORD *)a1);
    v25 = *(__int64 **)(a2 + 24);
    if ( !v25 )
      return result;
    goto LABEL_42;
  }
  v5 = -119;
  v6 = nullptr;
LABEL_4:
  if ( (v4 & 0xFD) == 0x80 )
  {
    sub_847F60(v3, 32, 12, 0, 142, *(int *)(a2 + 52));
    sub_8452F0((__int64)v3, 37);
    if ( *v3 )
      goto LABEL_10;
    v7 = *((_QWORD *)v3 + 10);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = v8 + 16;
    if ( (unsigned __int64)(v8 + 16) <= 0xFF0 )
    {
      v11 = (__m128 *)(v7 + v8 + 16);
      *(_QWORD *)(v7 + 8) = v9;
      if ( v11 )
        goto LABEL_9;
    }
    else
    {
      v10 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v3 + 7))(
                        4096,
                        *(_QWORD *)(*((_QWORD *)v3 + 7) + 16LL));
      if ( v10 )
      {
        v10->m128_u64[0] = *((_QWORD *)v3 + 10);
        *((_QWORD *)v3 + 10) = v10;
        v11 = v10 + 1;
        v11[-1].m128_u64[1] = 16;
LABEL_9:
        *v11 = _mm_loadh_ps((const double *)(a1 + 400));
        *(_QWORD *)(a1 + 400) = v11;
        goto LABEL_10;
      }
      *v3 = 2;
    }
LABEL_10:
    sub_847F60(v3, 32, 1, 0, 140, -16);
    sub_849F80(v3, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (*(_DWORD *)(a2 + 48) - 1));
    sub_847F60(v3, 32, 142, *(int *)(a2 + 52), 1, 0);
    result = (__int64)sub_845240((__int64)v3);
    for ( i = *(__int64 **)(a2 + 24); i; i = (__int64 *)i[1] )
    {
      v14 = *i;
      if ( *i && result )
      {
        *(_QWORD *)(v14 + 16) &= ~1uLL;
        *(_QWORD *)(v14 + 24) = result;
      }
    }
LABEL_15:
    if ( v5 != -103 )
      return result;
    goto LABEL_23;
  }
  result = (__int64)sub_845240((__int64)v3);
  v15 = *(__int64 **)(a2 + 24);
  if ( !v15 )
    goto LABEL_15;
  do
  {
    v16 = *v15;
    if ( *v15 && result )
    {
      *(_QWORD *)(v16 + 16) &= ~1uLL;
      *(_QWORD *)(v16 + 24) = result;
    }
    v15 = (__int64 *)v15[1];
  }
  while ( v15 );
  if ( v5 == -103 )
  {
LABEL_23:
    sub_849F80(v3, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
    sub_847F60(v3, 32, 140, 0, 127, 0);
    v17 = *(_QWORD *)(a2 + 56);
    v18 = sub_8452F0((__int64)v3, 36);
    if ( v17 && v18 )
    {
      v18[2] &= ~1uLL;
      v18[3] = v17;
    }
    result = (__int64)sub_845240((__int64)v3);
    if ( v6 )
    {
      if ( result )
      {
        v6[2] &= ~1uLL;
        v6[3] = result;
      }
    }
  }
  return result;
}

