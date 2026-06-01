/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442E60
// Address: 0x0000000000442E60

//----- (0000000000442E60) ----------------------------------------------------
unsigned __int8 *__fastcall sub_442E60(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  unsigned __int8 *v4; // x20
  int v7; // w22
  int v8; // w0
  int v10; // w0
  unsigned __int8 *i; // [xsp+38h] [xbp-8h] BYREF

  v4 = a3;
  v7 = a4;
  for ( i = a3; ; v4 = i )
  {
    while ( 1 )
    {
      v8 = sub_485C28(&i);
      if ( v8 == -1 )
      {
        v8 = *i++;
        if ( !v8 )
          goto LABEL_8;
      }
      else if ( !v8 )
      {
        goto LABEL_8;
      }
      v4 = i;
      if ( *(unsigned __int8 *)(a1 + 184) == v8 )
        break;
      if ( v7 == v8 )
      {
        sub_442BD8(a1, a2, i, *(_DWORD *)(a1 + 124));
        return i;
      }
    }
    v10 = sub_485C28(&i);
    if ( v10 == -1 )
      v10 = *i++;
    if ( !v10 )
      break;
  }
LABEL_8:
  sub_442BD8(a1, a2, v4, *(_DWORD *)(a1 + 176));
  return nullptr;
}
