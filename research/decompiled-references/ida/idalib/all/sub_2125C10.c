__int64 __fastcall sub_2125C10(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __m128i *v5; // rax
  __int64 *v6; // rdi
  void *v7[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF

  v2 = a1 + 16;
  if ( a2 == 8 )
  {
    *(_QWORD *)a1 = v2;
    *(_DWORD *)(a1 + 16) = 1635017583;
    *(_BYTE *)(a1 + 20) = 108;
    *(_QWORD *)(a1 + 8) = 5;
    *(_BYTE *)(a1 + 21) = 0;
    return a1;
  }
  if ( a2 <= 8 )
  {
    if ( a2 == 2 )
    {
      *(_QWORD *)a1 = v2;
      strcpy((char *)(a1 + 16), "binary");
      *(_QWORD *)(a1 + 8) = 6;
      return a1;
    }
  }
  else
  {
    if ( a2 == 10 )
    {
      *(_QWORD *)a1 = v2;
      *(_DWORD *)(a1 + 16) = 1768121700;
      *(_WORD *)(a1 + 20) = 24941;
      *(_BYTE *)(a1 + 22) = 108;
      *(_QWORD *)(a1 + 8) = 7;
      *(_BYTE *)(a1 + 23) = 0;
      return a1;
    }
    if ( a2 == 16 )
    {
      *(_QWORD *)a1 = v2;
      strcpy((char *)(a1 + 16), "hexadecimal");
      *(_QWORD *)(a1 + 8) = 11;
      return a1;
    }
  }
  sub_D8B070(v7, (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf, 16, (__int64)"%u", a2);
  v5 = (__m128i *)sub_99BDC0(v7, 0, 0, "base-", 5u);
  *(_QWORD *)a1 = v2;
  if ( (__m128i *)v5->m128i_i64[0] == &v5[1] )
  {
    *(__m128i *)(a1 + 16) = _mm_loadu_si128(v5 + 1);
  }
  else
  {
    *(_QWORD *)a1 = v5->m128i_i64[0];
    *(_QWORD *)(a1 + 16) = v5[1].m128i_i64[0];
  }
  *(_QWORD *)(a1 + 8) = v5->m128i_i64[1];
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  v6 = (__int64 *)v7[0];
  v5->m128i_i64[1] = 0;
  v5[1].m128i_i8[0] = 0;
  if ( v6 == &v8 )
    return a1;
  operator delete(v6);
  return a1;
}
