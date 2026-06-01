/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: process_zipfile
// Address: 0x0007A930

//----- (0007A930) --------------------------------------------------------
int __fastcall process_zipfile(
        int a1,
        int (__fastcall *a2)(int, _DWORD, int, int, int, int, int, int, int, int, int, _BYTE *),
        int a3)
{
  _DWORD *v4; // r0
  int v5; // r7
  int v6; // r4
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned __int64 v14; // [sp+8h] [bp-14h] BYREF

  v4 = sub_8D1A4(a1);
  v5 = 1;
  if ( v4 )
  {
    v6 = (int)v4;
    v7 = sub_8D274(v4, &v14);
    if ( !v7 && v14 )
    {
      v8 = 1;
      while ( 1 )
      {
        v7 = sub_7A88C(v6, a2, a3);
        if ( v7 )
          break;
        v9 = HIDWORD(v14);
        v10 = v14;
        if ( v8 < v14 )
        {
          v7 = sub_8DBFC(v6);
          if ( v7 )
            break;
          v9 = HIDWORD(v14);
          v10 = v14;
        }
        if ( v8++ >= __PAIR64__(v9, v10) )
          goto LABEL_13;
      }
    }
    v5 = -v7;
    if ( v7 >= 0 )
LABEL_13:
      v5 = 0;
    sub_8D1BC(v6);
  }
  return v5;
}
