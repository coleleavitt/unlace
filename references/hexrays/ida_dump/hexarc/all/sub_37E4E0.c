__int64 __fastcall sub_37E4E0(__int64 a1, __int64 a2, __int64 **a3)
{
  bool v3; // zf
  __m128i v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __m128i v10; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v3 = a3[1] == nullptr;
  v11 = __readfsqword(0x28u);
  if ( v3 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
  }
  else
  {
    v5 = 0;
    v6 = **a3;
    v9 = 0;
    v10 = 0;
    v7 = *(_QWORD *)(v6 + 48);
    v8 = 0;
    if ( (v7 & 0x100) != 0 )
    {
      get_tinfo_pdata(&v9, v7, 0);
      v8 = v9;
      v5 = _mm_loadu_si128(&v10);
    }
    *(_QWORD *)a1 = v8;
    *(__m128i *)(a1 + 8) = v5;
  }
  return a1;
}
