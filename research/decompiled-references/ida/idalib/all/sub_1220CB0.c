void __fastcall sub_1220CB0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  size_t v7; // r12
  const void *v8; // r13
  __m128 v9; // xmm0
  char v10; // cl
  char *v11; // rdi
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  _BYTE *v14; // rax
  size_t v15; // rdx
  _QWORD *v16; // [rsp+0h] [rbp-338h] BYREF
  _QWORD *v17; // [rsp+8h] [rbp-330h] BYREF
  _QWORD *v18; // [rsp+10h] [rbp-328h]
  __int64 *v19; // [rsp+18h] [rbp-320h]
  void *v20; // [rsp+20h] [rbp-318h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-310h]
  __int64 v22; // [rsp+30h] [rbp-308h] BYREF
  _OWORD v23[2]; // [rsp+40h] [rbp-2F8h] BYREF
  char *v24; // [rsp+60h] [rbp-2D8h] BYREF
  __int16 v25; // [rsp+80h] [rbp-2B8h]
  _QWORD v26[4]; // [rsp+90h] [rbp-2A8h] BYREF
  __int16 v27; // [rsp+B0h] [rbp-288h]
  _QWORD v28[4]; // [rsp+C0h] [rbp-278h] BYREF
  __int16 v29; // [rsp+E0h] [rbp-258h]
  _QWORD v30[4]; // [rsp+F0h] [rbp-248h] BYREF
  __int16 v31; // [rsp+110h] [rbp-228h]
  void *ptr; // [rsp+120h] [rbp-218h] BYREF
  __m128i si128; // [rsp+128h] [rbp-210h]
  _BYTE v34[136]; // [rsp+138h] [rbp-200h] BYREF
  void *v35; // [rsp+1C0h] [rbp-178h] BYREF
  __m128i v36; // [rsp+1C8h] [rbp-170h]
  _WORD v37[68]; // [rsp+1D8h] [rbp-160h] BYREF
  void *v38; // [rsp+260h] [rbp-D8h] BYREF
  __m128i v39; // [rsp+268h] [rbp-D0h]
  __int64 v40; // [rsp+278h] [rbp-C0h] BYREF
  __int16 v41; // [rsp+280h] [rbp-B8h]

  v4 = *a1;
  v5 = (_QWORD *)a1[1];
  v16 = a3;
  (*(void (__fastcall **)(void **, __int64 *))(v4 + 552))(&v20, a1);
  if ( !v21 )
  {
    v14 = (_BYTE *)sub_228ACC0(0);
    sub_99BDC0(&v20, 0, v21, v14, v15);
  }
  v17 = v5;
  v6 = a1[1];
  v7 = *(_QWORD *)(v6 + 112);
  v8 = *(const void **)(v6 + 104);
  ptr = v34;
  v9 = _mm_loadh_ps((const double *)&v17);
  v17 = a2;
  v23[0] = v9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v23[1] = _mm_loadh_ps((const double *)&v16);
  if ( v7 > 0x80 )
  {
    sub_2236E10(&ptr, v34, v7, 1);
    v11 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v7 )
      goto LABEL_5;
    v11 = v34;
  }
  memcpy(v11, v8, v7);
  v7 += si128.m128i_i64[0];
LABEL_5:
  si128.m128i_i64[0] = v7;
  v28[0] = "..";
  v37[4] = 257;
  v31 = 259;
  v29 = 259;
  v16 = v28;
  v41 = 257;
  v30[0] = "include";
  v18 = v30;
  sub_228A3B0(&ptr, v28, v30, &v35, &v38);
  v10 = *((_DWORD *)a1 + 16) == 17;
  v17 = v23;
  if ( !(unsigned __int8)sub_121F620(v23, ptr, si128.m128i_i64[0], v10) )
  {
    v35 = v37;
    v36 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&v35, v20, (_BYTE *)v20 + v21);
    v12 = v18;
    v28[0] = "local";
    v27 = 259;
    v41 = 257;
    v31 = 259;
    v26[0] = "usr";
    v13 = v18;
    v30[0] = "include";
    v29 = 259;
    v18 = v26;
    sub_228A3B0(&v35, v26, v16, v13, &v38);
    if ( !(unsigned __int8)sub_121F620(v17, v35, v36.m128i_i64[0], 0) )
    {
      v38 = &v40;
      v19 = &v40;
      v39 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(&v38, v20, (_BYTE *)v20 + v21);
      v29 = 257;
      v27 = 259;
      v31 = 257;
      v25 = 259;
      v24 = "usr";
      v26[0] = "include";
      sub_228A3B0(&v38, &v24, v18, v16, v12);
      sub_121F620(v17, v38, v39.m128i_i64[0], 0);
      if ( v38 != v19 )
        free(v38);
    }
    if ( v35 != v37 )
      free(v35);
  }
  if ( ptr != v34 )
    free(ptr);
  if ( v20 != &v22 )
    operator delete(v20);
}
