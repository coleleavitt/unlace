__int64 __fastcall sub_7D5940(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  char **exception; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rcx
  _BOOL8 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // r15d
  unsigned int v19; // edx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  __int64 i; // r15
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r15
  int v31; // r9d
  __int64 v32; // rdx
  int v33; // ecx
  unsigned int v34; // eax
  __int64 v35; // rsi
  unsigned int v36; // r14d
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 *v44; // r15
  unsigned __int64 v45; // r12
  __int64 v46; // rsi
  int v48; // [rsp+0h] [rbp-2C0h]
  __int64 v49; // [rsp+8h] [rbp-2B8h]
  __int64 v50; // [rsp+8h] [rbp-2B8h]
  __int64 v51; // [rsp+10h] [rbp-2B0h]
  void *v52; // [rsp+18h] [rbp-2A8h]
  int v53[2]; // [rsp+18h] [rbp-2A8h]
  unsigned int v54; // [rsp+20h] [rbp-2A0h]
  __int64 v55; // [rsp+20h] [rbp-2A0h]
  int v57[2]; // [rsp+28h] [rbp-298h]
  __int64 v58; // [rsp+30h] [rbp-290h] BYREF
  void *v59[2]; // [rsp+38h] [rbp-288h] BYREF
  int v60[2]; // [rsp+50h] [rbp-270h] BYREF
  __int64 v61; // [rsp+58h] [rbp-268h]
  __int64 v62[19]; // [rsp+60h] [rbp-260h] BYREF
  int v63; // [rsp+F8h] [rbp-1C8h]
  __int64 v64; // [rsp+100h] [rbp-1C0h]
  _QWORD v65[19]; // [rsp+108h] [rbp-1B8h] BYREF
  int v66; // [rsp+1A0h] [rbp-120h]
  _QWORD v67[18]; // [rsp+1A8h] [rbp-118h] BYREF
  int v68; // [rsp+238h] [rbp-88h]
  __int64 v69; // [rsp+240h] [rbp-80h]
  __int64 v70; // [rsp+248h] [rbp-78h]
  __int64 v71; // [rsp+250h] [rbp-70h]
  __int64 v72; // [rsp+258h] [rbp-68h]
  __int64 v73; // [rsp+260h] [rbp-60h]
  __int64 v74; // [rsp+268h] [rbp-58h]
  __int64 v75; // [rsp+270h] [rbp-50h]
  _BYTE v76[72]; // [rsp+278h] [rbp-48h] BYREF

  v5 = a2;
  v52 = *(void **)(a1 + 72);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v59[1] = v52;
  if ( a3 )
  {
    v6 = *(unsigned int *)(a2 + 44);
    v7 = sub_15E1A70((int)v52);
    v8 = a2 + 80;
    v9 = 0;
    if ( *(_WORD *)(v5 + 4) == 2 )
      v9 = *(_DWORD *)(v5 + 16) == 0;
    v10 = sub_15DB6A0(
            v52,
            v9,
            *(unsigned int *)(v5 + 20),
            v8,
            v5 + 80 + 8LL * *(unsigned int *)(v5 + 20),
            v7,
            v6,
            v5 + 56,
            v5 + 64,
            0,
            0,
            0,
            0);
    v11 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v12 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v52, v5);
    v5 = v11;
  }
  v13 = sub_7D5350(a1, v5);
  v14 = *(unsigned int *)(v13 + 20);
  v15 = (_QWORD *)v13;
  if ( (_DWORD)v14 )
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    *v16 = 2;
    v17 = v16 + 1;
    v18 = 0;
    v19 = 1;
    v20 = v17;
    while ( 1 )
    {
      ++v18;
      *v17 = 0;
      *((_DWORD *)v20 - 1) = v19;
      if ( (_DWORD)v14 == v18 )
        break;
      if ( v19 == *((_DWORD *)v20 - 2) )
      {
        v22 = (3 * v19 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v23 || v19 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v62, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v62);
          sub_233E40((__int64)v62);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v54 = (3 * v19 + 1) >> 1;
        v24 = (unsigned int *)sub_186B300(v20 - 1, v23);
        v20 = v24 + 2;
        *v24 = v54;
        v25 = v24[1];
        v26 = v25;
        v17 = &v20[v25];
        v19 = v26 + 1;
      }
      else
      {
        v21 = v19++;
        v17 = &v20[v21];
      }
    }
    for ( i = 0; i != v14; ++i )
    {
      while ( 1 )
      {
        v59[0] = v15;
        HIDWORD(v58) = i;
        if ( !*(_QWORD *)(a4 + 16) )
          std::__throw_bad_function_call();
        v28 = (*(__int64 (__fastcall **)(__int64, void **, char *))(a4 + 24))(a4, v59, (char *)&v58 + 4);
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        v29 = v20[i];
        if ( v29 )
        {
          v12 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v12 )
            break;
        }
        v20[i++] = v28;
        if ( v14 == i )
          goto LABEL_27;
      }
      v49 = v28;
      sub_15D7BC0(v52, v29);
      v20[i] = v49;
    }
  }
  else
  {
    v20 = nullptr;
  }
LABEL_27:
  v30 = *(_QWORD *)(a1 + 72);
  sub_1584DD0(v62, v30, 0);
  v63 = 0;
  v62[18] = (__int64)v76;
  v62[0] = (__int64)&off_1C4CA60;
  v64 = 0;
  sub_1584DD0(v65, v30, 0);
  v65[18] = 0;
  v66 = 0;
  v65[0] = &off_1C61DB8;
  sub_1584DD0(v67, v30, 0);
  v70 = v30;
  v69 = 0;
  v71 = 0;
  v67[0] = &off_1C61DE0;
  v32 = v15[3];
  v68 = 0;
  v72 = v30;
  v73 = 0;
  v74 = v30;
  v75 = 0;
  v62[0] = (__int64)&off_1C4CA80;
  v76[8] = 1;
  if ( v20 )
    v33 = *((_DWORD *)v20 - 1);
  else
    v33 = 0;
  sub_157BE40(
    (int)v60,
    (int)v62,
    v32,
    v33,
    (int)v20,
    v31,
    v48,
    (__int64)v67,
    a1,
    (int)v52,
    (int)v65,
    (int)v62,
    v58,
    v59[0]);
  sub_7E5890(v51, v60);
  v34 = sub_7E58C0(v51, *(_QWORD *)v60);
  v35 = *(_QWORD *)v60;
  v36 = v34;
  if ( *(_QWORD *)v60 )
  {
    v37 = v61;
    v12 = (*(_DWORD *)(*(_QWORD *)v60 + 8LL))-- == 1;
    if ( v12 )
      sub_15D7BC0(v37, v35);
  }
  v62[0] = (__int64)&off_1C4CA60;
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  v38 = v73;
  if ( v73 )
  {
    v39 = v74;
    v12 = (*(_DWORD *)(v73 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v39, v38);
  }
  v40 = v71;
  if ( v71 )
  {
    v41 = v72;
    v12 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v41, v40);
  }
  v42 = v69;
  if ( v69 )
  {
    v43 = v70;
    v12 = (*(_DWORD *)(v69 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v43, v42);
  }
  v67[0] = &qword_1C637E8;
  sub_15841B0(v50);
  v65[0] = &qword_1C637E8;
  sub_15841B0(v55);
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  sub_15841B0(*(_QWORD *)v57);
  if ( v20 )
  {
    v44 = v20;
    v45 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
    if ( (unsigned __int64)v20 < v45 )
    {
      do
      {
        while ( 1 )
        {
          v46 = *v44;
          if ( *v44 )
          {
            v12 = (*(_DWORD *)(v46 + 8))-- == 1;
            if ( v12 )
              break;
          }
          if ( (unsigned __int64)++v44 >= v45 )
            goto LABEL_52;
        }
        sub_15D7BC0(*(_QWORD *)v53, v46);
        ++v44;
      }
      while ( (unsigned __int64)v44 < v45 );
    }
LABEL_52:
    sub_186B220(v20 - 1);
  }
  if ( v5 )
  {
    v12 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(*(_QWORD *)v53, v5);
  }
  return v36;
}

