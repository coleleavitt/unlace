__int64 __fastcall sub_4BA970(__int64 *a1, __int64 a2, __m128i *a3, char a4, unsigned int a5, char a6)
{
  __int64 v8; // rsi
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _QWORD v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    return 0;
  v8 = *a1;
  v15[0] = *(_QWORD *)a2;
  v13 = sub_7BE710(v15, v8, 0, 65);
  if ( !a4 )
  {
    if ( v13 >= a5 )
    {
      v14 = v13 - a5;
      return sub_4BA010(a1, a2, a3, v14, a6, 1);
    }
    return 0;
  }
  if ( __CFADD__(a5, v13) )
    return 0;
  v14 = a5 + v13;
  return sub_4BA010(a1, a2, a3, v14, a6, 1);
}
