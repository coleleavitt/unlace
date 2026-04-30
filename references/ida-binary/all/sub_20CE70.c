__int64 __fastcall sub_20CE70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned __int64 v8; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v8 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)v8 <= 0xB )
  {
    a3 = 2306;
    if ( _bittest64(&a3, v8) )
      return a1 + 24;
  }
  sub_20AA70(a5, a1, a2, a3, a4);
  return sub_20CEA0(a1, a2, v10, v11, v12, v13, a8);
}
