/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E318
// Address: 0x0006E318

//----- (0006E318) --------------------------------------------------------
void __fastcall sub_6E318(_DWORD *a1)
{
  unsigned int v2; // r3
  bool v3; // zf
  char v4; // r2
  int v5; // r3
  void *v6; // r0
  bool v7; // cc
  void *v8; // r0

  v2 = a1[4] & 0xFFFFFFF;
  switch ( v2 )
  {
    case 1u:
    case 8u:
    case 0xBu:
      v3 = v2 == 1;
      if ( v2 != 1 )
        v3 = v2 == 11;
      v4 = !v3;
      if ( v2 == 8 )
        v5 = 0;
      else
        v5 = v4 & 1;
      if ( v5 )
      {
        if ( !under_debugger )
          sub_78AFC(3295);
LABEL_25:
        __und(0xFFu);
      }
      v6 = (void *)a1[5];
      if ( v6 )
      {
LABEL_12:
        a1[6] = v5;
        sub_77E08(v6);
      }
LABEL_13:
      a1[4] = 0;
      return;
    case 3u:
    case 9u:
    case 0xAu:
      v7 = v2 > 3;
      if ( v2 != 3 )
        v7 = v2 - 9 > 1;
      v5 = v7;
      if ( !v7 )
      {
        v6 = (void *)a1[5];
        if ( !v6 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_78AFC(3297);
      goto LABEL_25;
    case 7u:
      v8 = (void *)a1[8];
      if ( v8 )
      {
        a1[9] = 0;
        sub_77E08(v8);
      }
      goto LABEL_13;
    default:
      goto LABEL_13;
  }
}
// D5C00: using guessed type char under_debugger;
