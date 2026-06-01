void __fastcall sub_2037330(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rcx
  __int64 v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r10
  bool v14; // zf
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  int v17; // edx
  __int64 v18; // r13
  __int64 v19; // r14
  _BYTE *i; // rax
  unsigned __int8 *v21; // rsi
  int v22; // r11d
  unsigned __int64 v23; // rbp
  int v24; // edx
  __int64 *v25; // [rsp+0h] [rbp-50h]
  _BYTE *v26; // [rsp+8h] [rbp-48h] BYREF
  int v27; // [rsp+10h] [rbp-40h]
  __m128 v28[3]; // [rsp+18h] [rbp-38h] BYREF

  if ( *a2 == 7 )
    return;
  v5 = (__int64 *)(a1 + 168);
  v8 = *(unsigned int *)(a1 + 192);
  v9 = *(_DWORD *)(a1 + 184);
  v26 = a2;
  v27 = v8;
  if ( !v9 )
  {
    v28[0].m128_u64[0] = 0;
LABEL_8:
    v25 = v5;
    sub_2037130(v5, 2 * v9, a3, (__int64)v5, a5, v8);
LABEL_9:
    sub_2033760(v25, (__int64 *)&v26, v28);
    v13 = (__int64)v26;
    LODWORD(v8) = v27;
    a5 = *(_QWORD *)(a1 + 168);
    v11 = v28[0].m128_u64[0];
    v5 = v25;
    LODWORD(a3) = *(_DWORD *)(a1 + 176) + 1;
    goto LABEL_10;
  }
  a5 = *(_QWORD *)(a1 + 168);
  v10 = (v9 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = a5 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( a2 == *(_BYTE **)v11 )
  {
LABEL_4:
    sub_2033610(v28, (_QWORD *)v11, (_QWORD *)(a5 + 16LL * v9), (__int64)v5, 1);
    return;
  }
  v22 = 1;
  v23 = 0;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( v12 == -8192 && !v23 )
        v23 = v11;
      v10 = (v9 - 1) & (v22 + v10);
      v11 = a5 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( a2 == *(_BYTE **)v11 )
        goto LABEL_4;
      if ( v12 == -4096 )
      {
        if ( v23 )
          v11 = v23;
        break;
      }
      ++v22;
    }
  }
  v24 = *(_DWORD *)(a1 + 176);
  v28[0].m128_u64[0] = v11;
  a3 = (unsigned int)(v24 + 1);
  if ( 4 * (int)a3 >= 3 * v9 )
    goto LABEL_8;
  v13 = (__int64)a2;
  if ( v9 - *(_DWORD *)(a1 + 180) - (unsigned int)a3 <= v9 >> 3 )
  {
    v25 = v5;
    sub_2037130(v5, v9, a3, (__int64)v5, a5, v8);
    goto LABEL_9;
  }
LABEL_10:
  v14 = *(_QWORD *)v11 == -4096;
  *(_DWORD *)(a1 + 176) = a3;
  if ( !v14 )
    --*(_DWORD *)(a1 + 180);
  *(_DWORD *)(v11 + 8) = v8;
  v15 = *(unsigned int *)(a1 + 184);
  *(_QWORD *)v11 = v13;
  sub_2033610(v28, (_QWORD *)v11, (_QWORD *)(a5 + 16 * v15), (__int64)v5, 1);
  ++*(_DWORD *)(a1 + 192);
  v16 = *(a2 - 16);
  if ( (v16 & 2) != 0 )
    v17 = *((_DWORD *)a2 - 6);
  else
    v17 = (*((_WORD *)a2 - 8) >> 6) & 0xF;
  if ( v17 )
  {
    v18 = 0;
    v19 = 8LL * (unsigned int)(v17 - 1);
    if ( (v16 & 2) == 0 )
      goto LABEL_22;
LABEL_16:
    for ( i = *((_BYTE **)a2 - 4); ; i = &a2[-16 - 8LL * ((v16 >> 2) & 0xF)] )
    {
      v21 = *(unsigned __int8 **)&i[v18];
      if ( v21 )
      {
        if ( (unsigned int)*v21 - 5 <= 0x20 )
          sub_2037330(a1);
      }
      if ( v19 == v18 )
        break;
      v16 = *(a2 - 16);
      v18 += 8;
      if ( (v16 & 2) != 0 )
        goto LABEL_16;
LABEL_22:
      ;
    }
  }
}
