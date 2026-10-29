__int64 __fastcall sub_1F141B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  int v5; // eax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64); // rax
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 (__fastcall *v18)(__int64, __int64, unsigned __int64, __int64, __int64, __int64); // rax
  int v19; // edx
  unsigned __int64 v20; // rdx
  unsigned int v22; // edx
  __int64 v23; // rsi
  _DWORD *i; // rsi
  __int64 v25; // rdi
  unsigned int v26; // eax
  int v27; // eax
  _DWORD *v28; // rax
  __int64 v29; // r13
  int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rax
  __int64 v36; // rdx
  _DWORD *j; // rdx
  unsigned int v38; // edx
  unsigned __int64 v39; // rax
  _QWORD *v40[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 9296);
  v5 = *(_DWORD *)(v4 + 8);
  if ( !v5 )
  {
    if ( !*(_DWORD *)(v4 + 12) )
      goto LABEL_5;
    v6 = *(_DWORD **)v4;
    v7 = *(unsigned int *)(v4 + 16);
    v8 = 4 * v7;
    if ( (unsigned int)v7 > 0x40 )
    {
      operator delete(v6, v8 * 4, 8);
      *(_QWORD *)v4 = 0;
      *(_QWORD *)(v4 + 8) = 0;
      *(_DWORD *)(v4 + 16) = 0;
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  v22 = 4 * v5;
  v23 = *(unsigned int *)(v4 + 16);
  v6 = *(_DWORD **)v4;
  if ( (unsigned int)(4 * v5) < 0x40 )
    v22 = 64;
  if ( (unsigned int)v23 <= v22 )
  {
    v8 = 4 * v23;
LABEL_18:
    for ( i = &v6[v8]; i != v6; v6 += 4 )
      *v6 = -1;
    *(_QWORD *)(v4 + 8) = 0;
    goto LABEL_5;
  }
  v26 = v5 - 1;
  if ( v26 )
  {
    _BitScanReverse(&v26, v26);
    v27 = 1 << (33 - (v26 ^ 0x1F));
    if ( v27 < 64 )
      v27 = 64;
    if ( (_DWORD)v23 == v27 )
    {
      *(_QWORD *)(v4 + 8) = 0;
      v28 = &v6[4 * v23];
      do
      {
        *v6 = -1;
        v6 += 4;
      }
      while ( v28 != v6 );
      goto LABEL_5;
    }
    v38 = 4 * v27 / 3u;
    v39 = (((((v38 + 1) | ((unsigned __int64)(v38 + 1) >> 1)) >> 2)
          | (v38 + 1)
          | ((unsigned __int64)(v38 + 1) >> 1)
          | (((((v38 + 1) | ((unsigned __int64)(v38 + 1) >> 1)) >> 2) | (v38 + 1) | ((unsigned __int64)(v38 + 1) >> 1)) >> 4)) >> 8)
        | (((v38 + 1) | ((unsigned __int64)(v38 + 1) >> 1)) >> 2)
        | (v38 + 1)
        | ((unsigned __int64)(v38 + 1) >> 1)
        | (((((v38 + 1) | ((unsigned __int64)(v38 + 1) >> 1)) >> 2) | (v38 + 1) | ((unsigned __int64)(v38 + 1) >> 1)) >> 4);
    v30 = (v39 | (v39 >> 16)) + 1;
    v29 = 16 * ((v39 | (v39 >> 16)) + 1);
  }
  else
  {
    v29 = 2048;
    v30 = 128;
  }
  operator delete(v6, 16 * v23, 8);
  *(_DWORD *)(v4 + 16) = v30;
  v35 = (_DWORD *)sub_22300B0(v29, 8, v31, v32, v33, v34);
  v36 = *(unsigned int *)(v4 + 16);
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = v35;
  for ( j = &v35[4 * v36]; j != v35; v35 += 4 )
    *v35 = -1;
LABEL_5:
  v9 = sub_1F1F8D0(a1, a2);
  sub_1EAF7C0((__int64 *)v40, v9 + 2704, v10);
  if ( v40[0] )
  {
    sub_1EBF0A0(a1, v40);
    if ( v40[0] )
      (*(void (__fastcall **)(_QWORD *))(*v40[0] + 8LL))(v40[0]);
    return 0;
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 184LL);
    if ( v11 == sub_1EA8950 )
    {
      v12 = *(_DWORD *)(a1 + 9408);
      *(_DWORD *)(a1 + 9408) = v12 + 1;
      if ( !v12 )
      {
        v25 = *(_QWORD *)(a1 + 496);
        if ( v25 )
          sub_224E010(v25);
      }
    }
    else
    {
      v11(a1 + 24);
    }
    v13 = v9;
    v15 = sub_1F645A0(a1, v9);
    v18 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)(a1 + 24)
                                                                                                  + 192LL);
    if ( v18 == sub_1F14160 )
    {
      v19 = *(_DWORD *)(a1 + 9408);
      if ( v19 == 1 )
      {
        sub_1F10680((std::_V2 *)a1);
        v19 = *(_DWORD *)(a1 + 9408);
      }
      v20 = (unsigned int)(v19 - 1);
      *(_DWORD *)(a1 + 9408) = v20;
      if ( !(_DWORD)v20 )
        sub_1ED6E50(a1, v13, v20, v14, v16, v17);
      return v15;
    }
    else
    {
      ((void (__fastcall *)(__int64))v18)(a1 + 24);
      return v15;
    }
  }
}
