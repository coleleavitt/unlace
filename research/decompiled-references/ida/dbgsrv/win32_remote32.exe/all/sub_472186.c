/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472186
// Address: 0x00472186

//----- (00472186) --------------------------------------------------------
int __usercall sub_472186@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        __m128i a3@<xmm0>,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        _DWORD *a6)
{
  WCHAR *v6; // esi
  WCHAR *v8; // edi
  int v9; // ecx
  int v10; // ebx
  unsigned __int16 v11; // ax
  WCHAR v12; // [esp-18h] [ebp-2Ch]
  int v13; // [esp+4h] [ebp-10h] BYREF
  _DWORD v14[2]; // [esp+8h] [ebp-Ch] BYREF
  char v15; // [esp+10h] [ebp-4h]

  v6 = a4;
  if ( a4 )
  {
    v8 = a5;
    if ( a5 )
    {
      sub_467FF8((int)&v13, a6);
      if ( *(_DWORD *)(v14[0] + 168) )
      {
        do
        {
          v10 = (unsigned __int16)sub_4680CA(a3, *v6++, (int)v14);
          v12 = *v8++;
          v11 = sub_4680CA(a3, v12, (int)v14);
          v9 = v10 - v11;
        }
        while ( v10 == v11 && v10 );
      }
      else
      {
        v9 = sub_472100(a4, a5);
      }
      if ( v15 )
        *(_DWORD *)(v13 + 848) &= ~2u;
      return v9;
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(a1, 0);
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 0x7FFFFFFF;
  }
}
