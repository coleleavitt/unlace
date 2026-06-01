/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468155
// Address: 0x00468155

//----- (00468155) --------------------------------------------------------
int __usercall sub_468155@<eax>(
        int a1@<ebx>,
        __m128i a2@<xmm0>,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        int a5,
        _DWORD *a6)
{
  WCHAR *v6; // edi
  WCHAR *v8; // ebx
  int v9; // esi
  int v10; // ecx
  WCHAR v11; // ax
  unsigned __int16 v12; // ax
  int v13; // [esp+4h] [ebp-14h] BYREF
  _DWORD v14[2]; // [esp+8h] [ebp-10h] BYREF
  char v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v6 = a3;
  if ( a3 )
  {
    v8 = a4;
    if ( a4 )
    {
      v9 = a5;
      if ( a5 )
      {
        sub_467FF8((int)&v13, a6);
        if ( *(_DWORD *)(v14[0] + 168) )
        {
          do
          {
            v16 = (unsigned __int16)sub_4680CA(a2, *v6++, (int)v14);
            v11 = *v8++;
            v12 = sub_4680CA(a2, v11, (int)v14);
            v10 = v16 - v12;
            if ( v16 != v12 )
              break;
            if ( !v16 )
              break;
            --v9;
          }
          while ( v9 );
        }
        else
        {
          v10 = sub_46807B(a3, a4, a5);
        }
        if ( v15 )
          *(_DWORD *)(v13 + 848) &= ~2u;
        return v10;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      *sub_46B984() = 22;
      sub_467EF4(0, (int)a3);
      return 0x7FFFFFFF;
    }
  }
  else
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, 0);
    return 0x7FFFFFFF;
  }
}
