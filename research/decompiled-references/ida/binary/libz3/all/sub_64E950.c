__int64 *__fastcall sub_64E950(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // r9d
  unsigned int v13; // ebx
  __int64 *result; // rax
  void *v15; // [rsp+0h] [rbp-1D8h] BYREF
  void *v16; // [rsp+8h] [rbp-1D0h]
  __int64 v17; // [rsp+10h] [rbp-1C8h] BYREF
  int v18; // [rsp+18h] [rbp-1C0h]
  int v19[2]; // [rsp+20h] [rbp-1B8h] BYREF
  void *v20; // [rsp+28h] [rbp-1B0h] BYREF
  int v21; // [rsp+30h] [rbp-1A8h]
  int v22; // [rsp+38h] [rbp-1A0h]
  void *v23; // [rsp+40h] [rbp-198h]
  void *v24; // [rsp+48h] [rbp-190h]
  int v25; // [rsp+50h] [rbp-188h]
  __int64 v26; // [rsp+58h] [rbp-180h]
  _BYTE v27[16]; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v28[24]; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-150h] BYREF
  _BYTE v30[64]; // [rsp+98h] [rbp-140h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-100h] BYREF
  __m128 v32; // [rsp+E0h] [rbp-F8h]
  int v33; // [rsp+F0h] [rbp-E8h]
  __int64 *v34; // [rsp+F8h] [rbp-E0h]
  __int64 v35; // [rsp+100h] [rbp-D8h]
  int v36; // [rsp+108h] [rbp-D0h]
  __int64 *v37; // [rsp+110h] [rbp-C8h]
  __int64 v38; // [rsp+118h] [rbp-C0h]
  int v39; // [rsp+120h] [rbp-B8h]
  __int64 v40; // [rsp+128h] [rbp-B0h]
  __int64 v41[6]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v42[24]; // [rsp+160h] [rbp-78h] BYREF
  _BYTE v43[8]; // [rsp+178h] [rbp-60h] BYREF
  void *v44; // [rsp+180h] [rbp-58h]
  void *ptr; // [rsp+188h] [rbp-50h]

  v4 = *a1;
  sub_16511B0(&v20);
  *(_QWORD *)v19 = &off_1C63D10;
  v26 = v4;
  sub_16669D0(v27, v4);
  sub_16744A0(v28, v4);
  sub_1684300(v29, v4);
  sub_15C5470(v30, v4);
  v31 = v4;
  sub_180C5A0(&v15, "seq");
  v5 = sub_15DA4C0(v4 + 560, &v15);
  v6 = sub_15D2690(v4, v5);
  v32 = _mm_loadh_ps((const double *)(v6 + 88));
  v7 = *(_DWORD *)(v6 + 16);
  v34 = &v31;
  v35 = v31;
  v38 = v31;
  v41[0] = v31;
  v33 = v7;
  v36 = v7;
  v37 = &v31;
  v39 = v7;
  v40 = 0;
  memset(&v41[1], 0, 24);
  v41[4] = 0xFFFFFFFFLL;
  v41[5] = 0;
  sub_15F01E0(v42, v4);
  sub_1624F90(v43, v4);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( (unsigned __int8)sub_17E8F70(a3 + 16) )
  {
    sub_17E8F90(
      (int)&v15,
      a3 + 16,
      v8,
      v9,
      v10,
      v11,
      (int)v15,
      (int)v16,
      v17,
      v18,
      v19[0],
      (int)v20,
      v21,
      v22,
      (int)v23,
      v24,
      v25,
      v26);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v15 != &v17 )
      operator delete(v15, v17 + 1);
  }
  else
  {
    sub_39A600(a2, *(const char **)(a3 + 16));
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = 0;
  while ( v13 < *(_DWORD *)(a3 + 32) )
  {
    sub_160AF10(a2, *(_QWORD *)(a3 + 8LL * v13++ + 48), (int)v19, (int)&v15, 0, v12, 0, v16);
    sub_18572D0(&v15);
    if ( v13 >= *(_DWORD *)(a3 + 32) )
      break;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)v19 = &off_1C63D10;
  if ( ptr )
    sub_186B220(ptr);
  if ( v44 )
    sub_186B220(v44);
  sub_2334C0(v41);
  if ( v40 )
    sub_186B220((void *)(v40 - 8));
  result = qword_1C7A350;
  *(_QWORD *)v19 = qword_1C7A350;
  if ( v23 )
    result = (__int64 *)sub_186B220(v23);
  if ( v20 )
    return (__int64 *)sub_186B220(v20);
  return result;
}

