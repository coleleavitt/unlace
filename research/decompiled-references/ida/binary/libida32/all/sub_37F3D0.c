__int64 __fastcall sub_37F3D0(__int64 a1, _BYTE *a2, int a3)
{
  char v3; // al
  int v5; // eax
  int v6; // eax
  __int64 v7; // r12
  int v8; // r13d
  int v9; // r13d
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // r15d
  bool v20; // cl
  int v21; // eax
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(_QWORD *, char); // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 (__fastcall *v31)(_QWORD *, char); // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int16 v38; // ax
  __int64 func; // rax
  unsigned int spd; // eax
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  int v46; // [rsp+4h] [rbp-B4h]
  unsigned __int64 v47; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+10h] [rbp-A8h]
  __int64 v50; // [rsp+10h] [rbp-A8h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  __int64 v52; // [rsp+18h] [rbp-A0h]
  __int64 v53; // [rsp+28h] [rbp-90h] BYREF
  _BYTE s[72]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 200);
  if ( v3 )
  {
    if ( v3 != 1 )
      return v55 - __readfsqword(0x28u);
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL);
    if ( v5 == 8 )
    {
      if ( !a3 )
        return v55 - __readfsqword(0x28u);
    }
    else if ( v5 == 31 )
    {
      if ( !a3 || a3 > 1 )
        return v55 - __readfsqword(0x28u);
    }
    else if ( a3 >= 0 )
    {
      return v55 - __readfsqword(0x28u);
    }
    if ( !*a2 || *(_BYTE *)(tag_advance(a2, 1) - 1) == **(_BYTE **)(*(_QWORD *)(a1 + 480) + 48LL) )
      return v55 - __readfsqword(0x28u);
    v6 = *(_DWORD *)(a1 + 144);
    *(_BYTE *)(a1 + 200) = 1;
    *(_DWORD *)(a1 + 144) = v6 & 0xFFF3FFFF | 0x40000;
  }
  if ( (getinf(48) & 4) != 0 && *(_DWORD *)(a1 + 204) )
  {
    func = get_func(*(unsigned int *)(a1 + 16));
    if ( func )
    {
      spd = get_spd(func, *(unsigned int *)(a1 + 16));
      v41 = spd;
      v42 = -spd;
      v43 = 3;
      if ( *(char *)(*(_QWORD *)(a1 + 472) + 9LL) >= 0 )
        v41 = v42;
      if ( (int)v41 < 0 )
      {
        v46 = v41;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45, 3);
        v43 = 2;
        v41 = (unsigned int)-v46;
      }
      sub_359A50(a1, (__int64)&unk_22AF0F5, v43, v41);
    }
    if ( *(_DWORD *)(a1 + 204) == 4 )
    {
      v44 = *(_DWORD *)(a1 + 144);
      *(_BYTE *)(a1 + 200) = 2;
      *(_DWORD *)(a1 + 144) = v44 & 0xFFF3FFFF | 0x80000;
      return v55 - __readfsqword(0x28u);
    }
  }
  v7 = *(_QWORD *)(qword_2CA1698 + 1480);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 20);
  nbits(*(unsigned int *)(a1 + 16));
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 8LL);
  LOWORD(v11) = getinf(47);
  v9 = v8 & 0x100;
  v10 = *(unsigned int *)(a1 + 196);
  v11 = (__int16)v11;
  if ( v9 )
    v11 = 2 * (__int16)v11;
  v12 = v10 + v11;
  if ( v11 >= ~(_DWORD)v10 )
    v12 = -1;
  v13 = *(_DWORD *)(a1 + 524);
  v14 = v13;
  if ( v12 <= v13 )
    v14 = v12;
  if ( v13 != -1 )
    v12 = v14;
  if ( (unsigned int)v10 >= v12 )
    goto LABEL_38;
  while ( 1 )
  {
    while ( 1 )
    {
      v19 = sub_3B9AA0(v7, v10, 1);
      v20 = sub_37F350(a1, v19);
      v21 = *(_DWORD *)(a1 + 144);
      if ( v20 )
      {
        *(_BYTE *)(a1 + 200) = 2;
        *(_DWORD *)(a1 + 144) = v21 & 0xFFF3FFFF | 0x80000;
        return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)a1 + 72LL))(a1, 20, v14);
      }
      if ( (v21 & 0x200000) == 0 )
        break;
LABEL_26:
      v10 = (unsigned int)(*(_DWORD *)(a1 + 196) + 1);
      *(_DWORD *)(a1 + 196) = v10;
      if ( (unsigned int)v10 >= v12 )
        goto LABEL_38;
    }
    if ( !v9 )
    {
      if ( (v19 & 0x100) != 0 )
      {
        sub_3BA160(v7, &v53, *(unsigned int *)(a1 + 196));
        b2a64(s);
        (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s, 0);
        v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v15 != sub_3598B0 )
        {
LABEL_58:
          v15((_QWORD *)a1, 32);
          goto LABEL_26;
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 63, *(unsigned int *)(a1 + 208));
        v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v15 != sub_3598B0 )
          goto LABEL_58;
      }
      v16 = *(_QWORD *)(a1 + 32);
      if ( v16 )
      {
        v14 = v16 + 1;
        v17 = *(_QWORD *)(a1 + 32);
        v18 = *(_QWORD *)(a1 + 24);
        --v16;
        if ( *(_QWORD *)(a1 + 40) >= v14 )
        {
LABEL_25:
          *(_QWORD *)(a1 + 32) = v14;
          *(_BYTE *)(v18 + v16) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v17) = 0;
          goto LABEL_26;
        }
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 24);
        v17 = 1;
        v14 = 2;
        if ( *(_QWORD *)(a1 + 40) >= 2u )
          goto LABEL_25;
      }
      v51 = v17;
      v49 = v16;
      v47 = v14;
      v36 = qvector_reserve(a1 + 24, v18, v14, 1);
      v17 = v51;
      v16 = v49;
      *(_QWORD *)(a1 + 24) = v36;
      v14 = v47;
      v18 = v36;
      goto LABEL_25;
    }
    if ( (v19 & 0x100) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 63, *(unsigned int *)(a1 + 208));
      v22 = (unsigned int)(*(_DWORD *)(a1 + 196) + 1);
      if ( (_DWORD)v22 == v12 || (sub_3B9AA0(v7, v22, 4) & 0x600) != 0x200 )
        goto LABEL_46;
LABEL_33:
      v23 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v23 != sub_3598B0 )
        goto LABEL_62;
      goto LABEL_34;
    }
    v29 = *(unsigned int *)(a1 + 196);
    v30 = (unsigned int)(v29 + 1);
    if ( (_DWORD)v30 == v12 )
      goto LABEL_45;
    v38 = sub_3B9AA0(v7, v30, 1);
    if ( (v38 & 0x600) != 0x200 )
      break;
    if ( (v38 & 0x100) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 63, *(unsigned int *)(a1 + 208));
      goto LABEL_33;
    }
    sub_3BA340(v7, *(unsigned int *)(a1 + 196));
    b2a64(s);
    (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s, 0);
    v23 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v23 != sub_3598B0 )
    {
LABEL_62:
      v23((_QWORD *)a1, 32);
      goto LABEL_37;
    }
LABEL_34:
    v24 = *(_QWORD *)(a1 + 32);
    if ( v24 )
    {
      v14 = v24 + 1;
      v25 = *(_QWORD *)(a1 + 32);
      v26 = *(_QWORD *)(a1 + 24);
      --v24;
      if ( *(_QWORD *)(a1 + 40) < v14 )
        goto LABEL_56;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 24);
      v25 = 1;
      v14 = 2;
      if ( *(_QWORD *)(a1 + 40) < 2u )
      {
LABEL_56:
        v52 = v25;
        v50 = v24;
        v48 = v14;
        v37 = qvector_reserve(a1 + 24, v26, v14, 1);
        v25 = v52;
        v24 = v50;
        *(_QWORD *)(a1 + 24) = v37;
        v14 = v48;
        v26 = v37;
      }
    }
    *(_QWORD *)(a1 + 32) = v14;
    *(_BYTE *)(v26 + v24) = 32;
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v25) = 0;
LABEL_37:
    v10 = (unsigned int)(*(_DWORD *)(a1 + 196) + 2);
    *(_DWORD *)(a1 + 196) = v10;
    if ( (unsigned int)v10 >= v12 )
      goto LABEL_38;
  }
  v29 = *(unsigned int *)(a1 + 196);
LABEL_45:
  sub_3BA160(v7, &v53, v29);
  b2a64(s);
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s, 0);
LABEL_46:
  v14 = (unsigned __int64)sub_3598B0;
  v31 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
  if ( v31 == sub_3598B0 )
  {
    v32 = *(_QWORD *)(a1 + 32);
    if ( v32 )
    {
      v33 = v32 + 1;
      v34 = *(_QWORD *)(a1 + 32);
      --v32;
    }
    else
    {
      v34 = 1;
      v33 = 2;
    }
    v35 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < v33 )
    {
      v45 = qvector_reserve(a1 + 24, v35, v33, 1);
      *(_QWORD *)(a1 + 24) = v45;
      v35 = v45;
    }
    *(_QWORD *)(a1 + 32) = v33;
    *(_BYTE *)(v35 + v32) = 32;
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v34) = 0;
  }
  else
  {
    v31((_QWORD *)a1, 32);
  }
  ++*(_DWORD *)(a1 + 196);
LABEL_38:
  if ( *(_BYTE *)(a1 + 200) != 2 )
  {
    v27 = *(unsigned int *)(a1 + 196);
    if ( (_DWORD)v27 != *(_DWORD *)(a1 + 16) && ((_DWORD)v27 == -1 || (sub_3B9AA0(v7, v27, 4) & 0x600) != 0x200) )
    {
      v28 = *(_DWORD *)(a1 + 144);
      *(_BYTE *)(a1 + 200) = 2;
      *(_DWORD *)(a1 + 144) = v28 & 0xFFF3FFFF | 0x80000;
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(*(_QWORD *)a1 + 72LL))(a1, 20, v14);
}

