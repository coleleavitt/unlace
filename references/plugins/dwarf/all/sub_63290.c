unsigned __int64 __fastcall sub_63290(__m128i *a1, __int64 *a2, const __m128i *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  size_t v6; // r14
  __int64 v8; // r13
  size_t v9; // r15
  __int64 v10; // rsi
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  char v14; // cl
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-68h]
  __int64 v17; // [rsp+18h] [rbp-58h] BYREF
  void *src; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+28h] [rbp-48h]
  unsigned __int64 v20; // [rsp+38h] [rbp-38h]

  v3 = a3->m128i_i64[0];
  v20 = __readfsqword(0x28u);
  v17 = 0;
  if ( v3 < 0 && (v5 = v3 & 0x7FFFFFFFFFFFFFFFLL, (unsigned __int64)(v5 - 1) <= 9) )
  {
    if ( (_DWORD)v5 == 1 )
    {
      sub_5C3E0(a1, (__int64)&v17, (__int64)a3);
    }
    else if ( (_DWORD)v5 == 10 )
    {
      sub_5C500(a1, (__int64)&v17, (__int64)a3);
    }
    else
    {
      v11 = v5;
      v12 = 1;
      v13 = (unsigned int)(((int)v5 >> 1) - 2);
      v14 = (v11 & 1) == 0;
      if ( (unsigned int)v13 <= 2 )
        v12 = dword_AB898[v13];
      sub_5C620(a1, (__int64)&v17, v12, v14, (__int64)a3);
    }
  }
  else
  {
    sub_5D4A0(a1, &v17, a3);
  }
  src = nullptr;
  v19 = 0;
  print_tinfo(&src, 0, 0, 0, 0, &v17, 0);
  v16 = v19;
  if ( (_QWORD)v19 )
  {
    v6 = v19 - 1;
    if ( (_QWORD)v19 != 1 )
    {
      v8 = a2[1];
      v9 = v19 - 1;
      if ( v8 )
      {
        --v8;
        v9 = v6 + v8;
        v16 = v19 + v8;
      }
      v10 = *a2;
      if ( a2[2] < v16 )
      {
        v15 = qvector_reserve(a2, v10, v16, 1);
        *a2 = v15;
        v10 = v15;
      }
      a2[1] = v16;
      *(_BYTE *)(v10 + v9) = 0;
      memcpy((void *)(v8 + *a2), src, v6);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v19 = 0;
    qfree(src);
  }
  clear_tinfo_t(&v17);
  return v20 - __readfsqword(0x28u);
}
