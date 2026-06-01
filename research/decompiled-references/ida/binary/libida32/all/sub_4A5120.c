__int64 __fastcall sub_4A5120(__int64 *a1, __int64 a2, __m128i *a3, char a4, unsigned int a5, char a6)
{
  __int64 v8; // rsi
  unsigned int v13; // eax
  bool v14; // cf
  unsigned int v15; // eax
  char v16; // r8
  unsigned int v17; // ecx
  int v18; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    return 0;
  v8 = *a1;
  v18 = *(_DWORD *)a2;
  v13 = sub_79B3A0(&v18, v8, 0, 65);
  if ( !a4 )
  {
    if ( v13 >= a5 )
    {
      v16 = a6;
      v17 = v13 - a5;
      return sub_4A48F0(a1, a2, a3, v17, v16, 1);
    }
    return 0;
  }
  v14 = __CFADD__(a5, v13);
  v15 = a5 + v13;
  if ( v14 )
    return 0;
  v16 = a6;
  v17 = v15;
  return sub_4A48F0(a1, a2, a3, v17, v16, 1);
}

