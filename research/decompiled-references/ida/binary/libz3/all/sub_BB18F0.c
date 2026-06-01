__int64 __fastcall sub_BB18F0(__int64 a1, __int64 a2, unsigned int **a3, _QWORD ***a4)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  _QWORD **v10; // rbx
  _QWORD **i; // r13
  unsigned int *v12; // r14
  unsigned int *j; // rbx
  __int64 *v14; // rbx
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v21; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 *v22; // [rsp+20h] [rbp-1B8h]
  void *v23; // [rsp+28h] [rbp-1B0h] BYREF
  void *v24; // [rsp+40h] [rbp-198h]
  __int64 v25; // [rsp+58h] [rbp-180h]
  _BYTE v26[16]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v27[24]; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v28[16]; // [rsp+88h] [rbp-150h] BYREF
  _BYTE v29[64]; // [rsp+98h] [rbp-140h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-100h] BYREF
  __m128 v31; // [rsp+E0h] [rbp-F8h]
  int v32; // [rsp+F0h] [rbp-E8h]
  __int64 *v33; // [rsp+F8h] [rbp-E0h]
  __int64 v34; // [rsp+100h] [rbp-D8h]
  int v35; // [rsp+108h] [rbp-D0h]
  __int64 *v36; // [rsp+110h] [rbp-C8h]
  __int64 v37; // [rsp+118h] [rbp-C0h]
  int v38; // [rsp+120h] [rbp-B8h]
  __int64 v39; // [rsp+128h] [rbp-B0h]
  __int64 v40; // [rsp+130h] [rbp-A8h]
  __int64 *v41; // [rsp+138h] [rbp-A0h]
  __int64 v42; // [rsp+140h] [rbp-98h]
  __int64 v43; // [rsp+148h] [rbp-90h]
  __int64 v44; // [rsp+150h] [rbp-88h]
  __int64 v45; // [rsp+158h] [rbp-80h]
  _BYTE v46[24]; // [rsp+160h] [rbp-78h] BYREF
  _BYTE v47[8]; // [rsp+178h] [rbp-60h] BYREF
  void *v48; // [rsp+180h] [rbp-58h]
  void *ptr; // [rsp+188h] [rbp-50h]

  v6 = *(_QWORD *)(a1 + 24);
  sub_16511B0(&v23);
  v22 = (__int64 *)&off_1C63D10;
  v25 = v6;
  sub_16669D0(v26, v6);
  sub_16744A0(v27, v6);
  sub_1684300(v28, v6);
  sub_15C5470(v29, v6);
  v30 = v6;
  sub_180C5A0(&v21, "seq");
  v7 = sub_15DA4C0(v6 + 560, &v21);
  v8 = sub_15D2690(v6, v7);
  v31 = _mm_loadh_ps((const double *)(v8 + 88));
  v9 = *(_DWORD *)(v8 + 16);
  v33 = &v30;
  v34 = v30;
  v37 = v30;
  v40 = v30;
  v32 = v9;
  v35 = v9;
  v36 = &v30;
  v38 = v9;
  v39 = 0;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  v44 = 0xFFFFFFFFLL;
  v45 = 0;
  sub_15F01E0(v46, v6);
  sub_1624F90(v47, v6);
  v21 = 0;
  v10 = *a4;
  if ( *a4 )
  {
    for ( i = &v10[2 * *((unsigned int *)v10 - 1)]; i != v10; v10 += 2 )
    {
      if ( v10[1][1] != (*v10)[1] )
        std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), **v10, 2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), *v10[1], 2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v12 = *a3;
  if ( *a3 )
  {
    for ( j = &v12[*(v12 - 1)]; j != v12; ++v12 )
    {
      sub_BB17F0(a1, a2, *v12);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_18572D0(&v21);
  v22 = (__int64 *)&off_1C63D10;
  if ( ptr )
    sub_186B220(ptr);
  if ( v48 )
    sub_186B220(v48);
  v14 = v41;
  if ( v41 )
  {
    v15 = (unsigned __int64)&v41[*((unsigned int *)v41 - 1)];
    if ( (unsigned __int64)v41 >= v15 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = v40;
          if ( (*(_DWORD *)(v16 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_20;
      }
      sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v15 );
LABEL_20:
    v14 = v41;
    if ( v41 )
LABEL_21:
      sub_186B220(v14 - 1);
  }
  if ( v39 )
    sub_186B220((void *)(v39 - 8));
  v22 = qword_1C7A350;
  if ( v24 )
    sub_186B220(v24);
  if ( v23 )
    sub_186B220(v23);
  return a2;
}

