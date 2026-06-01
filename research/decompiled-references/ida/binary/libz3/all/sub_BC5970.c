__int64 __fastcall sub_BC5970(__int64 a1, int a2, unsigned int *a3, __int64 a4)
{
  char **exception; // r13
  __int64 v5; // rdx
  unsigned int *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  bool v15; // zf
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // r12
  unsigned int v25; // eax
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int *v28; // rax
  _DWORD *v29; // rcx
  unsigned int **v30; // r14
  __int64 v31; // rax
  __int64 v32; // r12
  int v33; // ecx
  __int64 v34; // rax
  unsigned int *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  void *v40; // rbx
  _QWORD *v42; // rax
  int v43; // eax
  int v44; // r8d
  int v45; // r9d
  int v46; // [rsp+0h] [rbp-120h]
  __int64 *v47; // [rsp+8h] [rbp-118h]
  __int64 v48; // [rsp+10h] [rbp-110h]
  _QWORD *v49; // [rsp+18h] [rbp-108h]
  __int64 v50; // [rsp+20h] [rbp-100h]
  unsigned int *v51; // [rsp+28h] [rbp-F8h]
  __int64 v52; // [rsp+40h] [rbp-E0h]
  void *v53; // [rsp+48h] [rbp-D8h]
  void *v54; // [rsp+50h] [rbp-D0h]
  __int64 v55; // [rsp+58h] [rbp-C8h]
  unsigned int *v56; // [rsp+68h] [rbp-B8h]
  unsigned int v57; // [rsp+68h] [rbp-B8h]
  int v58; // [rsp+70h] [rbp-B0h]
  _QWORD *v59; // [rsp+78h] [rbp-A8h]
  unsigned int **v60; // [rsp+78h] [rbp-A8h]
  unsigned int v61; // [rsp+78h] [rbp-A8h]
  __int64 v62; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v63; // [rsp+88h] [rbp-98h]
  __int64 v64; // [rsp+90h] [rbp-90h] BYREF
  __int64 v65; // [rsp+98h] [rbp-88h]
  __int64 v66; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int **v67; // [rsp+A8h] [rbp-78h] BYREF
  _QWORD v68[2]; // [rsp+B0h] [rbp-70h] BYREF
  _QWORD v69[2]; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-48h]
  _QWORD v72[8]; // [rsp+E0h] [rbp-40h] BYREF

  HIDWORD(v53) = a2;
  v51 = a3;
  v68[0] = 0;
  v68[1] = 0;
  v69[0] = 1;
  v69[1] = 0;
  v48 = a1 + 1832;
  v47 = &v66;
  v49 = v68;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 1832, a4, v68, &v66)
    || (v69[0] & 0x100000000LL) != 0
    || LODWORD(v69[0]) != 1
    || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, v68)
    || (unsigned __int64)sub_182D020(qword_1C7F2C0, v68) >> 32 )
  {
    sub_1872CE0("");
    sub_1873130(114, 2903);
  }
  LODWORD(v53) = sub_182D020(qword_1C7F2C0, v68);
  v7 = nullptr;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 24);
  v62 = 0;
  v50 = v9;
  v63 = v9;
  v65 = v9;
  v66 = v9;
  v52 = a1 + 1848;
  v64 = 0;
  v59 = nullptr;
  v58 = 0;
  v55 = a1 + 1224;
  sub_14078B0(a1 + 1848, v51, &v62, &v64);
  while ( 1 )
  {
    v24 = v62;
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    if ( v59 )
    {
      v25 = *((_DWORD *)v59 - 1);
      if ( v25 == *((_DWORD *)v59 - 2) )
      {
        v26 = (3 * v25 + 1) >> 1;
        v27 = 8 * v26 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_154526(&v70, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v70);
          sub_233E40((__int64)&v70);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (3 * v25 + 1) >> 1;
        v28 = (unsigned int *)sub_186B300(v59 - 1, v27);
        v29 = v28 + 2;
        v59 = v28 + 2;
        *v28 = v57;
        LODWORD(v28) = v28[1];
        v12 = &v29[2 * (unsigned int)v28];
        v11 = (_DWORD)v28 + 1;
      }
      else
      {
        v10 = v25;
        v11 = v25 + 1;
        v12 = &v59[v10];
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      *v42 = 2;
      v59 = v42 + 1;
      v12 = v42 + 1;
      v11 = 1;
    }
    *v12 = v24;
    *((_DWORD *)v59 - 1) = v11;
    sub_1579480(&v70, v55);
    v13 = v70;
    v70 = v8;
    v56 = (unsigned int *)v13;
    if ( v8 )
    {
      v14 = v71;
      v15 = (*(_DWORD *)(v8 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v14, v8);
    }
    v70 = 1;
    v71 = 0;
    v72[0] = 1;
    v72[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v72);
    v19 = *(_QWORD *)(a1 + 1840);
    BYTE4(v72[0]) &= ~1u;
    LODWORD(v72[0]) = 1;
    if ( !v19 )
    {
      sub_16669E0(v48);
      v19 = *(_QWORD *)(a1 + 1840);
    }
    sub_166A700(v19, (unsigned int)&v70, 1, v16, v17, v18);
    v54 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v70);
    sub_182CBA0(v54, v72);
    sub_1579480(&v70, v55);
    v20 = sub_15E1B70(*(_QWORD *)(a1 + 1832));
    v21 = (unsigned int *)v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    if ( v7 )
    {
      v15 = v7[2]-- == 1;
      if ( v15 )
        sub_15D7BC0(v50, v7);
    }
    v22 = v70;
    if ( v70 )
    {
      v23 = v71;
      v15 = (*(_DWORD *)(v70 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v23, v22);
    }
    sub_BC58F0(a1, SHIDWORD(v53), v56, v21, 0);
    if ( (unsigned int)v53 < ++v58 )
      break;
    v7 = v21;
    v8 = (__int64)v56;
    sub_14078B0(v52, v64, &v62, &v64);
  }
  v70 = v64;
  if ( v64 )
    ++*(_DWORD *)(v64 + 8);
  v67 = (unsigned int **)v59;
  sub_BB70A0(&v67, &v70);
  v30 = v67;
  v60 = v67;
  v31 = sub_15D1F10(v51);
  v32 = *(_QWORD *)(a1 + 1736);
  if ( !v30 || (v33 = *((_DWORD *)v60 - 1)) == 0 )
  {
    v43 = sub_15D2D60(v32, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v31);
    v34 = sub_15DC610(
            v32,
            v43,
            0,
            0,
            v44,
            v45,
            v46,
            (int)&v66,
            v48,
            (int)v68,
            v50,
            (char)v51,
            (int)&v64,
            (int)&v62,
            v52,
            v53);
    goto LABEL_34;
  }
  if ( v33 != 1 )
  {
    v34 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
LABEL_34:
    v35 = (unsigned int *)v34;
    goto LABEL_35;
  }
  v35 = *v60;
LABEL_35:
  if ( v35 )
    ++v35[2];
  sub_BC58F0(a1, SHIDWORD(v53), v51, v35, 1);
  sub_2334C0(v47);
  if ( v21 )
  {
    v15 = v21[2]-- == 1;
    if ( v15 )
      sub_15D7BC0(v50, v21);
  }
  if ( v56 )
  {
    v61 = v56[2];
    v56[2] = v61 - 1;
    if ( v61 == 1 )
      sub_15D7BC0(v50, v56);
  }
  if ( v35 )
  {
    v15 = v35[2]-- == 1;
    if ( v15 )
      sub_15D7BC0(v50, v35);
  }
  v36 = v64;
  if ( v64 )
  {
    v37 = v65;
    v15 = (*(_DWORD *)(v64 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v37, v36);
  }
  v38 = v62;
  if ( v62 )
  {
    v39 = v63;
    v15 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v39, v38);
  }
  v40 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v49);
  return sub_182CBA0(v40, v69);
}

