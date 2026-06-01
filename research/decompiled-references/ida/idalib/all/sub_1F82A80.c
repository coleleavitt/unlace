__int64 __fastcall sub_1F82A80(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  __int64 *v5; // rbp
  __int64 v6; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  _QWORD *v12; // rdx
  int v14; // esi
  int v15; // r10d
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rdx
  int v25; // esi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28[2]; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h] BYREF
  __m128 v30[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  v28[0] = a2;
  if ( a2 )
  {
    v3 = *(unsigned int *)(a1 + 3112);
    v5 = (__int64 *)(a1 + 3096);
    v6 = *(_QWORD *)(a1 + 3096);
    if ( (_DWORD)v3 )
    {
      v8 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v9 = (__int64 *)(v6 + 16LL * v8);
      v10 = *v9;
      if ( a2 == *v9 )
      {
LABEL_4:
        sub_1F78650(v30, v9, (_QWORD *)(16 * v3 + v6), (__int64)v5, 1);
        v11 = v30[0].m128_u64[0];
        goto LABEL_5;
      }
      v14 = 1;
      if ( v10 != -4096 )
      {
        do
        {
          v15 = v14 + 1;
          v8 = (v3 - 1) & (v14 + v8);
          v9 = (__int64 *)(v6 + 16LL * v8);
          v16 = *v9;
          if ( a2 == *v9 )
            goto LABEL_4;
          v14 = v15;
        }
        while ( v16 != -4096 );
      }
    }
    sub_1F78650(v30, (_QWORD *)(v6 + 16LL * (unsigned int)v3), (_QWORD *)(v6 + 16LL * (unsigned int)v3), (__int64)v5, 1);
    v11 = v30[0].m128_u64[0];
LABEL_5:
    v12 = (_QWORD *)(*(_QWORD *)(a1 + 3096) + 16LL * *(unsigned int *)(a1 + 3112));
    sub_1F78650(v30, v12, v12, (__int64)v5, 1);
    if ( v30[0].m128_u64[0] != v11 )
      return *(unsigned int *)(v11 + 8);
    v17 = sub_FEEE40(v28[0]);
    if ( *(_QWORD *)(a1 + 56) != v17 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL);
      if ( (*(_BYTE *)(v18 + 21) & 0x20) != 0 )
        return 0;
      v30[0] = *(__m128 *)(v18 + 488);
      if ( !sub_FEF1A0(v17, (__int64)v30, 1) )
        return 0;
    }
    v2 = *(_DWORD *)(a1 + 1084);
    *(_DWORD *)(a1 + 1084) = v2 + 1;
    v19 = (unsigned __int8)sub_1F72DF0(v5, v28, &v29) == 0;
    v21 = v29;
    if ( !v19 )
    {
LABEL_17:
      *(_DWORD *)(v21 + 8) = v2;
      return v2;
    }
    v22 = *(unsigned int *)(a1 + 3112);
    v23 = *(_DWORD *)(a1 + 3104);
    v30[0].m128_u64[0] = v29;
    v24 = (unsigned int)(v23 + 1);
    v25 = 2 * v22;
    v26 = (unsigned int)(4 * v24);
    if ( (unsigned int)v26 < 3 * (int)v22 )
    {
      if ( (int)v22 - *(_DWORD *)(a1 + 3108) - (int)v24 > (unsigned int)v22 >> 3 )
      {
LABEL_20:
        v19 = *(_QWORD *)v21 == -4096;
        *(_DWORD *)(a1 + 3104) = v24;
        if ( !v19 )
          --*(_DWORD *)(a1 + 3108);
        v27 = v28[0];
        *(_DWORD *)(v21 + 8) = 0;
        *(_QWORD *)v21 = v27;
        goto LABEL_17;
      }
      v25 = v22;
    }
    sub_1F82880(v5, v25, v24, v22, v26, v20);
    sub_1F72DF0(v5, v28, v30);
    LODWORD(v24) = *(_DWORD *)(a1 + 3104) + 1;
    v21 = v30[0].m128_u64[0];
    goto LABEL_20;
  }
  return v2;
}
