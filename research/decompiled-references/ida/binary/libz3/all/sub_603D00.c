__int64 __fastcall sub_603D00(__int64 a1, _QWORD *a2, int a3)
{
  char **exception; // r14
  _OWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 *v20; // rdx
  __int64 v21; // rsi
  bool v22; // zf
  int v23; // r9d
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned int v33; // r14d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rbx
  _QWORD *v38; // rdi
  __int64 v39; // rdx
  _QWORD *v40; // rax
  int v41; // [rsp-8h] [rbp-2C8h]
  int v42; // [rsp+0h] [rbp-2C0h]
  int v43; // [rsp+0h] [rbp-2C0h]
  __int64 v44; // [rsp+8h] [rbp-2B8h]
  int v45; // [rsp+8h] [rbp-2B8h]
  int v46; // [rsp+8h] [rbp-2B8h]
  int v47[2]; // [rsp+10h] [rbp-2B0h]
  int v48; // [rsp+10h] [rbp-2B0h]
  __int64 v49; // [rsp+18h] [rbp-2A8h]
  int v50; // [rsp+18h] [rbp-2A8h]
  int v51; // [rsp+20h] [rbp-2A0h]
  int v52; // [rsp+20h] [rbp-2A0h]
  int v53; // [rsp+28h] [rbp-298h] BYREF
  void *ptr; // [rsp+30h] [rbp-290h] BYREF
  void *v55; // [rsp+38h] [rbp-288h]
  int v56; // [rsp+40h] [rbp-280h]
  __int128 v57; // [rsp+48h] [rbp-278h]
  int v58; // [rsp+58h] [rbp-268h]
  int v59[2]; // [rsp+60h] [rbp-260h] BYREF
  int v60; // [rsp+68h] [rbp-258h]
  int v61; // [rsp+70h] [rbp-250h]
  int v62; // [rsp+78h] [rbp-248h]
  int v63; // [rsp+80h] [rbp-240h]
  int v64; // [rsp+88h] [rbp-238h]
  int v65; // [rsp+90h] [rbp-230h]
  int v66; // [rsp+98h] [rbp-228h]
  int v67; // [rsp+A0h] [rbp-220h]
  void *v68; // [rsp+A8h] [rbp-218h]
  int v69; // [rsp+B0h] [rbp-210h]
  __int64 v70; // [rsp+B8h] [rbp-208h]
  __int64 v71; // [rsp+100h] [rbp-1C0h]
  int *v72; // [rsp+108h] [rbp-1B8h] BYREF
  int *v73; // [rsp+1A8h] [rbp-118h] BYREF
  __int64 v74; // [rsp+240h] [rbp-80h]
  __int64 v75; // [rsp+248h] [rbp-78h]
  __int64 v76; // [rsp+250h] [rbp-70h]
  __int64 v77; // [rsp+258h] [rbp-68h]
  __int64 v78; // [rsp+260h] [rbp-60h]
  __int64 v79; // [rsp+268h] [rbp-58h]
  __int64 v80; // [rsp+270h] [rbp-50h]
  _BYTE v81[72]; // [rsp+278h] [rbp-48h] BYREF

  v7 = (_OWORD *)sub_186B270(0x40u);
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  ptr = v7;
  v55 = &byte_8;
  v56 = 0;
  v57 = 0;
  sub_157E9E0((int)&ptr, a3);
  v8 = v57;
  if ( !(_QWORD)v57 )
    goto LABEL_16;
  v9 = *(unsigned int *)(v57 - 4);
  v10 = (_QWORD *)a2[7];
  LODWORD(v49) = *(_DWORD *)(v57 - 4);
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (unsigned int)v11 >= (unsigned int)v9 )
      goto LABEL_4;
  }
  else
  {
    if ( !(_DWORD)v49 )
      goto LABEL_16;
    v40 = (_QWORD *)sub_186B270(0x18u);
    v10 = v40 + 1;
    *v40 = 2;
    v11 = 0;
    a2[7] = v40 + 1;
  }
  while ( 1 )
  {
    v36 = *((_DWORD *)v10 - 2);
    if ( v36 >= (unsigned int)v49 )
      break;
    v33 = (3 * v36 + 1) >> 1;
    v34 = 8 * v33 + 8;
    if ( 8 * v36 + 8 >= (unsigned int)v34 || v36 >= v33 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v59, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v59);
      sub_233E40((__int64)v59);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v35 = (unsigned int *)sub_186B300(v10 - 1, v34);
    v10 = v35 + 2;
    *v35 = v33;
    a2[7] = v35 + 2;
  }
  v37 = 8 * v11;
  *((_DWORD *)v10 - 1) = v49;
  v38 = &v10[(unsigned __int64)v37 / 8];
  v39 = 8LL * (unsigned int)v49;
  if ( v37 != v39 )
    memset(v38, 0, v39 - v37);
  v8 = v57;
  if ( !(_QWORD)v57 )
    goto LABEL_16;
  LODWORD(v49) = *(_DWORD *)(v57 - 4);
  v9 = (unsigned int)v49;
LABEL_4:
  if ( (_DWORD)v9 )
  {
    v12 = 0;
    v49 = 8 * v9;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v8 + v12) || *(_QWORD *)(a2[7] + v12) )
      {
        v12 += 8;
        if ( v49 == v12 )
          break;
      }
      else
      {
        v45 = *(_QWORD *)(v8 + v12);
        v13 = a2[4];
        sub_180C5A0(&v53, "c");
        v14 = sub_15E3D10(
                v13,
                (int)&v53,
                (int)&qword_18D6CD0,
                0,
                0,
                v45,
                1,
                v41,
                v42,
                v45,
                (int)&v53,
                v49,
                v51,
                v53,
                (char)ptr,
                (int)v55,
                v56,
                v57,
                SDWORD2(v57),
                v58,
                v59[0],
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
                v70);
        v17 = sub_15DC610(v13, v14, 0, 0, v15, v16, v43, v46, v48, v50, v52, v53, (int)ptr, (int)v55, v56, (void *)v57);
        v18 = a2[6];
        v19 = v17;
        v20 = (__int64 *)(v12 + a2[7]);
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v21 = *v20;
        if ( *v20 )
        {
          v22 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v22 )
          {
            *(_QWORD *)v47 = v20;
            sub_15D7BC0(v18, v21);
            v20 = *(__int64 **)v47;
          }
        }
        *v20 = v19;
        v12 += 8;
        if ( v49 == v12 )
          break;
      }
      v8 = v57;
    }
  }
LABEL_16:
  sub_633760(v59, a2[4], 0, v81);
  v24 = a2[7];
  v81[8] = 0;
  *(_QWORD *)v59 = &off_1C4CA80;
  if ( v24 )
    v25 = *(_DWORD *)(v24 - 4);
  else
    v25 = 0;
  sub_157BE40(a1, (int)v59, a3, v25, v24, v23, v42, v44, v47[0], v49, v51, v53, (__int64)ptr, v55);
  *(_QWORD *)v59 = &off_1C4CA60;
  if ( v80 )
    sub_186B220((void *)(v80 - 8));
  v26 = v78;
  if ( v78 )
  {
    v27 = v79;
    v22 = (*(_DWORD *)(v78 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v27, v26);
  }
  v28 = v76;
  if ( v76 )
  {
    v29 = v77;
    v22 = (*(_DWORD *)(v76 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v29, v28);
  }
  v30 = v74;
  if ( v74 )
  {
    v31 = v75;
    v22 = (*(_DWORD *)(v74 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v31, v30);
  }
  v73 = &qword_1C637E8;
  sub_15841B0(&v73);
  v72 = &qword_1C637E8;
  sub_15841B0(&v72);
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  sub_15841B0(v59);
  if ( *((_QWORD *)&v57 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v57 + 1) - 8LL));
  if ( (_QWORD)v57 )
    sub_186B220((void *)(v57 - 8));
  if ( ptr )
    sub_186B220(ptr);
  return a1;
}

