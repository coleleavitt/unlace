__int64 *__fastcall sub_BB1020(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // edx
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *result; // rax
  _DWORD *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // r13
  __int64 v23; // [rsp+28h] [rbp-1B8h] BYREF
  int v24[2]; // [rsp+30h] [rbp-1B0h] BYREF
  void *v25; // [rsp+38h] [rbp-1A8h] BYREF
  void *v26; // [rsp+50h] [rbp-190h]
  __int64 v27; // [rsp+68h] [rbp-178h]
  _BYTE v28[16]; // [rsp+70h] [rbp-170h] BYREF
  _BYTE v29[24]; // [rsp+80h] [rbp-160h] BYREF
  _BYTE v30[16]; // [rsp+98h] [rbp-148h] BYREF
  _BYTE v31[64]; // [rsp+A8h] [rbp-138h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-F8h] BYREF
  __m128 v33; // [rsp+F0h] [rbp-F0h]
  int v34; // [rsp+100h] [rbp-E0h]
  __int64 *v35; // [rsp+108h] [rbp-D8h]
  __int64 v36; // [rsp+110h] [rbp-D0h]
  int v37; // [rsp+118h] [rbp-C8h]
  __int64 *v38; // [rsp+120h] [rbp-C0h]
  __int64 v39; // [rsp+128h] [rbp-B8h]
  int v40; // [rsp+130h] [rbp-B0h]
  __int64 v41; // [rsp+138h] [rbp-A8h]
  __int64 v42; // [rsp+140h] [rbp-A0h]
  __int64 *v43; // [rsp+148h] [rbp-98h]
  __int64 v44; // [rsp+150h] [rbp-90h]
  __int64 v45; // [rsp+158h] [rbp-88h]
  __int64 v46; // [rsp+160h] [rbp-80h]
  __int64 v47; // [rsp+168h] [rbp-78h]
  _BYTE v48[24]; // [rsp+170h] [rbp-70h] BYREF
  _BYTE v49[8]; // [rsp+188h] [rbp-58h] BYREF
  void *v50; // [rsp+190h] [rbp-50h]
  void *ptr; // [rsp+198h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 24);
  sub_16511B0(&v25);
  *(_QWORD *)v24 = &off_1C63D10;
  v27 = v5;
  sub_16669D0(v28, v5);
  sub_16744A0(v29, v5);
  sub_1684300(v30, v5);
  sub_15C5470(v31, v5);
  v32 = v5;
  sub_180C5A0(&v23, "seq");
  v6 = sub_15DA4C0(v5 + 560, &v23);
  v7 = sub_15D2690(v5, v6);
  v33 = _mm_loadh_ps((const double *)(v7 + 88));
  v8 = *(_DWORD *)(v7 + 16);
  v35 = &v32;
  v36 = v32;
  v39 = v32;
  v42 = v32;
  v34 = v8;
  v37 = v8;
  v38 = &v32;
  v40 = v8;
  v41 = 0;
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  v46 = 0xFFFFFFFFLL;
  v47 = 0;
  sub_15F01E0(v48, v5);
  sub_1624F90(v49, v5);
  v23 = 0;
  v9 = 0;
  if ( a3 )
  {
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v9;
    }
    while ( a3 != v9 );
  }
  sub_160DF70(a2, (int)a4, (int)v24, (int)&v23, a3, 0, nullptr);
  std::__ostream_insert<char,std::char_traits<char>>();
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 && (v11 = *a4, (unsigned int)v11 < *(_DWORD *)(v10 - 4)) && (v12 = *(_QWORD *)(v10 + 24 * v11 + 8)) != 0 )
  {
    sub_BB1020(a1, a2, (unsigned int)(a3 + 1), v12);
  }
  else if ( !*((_WORD *)a4 + 2) )
  {
    v19 = *(_DWORD **)(*((_QWORD *)a4 + 2) + 24LL);
    if ( v19 )
    {
      if ( *(_DWORD *)(a1 + 1744) == *v19 && v19[1] == 2 && a4[6] == 2 )
      {
        v20 = a3 + 1;
        v21 = *((_QWORD *)a4 + 5);
        sub_BB1020(a1, a2, v20, *((_QWORD *)a4 + 4));
        sub_BB1020(a1, a2, v20, v21);
      }
    }
  }
  sub_18572D0(&v23);
  *(_QWORD *)v24 = &off_1C63D10;
  if ( ptr )
    sub_186B220(ptr);
  if ( v50 )
    sub_186B220(v50);
  v13 = v43;
  if ( v43 )
  {
    v14 = (unsigned __int64)&v43[*((unsigned int *)v43 - 1)];
    if ( (unsigned __int64)v43 >= v14 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v16 = v42;
          if ( (*(_DWORD *)(v15 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v13 >= v14 )
          goto LABEL_18;
      }
      sub_15D7BC0(v16, v15);
      ++v13;
    }
    while ( (unsigned __int64)v13 < v14 );
LABEL_18:
    v13 = v43;
    if ( v43 )
LABEL_19:
      sub_186B220(v13 - 1);
  }
  if ( v41 )
    sub_186B220((void *)(v41 - 8));
  result = qword_1C7A350;
  *(_QWORD *)v24 = qword_1C7A350;
  if ( v26 )
    result = (__int64 *)sub_186B220(v26);
  if ( v25 )
    return (__int64 *)sub_186B220(v25);
  return result;
}

