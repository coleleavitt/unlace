__int64 __fastcall sub_68DF40(unsigned int *a1)
{
  std::_V2 *v2; // rdi
  std::_V2 **v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // rsi
  __m128i *v10; // rbx
  void (__fastcall *v11)(__m128i *); // rax
  void *v12; // rdi
  void *v13; // rdi
  char *v15; // r12
  __m128i v16; // [rsp+0h] [rbp-38h] BYREF
  std::_V2 *v17[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = (std::_V2 *)&dword_B0;
  v3 = v17;
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47D01C0, (__m128i)(unsigned __int64)&off_47CFF88);
  v4 = operator new(0xB0u);
  v5 = a1[11];
  v6 = *((_QWORD *)a1 + 4);
  v7 = _mm_load_si128(&v16);
  *(_QWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 48) = 1;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 136) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_QWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 160) = 0;
  *(_QWORD *)(v4 + 168) = 0;
  v17[0] = (std::_V2 *)v4;
  *(_OWORD *)(v4 + 16) = 0;
  *(__m128i *)v4 = v7;
  *(_OWORD *)(v4 + 80) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 112) = 0;
  v8 = a1[10];
  v9 = v8 + 1;
  if ( v5 < v8 + 1 )
  {
    v2 = (std::_V2 *)(a1 + 8);
    if ( (unsigned __int64)v17 < v6 || (unsigned __int64)v17 >= v6 + 8 * v8 )
    {
      sub_68DDE0((__int64)v2, v9);
      v6 = *((_QWORD *)a1 + 4);
      v8 = a1[10];
    }
    else
    {
      v15 = (char *)v17 - v6;
      sub_68DDE0((__int64)v2, v9);
      v6 = *((_QWORD *)a1 + 4);
      v8 = a1[10];
      v3 = (std::_V2 **)&v15[v6];
    }
  }
  *(_QWORD *)(v6 + 8 * v8) = *v3;
  *v3 = nullptr;
  ++a1[10];
  v10 = (__m128i *)v17[0];
  if ( v17[0] )
  {
    v11 = *(void (__fastcall **)(__m128i *))(*(_QWORD *)v17[0] + 8LL);
    if ( v11 == sub_689960 )
    {
      v12 = *((void **)v17[0] + 13);
      *(_QWORD *)v17[0] = &off_47D01C0;
      if ( v12 )
        operator delete(v12, v10[7].m128i_i64[1] - (_QWORD)v12);
      v13 = (void *)v10[5].m128i_i64[0];
      if ( v13 )
        operator delete(v13, v10[6].m128i_i64[0] - (_QWORD)v13);
      sub_62FED0(v10);
      v2 = (std::_V2 *)v10;
      operator delete(v10, 0xB0u);
    }
    else
    {
      v2 = v17[0];
      v11((__m128i *)v17[0]);
    }
  }
  std::_V2::system_category(v2);
  return 0;
}

