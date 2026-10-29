/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F168
// Address: 0x000000000047F168

//----- (000000000047F168) ----------------------------------------------------
__int64 __fastcall sub_47F168(unsigned __int8 **a1)
{
  unsigned int v2; // w0
  unsigned int v3; // w1
  unsigned __int8 *v4; // x21
  unsigned __int8 v5; // w1
  unsigned __int8 *v7; // x22
  int v8; // w21
  int v9; // w0
  unsigned __int8 *v10; // x23
  int v11; // w21
  _BYTE v12[4]; // [xsp+3Ch] [xbp-14h] BYREF
  char v13; // [xsp+40h] [xbp-10h] BYREF
  char v14; // [xsp+41h] [xbp-Fh]
  unsigned __int8 v15; // [xsp+42h] [xbp-Eh]
  char v16; // [xsp+43h] [xbp-Dh]

  v2 = sub_485C28(a1);
  v3 = 0;
  if ( v2 != -1 )
  {
    v3 = 92;
    if ( v2 <= 0xFF )
    {
      v3 = (unsigned __int8)v2;
      if ( (unsigned __int8)(v2 - 48) <= 7u )
      {
        v13 = v2;
        v4 = *a1;
        if ( (unsigned __int8)(**a1 - 48) <= 7u )
        {
          ++v4;
          v14 = **a1;
          v5 = *v4;
          if ( (unsigned __int8)(*v4 - 48) <= 7u )
            goto LABEL_6;
        }
        else
        {
          v14 = 0;
          v5 = *v4;
          if ( (unsigned __int8)(*v4 - 48) <= 7u )
          {
LABEL_6:
            ++v4;
LABEL_7:
            v15 = v5;
            v16 = 0;
            sub_49B8B8(&v13, "%o", (unsigned int)v12);
            *a1 = v4;
            return v12[0];
          }
        }
        v5 = 0;
        goto LABEL_7;
      }
      if ( v2 == 110 )
      {
        return 10;
      }
      else if ( v2 <= 0x6E )
      {
        switch ( v2 )
        {
          case 'b':
            return 8;
          case 'f':
            return 12;
          case 'a':
            return 7;
        }
      }
      else if ( v2 == 116 )
      {
        return 9;
      }
      else if ( v2 <= 0x74 )
      {
        if ( v2 == 114 )
          return 13;
      }
      else if ( v2 == 118 )
      {
        return 11;
      }
      else if ( v2 == 120 )
      {
        v3 = 120;
        v7 = *a1;
        v8 = **a1;
        if ( (v8 & 0x80) == 0 )
        {
          v9 = isxdigit(v8);
          v3 = 120;
          if ( v9 )
          {
            v10 = v7 + 1;
            v13 = v8;
            v11 = v7[1];
            if ( (v11 & 0x80) != 0 || !isxdigit(v11) )
              LOBYTE(v11) = 0;
            else
              v10 = v7 + 2;
            v14 = v11;
            v15 = 0;
            sub_49B8B8(&v13, "%x", (unsigned int)v12);
            *a1 = v10;
            return v12[0];
          }
        }
      }
    }
  }
  return v3;
}
// 47F168: could not find valid save-restore pair for x21
