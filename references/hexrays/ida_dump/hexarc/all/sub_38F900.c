__int64 __fastcall sub_38F900(
        __int64 a1,
        unsigned __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))
{
  int v8; // r12d
  __int64 v9; // rdx
  __int16 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  char v19; // dl
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 func; // rax
  __int16 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int16 v33; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v34[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a1 + 80);
  v34[1] = __readfsqword(0x28u);
  v33 = 0;
  if ( v8 == 3 )
  {
    func = get_func(a2);
    v10 = v33;
    v9 = *(_QWORD *)(a1 + 32);
    a7 = callui;
    if ( func )
    {
      v28 = v33 & 0xFFFE;
      if ( (*(_BYTE *)(func + 16) & 4) != 0 )
        v28 = v33 | 1;
      if ( *(_DWORD *)(func + 64) != *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL) )
      {
        v10 = v28 & 0xFFFD;
        v33 = v10;
        if ( v9 )
          goto LABEL_4;
        goto LABEL_26;
      }
      v10 = v28 | 2;
      v33 = v10;
    }
    if ( v9 )
      goto LABEL_4;
LABEL_26:
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, 1, &v33, &callui, callui);
    v32 = *(_QWORD *)(a1 + 32);
    if ( v32 )
    {
      *(_DWORD *)(v32 + 108) &= ~8u;
      if ( (*(_BYTE *)a1 & 2) == 0 )
        sub_38E190(a1, 0, a3, v29, v30, v31);
    }
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(a1 + 32);
  if ( !v9 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, 0, &v33, &callui, a7);
    v26 = *(_QWORD *)(a1 + 32);
    if ( v26 )
    {
      *(_DWORD *)(v26 + 108) &= ~8u;
      if ( (*(_BYTE *)a1 & 2) == 0 )
        sub_38E190(a1, 0, a3, v11, v24, v25);
    }
    goto LABEL_10;
  }
  v10 = 0;
LABEL_4:
  *(_DWORD *)(v9 + 108) |= 8u;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(185, a2, v8 == 3, &v33, &callui, a7);
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 )
  {
    *(_DWORD *)(v14 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
      sub_38E190(a1, 0, a3, v11, v12, v13);
  }
  if ( v8 == 3 )
  {
LABEL_8:
    if ( v33 != v10 )
    {
      v17 = get_func(a2);
      v18 = v17;
      if ( v17 )
      {
        v19 = v33;
        v20 = *(_QWORD *)(v17 + 16);
        v21 = v20 & 0xFFFFFFFFFFFFFFFBLL;
        v22 = v20 | 4;
        if ( (v33 & 1) != 0 )
          v21 = v22;
        *(_QWORD *)(v18 + 16) = v21;
        v23 = -1;
        if ( (v19 & 2) != 0 )
          v23 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL);
        *(_DWORD *)(v18 + 64) = v23;
        update_func(v18);
      }
    }
    v15 = *(_QWORD *)(a1 + 24);
    v34[0] = 0;
    sub_36EEA0(v15, v34);
    sub_25C3B0((__int64 *)(*(_QWORD *)(a1 + 24) + 408LL), a2, (__int64)v34, a3);
    clear_tinfo_t(v34);
  }
LABEL_10:
  sub_387D20(a1, 1u, v11);
  return 1;
}
