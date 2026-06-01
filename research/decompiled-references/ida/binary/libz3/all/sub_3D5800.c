__int64 __fastcall sub_3D5800(std::ios_base *a1, _QWORD *a2, __int64 *a3)
{
  char **exception; // rbp
  _OWORD *v6; // rax
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // rdx
  __int64 result; // rax
  __int64 v12; // rbp
  unsigned int v13; // r14d
  __int64 v14; // rbp
  int *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 *v20; // r14
  __int64 v21; // rsi
  bool v22; // zf
  int v23; // r9d
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned int v35; // r13d
  size_t v36; // rsi
  unsigned int *v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rbp
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  _QWORD *v42; // rax
  int *v43; // [rsp+0h] [rbp-2C8h]
  int v44[2]; // [rsp+0h] [rbp-2C8h]
  std::ios_base *v45; // [rsp+8h] [rbp-2C0h]
  __int64 v46; // [rsp+8h] [rbp-2C0h]
  __int64 v47; // [rsp+10h] [rbp-2B8h]
  int v48; // [rsp+10h] [rbp-2B8h]
  void **p_ptr; // [rsp+18h] [rbp-2B0h]
  int v50; // [rsp+18h] [rbp-2B0h]
  int v51[2]; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v52; // [rsp+28h] [rbp-2A0h]
  void *ptr; // [rsp+30h] [rbp-298h] BYREF
  void *v54; // [rsp+38h] [rbp-290h]
  int v55; // [rsp+40h] [rbp-288h]
  __int128 v56; // [rsp+48h] [rbp-280h]
  int v57; // [rsp+58h] [rbp-270h]
  int v58[2]; // [rsp+60h] [rbp-268h] BYREF
  int v59; // [rsp+68h] [rbp-260h]
  int v60; // [rsp+70h] [rbp-258h]
  int v61; // [rsp+78h] [rbp-250h]
  int v62; // [rsp+80h] [rbp-248h]
  int v63; // [rsp+88h] [rbp-240h]
  int v64; // [rsp+90h] [rbp-238h]
  __int64 v65; // [rsp+98h] [rbp-230h]
  __int64 v66; // [rsp+A0h] [rbp-228h]
  __int64 v67; // [rsp+A8h] [rbp-220h]
  __int64 v68; // [rsp+B0h] [rbp-218h]
  int v69; // [rsp+B8h] [rbp-210h]
  int v70; // [rsp+C0h] [rbp-208h]
  int v71; // [rsp+C8h] [rbp-200h]
  int v72; // [rsp+D0h] [rbp-1F8h]
  int v73; // [rsp+D8h] [rbp-1F0h]
  int v74; // [rsp+E0h] [rbp-1E8h]
  int v75; // [rsp+E8h] [rbp-1E0h]
  int v76[2]; // [rsp+F0h] [rbp-1D8h]
  char v77[8]; // [rsp+F8h] [rbp-1D0h]
  int v78[2]; // [rsp+100h] [rbp-1C8h]
  int v79[2]; // [rsp+108h] [rbp-1C0h] BYREF
  int v80; // [rsp+110h] [rbp-1B8h]
  __int64 v81; // [rsp+118h] [rbp-1B0h]
  __int64 v82; // [rsp+198h] [rbp-130h]
  int v83; // [rsp+1A0h] [rbp-128h]
  _QWORD v84[18]; // [rsp+1A8h] [rbp-120h] BYREF
  int v85; // [rsp+238h] [rbp-90h]
  __int64 v86; // [rsp+240h] [rbp-88h]
  __int64 v87; // [rsp+248h] [rbp-80h]
  __int64 v88; // [rsp+250h] [rbp-78h]
  __int64 v89; // [rsp+258h] [rbp-70h]
  __int64 v90; // [rsp+260h] [rbp-68h]
  __int64 v91; // [rsp+268h] [rbp-60h]
  __int64 v92; // [rsp+270h] [rbp-58h]
  int v93; // [rsp+278h] [rbp-50h] BYREF
  char v94; // [rsp+280h] [rbp-48h]

  v45 = a1;
  v6 = (_OWORD *)sub_186B270(0x40u);
  v7 = a2[1];
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  ptr = v6;
  v55 = 0;
  v54 = &byte_8;
  p_ptr = &ptr;
  v56 = 0;
  sub_157E9E0((int)&ptr, (int)a1);
  v10 = (_QWORD *)a3[1];
  result = v56;
  if ( v10 )
  {
    if ( !(_QWORD)v56 )
      goto LABEL_33;
    v12 = *((unsigned int *)v10 - 1);
    v13 = *(_DWORD *)(v56 - 4);
    if ( (unsigned int)v12 >= v13 )
      goto LABEL_4;
  }
  else
  {
    if ( !(_QWORD)v56 )
      goto LABEL_33;
    v13 = *(_DWORD *)(v56 - 4);
    if ( !v13 )
      goto LABEL_33;
    v42 = (_QWORD *)sub_186B270(0x18u);
    v10 = v42 + 1;
    *v42 = 2;
    v12 = 0;
    a3[1] = (__int64)(v42 + 1);
  }
  while ( 1 )
  {
    v38 = *((_DWORD *)v10 - 2);
    if ( v38 >= v13 )
      break;
    v35 = (3 * v38 + 1) >> 1;
    v36 = 8 * v35 + 8;
    if ( 8 * v38 + 8 >= (unsigned int)v36 || v38 >= v35 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_3D2D40((__int64 *)v58, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v58);
      sub_233E40((__int64)v58);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v37 = (unsigned int *)sub_186B300(v10 - 1, v36);
    v10 = v37 + 2;
    *v37 = v35;
    a3[1] = (__int64)(v37 + 2);
  }
  v39 = 8 * v12;
  *((_DWORD *)v10 - 1) = v13;
  v40 = &v10[(unsigned __int64)v39 / 8];
  v41 = 8LL * v13;
  if ( v39 != v41 )
    memset(v40, 0, v41 - v39);
  result = v56;
  if ( !(_QWORD)v56 )
    goto LABEL_33;
  v13 = *(_DWORD *)(v56 - 4);
LABEL_4:
  if ( v13 )
  {
    v14 = 0;
    v47 = v13;
    v15 = v58;
    v43 = v58;
    while ( 1 )
    {
      v16 = *(_QWORD *)(result + 8 * v14);
      if ( !v16 )
        v16 = *(_QWORD *)(v7 + 840);
      v17 = sub_421050(
              v7,
              v14,
              v16,
              (int)v15,
              v8,
              v9,
              (int)v43,
              v45,
              v47,
              (int)p_ptr,
              v51[0],
              v52,
              (int)ptr,
              (int)v54,
              v55,
              v56,
              SDWORD2(v56),
              v57,
              v58[0],
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76[0],
              v77[0],
              v78[0],
              v79[0],
              v80,
              v81);
      v18 = *a3;
      v19 = v17;
      v20 = (__int64 *)(a3[1] + 8 * v14);
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v21 = *v20;
      if ( *v20 )
      {
        v22 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v18, v21);
      }
      *v20 = v19;
      sub_1584DD0(*(_QWORD *)v44, v7, 0);
      *(_QWORD *)v58 = &off_1C4CA60;
      *(_QWORD *)v76 = &v93;
      *(_DWORD *)v77 = 0;
      *(_QWORD *)v78 = 0;
      sub_1584DD0(v79, v7, 0);
      v82 = 0;
      v83 = 0;
      *(_QWORD *)v79 = &off_1C61DB8;
      sub_1584DD0(v84, v7, 0);
      v24 = a3[1];
      v85 = 0;
      v86 = 0;
      v87 = v7;
      v84[0] = &off_1C61DE0;
      v88 = 0;
      v89 = v7;
      v90 = 0;
      v91 = v7;
      v92 = 0;
      *(_QWORD *)v58 = &off_1C4CA80;
      v94 = 0;
      if ( v24 )
        v25 = *(_DWORD *)(v24 - 4);
      else
        v25 = 0;
      sub_157BE40((int)v51, v44[0], v46, v25, v24, v23, v44[0], v46, v48, v50, v51[0], v52, (__int64)ptr, v54);
      v27 = *(_QWORD *)v51;
      *(_QWORD *)v51 = *a2;
      v26 = *(_QWORD *)v51;
      *a2 = v27;
      if ( v26 )
      {
        v28 = v52;
        v22 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v28, v26);
      }
      *(_QWORD *)v58 = &off_1C4CA60;
      if ( v92 )
        sub_186B220((void *)(v92 - 8));
      v29 = v90;
      if ( v90 )
      {
        v30 = v91;
        v22 = (*(_DWORD *)(v90 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v30, v29);
      }
      v31 = v88;
      if ( v88 )
      {
        v32 = v89;
        v22 = (*(_DWORD *)(v88 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v32, v31);
      }
      v33 = v86;
      if ( v86 )
      {
        v34 = v87;
        v22 = (*(_DWORD *)(v86 + 8))-- == 1;
        if ( v22 )
          sub_15D7BC0(v34, v33);
      }
      v84[0] = &qword_1C637E8;
      sub_15841B0(v84);
      *(_QWORD *)v79 = &qword_1C637E8;
      sub_15841B0(v79);
      if ( *(_QWORD *)v78 )
      {
        ++v14;
        sub_186B220((void *)(*(_QWORD *)v78 - 8LL));
        sub_15841B0(v43);
        result = v47;
        if ( v14 == v47 )
          break;
      }
      else
      {
        ++v14;
        result = sub_15841B0(v43);
        if ( v47 == v14 )
          break;
      }
      result = v56;
    }
  }
LABEL_33:
  if ( *((_QWORD *)&v56 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v56 + 1) - 8LL));
  if ( (_QWORD)v56 )
    result = sub_186B220((void *)(v56 - 8));
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

