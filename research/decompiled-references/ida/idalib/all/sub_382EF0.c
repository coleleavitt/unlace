__int64 __fastcall sub_382EF0(__int64 a1, _BYTE *a2, int a3)
{
  char v3; // al
  int v5; // eax
  int v6; // eax
  __int64 func; // rax
  __int64 spd; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // r12
  int v12; // r13d
  unsigned __int64 v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // rdx
  bool v16; // cf
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(_QWORD *, char); // rdx
  __int64 (__fastcall *v19)(_QWORD *, char); // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  int v23; // r15d
  bool v24; // cl
  int v25; // eax
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(_QWORD *, char); // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 (__fastcall *v35)(_QWORD *, char); // rax
  __int64 v36; // rbp
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int16 v42; // ax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // [rsp+0h] [rbp-B8h]
  __int64 (__fastcall *v46)(_QWORD *, char); // [rsp+8h] [rbp-B0h]
  __int64 (__fastcall *v47)(_QWORD *, char); // [rsp+8h] [rbp-B0h]
  __int64 v48; // [rsp+10h] [rbp-A8h]
  __int64 v49; // [rsp+10h] [rbp-A8h]
  __int64 v50; // [rsp+18h] [rbp-A0h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  __int64 v52; // [rsp+28h] [rbp-90h] BYREF
  _BYTE s[72]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v3 = *(_BYTE *)(a1 + 208);
  if ( v3 )
  {
    if ( v3 != 1 )
      return v54 - __readfsqword(0x28u);
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 624) + 4LL);
    if ( v5 == 8 )
    {
      if ( !a3 )
        return v54 - __readfsqword(0x28u);
    }
    else if ( v5 == 31 )
    {
      if ( !a3 || a3 > 1 )
        return v54 - __readfsqword(0x28u);
    }
    else if ( a3 >= 0 )
    {
      return v54 - __readfsqword(0x28u);
    }
    if ( !*a2 || *(_BYTE *)(tag_advance(a2, 1) - 1) == **(_BYTE **)(*(_QWORD *)(a1 + 632) + 48LL) )
      return v54 - __readfsqword(0x28u);
    v6 = *(_DWORD *)(a1 + 144);
    *(_BYTE *)(a1 + 208) = 1;
    *(_DWORD *)(a1 + 144) = v6 & 0xFFF3FFFF | 0x40000;
  }
  if ( (getinf(48) & 4) != 0 && *(_DWORD *)(a1 + 212) )
  {
    func = get_func(*(_QWORD *)(a1 + 16));
    if ( func )
    {
      spd = get_spd(func, *(_QWORD *)(a1 + 16));
      v9 = 3;
      if ( *(char *)(*(_QWORD *)(a1 + 624) + 9LL) >= 0 )
        spd = -spd;
      if ( spd < 0 )
      {
        v45 = spd;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45, 3);
        v9 = 2;
        spd = -v45;
      }
      sub_35CD40(a1, (__int64)&unk_22D20F5, v9, spd);
    }
    if ( *(_DWORD *)(a1 + 212) == 4 )
    {
      v43 = *(_DWORD *)(a1 + 144);
      *(_BYTE *)(a1 + 208) = 2;
      *(_DWORD *)(a1 + 144) = v43 & 0xFFF3FFFF | 0x80000;
      return v54 - __readfsqword(0x28u);
    }
  }
  v10 = 0x100000000LL;
  v11 = *(_QWORD *)(qword_2CCB598 + 1672);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 20);
  nbits(*(_QWORD *)(a1 + 16));
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 624) + 8LL) & 0x100;
  if ( *(_DWORD *)(*(_QWORD *)(v11 + 24) + 24LL) == 8 )
    v10 = -1;
  LOWORD(v14) = getinf(47);
  v13 = *(_QWORD *)(a1 + 200);
  v14 = (__int16)v14;
  if ( v12 )
    v14 = 2 * (__int16)v14;
  v15 = v14 + v13;
  v16 = v14 < v10 - v13;
  v17 = *(_QWORD *)(a1 + 712);
  if ( v16 )
    v10 = v15;
  v18 = *(__int64 (__fastcall **)(_QWORD *, char))(a1 + 712);
  if ( v10 <= v17 )
    v18 = (__int64 (__fastcall *)(_QWORD *, char))v10;
  if ( v17 != -1 )
    v10 = (unsigned __int64)v18;
  if ( v13 >= v10 )
    goto LABEL_48;
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = sub_3BE900(v11, v13, 1);
      v24 = sub_382E60(a1, v23);
      v25 = *(_DWORD *)(a1 + 144);
      if ( v24 )
      {
        *(_BYTE *)(a1 + 208) = 2;
        *(_DWORD *)(a1 + 144) = v25 & 0xFFF3FFFF | 0x80000;
        return (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(_QWORD *, char)))(*(_QWORD *)a1 + 72LL))(
                 a1,
                 20,
                 v18);
      }
      if ( (v25 & 0x200000) == 0 )
        break;
LABEL_36:
      v13 = *(_QWORD *)(a1 + 200) + 1LL;
      *(_QWORD *)(a1 + 200) = v13;
      if ( v13 >= v10 )
        goto LABEL_48;
    }
    if ( !v12 )
    {
      if ( (v23 & 0x100) != 0 )
      {
        sub_3BEFF0(v11, &v52, *(_QWORD *)(a1 + 200));
        b2a64(s);
        (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s, 0);
        v19 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v19 != sub_35CB90 )
        {
LABEL_70:
          v19((_QWORD *)a1, 32);
          goto LABEL_36;
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 63, *(unsigned int *)(a1 + 216));
        v19 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
        if ( v19 != sub_35CB90 )
          goto LABEL_70;
      }
      v20 = *(_QWORD *)(a1 + 32);
      if ( v20 )
      {
        v18 = (__int64 (__fastcall *)(_QWORD *, char))(v20 + 1);
        v21 = *(_QWORD *)(a1 + 32);
        v22 = *(_QWORD *)(a1 + 24);
        --v20;
        if ( *(_QWORD *)(a1 + 40) >= (unsigned __int64)v18 )
        {
LABEL_35:
          *(_QWORD *)(a1 + 32) = v18;
          *(_BYTE *)(v22 + v20) = 32;
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v21) = 0;
          goto LABEL_36;
        }
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 24);
        v21 = 1;
        v18 = (__int64 (__fastcall *)(_QWORD *, char))(&dword_0 + 2);
        if ( *(_QWORD *)(a1 + 40) >= 2u )
          goto LABEL_35;
      }
      v50 = v21;
      v48 = v20;
      v46 = v18;
      v40 = qvector_reserve(a1 + 24, v22, v18, 1);
      v21 = v50;
      v20 = v48;
      *(_QWORD *)(a1 + 24) = v40;
      v18 = v46;
      v22 = v40;
      goto LABEL_35;
    }
    if ( (v23 & 0x100) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 63, *(unsigned int *)(a1 + 216));
      v26 = *(_QWORD *)(a1 + 200) + 1LL;
      if ( v26 == v10 || (sub_3BE900(v11, v26, 4) & 0x600) != 0x200 )
        goto LABEL_58;
LABEL_43:
      v27 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v27 != sub_35CB90 )
        goto LABEL_74;
      goto LABEL_44;
    }
    v34 = *(_QWORD *)(a1 + 200);
    if ( v34 + 1 == v10 )
      goto LABEL_57;
    v42 = sub_3BE900(v11, v34 + 1, 1);
    if ( (v42 & 0x600) != 0x200 )
      break;
    if ( (v42 & 0x100) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, 63, *(unsigned int *)(a1 + 216));
      goto LABEL_43;
    }
    sub_3BF1D0(v11, *(_QWORD *)(a1 + 200));
    b2a64(s);
    (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s, 0);
    v27 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v27 != sub_35CB90 )
    {
LABEL_74:
      v27((_QWORD *)a1, 32);
      goto LABEL_47;
    }
LABEL_44:
    v28 = *(_QWORD *)(a1 + 32);
    if ( v28 )
    {
      v18 = (__int64 (__fastcall *)(_QWORD *, char))(v28 + 1);
      v29 = *(_QWORD *)(a1 + 32);
      v30 = *(_QWORD *)(a1 + 24);
      --v28;
      if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v18 )
        goto LABEL_68;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 24);
      v29 = 1;
      v18 = (__int64 (__fastcall *)(_QWORD *, char))(&dword_0 + 2);
      if ( *(_QWORD *)(a1 + 40) < 2u )
      {
LABEL_68:
        v51 = v29;
        v49 = v28;
        v47 = v18;
        v41 = qvector_reserve(a1 + 24, v30, v18, 1);
        v29 = v51;
        v28 = v49;
        *(_QWORD *)(a1 + 24) = v41;
        v18 = v47;
        v30 = v41;
      }
    }
    *(_QWORD *)(a1 + 32) = v18;
    *(_BYTE *)(v30 + v28) = 32;
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v29) = 0;
LABEL_47:
    v13 = *(_QWORD *)(a1 + 200) + 2LL;
    *(_QWORD *)(a1 + 200) = v13;
    if ( v13 >= v10 )
      goto LABEL_48;
  }
  v34 = *(_QWORD *)(a1 + 200);
LABEL_57:
  sub_3BEFF0(v11, &v52, v34);
  b2a64(s);
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, s, 0);
LABEL_58:
  v18 = sub_35CB90;
  v35 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
  if ( v35 == sub_35CB90 )
  {
    v36 = *(_QWORD *)(a1 + 32);
    if ( v36 )
    {
      v37 = v36 + 1;
      v38 = *(_QWORD *)(a1 + 32);
      --v36;
    }
    else
    {
      v38 = 1;
      v37 = 2;
    }
    v39 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < v37 )
    {
      v44 = qvector_reserve(a1 + 24, v39, v37, 1);
      *(_QWORD *)(a1 + 24) = v44;
      v39 = v44;
    }
    *(_QWORD *)(a1 + 32) = v37;
    *(_BYTE *)(v39 + v36) = 32;
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v38) = 0;
  }
  else
  {
    v35((_QWORD *)a1, 32);
  }
  ++*(_QWORD *)(a1 + 200);
LABEL_48:
  if ( *(_BYTE *)(a1 + 208) != 2 )
  {
    v31 = *(_QWORD *)(a1 + 200);
    if ( v31 != *(_QWORD *)(a1 + 16) )
    {
      v32 = 0x100000000LL;
      v18 = *(__int64 (__fastcall **)(_QWORD *, char))(v11 + 24);
      if ( *((_DWORD *)v18 + 6) == 8 )
        v32 = -1;
      if ( v31 == v32 || (sub_3BE900(v11, v31, 4) & 0x600) != 0x200 )
      {
        v33 = *(_DWORD *)(a1 + 144);
        *(_BYTE *)(a1 + 208) = 2;
        *(_DWORD *)(a1 + 144) = v33 & 0xFFF3FFFF | 0x80000;
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(_QWORD *, char)))(*(_QWORD *)a1 + 72LL))(
           a1,
           20,
           v18);
}
