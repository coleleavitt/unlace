__int64 __fastcall sub_1F6B00(_QWORD *a1, int a2, int a3, __int64 *a4, int a5, __int64 a6, __int16 a7)
{
  int v7; // r10d
  int v9; // r12d
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rcx
  unsigned int v15; // r13d
  int v17; // eax
  signed int v18; // r14d
  char v19; // al
  unsigned int v20; // eax
  char v21; // al
  int v22; // r9d
  signed int v23; // eax
  signed int v24; // r13d
  _DWORD *v25; // rdi
  char v26; // al
  unsigned int v27; // r13d
  char v28; // al
  unsigned int v29; // r12d
  bool v30; // sf
  bool v31; // of
  char v32; // [rsp+4h] [rbp-C4h]
  int v33; // [rsp+8h] [rbp-C0h]
  int v34; // [rsp+8h] [rbp-C0h]
  int v35; // [rsp+8h] [rbp-C0h]
  unsigned int v36; // [rsp+Ch] [rbp-BCh]
  unsigned int v37; // [rsp+18h] [rbp-B0h] BYREF
  int v38; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v39[24]; // [rsp+20h] [rbp-A8h] BYREF
  int v40; // [rsp+38h] [rbp-90h]
  __int64 v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+58h] [rbp-70h]
  __int64 v44; // [rsp+60h] [rbp-68h]
  signed int v45; // [rsp+78h] [rbp-50h]
  int v46; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v7 = a5;
  v9 = a2;
  v38 = a2;
  v37 = a3;
  v47 = __readfsqword(0x28u);
  if ( a5 )
    goto LABEL_45;
  v18 = a3;
  v15 = sub_1EDBA0(a1, a2, a3);
  if ( v15 != -1 )
    return v15;
  v19 = sub_1C7A10((_DWORD *)a1[188], a2, v18, nullptr);
  v7 = 0;
  v32 = v19;
  if ( v19 )
  {
LABEL_45:
    if ( (a7 & 1) == 0 || (v32 = 0, a2 <= 7) )
    {
      sub_1EF690((__int64)v39, a1[188], a2, v37, a4, v7, a6);
      goto LABEL_21;
    }
    goto LABEL_4;
  }
  v20 = sub_1F01D0();
  v36 = v20;
  if ( v20 != a2
    || (v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[188] + 32LL))(a1[188], v20),
        v24 = v23,
        v18 >= v23) )
  {
LABEL_26:
    v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[188] + 184LL))(a1[188], (unsigned int)a2);
    v21 = sub_1C7A10((_DWORD *)a1[188], v34, v18 + a2 - v34, nullptr);
    v22 = v34;
    v7 = 0;
    if ( !v21 )
    {
      v27 = sub_1338F0((_DWORD *)a1[188], nullptr, v34, 0x7FFFFFFFu);
      v28 = sub_1C7A10((_DWORD *)a1[188], v34, v27, nullptr);
      v7 = 0;
      v32 = v28;
      if ( v28 )
      {
        v37 = v27;
        v29 = v27;
        v38 = v34;
        v15 = sub_1EDBA0(a1, v34, v27);
        if ( v15 != -1 )
          return v15;
        v31 = __OFSUB__(v29, v18);
        v30 = (int)(v29 - v18) < 0;
        v22 = v36;
        v9 = v34;
        v7 = 0;
        v32 = v30 ^ v31;
      }
      else
      {
        v22 = v36;
      }
    }
    if ( v22 != -1 && v9 != v22 )
    {
      v38 = v22;
      v37 += v9 - v22;
      v35 = v22;
      v15 = sub_1EDBA0(a1, v22, v37);
      if ( v15 != -1 )
        return v15;
      v9 = v35;
      v7 = 0;
    }
    if ( (a7 & 1) == 0 )
      goto LABEL_5;
    goto LABEL_30;
  }
  v25 = (_DWORD *)a1[188];
  v37 = v23;
  v26 = sub_1C7A10(v25, v36, v23, nullptr);
  v7 = 0;
  if ( !v26 )
  {
    v18 = v24;
    goto LABEL_26;
  }
  if ( (a7 & 1) == 0 )
  {
    sub_1EF690((__int64)v39, a1[188], v36, v37, a4, 0, a6);
LABEL_21:
    if ( (a7 & 2) != 0 )
      v40 |= 0x200u;
    goto LABEL_12;
  }
LABEL_30:
  if ( v9 > 7 )
  {
LABEL_4:
    v33 = v7;
    sub_1F0840(a1[188], &v38, (int *)&v37);
    v9 = v38;
    v7 = v33;
  }
LABEL_5:
  sub_1EF690((__int64)v39, a1[188], v9, v37, a4, v7, a6);
  if ( !v32 )
    goto LABEL_21;
  sub_1C7B80((__int64)v39, (_DWORD *)a1[188], a1 + 62, v45, 3);
  if ( (v40 & 0x24) != 0 )
    sub_FAAD0(a1 + 62);
  v14 = s1;
  if ( a1[63] )
    v14 = (const char *)a1[62];
  sub_3311F0((_DWORD)a1, -1, 34, (_DWORD)v14, v12, v13);
  v40 |= 0x400u;
  a1[63] = 0;
  if ( (a7 & 2) != 0 )
    v40 |= 0x200u;
LABEL_12:
  if ( v46 )
  {
    v17 = v40;
    BYTE1(v17) = BYTE1(v40) & 0x7E;
    v40 = v17 | 0x100000;
  }
  v15 = sub_1F6560((__int64)a1, (__int64)v39, (a7 & 0x200) != 0);
  clear_tinfo_t();
  if ( v43 )
  {
    v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    v42 = 0;
    qfree(v41);
  }
  cleanup_argloc();
  return v15;
}
