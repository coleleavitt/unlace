__int64 __fastcall sub_15F0F10(__int64 a1, int a2, char a3, char a4, int a5, __m128i a6, double a7)
{
  unsigned int v10; // ebx
  bool v11; // al
  __int64 v12; // rdx
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  __int16 v14; // [rsp+10h] [rbp-28h]
  char v15; // [rsp+18h] [rbp-20h]

  if ( !a2 )
    return 0;
  sub_13DC730(&v13, a2, *(__int64 **)(a1 + 272), *(_QWORD *)(a1 + 232), a4, a6, a7);
  if ( !v15 || (a5 & 0xFF0000) != 0 && v14 != (_WORD)a5 )
    return 0;
  v10 = v13.m128i_i32[0];
  v11 = sub_10CCDE0(v14);
  v12 = v10;
  if ( v11 )
  {
    v12 = v13.m128i_u32[1];
    if ( !v13.m128i_i32[1] )
      v12 = v10;
  }
  if ( (_DWORD)v12 && v10 && (a3 || (v10 & 0x80000000) == 0 && (int)v12 >= 0) )
    return (v12 << 32) | v10;
  else
    return 0;
}
