/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A3C
// Address: 0x00041A3C

//----- (00041A3C) --------------------------------------------------------
unsigned __int8 *__fastcall sub_41A3C(int a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v7; // r5
  int v8; // r0
  int v10; // r0
  unsigned __int8 *v11; // [sp+4h] [bp-4h] BYREF

  v7 = a3;
  v11 = a3;
  while ( 1 )
  {
    v8 = sub_70290(&v11);
    if ( v8 == -1 )
      v8 = *v11++;
    if ( !v8 )
      break;
    v7 = v11;
    if ( *(unsigned __int8 *)(a1 + 104) == v8 )
    {
      v10 = sub_70290(&v11);
      if ( v10 == -1 )
        v10 = *v11++;
      if ( !v10 )
        break;
      v7 = v11;
    }
    else if ( a4 == v8 )
    {
      sub_418B8(a1, a2, v11, *(_DWORD *)(a1 + 68));
      return v11;
    }
  }
  sub_418B8(a1, a2, v7, *(_DWORD *)(a1 + 96));
  return nullptr;
}
