__int64 *__fastcall sub_408670(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  int v12; // r8d
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // r11
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // r13

  v9 = *(unsigned int *)(a2 + 272);
  v10 = *(_QWORD **)(a2 + 264);
  v11 = sub_3FCD00(v10, v9, a6);
  if ( v11 )
  {
    sub_408090(a1, v11[1], v15, v14, v12, v13);
    return a1;
  }
  if ( (unsigned int)sub_180B130(v10) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v19 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      v20 = sub_39A600(v19, *(const char **)(a6 + 16));
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v20, "\n");
    }
    else
    {
      v21 = sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v21, *(const char **)(a6 + 16));
      std::operator<<<std::char_traits<char>>();
    }
  }
  v17 = *(_QWORD *)(a2 + 152);
  v18 = *(_QWORD *)(v17 + 856);
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v17);
  if ( !v18 )
    return a1;
  ++*(_DWORD *)(v18 + 8);
  return a1;
}

