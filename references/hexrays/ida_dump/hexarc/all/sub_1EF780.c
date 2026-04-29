__int64 __fastcall sub_1EF780(_QWORD *a1, int a2, int a3, __int64 *a4, int a5, __int64 a6, __int16 a7)
{
  int v7; // r10d
  int v9; // r12d
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rdx
  const char *v15; // rcx
  unsigned int v16; // r13d
  int v18; // eax
  signed int v19; // r14d
  char v20; // al
  unsigned int v21; // eax
  char v22; // al
  int v23; // r9d
  signed int v24; // eax
  signed int v25; // r13d
  _DWORD *v26; // rdi
  char v27; // al
  signed int v28; // r13d
  char v29; // al
  signed int v30; // r12d
  bool v31; // sf
  bool v32; // of
  char v33; // [rsp+4h] [rbp-C4h]
  int v34; // [rsp+8h] [rbp-C0h]
  int v35; // [rsp+8h] [rbp-C0h]
  int v36; // [rsp+8h] [rbp-C0h]
  unsigned int v37; // [rsp+Ch] [rbp-BCh]
  unsigned int v38; // [rsp+18h] [rbp-B0h] BYREF
  int v39; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v40[24]; // [rsp+20h] [rbp-A8h] BYREF
  int v41; // [rsp+38h] [rbp-90h]
  const char *v42; // [rsp+40h] [rbp-88h]
  __int64 v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  __int64 v45; // [rsp+60h] [rbp-68h]
  _BYTE v46[8]; // [rsp+70h] [rbp-58h] BYREF
  signed int v47; // [rsp+78h] [rbp-50h]
  int v48; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v7 = a5;
  v9 = a2;
  v39 = a2;
  v38 = a3;
  v49 = __readfsqword(0x28u);
  if ( a5 )
    goto LABEL_47;
  v19 = a3;
  v16 = sub_1E6820(a1, a2, a3);
  if ( v16 != -1 )
    return v16;
  v20 = sub_1C1090((_DWORD *)a1[188], a2, v19, nullptr);
  v7 = 0;
  v33 = v20;
  if ( v20 )
  {
LABEL_47:
    if ( (a7 & 1) == 0 || (v33 = 0, a2 <= 7) )
    {
      sub_1E8310((__int64)v40, a1[188], a2, v38, a4, v7, a6);
      goto LABEL_23;
    }
    goto LABEL_4;
  }
  v21 = sub_1E8E50((int *)a1[188], a2);
  v37 = v21;
  if ( v21 != a2
    || (v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[188] + 32LL))(a1[188], v21),
        v25 = v24,
        v19 >= v24) )
  {
LABEL_28:
    v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[188] + 184LL))(a1[188], (unsigned int)a2);
    v22 = sub_1C1090((_DWORD *)a1[188], v35, v19 + a2 - v35, nullptr);
    v23 = v35;
    v7 = 0;
    if ( !v22 )
    {
      v28 = sub_12D230((_DWORD *)a1[188], nullptr, v35, 0x7FFFFFFFu);
      v29 = sub_1C1090((_DWORD *)a1[188], v35, v28, nullptr);
      v7 = 0;
      v33 = v29;
      if ( v29 )
      {
        v38 = v28;
        v30 = v28;
        v39 = v35;
        v16 = sub_1E6820(a1, v35, v28);
        if ( v16 != -1 )
          return v16;
        v32 = __OFSUB__(v30, v19);
        v31 = v30 - v19 < 0;
        v23 = v37;
        v9 = v35;
        v7 = 0;
        v33 = v31 ^ v32;
      }
      else
      {
        v23 = v37;
      }
    }
    if ( v23 != -1 && v9 != v23 )
    {
      v39 = v23;
      v38 += v9 - v23;
      v36 = v23;
      v16 = sub_1E6820(a1, v23, v38);
      if ( v16 != -1 )
        return v16;
      v9 = v36;
      v7 = 0;
    }
    if ( (a7 & 1) == 0 )
      goto LABEL_5;
    goto LABEL_32;
  }
  v26 = (_DWORD *)a1[188];
  v38 = v24;
  v27 = sub_1C1090(v26, v37, v24, nullptr);
  v7 = 0;
  if ( !v27 )
  {
    v19 = v25;
    goto LABEL_28;
  }
  if ( (a7 & 1) == 0 )
  {
    sub_1E8310((__int64)v40, a1[188], v37, v38, a4, 0, a6);
LABEL_23:
    if ( (a7 & 2) != 0 )
      v41 |= 0x200u;
    goto LABEL_14;
  }
LABEL_32:
  if ( v9 > 7 )
  {
LABEL_4:
    v34 = v7;
    sub_1E94C0(a1[188], &v39, (int *)&v38);
    v9 = v39;
    v7 = v34;
  }
LABEL_5:
  sub_1E8310((__int64)v40, a1[188], v9, v38, a4, v7, a6);
  if ( !v33 )
    goto LABEL_23;
  sub_1C1200((__int64)v40, (_DWORD *)a1[188], a1 + 62, v47, 3);
  if ( (v41 & 0x24) != 0 )
  {
    v14 = s1;
    if ( v43 )
      v14 = v42;
    sub_F4410(a1 + 62, (__int64)"(%s)", v14);
  }
  v15 = s1;
  if ( a1[63] )
    v15 = (const char *)a1[62];
  sub_329B90((_DWORD)a1, -1, 34, (_DWORD)v15, v12, v13);
  v41 |= 0x400u;
  a1[63] = 0;
  if ( (a7 & 2) != 0 )
    v41 |= 0x200u;
LABEL_14:
  if ( v48 )
  {
    v18 = v41;
    BYTE1(v18) = BYTE1(v41) & 0x7E;
    v41 = v18 | 0x100000;
  }
  v16 = sub_1EF1E0((__int64)a1, (__int64)v40, (a7 & 0x200) != 0);
  clear_tinfo_t(v46);
  if ( v44 )
  {
    v45 = 0;
    qfree(v44);
  }
  if ( v42 )
  {
    v43 = 0;
    qfree(v42);
  }
  cleanup_argloc(v40);
  return v16;
}
