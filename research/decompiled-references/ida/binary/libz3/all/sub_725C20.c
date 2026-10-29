__int64 __fastcall sub_725C20(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __m128i si128; // xmm0
  _DWORD *v5; // rdx
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13[2]; // [rsp+0h] [rbp-C8h] BYREF
  int v14; // [rsp+10h] [rbp-B8h] BYREF
  void *v15; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-A8h]
  int v17[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v18[64]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-50h]
  __int64 v20; // [rsp+80h] [rbp-48h]
  unsigned __int8 v21; // [rsp+88h] [rbp-40h]
  __m128i v22; // [rsp+90h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 8);
  *(__m128 *)v13 = _mm_loadh_ps((const double *)(a1 + 24));
  *(_QWORD *)v17 = v3;
  sub_15B8F20(v18, v3);
  si128 = _mm_load_si128((const __m128i *)v13);
  v5 = (_DWORD *)*a2;
  v20 = v3;
  v19 = 0;
  v21 = 0;
  v15 = nullptr;
  ptr = nullptr;
  v22 = si128;
  sub_725620((__int64)v17, (__int64)&v14, v5);
  if ( ptr )
    sub_186B220(ptr);
  v6 = v21;
  if ( v21 )
  {
    v8 = sub_168D1D0(v17, *a2);
    v9 = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    v10 = *a2;
    if ( *a2 )
    {
      v11 = a2[1];
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        sub_15D7BC0(v11, v10);
    }
    *a2 = v9;
    v6 = v21;
  }
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  sub_15BA200(v18);
  return v6;
}

