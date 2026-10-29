/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C1A0
// Address: 0x0008C1A0

//----- (0008C1A0) --------------------------------------------------------
void __fastcall sub_8C1A0(_DWORD *dest, size_t a2)
{
  size_t v4; // r0
  char *v5; // r5
  char *v6; // r6
  char *v7; // t1
  unsigned int v8; // r3
  size_t v9; // r2
  int v10; // r3
  _BYTE *v11; // r0
  char *v12; // r1
  _BYTE *v13; // r6
  size_t v14; // r3
  size_t v15; // [sp+4h] [bp-4h] BYREF

  v4 = dest[1];
  v7 = (char *)*dest;
  v5 = (char *)(dest + 2);
  v6 = v7;
  v15 = a2;
  if ( a2 >= v4 )
    v8 = a2;
  else
    v8 = v4;
  if ( a2 < v4 )
    v15 = v4;
  if ( v5 == v6 )
    v9 = 15;
  else
    v9 = dest[2];
  if ( v9 != v8 )
  {
    v10 = v8 > 0xF || v9 < v8;
    if ( v10 )
    {
      v11 = sub_8BC90((int)dest, &v15, v9, v10);
      v12 = (char *)*dest;
      v13 = v11;
      if ( dest[1] )
      {
        if ( dest[1] != -1 )
        {
          memcpy(v11, v12, dest[1] + 1);
          v12 = (char *)*dest;
        }
      }
      else
      {
        *v11 = *v12;
        v12 = (char *)*dest;
      }
      if ( v5 != v12 )
        sub_80648(v12);
      v14 = v15;
      *dest = v13;
      dest[2] = v14;
    }
    else if ( v5 != v6 )
    {
      if ( v4 )
      {
        if ( v4 != -1 )
          memcpy(v5, v6, v4 + 1);
      }
      else
      {
        *((_BYTE *)dest + 8) = *v6;
      }
      sub_80648(v6);
      *dest = v5;
    }
  }
}
