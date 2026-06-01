__int64 __fastcall ZSTD_initStaticDDict(__int64 a1, unsigned __int64 a2, void *a3, size_t a4, int a5, int a6)
{
  void *v6; // rax
  int v9; // edi
  int v11; // [rsp+Ch] [rbp-1Ch]

  v6 = a3;
  v9 = a1 & 7;
  if ( a5 == 1 )
  {
    if ( a2 <= 0x6AD7 || v9 )
      return 0;
  }
  else
  {
    if ( a4 + 27352 > a2 || v9 )
      return 0;
    if ( !a5 )
    {
      v11 = a6;
      v6 = memcpy((void *)(a1 + 27352), a3, a4);
      a6 = v11;
    }
  }
  if ( (unsigned __int64)sub_7CDD0(a1, v6, a4, 1, a6) <= 0xFFFFFFFFFFFFFF88LL )
    return a1;
  return 0;
}

