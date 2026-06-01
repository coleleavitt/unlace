__int64 __fastcall sub_588670(int a1, __int64 a2, __int64 a3, int a4)
{
  char **exception; // r12
  int v7; // r9d
  __int64 v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  unsigned int v11; // ebp
  __int64 v12; // r14
  __int64 v13; // r8
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  unsigned __int64 v23; // r12
  __int64 *v24; // rbp
  __int64 v25; // rsi
  bool v26; // zf
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned int v34; // ecx
  size_t v35; // rsi
  unsigned int *v36; // rax
  _QWORD *v37; // rax
  void **p_ptr; // [rsp+0h] [rbp-2D8h]
  __int64 *v39; // [rsp+8h] [rbp-2D0h]
  __int64 v40; // [rsp+8h] [rbp-2D0h]
  int v41; // [rsp+10h] [rbp-2C8h]
  int v42[2]; // [rsp+10h] [rbp-2C8h]
  __int64 v43; // [rsp+18h] [rbp-2C0h]
  int v44; // [rsp+20h] [rbp-2B8h]
  unsigned int v45; // [rsp+24h] [rbp-2B4h]
  int v46; // [rsp+28h] [rbp-2B0h]
  __int64 v47; // [rsp+30h] [rbp-2A8h]
  void *ptr; // [rsp+38h] [rbp-2A0h] BYREF
  int v49[2]; // [rsp+40h] [rbp-298h]
  void *v50; // [rsp+48h] [rbp-290h]
  __int64 v51[4]; // [rsp+50h] [rbp-288h] BYREF
  __int64 v52[20]; // [rsp+70h] [rbp-268h] BYREF
  __int64 v53; // [rsp+110h] [rbp-1C8h]
  int *v54; // [rsp+118h] [rbp-1C0h] BYREF
  int *v55; // [rsp+1B8h] [rbp-120h] BYREF
  __int64 v56; // [rsp+250h] [rbp-88h]
  __int64 v57; // [rsp+258h] [rbp-80h]
  __int64 v58; // [rsp+260h] [rbp-78h]
  __int64 v59; // [rsp+268h] [rbp-70h]
  __int64 v60; // [rsp+270h] [rbp-68h]
  __int64 v61; // [rsp+278h] [rbp-60h]
  __int64 v62; // [rsp+280h] [rbp-58h]
  _BYTE v63[80]; // [rsp+288h] [rbp-50h] BYREF

  v41 = a1;
  v46 = a4;
  v39 = v52;
  sub_633760(v52, *(_QWORD *)(a2 + 40), 0, v63);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(_QWORD *)(a3 + 16);
  v52[0] = (__int64)&off_1C4CA80;
  v63[8] = 0;
  *(_QWORD *)v49 = v8;
  if ( v9 )
  {
    v10 = nullptr;
    v11 = 0;
    p_ptr = &ptr;
    while ( v11 < *(_DWORD *)(v9 - 4) )
    {
      v12 = *(_QWORD *)(a2 + 40);
      v13 = *(_QWORD *)(v9 + 8LL * v11);
      ptr = (void *)(8LL * v11 + 1);
      v14 = sub_15E3510(v12, p_ptr, 0, 0, v13, 0);
      v17 = sub_15DC610(v12, v14, 0, 0, v15, v16, (int)p_ptr, (int)v39, v41, v43, v44, v46, v47, (int)ptr, v49[0], v50);
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      if ( v10 )
      {
        v19 = *((_DWORD *)v10 - 1);
        if ( v19 == *((_DWORD *)v10 - 2) )
        {
          v34 = (3 * v19 + 1) >> 1;
          v35 = 8 * v34 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v35 || v19 >= v34 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v51, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v51);
            sub_233E40((__int64)v51);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (3 * v19 + 1) >> 1;
          v43 = v18;
          v36 = (unsigned int *)sub_186B300(v10 - 1, v35);
          v10 = v36 + 2;
          v18 = v43;
          *v36 = v45;
          LODWORD(v36) = v36[1];
          v22 = &v10[(unsigned int)v36];
          v21 = (_DWORD)v36 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v10[v20];
        }
      }
      else
      {
        v43 = v17;
        v37 = (_QWORD *)sub_186B270(0x18u);
        v10 = v37 + 1;
        *v37 = 2;
        v18 = v43;
        v21 = 1;
        v22 = v10;
      }
      *v22 = v18;
      v9 = *(_QWORD *)(a3 + 16);
      ++v11;
      *((_DWORD *)v10 - 1) = v21;
      if ( !v9 )
        goto LABEL_10;
    }
    if ( !v10 )
      goto LABEL_36;
LABEL_10:
    sub_157BE40(
      v41,
      (int)v39,
      v46,
      *((_DWORD *)v10 - 1),
      (int)v10,
      v7,
      (int)p_ptr,
      (__int64)v39,
      v41,
      v43,
      v44,
      v46,
      v47,
      ptr);
    v23 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v23 )
    {
      v24 = v10;
      do
      {
        while ( 1 )
        {
          v25 = *v24;
          if ( *v24 )
          {
            v26 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( (unsigned __int64)++v24 >= v23 )
            goto LABEL_16;
        }
        ++v24;
        sub_15D7BC0(v8, v25);
      }
      while ( (unsigned __int64)v24 < v23 );
    }
LABEL_16:
    sub_186B220(v10 - 1);
  }
  else
  {
LABEL_36:
    sub_157BE40(v41, (int)v39, v46, 0, 0, v7, (int)p_ptr, (__int64)v39, v41, v43, v44, v46, v47, ptr);
  }
  v52[0] = (__int64)&off_1C4CA60;
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  v27 = v60;
  if ( v60 )
  {
    v28 = v61;
    v26 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v28, v27);
  }
  v29 = v58;
  if ( v58 )
  {
    v30 = v59;
    v26 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v30, v29);
  }
  v31 = v56;
  if ( v56 )
  {
    v32 = v57;
    v26 = (*(_DWORD *)(v56 + 8))-- == 1;
    if ( v26 )
      sub_15D7BC0(v32, v31);
  }
  v55 = &qword_1C637E8;
  sub_15841B0(&v55);
  v54 = &qword_1C637E8;
  sub_15841B0(&v54);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  sub_15841B0(v40);
  return *(_QWORD *)v42;
}

