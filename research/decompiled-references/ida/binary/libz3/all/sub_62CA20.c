__int64 __fastcall sub_62CA20(_QWORD *a1, __int64 *a2, int a3, int a4)
{
  char **v4; // r13
  char **exception; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  bool v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  int v23; // eax
  bool *v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rdi
  bool v27; // zf
  unsigned int v28; // eax
  unsigned int v29; // r13d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // r9
  __int64 v38; // r8
  __int64 v39; // r13
  __int64 v40; // rdi
  __int64 *v41; // rdx
  __int64 *v42; // r15
  unsigned __int64 v43; // r13
  __int64 v44; // rsi
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  int v48; // [rsp+0h] [rbp-2F0h]
  int v49; // [rsp+0h] [rbp-2F0h]
  const __m128i *v50; // [rsp+8h] [rbp-2E8h]
  __int64 v51; // [rsp+10h] [rbp-2E0h]
  __int64 v52; // [rsp+10h] [rbp-2E0h]
  int v53; // [rsp+18h] [rbp-2D8h]
  __int64 v54; // [rsp+18h] [rbp-2D8h]
  int v56; // [rsp+20h] [rbp-2D0h]
  __int64 *v57; // [rsp+28h] [rbp-2C8h]
  __int64 v58; // [rsp+30h] [rbp-2C0h]
  __int64 v59; // [rsp+30h] [rbp-2C0h]
  _QWORD *v60; // [rsp+38h] [rbp-2B8h]
  _QWORD *v62; // [rsp+48h] [rbp-2A8h]
  int v63[2]; // [rsp+70h] [rbp-280h] BYREF
  __int64 v64; // [rsp+78h] [rbp-278h]
  int v65[2]; // [rsp+90h] [rbp-260h] BYREF
  _BYTE *v66; // [rsp+120h] [rbp-1D0h]
  int v67; // [rsp+128h] [rbp-1C8h]
  __int64 v68; // [rsp+130h] [rbp-1C0h]
  _QWORD v69[19]; // [rsp+138h] [rbp-1B8h] BYREF
  int v70; // [rsp+1D0h] [rbp-120h]
  __int64 (__fastcall **v71)(); // [rsp+1D8h] [rbp-118h] BYREF
  int v72; // [rsp+268h] [rbp-88h]
  __int64 v73; // [rsp+270h] [rbp-80h]
  __int64 v74; // [rsp+278h] [rbp-78h]
  __int64 v75; // [rsp+280h] [rbp-70h]
  __int64 v76; // [rsp+288h] [rbp-68h]
  __int64 v77; // [rsp+290h] [rbp-60h]
  __int64 v78; // [rsp+298h] [rbp-58h]
  __int64 v79; // [rsp+2A0h] [rbp-50h]
  _BYTE v80[72]; // [rsp+2A8h] [rbp-48h] BYREF

  v7 = *a1;
  HIDWORD(v58) = a3;
  v51 = *a1;
  sub_1584DD0(v65, *a1, 0);
  *(_QWORD *)v65 = &off_1C4CA60;
  v66 = v80;
  v67 = 0;
  v68 = 0;
  sub_1584DD0(v69, v7, 0);
  v69[18] = 0;
  v70 = 0;
  v69[0] = &off_1C61DB8;
  sub_1584DD0(&v71, v7, 0);
  v74 = v7;
  v76 = v7;
  v72 = 0;
  v73 = 0;
  v71 = &off_1C61DE0;
  *(_QWORD *)v65 = &off_1C4CA80;
  v8 = *a2;
  v75 = 0;
  v9 = *(_QWORD *)(v8 + 40);
  v77 = 0;
  v78 = v7;
  v79 = 0;
  v80[8] = 0;
  sub_157BE40((int)v63, (int)v65, v9, SHIDWORD(v58), a4, v10, v48, (__int64)a1, v51, v53, a4, (int)v63, v58, v65);
  v54 = *(_QWORD *)v63;
  if ( *(_QWORD *)v63 )
    ++*(_DWORD *)(*(_QWORD *)v63 + 8LL);
  v11 = *a2;
  v12 = *(_DWORD *)(*a2 + 56);
  if ( !v12 )
  {
    v25 = v54;
    v37 = (__int64 *)(v11 + 72);
    v14 = 0;
    v62 = nullptr;
    v38 = 0;
    goto LABEL_25;
  }
  v62 = nullptr;
  v13 = v54;
  v14 = 0;
  v15 = 0;
  while ( 1 )
  {
    sub_157BE40(
      (int)v57,
      (int)v60,
      *(_DWORD *)(v11 + 8LL * v15 + 80) & 0xFFFFFFF8,
      SHIDWORD(v59),
      v56,
      v11,
      v49,
      (__int64)v50,
      v52,
      v54,
      v56,
      (int)v57,
      v59,
      v60);
    v25 = *(_QWORD *)v63;
    *(_QWORD *)v63 = v13;
    if ( v13 )
    {
      v26 = v64;
      v27 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v27 )
        sub_15D7BC0(v26, v13);
    }
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    if ( v14 )
    {
      v28 = *(_DWORD *)(v14 - 4);
      if ( v28 == *(_DWORD *)(v14 - 8) )
      {
        v29 = (3 * v28 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v31 = (unsigned int *)sub_186B300((void *)(v14 - 8), v30);
        v32 = v31[1];
        v14 = (unsigned __int64)(v31 + 2);
        *v31 = v29;
        LODWORD(v31) = v32;
        v18 = (_QWORD *)(v14 + 8 * v32);
        v17 = (_DWORD)v31 + 1;
      }
      else
      {
        v16 = v28;
        v17 = v28 + 1;
        v18 = (_QWORD *)(v14 + 8 * v16);
      }
    }
    else
    {
      v46 = (_QWORD *)sub_186B270(0x18u);
      v14 = (unsigned __int64)(v46 + 1);
      *v46 = 2;
      v17 = 1;
      v18 = (_QWORD *)v14;
    }
    *v18 = v25;
    *(_DWORD *)(v14 - 4) = v17;
    v11 = *a2;
    v19 = (*(_QWORD *)(*a2 + 8LL * v15 + 80) & 7LL) == 1;
    if ( v62 )
      break;
    v47 = (_QWORD *)sub_186B270(0xAu);
    v24 = (bool *)(v47 + 1);
    *v47 = 2;
    v62 = v47 + 1;
    v22 = v47 + 1;
    v11 = *a2;
    v23 = 1;
LABEL_9:
    *v24 = v19;
    ++v15;
    *((_DWORD *)v22 - 1) = v23;
    if ( v15 >= *(_DWORD *)(v11 + 56) )
      goto LABEL_24;
LABEL_10:
    v13 = v25;
  }
  v20 = *((_DWORD *)v62 - 1);
  if ( v20 != *((_DWORD *)v62 - 2) )
  {
    v21 = v20;
    v22 = v62;
    v23 = v20 + 1;
    v24 = (bool *)v62 + v21;
    goto LABEL_9;
  }
  v33 = (3 * v20 + 1) >> 1;
  v34 = v33 + 8;
  if ( v20 + 8 >= (unsigned int)v34 || v20 >= v33 )
  {
    v4 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v57, "Overflow encountered when expanding vector");
    *v4 = (char *)off_1C63128;
    sub_2333C0(v4 + 1, v57);
    sub_233E40((__int64)v57);
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v35 = (unsigned int *)sub_186B300(v62 - 1, v34);
  v36 = v35[1];
  v22 = v35 + 2;
  *v35 = v33;
  ++v15;
  v62 = v22;
  v11 = *a2;
  *((_BYTE *)v22 + v36) = v19;
  v35[1] = v36 + 1;
  if ( v15 < *(_DWORD *)(v11 + 56) )
    goto LABEL_10;
LABEL_24:
  v12 = *(_DWORD *)(v14 - 4);
  v37 = (__int64 *)(v11 + 72);
  v38 = (__int64)v22;
LABEL_25:
  v39 = sub_62C680(v50, v54, v12, v14, v38, v37, 0);
  ++*(_DWORD *)(v39 + 60);
  v40 = *a2;
  if ( *a2 )
  {
    v41 = (__int64 *)a2[1];
    v27 = (*(_DWORD *)(v40 + 60))-- == 1;
    if ( v27 )
      sub_62A330(v40, *v41);
  }
  *a2 = v39;
  *(_QWORD *)v65 = &off_1C4CA80;
  sub_267D20(v60);
  if ( v62 )
    sub_186B220(v62 - 1);
  if ( v14 )
  {
    v42 = (__int64 *)v14;
    v43 = v14 + 8LL * *(unsigned int *)(v14 - 4);
    if ( v14 < v43 )
    {
      do
      {
        while ( 1 )
        {
          v44 = *v42;
          if ( *v42 )
          {
            v27 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v27 )
              break;
          }
          if ( (unsigned __int64)++v42 >= v43 )
            goto LABEL_37;
        }
        sub_15D7BC0(v52, v44);
        ++v42;
      }
      while ( (unsigned __int64)v42 < v43 );
    }
LABEL_37:
    sub_186B220((void *)(v14 - 8));
  }
  sub_629F20(v54, v52);
  return sub_629FE0(v25, v52);
}

