__int64 **__fastcall sub_226B960(
        __int64 **a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile signed __int32 **a7)
{
  _QWORD *v11; // rsi
  int v12; // r8d
  int v13; // r9d
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // r14
  _QWORD *v17; // rax
  void **v18; // rbp
  void **v19; // rbx
  __int64 *v20; // rbp
  __int64 *v21; // rbx
  __int64 *v22; // rdi
  volatile signed __int32 *v24; // rax
  __int64 *v25; // rbp
  __int64 v26; // rax
  _BYTE *v27; // rax
  __int64 v28; // rdx
  __int64 v30; // [rsp+8h] [rbp-1E0h]
  _BYTE *v31; // [rsp+18h] [rbp-1D0h] BYREF
  _BYTE v32[16]; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v33[4]; // [rsp+30h] [rbp-1B8h] BYREF
  void *v34; // [rsp+50h] [rbp-198h] BYREF
  __int64 *v35; // [rsp+58h] [rbp-190h]
  __int64 v36; // [rsp+60h] [rbp-188h]
  void *v37; // [rsp+68h] [rbp-180h]
  void **v38; // [rsp+70h] [rbp-178h]
  __int64 v39; // [rsp+78h] [rbp-170h]
  __int64 v40; // [rsp+80h] [rbp-168h]
  __int64 v41; // [rsp+88h] [rbp-160h]
  void *ptr; // [rsp+90h] [rbp-158h] BYREF
  __m128i si128; // [rsp+98h] [rbp-150h]
  _WORD v44[160]; // [rsp+A8h] [rbp-140h] BYREF

  v11 = *a2;
  v34 = nullptr;
  v35 = nullptr;
  v36 = 0;
  v37 = nullptr;
  v38 = nullptr;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  sub_2230760(v33, v11);
  sub_22707C0((unsigned int)v32, (unsigned int)&v34, 1, 0, v12, v13, v33[0], v33[1], v33[2], v33[3]);
  v40 = a3;
  v41 = a6;
  v14 = (_QWORD *)sub_2276B50(v32);
  v15 = v14;
  v16 = *(_QWORD *)(*v14 + 104LL);
  if ( !v16 )
  {
    v30 = *v14;
    v16 = sub_2273F00(*v14);
    *(_QWORD *)(v30 + 104) = v16;
  }
  v17 = (_QWORD *)sub_226EF90(v32);
  if ( *v15 )
  {
    if ( v17 && *v17 && v15 == v17 )
      goto LABEL_7;
  }
  else if ( !v17 || !*v17 )
  {
    goto LABEL_7;
  }
  if ( !v16 )
  {
LABEL_7:
    ptr = "expected root node";
    v44[4] = 259;
    sub_223BFB0((__int64 *)&v34, nullptr, 0, (__int64)&ptr, 0, 0, nullptr, 0, 1u);
    *a1 = nullptr;
    goto LABEL_8;
  }
  v31 = v32;
  v24 = *a7;
  ptr = (void *)v24;
  if ( v24 )
    _InterlockedAdd(v24 + 2, 1u);
  v25 = (__int64 *)operator new(0x80u);
  sub_2261830((__int64)v25, (__int64 *)&ptr);
  if ( ptr )
    sub_12E0400((volatile signed __int32 *)ptr + 2);
  if ( a5 )
  {
    v27 = (_BYTE *)sub_228A4B0(a4, a5, 0);
    ptr = v44;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(&ptr, v27, &v27[v28]);
    sub_228EC80(&ptr);
    sub_225C660((__int64)v25, ptr, si128.m128i_i64[0]);
    if ( ptr != v44 )
      free(ptr);
  }
  if ( (unsigned __int8)sub_226AED0((__int64 *)&v31, v16, (__int64)v25) )
  {
    *a1 = v25;
  }
  else
  {
    v26 = *v25;
    *a1 = nullptr;
    (*(void (__fastcall **)(__int64 *))(v26 + 8))(v25);
  }
LABEL_8:
  sub_2270460(v32);
  v18 = v38;
  v19 = (void **)v37;
  if ( v38 != v37 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v19 == v18 )
          goto LABEL_11;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_11:
    v19 = (void **)v37;
  }
  if ( v19 )
    operator delete(v19);
  v20 = v35;
  v21 = (__int64 *)v34;
  if ( v35 != v34 )
  {
    do
    {
      v22 = v21;
      v21 += 3;
      sub_2239BD0(v22);
    }
    while ( v20 != v21 );
    v21 = (__int64 *)v34;
  }
  if ( v21 )
    operator delete(v21);
  return a1;
}
