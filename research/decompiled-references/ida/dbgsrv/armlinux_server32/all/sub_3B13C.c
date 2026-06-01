/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B13C
// Address: 0x0003B13C

//----- (0003B13C) --------------------------------------------------------
_DWORD *__fastcall sub_3B13C(_DWORD *a1)
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
          sub_77F70(v3);
        }
        sub_808A0(v2);
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
          sub_77F70(v6);
        }
        sub_77F70(v5);
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
          sub_77F70(v9);
        }
        sub_808A0(v8);
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
      sub_3B13C(v7);
      sub_808A0(v7);
      return a1;
    default:
      return a1;
  }
}
