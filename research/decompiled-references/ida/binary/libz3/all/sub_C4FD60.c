__int64 __fastcall sub_C4FD60(__int64 a1, __int64 a2)
{
  void *v2; // rbp
  __int64 v3; // rax
  int v4; // eax
  void *v5; // r13
  int v6; // edx
  void *v7; // r13
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  void *v11; // rdi
  int v12; // r13d
  int v13; // edx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  unsigned int v17; // ebp
  void *v18; // r12
  void *v19; // rbx
  void *v21; // rbp
  void *v22; // r13
  int v23; // edx
  void *v24; // r13
  __int64 v25; // rdx
  char v26; // cl
  __int64 v27; // rax
  void *v28; // rdi
  int v29; // r13d
  int v30; // edx
  __int64 v31; // rdx
  char v32; // cl
  __int64 v33; // rax
  unsigned int v34; // ebp
  void *v35; // r12
  void *v36; // r12
  __int64 v37; // rax
  void *v38; // rbx
  __int64 v39; // rbp
  void *v40; // [rsp+8h] [rbp-E0h]
  void *v41; // [rsp+8h] [rbp-E0h]
  void *v42; // [rsp+8h] [rbp-E0h]
  void *v43; // [rsp+8h] [rbp-E0h]
  int v44; // [rsp+14h] [rbp-D4h]
  int v45; // [rsp+14h] [rbp-D4h]
  int v47; // [rsp+30h] [rbp-B8h] BYREF
  char v48; // [rsp+34h] [rbp-B4h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  int v50; // [rsp+40h] [rbp-A8h] BYREF
  char v51; // [rsp+44h] [rbp-A4h]
  __int64 v52; // [rsp+48h] [rbp-A0h]
  __int64 v53; // [rsp+50h] [rbp-98h] BYREF
  __int64 v54; // [rsp+58h] [rbp-90h]
  __int64 v55; // [rsp+60h] [rbp-88h] BYREF
  __int64 v56; // [rsp+68h] [rbp-80h]
  __int64 v57; // [rsp+70h] [rbp-78h] BYREF
  __int64 v58; // [rsp+78h] [rbp-70h]
  __int64 v59; // [rsp+80h] [rbp-68h] BYREF
  __int64 v60; // [rsp+88h] [rbp-60h]
  int v61; // [rsp+90h] [rbp-58h] BYREF
  char v62; // [rsp+94h] [rbp-54h]
  __int64 v63; // [rsp+98h] [rbp-50h]
  int v64; // [rsp+A0h] [rbp-48h] BYREF
  char v65; // [rsp+A4h] [rbp-44h]
  __int64 v66; // [rsp+A8h] [rbp-40h]

  if ( *(int *)a2 < 0 )
  {
    v48 &= 0xFCu;
    v51 &= 0xFCu;
    v47 = 0;
    v49 = 0;
    v50 = 1;
    v52 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v47, (int *)a2);
    sub_1831690(qword_1C7F2C0, &v47);
    v53 = 2;
    v54 = 0;
    v55 = 1;
    v56 = 0;
    sub_182CBA0(qword_1C7F2C0, &v55);
    BYTE4(v55) &= ~1u;
    v21 = qword_1C7F2C0;
    LODWORD(v55) = 1;
    v57 = 0;
    v58 = 0;
    v59 = 1;
    v60 = 0;
    if ( (v48 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v57, &v47);
    else
      LODWORD(v57) = v47;
    if ( (v51 & 1) != 0 )
    {
      sub_182C690(v21, &v59, &v50);
    }
    else
    {
      BYTE4(v59) &= ~1u;
      LODWORD(v59) = v50;
    }
    v22 = qword_1C7F2C0;
    v62 &= 0xFCu;
    v65 &= 0xFCu;
    v61 = 0;
    v63 = 0;
    v64 = 1;
    v66 = 0;
    sub_1833EB0(qword_1C7F2C0, &v57, &v53, &v61);
    sub_182CBA0(v22, &v64);
    v23 = v61;
    v24 = qword_1C7F2C0;
    v61 = v57;
    LODWORD(v57) = v23;
    v25 = v63;
    v63 = v58;
    v58 = v25;
    v26 = v62 & 1;
    LOBYTE(v25) = BYTE4(v57) & 0xFC | v62 & 2;
    v62 = BYTE4(v57) & 1 | v62 & 0xFC | BYTE4(v57) & 2;
    BYTE4(v57) = v26 | v25;
    v64 = v59;
    v27 = v60;
    v60 = v66;
    v66 = v27;
    LODWORD(v59) = 1;
    LOBYTE(v27) = BYTE4(v59) & 1 | BYTE4(v59) & 2 | v65 & 0xFC;
    BYTE4(v59) = BYTE4(v59) & 0xFC | v65 & 2;
    v65 = v27;
    sub_182CBA0(qword_1C7F2C0, &v61);
    v28 = v24;
    v29 = 1;
    sub_182CBA0(v28, &v64);
    if ( (int)v57 <= 0 )
    {
      v34 = 2;
    }
    else
    {
      do
      {
        v45 = v29++;
        v62 &= 0xFCu;
        v65 &= 0xFCu;
        v61 = 0;
        v63 = 0;
        v64 = 1;
        v66 = 0;
        v42 = qword_1C7F2C0;
        sub_1833EB0(qword_1C7F2C0, &v57, &v53, &v61);
        sub_182CBA0(v42, &v64);
        v30 = v61;
        v61 = v57;
        LODWORD(v57) = v30;
        v31 = v63;
        v63 = v58;
        v58 = v31;
        v43 = qword_1C7F2C0;
        v32 = v62 & 1;
        LOBYTE(v31) = BYTE4(v57) & 0xFC | v62 & 2;
        v62 = BYTE4(v57) & 1 | v62 & 0xFC | BYTE4(v57) & 2;
        BYTE4(v57) = v32 | v31;
        v64 = v59;
        v33 = v60;
        v60 = v66;
        v66 = v33;
        LODWORD(v59) = 1;
        LOBYTE(v33) = BYTE4(v59) & 1 | BYTE4(v59) & 2 | v65 & 0xFC;
        BYTE4(v59) = BYTE4(v59) & 0xFC | v65 & 2;
        v65 = v33;
        sub_182CBA0(qword_1C7F2C0, &v61);
        sub_182CBA0(v43, &v64);
      }
      while ( (int)v57 > 0 );
      v34 = v45 + 2;
    }
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v57);
    sub_182CBA0(v35, &v59);
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v53);
    sub_182CBA0(v36, &v55);
    sub_1674520(a1 + 24, &v47, v34);
    v37 = sub_15E1A70(*(_QWORD *)(a1 + 32));
    v38 = qword_1C7F2C0;
    v39 = v37;
    sub_182CBA0(qword_1C7F2C0, &v47);
    sub_182CBA0(v38, &v50);
    return v39;
  }
  v53 = 2;
  v54 = 0;
  v55 = 1;
  v56 = 0;
  sub_182CBA0(qword_1C7F2C0, &v55);
  BYTE4(v55) &= ~1u;
  LODWORD(v55) = 1;
  v2 = qword_1C7F2C0;
  v57 = 0;
  v58 = 0;
  v59 = 1;
  v60 = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v57, a2);
    v3 = a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_4;
LABEL_18:
    sub_182C690(v2, &v59, v3 + 16);
    goto LABEL_5;
  }
  LODWORD(v57) = *(_DWORD *)a2;
  v3 = a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    goto LABEL_18;
LABEL_4:
  v4 = *(_DWORD *)(v3 + 16);
  BYTE4(v59) &= ~1u;
  LODWORD(v59) = v4;
LABEL_5:
  v5 = qword_1C7F2C0;
  v62 &= 0xFCu;
  v65 &= 0xFCu;
  v61 = 0;
  v63 = 0;
  v64 = 1;
  v66 = 0;
  sub_1833EB0(qword_1C7F2C0, &v57, &v53, &v61);
  sub_182CBA0(v5, &v64);
  v6 = v61;
  v7 = qword_1C7F2C0;
  v61 = v57;
  LODWORD(v57) = v6;
  v8 = v63;
  v63 = v58;
  v58 = v8;
  v9 = v62 & 1;
  LOBYTE(v8) = BYTE4(v57) & 0xFC | v62 & 2;
  v62 = BYTE4(v57) & 1 | v62 & 0xFC | BYTE4(v57) & 2;
  BYTE4(v57) = v9 | v8;
  v64 = v59;
  v10 = v60;
  v60 = v66;
  v66 = v10;
  LODWORD(v59) = 1;
  LOBYTE(v10) = BYTE4(v59) & 1 | BYTE4(v59) & 2 | v65 & 0xFC;
  BYTE4(v59) = BYTE4(v59) & 0xFC | v65 & 2;
  v65 = v10;
  sub_182CBA0(qword_1C7F2C0, &v61);
  v11 = v7;
  v12 = 1;
  sub_182CBA0(v11, &v64);
  if ( (int)v57 <= 0 )
  {
    v17 = 2;
  }
  else
  {
    do
    {
      v44 = v12++;
      v62 &= 0xFCu;
      v65 &= 0xFCu;
      v61 = 0;
      v63 = 0;
      v64 = 1;
      v66 = 0;
      v40 = qword_1C7F2C0;
      sub_1833EB0(qword_1C7F2C0, &v57, &v53, &v61);
      sub_182CBA0(v40, &v64);
      v13 = v61;
      v61 = v57;
      LODWORD(v57) = v13;
      v14 = v63;
      v63 = v58;
      v58 = v14;
      v41 = qword_1C7F2C0;
      v15 = v62 & 1;
      LOBYTE(v14) = BYTE4(v57) & 0xFC | v62 & 2;
      v62 = BYTE4(v57) & 1 | v62 & 0xFC | BYTE4(v57) & 2;
      BYTE4(v57) = v15 | v14;
      v64 = v59;
      v16 = v60;
      v60 = v66;
      v66 = v16;
      LODWORD(v59) = 1;
      LOBYTE(v14) = BYTE4(v59) & 0xFC | v65 & 2;
      v65 = BYTE4(v59) & 1 | BYTE4(v59) & 2 | v65 & 0xFC;
      BYTE4(v59) = v14;
      sub_182CBA0(qword_1C7F2C0, &v61);
      sub_182CBA0(v41, &v64);
    }
    while ( (int)v57 > 0 );
    v17 = v44 + 2;
  }
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v57);
  sub_182CBA0(v18, &v59);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v53);
  sub_182CBA0(v19, &v55);
  return sub_1674520(a1 + 24, a2, v17);
}

