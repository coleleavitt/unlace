void __fastcall sub_209DFC0(_QWORD *a1, __int64 a2, int a3)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // edx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rsi
  unsigned int v18; // edx
  int v19; // eax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *i; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+4h] [rbp-44h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a2 + 8) - 8LL) + 40LL))(*(_QWORD *)(*(_QWORD *)(a2 + 8) - 8LL));
  if ( v6 != a3 )
  {
    while ( 1 )
    {
      if ( v6 <= 1 )
        goto LABEL_11;
      v7 = *(_QWORD *)(a2 + 8);
      v8 = *(_QWORD *)(v7 - 8);
      v9 = *(_DWORD *)(v8 + 216);
      if ( v9 )
        break;
      if ( *(_DWORD *)(v8 + 220) )
      {
        v10 = *(_QWORD **)(v8 + 208);
        v11 = *(unsigned int *)(v8 + 224);
        v12 = 2 * v11;
        if ( (unsigned int)v11 <= 0x40 )
          goto LABEL_6;
        operator delete(v10, v12 * 8, 8);
        *(_QWORD *)(v8 + 208) = 0;
        *(_QWORD *)(v8 + 216) = 0;
        *(_DWORD *)(v8 + 224) = 0;
        goto LABEL_17;
      }
LABEL_10:
      v14 = v7 - 8;
      v15 = *(_QWORD *)(v14 - 8);
      *(_OWORD *)(v8 + 160) = 0;
      *(_OWORD *)(v8 + 176) = 0;
      *(_OWORD *)(v8 + 192) = 0;
      *(_QWORD *)(a2 + 8) = v14;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 40LL))(v15);
      if ( v6 == a3 )
        goto LABEL_11;
    }
    v16 = 4 * v9;
    v17 = *(unsigned int *)(v8 + 224);
    v10 = *(_QWORD **)(v8 + 208);
    if ( (unsigned int)(4 * v9) < 0x40 )
      v16 = 64;
    if ( (unsigned int)v17 <= v16 )
    {
      v12 = 2 * v17;
LABEL_6:
      v13 = &v10[v12];
      if ( v13 != v10 )
      {
        do
        {
          *v10 = -4096;
          v10 += 2;
        }
        while ( v13 != v10 );
        v7 = *(_QWORD *)(a2 + 8);
      }
      *(_QWORD *)(v8 + 216) = 0;
      goto LABEL_10;
    }
    v18 = v9 - 1;
    if ( v18 )
    {
      _BitScanReverse(&v18, v18);
      v19 = 1 << (33 - (v18 ^ 0x1F));
      if ( v19 < 64 )
        v19 = 64;
      if ( (_DWORD)v17 == v19 )
      {
        *(_QWORD *)(v8 + 216) = 0;
        v20 = &v10[2 * v17];
        do
        {
          *v10 = -4096;
          v10 += 2;
        }
        while ( v20 != v10 );
LABEL_17:
        v7 = *(_QWORD *)(a2 + 8);
        goto LABEL_10;
      }
      v28 = (4 * v19 / 3u + 1) | ((unsigned __int64)(4 * v19 / 3u + 1) >> 1);
      v29 = ((((v28 >> 2) | v28 | (((v28 >> 2) | v28) >> 4)) >> 8)
           | (v28 >> 2)
           | v28
           | (((v28 >> 2) | v28) >> 4)
           | (((((v28 >> 2) | v28 | (((v28 >> 2) | v28) >> 4)) >> 8) | (v28 >> 2) | v28 | (((v28 >> 2) | v28) >> 4)) >> 16))
          + 1;
      v30 = v29;
      v31 = 16 * v29;
    }
    else
    {
      v31 = 2048;
      v30 = 128;
    }
    operator delete(v10, 16 * v17, 8);
    *(_DWORD *)(v8 + 224) = v30;
    v25 = (_QWORD *)sub_22300B0(v31, 8, v21, v22, v23, v24);
    v26 = *(unsigned int *)(v8 + 224);
    *(_QWORD *)(v8 + 216) = 0;
    *(_QWORD *)(v8 + 208) = v25;
    for ( i = &v25[2 * v26]; i != v25; v25 += 2 )
      *v25 = -4096;
    goto LABEL_17;
  }
LABEL_11:
  sub_209D750(*(_QWORD *)(*(_QWORD *)(a2 + 8) - 8LL), a1, 1);
}
