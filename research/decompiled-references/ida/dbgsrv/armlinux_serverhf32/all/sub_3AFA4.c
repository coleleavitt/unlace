/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AFA4
// Address: 0x0003AFA4

//----- (0003AFA4) --------------------------------------------------------
_DWORD *__fastcall sub_3AFA4(_DWORD *a1)
{
  void **v2; // r5
  void *v3; // r0
  void **v5; // r5
  void *v6; // r0
  void *v7; // r5
  void **v8; // r5
  void *v9; // r0

  switch ( *a1 )
  {
    case 1:
      v2 = (void **)a1[2];
      if ( v2 )
      {
        v3 = *v2;
        if ( *v2 )
        {
          v2[1] = nullptr;
          sub_77E08(v3);
        }
        sub_8121C(v2);
      }
      return a1;
    case 2:
    case 3:
    case 4:
      v5 = (void **)a1[1];
      if ( v5 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = nullptr;
          sub_77E08(v6);
        }
        sub_77E08(v5);
      }
      goto LABEL_11;
    case 5:
      v8 = (void **)a1[1];
      if ( v8 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = nullptr;
          sub_77E08(v9);
        }
        sub_8121C(v8);
        v7 = (void *)a1[2];
        if ( v7 )
          goto LABEL_12;
        return a1;
      }
LABEL_11:
      v7 = (void *)a1[2];
      if ( !v7 )
        return a1;
LABEL_12:
      sub_3AFA4(v7);
      sub_8121C(v7);
      return a1;
    default:
      return a1;
  }
}
