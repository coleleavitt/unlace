char __fastcall sub_C528A0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 a6, __int64 a7)
{
  void *v8; // r13
  void *v9; // r13
  void *v10; // r13
  void *v11; // r14
  int v12; // eax
  void *v13; // r14
  void *v14; // r14
  void *v15; // r14
  int v16; // eax
  void *v17; // r14
  void *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r15
  void *v27; // rdi
  void *v28; // rbp
  void *v29; // rbp
  void *v30; // rbp
  void *v31; // rbx
  char result; // al
  void *v36; // [rsp+28h] [rbp-100h]
  void *v37; // [rsp+28h] [rbp-100h]
  int v38; // [rsp+50h] [rbp-D8h] BYREF
  char v39; // [rsp+54h] [rbp-D4h]
  __int64 v40; // [rsp+58h] [rbp-D0h]
  int v41; // [rsp+60h] [rbp-C8h] BYREF
  char v42; // [rsp+64h] [rbp-C4h]
  __int64 v43; // [rsp+68h] [rbp-C0h]
  int v44; // [rsp+70h] [rbp-B8h] BYREF
  char v45; // [rsp+74h] [rbp-B4h]
  __int64 v46; // [rsp+78h] [rbp-B0h]
  int v47; // [rsp+80h] [rbp-A8h] BYREF
  char v48; // [rsp+84h] [rbp-A4h]
  __int64 v49; // [rsp+88h] [rbp-A0h]
  int v50; // [rsp+90h] [rbp-98h] BYREF
  char v51; // [rsp+94h] [rbp-94h]
  __int64 v52; // [rsp+98h] [rbp-90h]
  int v53; // [rsp+A0h] [rbp-88h] BYREF
  char v54; // [rsp+A4h] [rbp-84h]
  __int64 v55; // [rsp+A8h] [rbp-80h]
  __int64 v56; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-70h]
  int v58; // [rsp+C0h] [rbp-68h] BYREF
  char v59; // [rsp+C4h] [rbp-64h]
  __int64 v60; // [rsp+C8h] [rbp-60h]
  __int64 v61; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-50h]
  __int64 v63; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-40h]

  v8 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 || (*(_BYTE *)(a7 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a6, a7) )
      goto LABEL_4;
  }
  else if ( *(_DWORD *)a6 != *(_DWORD *)a7 )
  {
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a6 + 20) & 1) != 0 || (*(_BYTE *)(a7 + 20) & 1) != 0 )
    result = (unsigned int)sub_182C7B0(v8, a6 + 16, a7 + 16) == 0;
  else
    result = *(_DWORD *)(a6 + 16) == *(_DWORD *)(a7 + 16);
  if ( result )
    return result;
LABEL_4:
  v9 = qword_1C7F2C0;
  v39 &= 0xFCu;
  v42 &= 0xFCu;
  v38 = 0;
  v40 = 0;
  v41 = 1;
  v43 = 0;
  sub_1832C70(qword_1C7F2C0, a6, a7, &v38);
  sub_182CBA0(v9, &v41);
  v10 = qword_1C7F2C0;
  v42 &= ~1u;
  v45 &= 0xFCu;
  v48 &= 0xFCu;
  v41 = 1;
  v44 = 0;
  v46 = 0;
  v47 = 1;
  v49 = 0;
  sub_1836B00(qword_1C7F2C0, a6, a7, &v44);
  sub_182CBA0(v10, &v47);
  v48 &= ~1u;
  v11 = qword_1C7F2C0;
  v47 = 1;
  v61 = 0;
  v62 = 0;
  v63 = 1;
  v64 = 0;
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v61, a6);
    if ( (*(_BYTE *)(a6 + 20) & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    LODWORD(v61) = *(_DWORD *)a6;
    if ( (*(_BYTE *)(a6 + 20) & 1) == 0 )
    {
LABEL_6:
      v12 = *(_DWORD *)(a6 + 16);
      BYTE4(v63) &= ~1u;
      LODWORD(v63) = v12;
      goto LABEL_7;
    }
  }
  sub_182C690(v11, &v63, a6 + 16);
LABEL_7:
  v36 = qword_1C7F2C0;
  if ( (_DWORD)v61 && ((v39 & 1) != 0 || v38 != 1 || (v42 & 1) != 0 || v41 != 1) )
  {
    sub_1831650(qword_1C7F2C0, &v61, &v41);
    sub_1831650(v36, &v63, &v38);
    if ( (int)v63 < 0 )
    {
      sub_1831620(v36, &v61);
      sub_1831620(v36, &v63);
    }
    v56 = 0;
    v57 = 0;
    sub_1832C70(v36, &v61, &v63, &v56);
    if ( (v56 & 0x100000000LL) != 0 || (_DWORD)v56 != 1 )
    {
      sub_1833EB0(v36, &v61, &v56, &v61);
      sub_1833EB0(v36, &v63, &v56, &v63);
      sub_182CBA0(v36, &v56);
    }
    else
    {
      sub_182CBA0(v36, &v56);
    }
  }
  else
  {
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v61, (int *)&v61);
  }
  v51 &= 0xFCu;
  v13 = qword_1C7F2C0;
  v54 &= 0xFCu;
  v50 = 0;
  v52 = 0;
  v53 = 1;
  v55 = 0;
  if ( (v61 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v50, &v61);
  else
    v50 = v61;
  if ( (v63 & 0x100000000LL) != 0 )
  {
    sub_182C690(v13, &v53, &v63);
  }
  else
  {
    v54 &= ~1u;
    v53 = v63;
  }
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v61);
  sub_182CBA0(v14, &v63);
  v15 = qword_1C7F2C0;
  v61 = 0;
  v62 = 0;
  v63 = 1;
  v64 = 0;
  if ( (*(_BYTE *)(a7 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v61, a7);
  else
    LODWORD(v61) = *(_DWORD *)a7;
  if ( (*(_BYTE *)(a7 + 20) & 1) != 0 )
  {
    sub_182C690(v15, &v63, a7 + 16);
  }
  else
  {
    v16 = *(_DWORD *)(a7 + 16);
    BYTE4(v63) &= ~1u;
    LODWORD(v63) = v16;
  }
  v37 = qword_1C7F2C0;
  if ( (_DWORD)v61 && ((v39 & 1) != 0 || v38 != 1 || (v42 & 1) != 0 || v41 != 1) )
  {
    sub_1831650(qword_1C7F2C0, &v61, &v41);
    sub_1831650(v37, &v63, &v38);
    if ( (int)v63 < 0 )
    {
      sub_1831620(v37, &v61);
      sub_1831620(v37, &v63);
    }
    v56 = 0;
    v57 = 0;
    sub_1832C70(v37, &v61, &v63, &v56);
    if ( (v56 & 0x100000000LL) != 0 || (_DWORD)v56 != 1 )
    {
      sub_1833EB0(v37, &v61, &v56, &v61);
      sub_1833EB0(v37, &v63, &v56, &v63);
    }
    sub_182CBA0(v37, &v56);
  }
  else
  {
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v61, (int *)&v61);
  }
  BYTE4(v56) &= 0xFCu;
  v17 = qword_1C7F2C0;
  v59 &= 0xFCu;
  LODWORD(v56) = 0;
  v57 = 0;
  v58 = 1;
  v60 = 0;
  if ( (v61 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v56, &v61);
  else
    LODWORD(v56) = v61;
  if ( (v63 & 0x100000000LL) != 0 )
  {
    sub_182C690(v17, &v58, &v63);
  }
  else
  {
    v59 &= ~1u;
    v58 = v63;
  }
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v61);
  sub_182CBA0(v18, &v63);
  v19 = sub_C527D0(a1, (__int64)&v56, *a2);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_C4E2C0(*a2, a2[1]);
  *a2 = v20;
  v21 = sub_C527D0(a1, (__int64)&v56, *a3);
  v22 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  sub_C4E2C0(*a3, a3[1]);
  *a3 = v22;
  v23 = sub_C527D0(a1, (__int64)&v50, *a4);
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  sub_C4E2C0(*a4, a4[1]);
  *a4 = v24;
  v25 = sub_C527D0(a1, (__int64)&v50, *a5);
  v26 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  sub_C4E2C0(*a5, a5[1]);
  v27 = qword_1C7F2C0;
  *a5 = v26;
  sub_27B950((__int64)v27, a6, &v44);
  sub_27B950((__int64)qword_1C7F2C0, a7, &v44);
  v28 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v56);
  sub_182CBA0(v28, &v58);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v50);
  sub_182CBA0(v29, &v53);
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v44);
  sub_182CBA0(v30, &v47);
  v31 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v38);
  return sub_182CBA0(v31, &v41);
}

