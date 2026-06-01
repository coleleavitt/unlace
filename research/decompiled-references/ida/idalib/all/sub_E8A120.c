void __fastcall sub_E8A120(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        __int64 a9)
{
  _BYTE *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall **v16)(); // [rsp+40h] [rbp-438h] BYREF
  int v17; // [rsp+48h] [rbp-430h]
  __int128 v18; // [rsp+50h] [rbp-428h]
  __int64 v19; // [rsp+60h] [rbp-418h]
  char v20; // [rsp+68h] [rbp-410h]
  int v21; // [rsp+6Ch] [rbp-40Ch]
  void **v22; // [rsp+70h] [rbp-408h]
  void *v23; // [rsp+80h] [rbp-3F8h] BYREF
  __m128i si128; // [rsp+88h] [rbp-3F0h]
  _BYTE v25[72]; // [rsp+98h] [rbp-3E0h] BYREF
  void *ptr; // [rsp+E0h] [rbp-398h] BYREF
  _BYTE v27[24]; // [rsp+E8h] [rbp-390h] BYREF
  __int64 v28; // [rsp+100h] [rbp-378h]
  char v29; // [rsp+108h] [rbp-370h]
  int v30; // [rsp+10Ch] [rbp-36Ch]
  void **v31; // [rsp+110h] [rbp-368h]
  __int64 (__fastcall **v32)(); // [rsp+140h] [rbp-338h] BYREF
  int v33; // [rsp+148h] [rbp-330h]
  __int128 v34; // [rsp+150h] [rbp-328h]
  __int64 v35; // [rsp+160h] [rbp-318h]
  char v36; // [rsp+168h] [rbp-310h]
  int v37; // [rsp+16Ch] [rbp-30Ch]
  _BYTE **v38; // [rsp+170h] [rbp-308h]
  void **p_ptr; // [rsp+178h] [rbp-300h]
  _BYTE *v40; // [rsp+180h] [rbp-2F8h] BYREF
  __m128i v41; // [rsp+188h] [rbp-2F0h]
  _BYTE v42[72]; // [rsp+198h] [rbp-2E0h] BYREF
  _BYTE v43[8]; // [rsp+1E0h] [rbp-298h] BYREF
  __int64 v44; // [rsp+1E8h] [rbp-290h]

  sub_E78640((__int64)v43, a1, a9);
  sub_995540(v44, "_CT");
  v23 = v25;
  *(_OWORD *)&v27[8] = 0;
  *(_DWORD *)v27 = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v29 = 0;
  v30 = 1;
  v28 = 0;
  ptr = &off_2BEBEE0;
  v31 = &v23;
  sub_227B8B0(&ptr, 0, 0, 0);
  v34 = 0;
  v38 = &v40;
  v33 = 2;
  v36 = 0;
  v37 = 1;
  v35 = 0;
  v32 = &off_2BEBEE0;
  sub_227B8B0(&v32, 0, 0, 0);
  v32 = &off_2C04F98;
  v40 = v42;
  v41 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  p_ptr = &ptr;
  sub_E88FE0(a1, a2, (__int64)&v32);
  sub_E7A440(&v32);
  ptr = &unk_2C76288;
  sub_227B7A0(&ptr);
  sub_227BF10(v44, v23, si128.m128i_i64[0]);
  v9 = &v27[16];
  v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2320LL) + 152LL);
  ptr = &v27[16];
  if ( (unsigned int)(v10 - 190000000) <= 0x155CBF )
  {
    v11 = 0;
    *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  }
  else
  {
    v11 = 0;
    *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    if ( a3 )
    {
      v18 = 0;
      v16 = &off_2BEBEE0;
      v17 = 2;
      v20 = 0;
      v21 = 1;
      v19 = 0;
      v22 = &ptr;
      sub_227B8B0(&v16, 0, 0, 0);
      v34 = 0;
      v38 = &v40;
      v32 = &off_2BEBEE0;
      v33 = 2;
      v36 = 0;
      v37 = 1;
      v35 = 0;
      sub_227B8B0(&v32, 0, 0, 0);
      v32 = &off_2C04F98;
      v40 = v42;
      v41 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      p_ptr = (void **)&v16;
      sub_E89C40(a1, a4 | a3 & 0xFFFFFFFFFFFFFFF8LL, 0, (__int64)&v32);
      sub_E7A440(&v32);
      v16 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v16);
      v11 = *(_QWORD *)v27;
      v9 = ptr;
    }
  }
  sub_227BF10(v44, v9, v11);
  sub_227B910(v44, a5);
  if ( a7 == -1 )
  {
    if ( a6 )
      sub_227B910(v44, a6);
  }
  else
  {
    sub_227B910(v44, a6);
    sub_227B930(v44, a7);
    sub_227B910(v44, a8);
  }
  if ( ptr != &v27[16] )
    free(ptr);
  if ( v23 != v25 )
    free(v23);
  sub_E7AB30((__int64)v43);
}
