__int64 __fastcall sub_173A6C0(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r12
  _QWORD *v22; // rax
  __int64 v23; // r12
  _QWORD *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // r14
  char *v29; // rdi
  __int64 *v30; // r12
  unsigned __int64 v31; // rax
  __int64 *v32; // rbp
  __int64 *v33; // rdi
  void *v34; // [rsp+0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+8h] [rbp-58h]
  void *v36; // [rsp+10h] [rbp-50h]
  __int64 v37; // [rsp+18h] [rbp-48h]
  __int64 v38; // [rsp+20h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8);
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v3 )
    return a1;
  v5 = *(_QWORD **)a2;
  v6 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 16) << 6);
  if ( *(_QWORD *)a2 == v6 )
    return a1;
  if ( *v5 != -8192 && *v5 != -4096 )
  {
LABEL_10:
    v9 = 0;
    v10 = (__int64)(v5 + 2);
LABEL_20:
    v16 = v9 - *(_QWORD *)a1;
    v34 = *(void **)a1;
    if ( 0x6DB6DB6DB6DB6DB7LL * (v16 >> 3) )
    {
      v17 = 0xDB6DB6DB6DB6DB6ELL * (v16 >> 3);
      v18 = -16;
      if ( 0x6DB6DB6DB6DB6DB7LL * (v16 >> 3) <= v17 && v17 <= 0x492492492492492LL )
      {
        if ( !v17 )
        {
          v36 = &word_38;
          v37 = 0;
          v35 = 0;
          goto LABEL_23;
        }
        v18 = 16 * (v16 >> 3);
      }
    }
    else
    {
      v18 = 56;
    }
    v38 = v10;
    v19 = operator new(v18);
    v10 = v38;
    v35 = v19;
    v37 = v19 + v18;
    v36 = (void *)(v19 + 56);
LABEL_23:
    v20 = v35;
    v21 = v35 + v16;
    *(_QWORD *)v21 = v5[1];
    sub_171EBC0(v21 + 8, v10);
    v22 = v34;
    *(_DWORD *)(v21 + 40) = *((_DWORD *)v5 + 12);
    *(_QWORD *)(v21 + 48) = v5[7];
    if ( v22 != (_QWORD *)v9 )
    {
      v23 = v20;
      v24 = v22;
      do
      {
        v25 = *v24;
        v26 = (__int64)(v24 + 1);
        v27 = v23 + 8;
        v24 += 7;
        v23 += 56;
        *(_QWORD *)(v23 - 56) = v25;
        sub_171EBC0(v27, v26);
        *(_DWORD *)(v23 - 16) = *((_DWORD *)v24 - 4);
        *(_QWORD *)(v23 - 8) = *(v24 - 1);
      }
      while ( v24 != (_QWORD *)v9 );
      v28 = v34;
      v36 = (void *)(v35
                   + 8
                   * (0x6DB6DB6DB6DB6DB8LL * ((unsigned __int64)(v9 - (_QWORD)v34 - 56) >> 3)
                    - ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v9 - (_QWORD)v34 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL))
                   + 112);
      do
      {
        if ( *((_BYTE *)v28 + 32) )
        {
          v29 = (char *)v28[1];
          if ( v29 != (char *)(v28 + 3) )
            free(v29);
        }
        v28 += 7;
      }
      while ( v28 != (_QWORD *)v9 );
    }
    if ( v34 )
      operator delete(v34);
    v9 = (__int64)v36;
    v11 = v5 + 8;
    v34 = v36;
    *(_QWORD *)(a1 + 16) = v37;
    *(__m128 *)a1 = _mm_loadh_ps((const double *)&v34);
    if ( v5 + 8 != (_QWORD *)v6 )
    {
      while ( 1 )
      {
        v12 = v5[8];
        if ( v12 == -8192 || v12 == -4096 )
          break;
        v5 = v11;
        v15 = *(_QWORD *)(a1 + 16);
LABEL_19:
        v10 = (__int64)(v5 + 2);
        if ( v15 == v9 )
          goto LABEL_20;
        *(_QWORD *)v9 = v5[1];
        sub_171EBC0(v9 + 8, v10);
        v11 = v5 + 8;
        *(_DWORD *)(v9 + 40) = *((_DWORD *)v5 + 12);
        *(_QWORD *)(v9 + 48) = v5[7];
        v9 = *(_QWORD *)(a1 + 8) + 56LL;
        *(_QWORD *)(a1 + 8) = v9;
        if ( v5 + 8 == (_QWORD *)v6 )
          goto LABEL_34;
      }
      v13 = v5 + 16;
      while ( 1 )
      {
        v5 = v13;
        if ( v13 == (_QWORD *)v6 )
          break;
        v14 = *v13;
        v13 += 8;
        if ( v14 != -4096 && v14 != -8192 )
        {
          v15 = *(_QWORD *)(a1 + 16);
          goto LABEL_19;
        }
      }
    }
LABEL_34:
    v30 = *(__int64 **)a1;
    if ( v9 != *(_QWORD *)a1 )
    {
      _BitScanReverse64(&v31, 0x6DB6DB6DB6DB6DB7LL * ((v9 - (__int64)v30) >> 3));
      sub_17398F0(*(_QWORD *)a1, (__int64 *)v9, 2LL * (int)(63 - (v31 ^ 0x3F)));
      if ( v9 - (__int64)v30 <= 896 )
      {
        sub_1739630(v30, (__int64 *)v9);
      }
      else
      {
        v32 = v30 + 112;
        sub_1739630(v30, v30 + 112);
        if ( (__int64 *)v9 != v30 + 112 )
        {
          do
          {
            v33 = v32;
            v32 += 7;
            sub_17393A0(v33);
          }
          while ( (__int64 *)v9 != v32 );
        }
      }
    }
    return a1;
  }
  v7 = v5 + 8;
  while ( 1 )
  {
    v5 = v7;
    if ( (_QWORD *)v6 == v7 )
      return a1;
    v8 = *v7;
    v7 += 8;
    if ( v8 != -8192 && v8 != -4096 )
      goto LABEL_10;
  }
}
