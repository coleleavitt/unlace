void __fastcall sub_206AFD0(_QWORD *a1)
{
  _DWORD *v2; // r12
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r13
  _QWORD *v5; // rdx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (_DWORD *)a1[61];
  if ( v2 )
  {
    if ( v2[2] )
      sub_206AF60(v17, *(_QWORD **)v2, (_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)v2[4]), a1[61], 0);
    else
      sub_206AF60(
        v17,
        (_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)v2[4]),
        (_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)v2[4]),
        a1[61],
        1);
    v4 = v17[0].m128_u64[1];
    v3 = v17[0].m128_u64[0];
    v5 = (_QWORD *)(*(_QWORD *)v2 + 16LL * (unsigned int)v2[4]);
    sub_206AF60(v17, v5, v5, (__int64)v2, 1);
    v6 = v17[0].m128_u64[0];
    if ( v3 != v17[0].m128_u64[0] )
    {
      do
      {
LABEL_5:
        while ( 1 )
        {
          free(*(void **)(v3 + 8));
          v7 = v3 + 16;
          if ( v3 + 16 != v4 )
            break;
LABEL_28:
          v3 = v4;
          if ( v6 == v4 )
            goto LABEL_13;
        }
        v8 = *(_QWORD *)(v3 + 16);
        if ( v8 == -8192 || v8 == -4096 )
        {
          v9 = (__int64 *)(v3 + 32);
          while ( 1 )
          {
            v3 = (unsigned __int64)v9;
            if ( v9 == (__int64 *)v4 )
              goto LABEL_28;
            v10 = *v9;
            v9 += 2;
            if ( v10 != -8192 && v10 != -4096 )
            {
              if ( v6 != v3 )
                goto LABEL_5;
              goto LABEL_13;
            }
          }
        }
        v3 += 16LL;
      }
      while ( v6 != v7 );
    }
LABEL_13:
    operator delete(*(_QWORD *)v2, 16LL * (unsigned int)v2[4], 8);
    operator delete(v2, 0x18u);
  }
  v11 = (_QWORD *)a1[56];
  if ( v11 != a1 + 58 )
    operator delete(v11);
  v12 = (_QWORD *)a1[34];
  if ( v12 != a1 + 36 )
    free(v12);
  v13 = (_QWORD *)a1[22];
  if ( v13 != a1 + 24 )
    free(v13);
  v14 = (_QWORD *)a1[16];
  if ( v14 != a1 + 18 )
    free(v14);
  v15 = (_QWORD *)a1[8];
  if ( v15 != a1 + 10 )
    free(v15);
  v16 = (_QWORD *)a1[4];
  if ( v16 != a1 + 7 )
    free(v16);
}
