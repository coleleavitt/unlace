/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B0328
// Address: 0x00000000004B0328

//----- (00000000004B0328) ----------------------------------------------------
void __fastcall sub_4B0328(_QWORD *dest, unsigned __int64 a2)
{
  unsigned __int64 v3; // x0
  unsigned __int64 v4; // x2
  char *v5; // x20
  char *v6; // x21
  _BYTE *v8; // x0
  _BYTE *v9; // x21
  char *v10; // x1
  __int64 v11; // x3
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // [xsp+38h] [xbp+38h] BYREF

  v13 = a2;
  v3 = dest[1];
  if ( a2 < v3 )
  {
    a2 = v3;
    v13 = v3;
  }
  v4 = 15;
  v5 = (char *)(dest + 2);
  v6 = (char *)*dest;
  if ( dest + 2 != (_QWORD *)*dest )
    v4 = dest[2];
  if ( v4 != a2 )
  {
    if ( a2 <= 0xF && v4 >= a2 )
    {
      if ( v5 != v6 )
      {
        if ( v3 )
        {
          if ( v3 != -1 )
            memcpy(dest + 2, (const void *)*dest, v3 + 1);
        }
        else
        {
          *((_BYTE *)dest + 16) = *v6;
        }
        j__free_0(v6);
        *dest = v5;
      }
    }
    else
    {
      v8 = sub_4AFA78((__int64)dest, &v13, v4);
      v9 = v8;
      v10 = (char *)*dest;
      v11 = dest[1];
      if ( v11 )
      {
        if ( v11 != -1 )
        {
          memcpy(v8, v10, v11 + 1);
          v10 = (char *)*dest;
        }
      }
      else
      {
        *v8 = *v10;
        v10 = (char *)*dest;
      }
      if ( v5 != v10 )
        j__free_0(v10);
      v12 = v13;
      *dest = v9;
      dest[2] = v12;
    }
  }
}
