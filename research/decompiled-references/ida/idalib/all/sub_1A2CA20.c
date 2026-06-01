__int64 __fastcall sub_1A2CA20(__int64 a1, unsigned __int64 a2, int a3, char a4, char a5, __m128i a6, double a7)
{
  unsigned int v8; // ebx
  int v9; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi

  if ( !(_DWORD)a2 )
    return 0;
  if ( !HIDWORD(a2) )
    return 0;
  v8 = a2;
  if ( a4 || a5 )
  {
    v8 = sub_15F0EF0(a1, a3, 0, a6, a7);
    v9 = HIDWORD(a2);
  }
  else
  {
    v9 = sub_15F0F10(a1, SHIDWORD(a2), 0, 0, 65602, a6, a7);
  }
  v10 = sub_15F0F10(a1, v9, 0, 1, 0, a6, a7);
  v11 = (unsigned int)v10;
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned int)(v10 - 1);
    if ( !HIDWORD(v10) )
      v11 = 0;
  }
  return (v11 << 32) | v8;
}
