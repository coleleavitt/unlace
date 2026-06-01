__int64 __fastcall sub_60B400(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx

  if ( a4 )
  {
    v5 = a4;
  }
  else
  {
    v5 = dword_4A8D900;
    if ( !dword_4A8D900 )
      return sub_25A1A00(a1, a2, a3);
  }
  if ( getenv("LIBCLANG_NOTHREADS") )
    return sub_25A1A00(a1, a2, a3);
  return sub_25A1AD0(a1, a2, a3, v5);
}

