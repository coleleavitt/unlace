void __fastcall sub_209DB20(_QWORD *a1, __int64 **a2)
{
  __int64 *i; // rax
  _QWORD *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // r14
  int v8; // edx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  _QWORD *v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 *v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  _QWORD *v21; // rdi
  void (__fastcall *v22)(__int64, __int64 **, _QWORD); // r13
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+4h] [rbp-44h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  for ( i = a2[1]; ; a2[1] = i )
  {
    v5 = (_QWORD *)*(i - 1);
    if ( (*(int (__fastcall **)(_QWORD *))(*v5 + 40LL))(v5) <= 3 )
      break;
    v6 = a2[1];
    v7 = *(v6 - 1);
    v8 = *(_DWORD *)(v7 + 216);
    if ( !v8 )
    {
      if ( !*(_DWORD *)(v7 + 220) )
        goto LABEL_10;
      v9 = *(_QWORD **)(v7 + 208);
      v10 = *(unsigned int *)(v7 + 224);
      v11 = 2 * v10;
      if ( (unsigned int)v10 > 0x40 )
      {
        operator delete(v9, v11 * 8, 8);
        v6 = a2[1];
        *(_QWORD *)(v7 + 208) = 0;
        *(_QWORD *)(v7 + 216) = 0;
        *(_DWORD *)(v7 + 224) = 0;
        goto LABEL_10;
      }
      goto LABEL_6;
    }
    v13 = 4 * v8;
    v14 = *(unsigned int *)(v7 + 224);
    v9 = *(_QWORD **)(v7 + 208);
    if ( (unsigned int)(4 * v8) < 0x40 )
      v13 = 64;
    if ( (unsigned int)v14 <= v13 )
    {
      v11 = 2 * v14;
LABEL_6:
      v12 = &v9[v11];
      if ( v12 != v9 )
      {
        do
        {
          *v9 = -4096;
          v9 += 2;
        }
        while ( v12 != v9 );
        v6 = a2[1];
      }
      *(_QWORD *)(v7 + 216) = 0;
      goto LABEL_10;
    }
    v25 = v8 - 1;
    if ( v25 )
    {
      _BitScanReverse(&v25, v25);
      v26 = (unsigned int)(1 << (33 - (v25 ^ 0x1F)));
      if ( (int)v26 < 64 )
        v26 = 64;
      if ( (_DWORD)v26 == (_DWORD)v14 )
      {
        *(_QWORD *)(v7 + 216) = 0;
        v27 = &v9[2 * v26];
        do
        {
          *v9 = -4096;
          v9 += 2;
        }
        while ( v27 != v9 );
LABEL_33:
        v6 = a2[1];
        goto LABEL_10;
      }
      v35 = 4 * (int)v26 / 3u + 1;
      v36 = ((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1) | ((((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1)) >> 4);
      v37 = ((((v36 >> 8) | v36) >> 16) | (v36 >> 8) | v36) + 1;
      v38 = v37;
      v39 = 16 * v37;
    }
    else
    {
      v39 = 2048;
      v38 = 128;
    }
    operator delete(v9, 16 * v14, 8);
    *(_DWORD *)(v7 + 224) = v38;
    v32 = (_QWORD *)sub_22300B0(v39, 8, v28, v29, v30, v31);
    v33 = *(unsigned int *)(v7 + 224);
    *(_QWORD *)(v7 + 216) = 0;
    *(_QWORD *)(v7 + 208) = v32;
    v34 = &v32[2 * v33];
    if ( v32 == v34 )
      goto LABEL_33;
    do
    {
      *v32 = -4096;
      v32 += 2;
    }
    while ( v34 != v32 );
    v6 = a2[1];
LABEL_10:
    i = v6 - 1;
    *(_OWORD *)(v7 + 160) = 0;
    *(_OWORD *)(v7 + 176) = 0;
    *(_OWORD *)(v7 + 192) = 0;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v5 + 40LL))(v5) != 3 )
  {
    v15 = operator new(0x1A0u);
    *(_QWORD *)(v15 + 8) = 0;
    v16 = v15 + 32;
    *(_DWORD *)(v15 + 24) = 4;
    *(_QWORD *)(v15 + 16) = &unk_2CFD458;
    *(_QWORD *)(v15 + 264) = v15 + 280;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)v15 = &unk_2C726E0;
    *(_QWORD *)(v15 + 240) = 0;
    *(_QWORD *)(v15 + 248) = 0;
    *(_QWORD *)(v15 + 32) = &unk_2C72528;
    *(_QWORD *)(v15 + 48) = v15 + 64;
    *(_QWORD *)(v15 + 56) = 0x1000000000LL;
    *(_QWORD *)(v15 + 272) = 0x1000000000LL;
    *(_DWORD *)(v15 + 256) = 0;
    *(_DWORD *)(v15 + 408) = 0;
    sub_2096120(v15 + 240);
    *(_OWORD *)(v15 + 192) = 0;
    *(_OWORD *)(v15 + 208) = 0;
    *(_QWORD *)v15 = &off_2C72568;
    v17 = *a2;
    *(_QWORD *)(v15 + 32) = off_2C72610;
    v18 = a2[1];
    *(_OWORD *)(v15 + 224) = 0;
    if ( v18 != v17 )
    {
      *(_QWORD *)(v15 + 192) = *(v18 - 1) + 208;
      if ( v17 != v18 - 1 )
      {
        *(_QWORD *)(v15 + 200) = *(v18 - 2) + 208;
        if ( v17 != v18 - 2 )
        {
          *(_QWORD *)(v15 + 208) = *(v18 - 3) + 208;
          if ( v17 != v18 - 3 )
          {
            *(_QWORD *)(v15 + 216) = *(v18 - 4) + 208;
            if ( v17 != v18 - 4 )
            {
              *(_QWORD *)(v15 + 224) = *(v18 - 5) + 208;
              if ( v17 != v18 - 5 )
                *(_QWORD *)(v15 + 232) = *(v18 - 6) + 208;
            }
          }
        }
      }
    }
    v19 = v5[1];
    v20 = *(unsigned int *)(v19 + 120);
    if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(v19 + 124) )
    {
      sub_2237220(v19 + 112, v19 + 128, v20 + 1, 8);
      v20 = *(unsigned int *)(v19 + 120);
    }
    v21 = v5;
    *(_QWORD *)(*(_QWORD *)(v19 + 112) + 8 * v20) = v16;
    ++*(_DWORD *)(v19 + 120);
    v22 = *(void (__fastcall **)(__int64, __int64 **, _QWORD))(*(_QWORD *)v15 + 56LL);
    v23 = *v5;
    v5 = (_QWORD *)(v15 + 32);
    v24 = (*(__int64 (__fastcall **)(_QWORD *))(v23 + 40))(v21);
    v22(v15, a2, v24);
    sub_2096FC0(a2, v16);
  }
  sub_209D750((__int64)v5, a1, 1);
}
