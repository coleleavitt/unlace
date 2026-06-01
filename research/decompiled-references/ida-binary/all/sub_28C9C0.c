unsigned __int64 __fastcall sub_28C9C0(void ***a1, __int64 *a2, int a3)
{
  __int64 v5; // rdi
  void **p_src; // r12
  __int64 v8; // r14
  __int64 v9; // rsi
  bool v10; // zf
  void **v11; // r8
  void *v12; // r12
  void **v13; // rdi
  char *v14; // rax
  char *v15; // rax
  void **v16; // r12
  char *v17; // r13
  _BYTE *v18; // rsi
  char v19; // al
  char *v20; // r13
  void **v21; // r12
  _BYTE *v22; // rsi
  char v23; // al
  char *v24; // r13
  void **v25; // r12
  _BYTE *v26; // rsi
  char v27; // al
  char *v28; // r13
  void **v29; // r12
  _BYTE *v30; // rsi
  char v31; // al
  char *v32; // r13
  void **v33; // r12
  _BYTE *v34; // rsi
  char v35; // al
  char *v36; // r13
  void **v37; // r12
  _BYTE *v38; // rsi
  char v39; // al
  char *v40; // r13
  void **v41; // r12
  _BYTE *v42; // rsi
  __int64 aflags; // rax
  void **v44; // r12
  char *v45; // r13
  _BYTE *v46; // rsi
  char v47; // al
  char *v48; // r13
  void **v49; // r12
  _BYTE *v50; // rsi
  _BYTE *v51; // rax
  char *v52; // r12
  __int64 v53; // rax
  void **v54; // rbx
  char *v55; // rsi
  size_t v57; // r9
  void *v58; // r10
  void *v59; // rdi
  __int64 v60; // rax
  void **v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  void **v72; // [rsp+8h] [rbp-80h]
  void **v73; // [rsp+8h] [rbp-80h]
  size_t v74; // [rsp+10h] [rbp-78h]
  void *v75; // [rsp+18h] [rbp-70h]
  __int128 v76; // [rsp+20h] [rbp-68h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v78; // [rsp+38h] [rbp-50h]
  unsigned __int64 v79; // [rsp+48h] [rbp-40h]

  v5 = *a2;
  v79 = __readfsqword(0x28u);
  p_src = &src;
  v8 = getseg(v5);
  get_segm_base(v8);
  v9 = *a2;
  v10 = *((_BYTE *)QT::QCoreApplication::self + 745) == 0;
  v78 = 0;
  src = nullptr;
  if ( v10 )
    get_ea_name(&src, v9, 1, 0);
  else
    get_ea_name(&src, v9, 21, 0);
  v11 = *a1;
  if ( *a1 != &src )
  {
    v12 = (void *)v78;
    if ( !(_QWORD)v78 || (v57 = v78 - 1, (_QWORD)v78 == 1) )
    {
      v11[1] = nullptr;
      p_src = *a1;
    }
    else
    {
      v58 = src;
      v59 = *v11;
      if ( (unsigned __int64)v11[2] < (unsigned __int64)v78 )
      {
        v75 = src;
        v74 = v78 - 1;
        v73 = *a1;
        v71 = qvector_reserve(*a1, *v11, v78, 1);
        v11 = v73;
        v58 = v75;
        v59 = (void *)v71;
        v57 = v74;
        *v73 = (void *)v71;
      }
      v11[1] = v12;
      v72 = v11;
      memmove(v59, v58, v57);
      *((_BYTE *)v12 + (_QWORD)*v72 - 1) = 0;
      p_src = *a1;
    }
  }
  get_segm_name(p_src + 3, v8, 0);
  sub_169A50((__int64 *)*a1 + 6, (__int64)"%0*a", 2 * a3, 0.0);
  calc_func_size(a2);
  sub_169A50((__int64 *)*a1 + 9, (__int64)"%0*a", 8, 0.0);
  v13 = *a1;
  if ( a2[3] == -1 )
  {
    v14 = &byte_8CBC80;
    if ( v13[13] )
      v14 = (char *)v13[12];
    *v14 = 0;
    v15 = &byte_8CBC80;
    if ( (*a1)[16] )
      v15 = (char *)(*a1)[15];
LABEL_11:
    *v15 = 0;
    goto LABEL_12;
  }
  sub_169A50((__int64 *)v13 + 12, (__int64)"%0*a", 8, 0.0);
  v76 = 0;
  get_frame_part(&v76, a2, 0);
  v61 = *a1;
  if ( (unsigned __int64)v76 >= *((_QWORD *)&v76 + 1) )
  {
    v15 = &byte_8CBC80;
    if ( v61[16] )
      v15 = (char *)v61[15];
    goto LABEL_11;
  }
  sub_169A50((__int64 *)v61 + 15, (__int64)"%0*a", 8, 0.0);
LABEL_12:
  v16 = *a1;
  v17 = "R";
  if ( (a2[2] & 1) != 0 )
    v17 = ".";
  v18 = v16[18];
  if ( (unsigned __int64)v16[20] <= 1 )
  {
    v65 = qvector_reserve(v16 + 18, v18, 2, 1);
    v16[18] = (void *)v65;
    v18 = (_BYTE *)v65;
  }
  v16[19] = &dword_0 + 2;
  v19 = *v17;
  v20 = ".";
  *v18 = v19;
  *((_BYTE *)v16[18] + 1) = 0;
  v21 = *a1;
  if ( (a2[2] & 2) != 0 )
    v20 = "F";
  v22 = v21[21];
  if ( (unsigned __int64)v21[23] <= 1 )
  {
    v64 = qvector_reserve(v21 + 21, v22, 2, 1);
    v21[21] = (void *)v64;
    v22 = (_BYTE *)v64;
  }
  v21[22] = &dword_0 + 2;
  v23 = *v20;
  v24 = ".";
  *v22 = v23;
  *((_BYTE *)v21[21] + 1) = 0;
  v25 = *a1;
  if ( (a2[2] & 4) != 0 )
    v24 = "L";
  v26 = v25[24];
  if ( (unsigned __int64)v25[26] <= 1 )
  {
    v63 = qvector_reserve(v25 + 24, v26, 2, 1);
    v25[24] = (void *)v63;
    v26 = (_BYTE *)v63;
  }
  v25[25] = &dword_0 + 2;
  v27 = *v24;
  v28 = ".";
  *v26 = v27;
  *((_BYTE *)v25[24] + 1) = 0;
  v29 = *a1;
  if ( (*((_BYTE *)a2 + 18) & 1) != 0 )
    v28 = "M";
  v30 = v29[27];
  if ( (unsigned __int64)v29[29] <= 1 )
  {
    v62 = qvector_reserve(v29 + 27, v30, 2, 1);
    v29[27] = (void *)v62;
    v30 = (_BYTE *)v62;
  }
  v29[28] = &dword_0 + 2;
  v31 = *v28;
  v32 = ".";
  *v30 = v31;
  *((_BYTE *)v29[27] + 1) = 0;
  v33 = *a1;
  if ( (*((_BYTE *)a2 + 18) & 2) != 0 )
    v32 = "O";
  v34 = v33[30];
  if ( (unsigned __int64)v33[32] <= 1 )
  {
    v70 = qvector_reserve(v33 + 30, v34, 2, 1);
    v33[30] = (void *)v70;
    v34 = (_BYTE *)v70;
  }
  v33[31] = &dword_0 + 2;
  v35 = *v32;
  v36 = ".";
  *v34 = v35;
  *((_BYTE *)v33[30] + 1) = 0;
  v37 = *a1;
  if ( (a2[2] & 8) != 0 )
    v36 = "S";
  v38 = v37[33];
  if ( (unsigned __int64)v37[35] <= 1 )
  {
    v69 = qvector_reserve(v37 + 33, v38, 2, 1);
    v37[33] = (void *)v69;
    v38 = (_BYTE *)v69;
  }
  v37[34] = &dword_0 + 2;
  v39 = *v36;
  v40 = ".";
  *v38 = v39;
  *((_BYTE *)v37[33] + 1) = 0;
  v41 = *a1;
  if ( (a2[2] & 0x10) != 0 )
    v40 = "B";
  v42 = v41[36];
  if ( (unsigned __int64)v41[38] <= 1 )
  {
    v68 = qvector_reserve(v41 + 36, v42, 2, 1);
    v41[36] = (void *)v68;
    v42 = (_BYTE *)v68;
  }
  v41[37] = &dword_0 + 2;
  *v42 = *v40;
  *((_BYTE *)v41[36] + 1) = 0;
  aflags = get_aflags(*a2);
  v44 = *a1;
  v45 = ".";
  if ( (aflags & 0x800) != 0 )
    v45 = "T";
  v46 = v44[39];
  if ( (unsigned __int64)v44[41] <= 1 )
  {
    v67 = qvector_reserve(v44 + 39, v46, 2, 1);
    v44[39] = (void *)v67;
    v46 = (_BYTE *)v67;
  }
  v44[40] = &dword_0 + 2;
  v47 = *v45;
  v48 = ".";
  *v46 = v47;
  *((_BYTE *)v44[39] + 1) = 0;
  v49 = *a1;
  if ( (*((_BYTE *)a2 + 17) & 1) != 0 )
    v48 = "=";
  v50 = v49[42];
  if ( (unsigned __int64)v49[44] <= 1 )
  {
    v66 = qvector_reserve(v49 + 42, v50, 2, 1);
    v49[42] = (void *)v66;
    v50 = (_BYTE *)v66;
  }
  v49[43] = &dword_0 + 2;
  *v50 = *v48;
  v51 = v49[42];
  v52 = (char *)"u";
  v51[1] = 0;
  v53 = a2[2];
  if ( (v53 & 0x80000) == 0 )
  {
    v52 = "c";
    if ( (v53 & 0x100000) == 0 )
      v52 = ".";
  }
  v54 = *a1;
  v55 = (char *)(*a1)[45];
  if ( (unsigned __int64)(*a1)[47] <= 1 )
  {
    v60 = qvector_reserve(v54 + 45, v55, 2, 1);
    v54[45] = (void *)v60;
    v55 = (char *)v60;
  }
  v54[46] = &dword_0 + 2;
  *v55 = *v52;
  *((_BYTE *)v54[45] + 1) = 0;
  if ( src )
  {
    *(_QWORD *)&v78 = 0;
    qfree(src, v55);
  }
  return v79 - __readfsqword(0x28u);
}
