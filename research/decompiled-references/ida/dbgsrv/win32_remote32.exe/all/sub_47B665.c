/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B665
// Address: 0x0047B665

//----- (0047B665) --------------------------------------------------------
int __usercall sub_47B665@<eax>(
        int a1@<ebx>,
        __m128i *lpString1,
        __m128i *lpString2,
        unsigned int cchCount1,
        _DWORD *a5)
{
  int v6; // esi
  unsigned __int16 *v7; // eax
  int v8; // eax
  _DWORD v9[3]; // [esp+4h] [ebp-10h] BYREF
  char v10; // [esp+10h] [ebp-4h]

  if ( !cchCount1 )
    return 0;
  if ( lpString1 && lpString2 )
  {
    v6 = 0x7FFFFFFF;
    if ( cchCount1 <= 0x7FFFFFFF )
    {
      sub_467FF8((int)v9, a5);
      v7 = *(unsigned __int16 **)(v9[1] + 164);
      if ( v7 )
      {
        v8 = sub_480DC4(v7, 0x1001u, lpString1, cchCount1, lpString2, cchCount1);
        if ( v8 )
          v6 = v8 - 2;
        else
          *sub_46B984() = 22;
      }
      else
      {
        v6 = sub_46807B((unsigned __int16 *)lpString1, (unsigned __int16 *)lpString2, cchCount1);
      }
      if ( v10 )
        *(_DWORD *)(v9[0] + 848) &= ~2u;
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(a1, cchCount1);
    }
    return v6;
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, cchCount1);
    return 0x7FFFFFFF;
  }
}
