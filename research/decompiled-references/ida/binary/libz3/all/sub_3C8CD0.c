__int64 __fastcall sub_3C8CD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  unsigned int *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int *v10; // rcx
  __int64 v11; // r14
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rsi
  _DWORD *v16; // rbp
  void *v17; // rcx
  __int64 v18; // rax
  unsigned int v20; // edx
  size_t v21; // rsi
  unsigned int v22; // r13d
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  char **exception; // r12
  __int64 v28; // [rsp+0h] [rbp-158h]
  int v29; // [rsp+8h] [rbp-150h]
  void *v30; // [rsp+8h] [rbp-150h]
  int v31; // [rsp+10h] [rbp-148h]
  __int64 v32; // [rsp+18h] [rbp-140h] BYREF
  __int64 v33; // [rsp+20h] [rbp-138h] BYREF
  unsigned int *v34; // [rsp+28h] [rbp-130h] BYREF
  void *ptr; // [rsp+30h] [rbp-128h] BYREF
  int v36[2]; // [rsp+38h] [rbp-120h]
  int v37[2]; // [rsp+40h] [rbp-118h] BYREF
  int v38; // [rsp+48h] [rbp-110h]
  __int16 v39; // [rsp+4Ch] [rbp-10Ch]
  int v40[6]; // [rsp+50h] [rbp-108h] BYREF
  int v41[4]; // [rsp+68h] [rbp-F0h]
  int v42[4]; // [rsp+78h] [rbp-E0h]
  int v43[2]; // [rsp+88h] [rbp-D0h]
  int v44[2]; // [rsp+90h] [rbp-C8h]
  int v45[8]; // [rsp+98h] [rbp-C0h] BYREF
  char v46; // [rsp+B8h] [rbp-A0h]
  int v47; // [rsp+C0h] [rbp-98h]
  int v48; // [rsp+C8h] [rbp-90h]
  int v49; // [rsp+D0h] [rbp-88h]
  int v50; // [rsp+D8h] [rbp-80h]
  int v51; // [rsp+E0h] [rbp-78h]
  int v52; // [rsp+E8h] [rbp-70h]
  int v53; // [rsp+F0h] [rbp-68h]
  int v54; // [rsp+F8h] [rbp-60h]
  int v55; // [rsp+100h] [rbp-58h]
  int v56; // [rsp+108h] [rbp-50h]
  int v57; // [rsp+110h] [rbp-48h]
  int v58; // [rsp+118h] [rbp-40h]
  int v59; // [rsp+120h] [rbp-38h]
  int v60; // [rsp+128h] [rbp-30h]
  int v61; // [rsp+130h] [rbp-28h]
  int v62; // [rsp+138h] [rbp-20h]
  int v63; // [rsp+140h] [rbp-18h]
  char v64; // [rsp+148h] [rbp-10h]

  v2 = 0;
  v3 = nullptr;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 24);
  v28 = a2;
  v33 = v4;
  ptr = nullptr;
  *(_QWORD *)v36 = v4;
  if ( v5 )
  {
    while ( v2 < *(_DWORD *)(v5 - 4) )
    {
      v6 = *(_QWORD *)(v5 + 8LL * v2);
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      if ( v3 )
      {
        v7 = *(v3 - 1);
        if ( v7 == *(v3 - 2) )
        {
          v20 = (3 * v7 + 1) >> 1;
          v21 = 8 * v20 + 8;
          v22 = v20;
          if ( 8 * v7 + 8 >= (unsigned int)v21 || v7 >= v20 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3BCB70((__int64 *)v37, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v37);
            sub_233E40((__int64)v37);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v3 - 2, v21);
          v24 = v23[1];
          v3 = v23 + 2;
          *v23 = v22;
          LODWORD(v23) = v24;
          v10 = &v3[2 * v24];
          v5 = *(_QWORD *)(a1 + 24);
          v9 = (_DWORD)v23 + 1;
        }
        else
        {
          v8 = v7;
          v9 = v7 + 1;
          v10 = &v3[2 * v8];
        }
      }
      else
      {
        v26 = (_QWORD *)sub_186B270(0x18u);
        v10 = (unsigned int *)(v26 + 1);
        *v26 = 2;
        v5 = *(_QWORD *)(a1 + 24);
        v9 = 1;
        v3 = v10;
      }
      *(_QWORD *)v10 = v6;
      ++v2;
      *(v3 - 1) = v9;
      if ( !v5 )
      {
        v11 = *(_QWORD *)(a1 + 32);
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        goto LABEL_11;
      }
    }
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    if ( !v3 )
      goto LABEL_32;
LABEL_11:
    v12 = *(v3 - 1);
    if ( v12 == *(v3 - 2) )
      goto LABEL_32;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 32);
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v3 = nullptr;
LABEL_32:
    v34 = v3;
    sub_23A6F0(&v34);
    v3 = v34;
    v12 = *(v34 - 1);
  }
  *(_QWORD *)&v3[2 * v12] = v11;
  *(v3 - 1) = v12 + 1;
  v39 = 0;
  *(_QWORD *)v43 = v45;
  v32 = 0;
  *(_QWORD *)v37 = v4;
  v38 = 256;
  v40[3] = 0;
  *(_QWORD *)v44 = 0x1000000000LL;
  *(_OWORD *)v41 = 0;
  *(_OWORD *)v42 = 0;
  sub_14DC230(v37, &v32);
  v15 = *(v3 - 1);
  if ( HIBYTE(v38) )
  {
    sub_14E1930((int)v37, v28, v29, v31, v32, v33, (__int64)v34, ptr, v36[0]);
  }
  else
  {
    if ( (_BYTE)v38 )
    {
      if ( (unsigned int)sub_14DD000(v37, v15, v3, &ptr) != 5 )
        goto LABEL_15;
    }
    else if ( (unsigned int)sub_14DC740(
                              (int)v37,
                              v15,
                              (int)v3,
                              (int)&ptr,
                              v13,
                              v14,
                              v28,
                              v29,
                              v31,
                              v32,
                              v33,
                              v34,
                              (int)ptr,
                              v36[0],
                              v37[0],
                              v38,
                              v40[0],
                              v40[2],
                              v40[4],
                              v41[0],
                              v41[2],
                              v42[0],
                              v42[2],
                              v43[0],
                              v44[0],
                              v45[0],
                              v45[2],
                              v45[4],
                              v45[6],
                              v46,
                              v47,
                              v48,
                              v49,
                              v50,
                              v51,
                              v52,
                              v53,
                              v54,
                              v55,
                              v56,
                              v57,
                              v58,
                              v59,
                              v60,
                              v61,
                              v62,
                              v63,
                              v64) != 5 )
    {
      goto LABEL_15;
    }
    v25 = sub_15E1AF0(v37[0]);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v30 = (void *)v25;
    sub_3BCB50((__int64)ptr, *(__int64 *)v36);
    ptr = v30;
  }
LABEL_15:
  sub_39A7A0((__int64)v37);
  sub_18572D0(&v32);
  v16 = *(_DWORD **)a1;
  v17 = ptr;
  if ( *(_QWORD *)(v4 + 864) == *(_QWORD *)a1 )
  {
    v16 = ptr;
  }
  else
  {
    if ( *(void **)(v4 + 856) == ptr )
    {
      if ( v16 )
        ++v16[2];
      sub_3BCB50((__int64)v17, *(__int64 *)v36);
    }
    else
    {
      v18 = sub_15E1B70(v4);
      v16 = (_DWORD *)v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      sub_3BCB50((__int64)ptr, *(__int64 *)v36);
    }
    ptr = v16;
  }
  sub_1606360(v37, v16, v4, 0, 0, 0);
  sub_160E8B0(v28, v37);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(v40);
  sub_3BCB50((__int64)ptr, *(__int64 *)v36);
  v34 = v3;
  return sub_2334C0(&v33);
}

