__int64 __fastcall sub_2270A60(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __m128i v13; // xmm1
  void *v14; // rax
  _BYTE *v15; // r14
  __int64 v16; // rbp
  __m128i v18; // [rsp+18h] [rbp-70h] BYREF
  void *src; // [rsp+28h] [rbp-60h]
  size_t n; // [rsp+30h] [rbp-58h]
  _BYTE v21[80]; // [rsp+38h] [rbp-50h] BYREF

  v21[0] = 0;
  src = v21;
  v6 = *(_DWORD *)(a1 + 68);
  n = 0;
  if ( v6 || a2 >= *(_DWORD *)(a1 + 56) )
    return 1;
  do
  {
    v10 = *(_QWORD *)(a1 + 40);
    v18.m128i_i64[1] = 1;
    v18.m128i_i64[0] = v10;
    v11 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 160) += 72LL;
    v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 88) >= v12 + 72 && v11 )
      *(_QWORD *)(a1 + 80) = v12 + 72;
    else
      v12 = sub_986170(a1 + 80, 72, 72, 4, a5, a6);
    v13 = _mm_loadu_si128(&v18);
    *(_DWORD *)(v12 + 16) = 8;
    v14 = (void *)(v12 + 56);
    *(_OWORD *)v12 = 0;
    *(__m128i *)(v12 + 24) = v13;
    v15 = src;
    v16 = n;
    *(_QWORD *)(v12 + 40) = v12 + 56;
    if ( &v15[v16] && !v15 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v16 > 0xF )
    {
      if ( v16 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v14 = (void *)operator new(v16 + 1);
      *(_QWORD *)(v12 + 56) = v16;
      *(_QWORD *)(v12 + 40) = v14;
LABEL_17:
      memcpy(v14, v15, v16);
      v14 = *(void **)(v12 + 40);
      goto LABEL_5;
    }
    if ( v16 == 1 )
    {
      *(_BYTE *)(v12 + 56) = *v15;
      goto LABEL_5;
    }
    if ( v16 )
      goto LABEL_17;
LABEL_5:
    *(_QWORD *)(v12 + 48) = v16;
    *((_BYTE *)v14 + v16) = 0;
    v7 = *(_QWORD *)(a1 + 176);
    v8 = *(unsigned int *)(a1 + 200);
    *(_QWORD *)(v12 + 8) = a1 + 176;
    *(_QWORD *)v12 = v7;
    *(_QWORD *)(v7 + 8) = v12;
    v9 = *(_QWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 176) = v12;
    LODWORD(v9) = *(_DWORD *)(v9 + 4 * v8 - 4);
    *(_DWORD *)(a1 + 200) = v8 - 1;
    *(_DWORD *)(a1 + 56) = v9;
  }
  while ( a2 < (int)v9 );
  if ( src != v21 )
    operator delete(src);
  return 1;
}
