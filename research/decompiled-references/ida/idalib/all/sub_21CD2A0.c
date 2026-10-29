__int64 __fastcall sub_21CD2A0(__int64 a1, _QWORD **a2)
{
  size_t v2; // rax
  _QWORD *v3; // rax
  __m128i v4; // xmm0
  _BYTE *v5; // rsi
  void *v6; // rdx
  __m128i v8; // [rsp+0h] [rbp-78h] BYREF
  int v9; // [rsp+1Ch] [rbp-5Ch]
  _QWORD *v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h] BYREF
  __m128i v12; // [rsp+30h] [rbp-48h] BYREF
  void *v13[2]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp-28h] BYREF

  v9 = 0;
  v8.m128i_i64[0] = (__int64)v13;
  v13[0] = v14;
  v8 = (__m128i)_mm_loadh_ps((const double *)v8.m128i_i64);
  v2 = j__strlen(&byte_22F0C30);
  sub_21CAAA0(v13, &byte_22F0C30, (__int64)(&byte_22F0C30 + v2));
  v3 = *a2;
  v4 = _mm_load_si128(&v8);
  *a2 = nullptr;
  v12 = v4;
  v10 = v3;
  sub_21CD0E0(&v11, &v10, (__int64)&v12);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  v5 = v13[0];
  v6 = v13[1];
  *(_DWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  sub_21CAB60((_QWORD *)(a1 + 8), v5, (__int64)v6 + (_QWORD)v5);
  if ( v13[0] != v14 )
    operator delete(v13[0]);
  return a1;
}
