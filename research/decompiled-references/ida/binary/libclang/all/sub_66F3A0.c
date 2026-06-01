__int64 __fastcall sub_66F3A0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // al
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rax

  if ( !a2 )
    return 1;
  v6 = sub_79C190(a2);
  if ( !v6 )
    return 1;
  while ( 1 )
  {
    v7 = *(_BYTE *)(v6 + 28) & 0x7F;
    if ( ((v7 + 121) & 0x7Fu) > 1
      && ((unsigned int)v7 - 57 > 2 || (v8 = *(_QWORD *)(v6 + 128)) == 0 || (*(_BYTE *)(v8 + 10) & 0x20) == 0) )
    {
      result = sub_66D270(a1, v6, a3, a4, a5, a6);
      if ( !(_BYTE)result )
        break;
    }
    v10 = *(_QWORD *)(v6 + 8);
    v6 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10 <= 7 )
      return 1;
  }
  return result;
}

