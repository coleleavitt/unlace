__int64 __fastcall sub_C57670(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // r12
  void *v13; // rbx
  bool v14; // zf
  __int64 v16; // rdi
  char v17; // al
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  __int64 *v41; // r10
  void *v42; // rdi
  void *v43; // rdi
  __int64 *v44; // r10
  void *v45; // rdi
  struct _Unwind_Exception *v46; // [rsp+0h] [rbp-1A8h]
  struct _Unwind_Exception *v47; // [rsp+0h] [rbp-1A8h]
  __int64 *v48; // [rsp+8h] [rbp-1A0h]
  void *v49; // [rsp+8h] [rbp-1A0h]
  unsigned int v51; // [rsp+20h] [rbp-188h]
  __int64 v52; // [rsp+28h] [rbp-180h]
  __int64 v53; // [rsp+30h] [rbp-178h]
  __int64 v54; // [rsp+38h] [rbp-170h]
  __int64 *v55; // [rsp+40h] [rbp-168h]
  __int64 v56; // [rsp+40h] [rbp-168h]
  __int64 v57; // [rsp+40h] [rbp-168h]
  __int64 v58; // [rsp+48h] [rbp-160h]
  _DWORD *v59; // [rsp+48h] [rbp-160h]
  __int64 v60; // [rsp+50h] [rbp-158h]
  void *v61; // [rsp+58h] [rbp-150h]
  void *v62; // [rsp+58h] [rbp-150h]
  __int64 *v63; // [rsp+58h] [rbp-150h]
  __int64 *v64; // [rsp+60h] [rbp-148h]
  __int64 *v65; // [rsp+68h] [rbp-140h]
  __int64 *v66; // [rsp+68h] [rbp-140h]
  __int64 *v67; // [rsp+68h] [rbp-140h]
  __int64 *v68; // [rsp+68h] [rbp-140h]
  __int64 v69; // [rsp+70h] [rbp-138h] BYREF
  __int64 v70; // [rsp+78h] [rbp-130h]
  int v71[2]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v72; // [rsp+88h] [rbp-120h]
  int v73[2]; // [rsp+90h] [rbp-118h] BYREF
  __int64 v74; // [rsp+98h] [rbp-110h]
  __int64 v75; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-100h]
  __int64 v77[2]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v78[2]; // [rsp+C0h] [rbp-E8h] BYREF
  int v79[2]; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-D0h]
  _QWORD v81[2]; // [rsp+E0h] [rbp-C8h] BYREF
  struct _Unwind_Exception v82; // [rsp+F0h] [rbp-B8h] BYREF
  int v83[2]; // [rsp+110h] [rbp-98h] BYREF
  __int64 v84; // [rsp+118h] [rbp-90h]
  _QWORD v85[2]; // [rsp+120h] [rbp-88h] BYREF
  int v86; // [rsp+130h] [rbp-78h] BYREF
  char v87; // [rsp+134h] [rbp-74h]
  __int64 v88; // [rsp+138h] [rbp-70h]
  int v89; // [rsp+140h] [rbp-68h] BYREF
  char v90; // [rsp+144h] [rbp-64h]
  __int64 v91; // [rsp+148h] [rbp-60h]
  _QWORD v92[2]; // [rsp+150h] [rbp-58h] BYREF
  int v93[2]; // [rsp+160h] [rbp-48h] BYREF
  __int64 v94; // [rsp+168h] [rbp-40h]

  v6 = *a1;
  v77[0] = 0;
  v77[1] = 0;
  v78[0] = 1;
  v78[1] = 0;
  *(_QWORD *)v79 = 0;
  v80 = 0;
  v81[0] = 1;
  v81[1] = 0;
  v82.exception_class = 0;
  v82.exception_cleanup = nullptr;
  v82.private_1 = 1;
  v82.private_2 = 0;
  *(_QWORD *)v83 = 0;
  v84 = 0;
  v85[0] = 1;
  v85[1] = 0;
  v7 = a1[1];
  v48 = a1;
  v69 = 0;
  v70 = v6;
  *(_QWORD *)v73 = 0;
  v74 = v6;
  v8 = sub_C50710(v7, a2, &v69, (__int64 *)v73, (__int64)v77, (__int64)&v82);
  v9 = v69;
  v10 = *(_QWORD *)v73;
  v54 = v74;
  v53 = v70;
  if ( v8 )
  {
    v16 = v48[1];
    *(_QWORD *)v71 = 0;
    v72 = v6;
    v75 = 0;
    v76 = v6;
    v17 = sub_C50710(v16, a3, (__int64 *)v71, &v75, (__int64)v79, (__int64)v83);
    v12 = *(_QWORD *)v71;
    v11 = v75;
    v6 = v72;
    v52 = v76;
    if ( v17 && sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v82, (__int64)v83) )
    {
      v60 = *v48;
      v55 = (__int64 *)v48[1];
      v21 = sub_C524A0((__int64)v55, v11, v10, v18, v19, v20);
      v58 = sub_C527D0(v55, (__int64)&v82, v21);
      v25 = sub_C524A0(v48[1], v9, v12, v22, v23, v24);
      v29 = sub_C4F800((__int64)v55, v25, v58, v26, v27, v28);
      v59 = (_DWORD *)v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v56 = v48[1];
      v61 = (void *)sub_C524A0(v56, v10, v12, v30, v31, v32);
      v36 = sub_C524A0(v48[1], v9, v11, v33, v34, v35);
      v40 = sub_C4F800(v56, v36, (__int64)v61, v37, v38, v39);
      v57 = v40;
      v41 = v48;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v92[0] = 0;
      v42 = qword_1C7F2C0;
      v92[1] = 0;
      *(_QWORD *)v93 = 1;
      v94 = 0;
      if ( (v77[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v92, v77);
        v41 = v48;
      }
      else
      {
        LODWORD(v92[0]) = v77[0];
      }
      if ( (v78[0] & 0x100000000LL) != 0 )
      {
        v63 = v41;
        sub_182C690(v42, v93, v78);
        v41 = v63;
      }
      else
      {
        LOBYTE(v93[1]) &= ~1u;
        v93[0] = v78[0];
      }
      v43 = qword_1C7F2C0;
      if ( (v93[1] & 1) != 0 || v93[0] != 1 || (v81[0] & 0x100000000LL) != 0 || LODWORD(v81[0]) != 1 )
      {
        v64 = v41;
        sub_1848FF0(qword_1C7F2C0, v92, v79);
        v44 = v64;
      }
      else
      {
        v68 = v41;
        sub_1831650(qword_1C7F2C0, v92, v79);
        sub_182CBA0(v43, v93);
        LOBYTE(v93[1]) &= ~1u;
        v44 = v68;
        v93[0] = 1;
      }
      v87 &= 0xFCu;
      v45 = qword_1C7F2C0;
      v90 &= 0xFCu;
      v86 = 0;
      v88 = 0;
      v89 = 1;
      v91 = 0;
      if ( (v92[0] & 0x100000000LL) != 0 )
      {
        v67 = v44;
        sub_182C690(qword_1C7F2C0, &v86, v92);
        v44 = v67;
      }
      else
      {
        v86 = v92[0];
      }
      if ( (v93[1] & 1) != 0 )
      {
        v66 = v44;
        sub_182C690(v45, &v89, v93);
        v44 = v66;
      }
      else
      {
        v90 &= ~1u;
        v89 = v93[0];
      }
      v65 = v44;
      v62 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v92);
      sub_182CBA0(v62, v93);
      if ( (unsigned __int8)sub_C56150(v65[1], v59, v57, (__int64)&v86, (int *)&v82, a4) )
      {
        sub_25A130((char *)&v86);
        sub_C4E2C0(v57, v60);
        sub_C4E2C0((__int64)v59, v60);
        v51 = 4;
        goto LABEL_3;
      }
      sub_25A130((char *)&v86);
      sub_C4E2C0(v57, v60);
      sub_C4E2C0((__int64)v59, v60);
    }
    v51 = 5;
  }
  else
  {
    v52 = v6;
    v11 = 0;
    v12 = 0;
    v51 = 5;
  }
LABEL_3:
  v49 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v83);
  sub_182CBA0(v49, v85);
  v46 = (struct _Unwind_Exception *)qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v82);
  sub_182CBA0(v46, &v82.private_1);
  v47 = (struct _Unwind_Exception *)qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v79);
  sub_182CBA0(v47, v81);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v77);
  sub_182CBA0(v13, v78);
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v52, v11);
  }
  if ( v10 )
  {
    v14 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v54, v10);
  }
  if ( v12 )
  {
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v6, v12);
  }
  if ( v9 )
  {
    v14 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v53, v9);
  }
  return v51;
}

