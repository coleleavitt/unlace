__int64 __fastcall sub_2201020(__int64 a1, __int64 a2)
{
  void **v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax

  do
  {
    v4 = *(void ***)(a1 + 8);
    v5 = *(_QWORD *)(a2 + 8);
    if ( *v4 == &unk_26F7B20 )
    {
      result = sub_2201020(v4, v5);
      if ( (_DWORD)result != 1 )
        return result;
    }
    else
    {
      result = sub_21FA440((__int64)v4, v5);
      if ( (_DWORD)result != 1 )
        return result;
    }
    v7 = *(_QWORD *)(a1 + 8);
    a1 = v7 + 24;
    a2 = *(_QWORD *)(a2 + 8) + 24LL;
  }
  while ( *(_UNKNOWN **)(v7 + 24) == &unk_26F7B20 );
  return sub_21FA440(v7 + 24, a2);
}
