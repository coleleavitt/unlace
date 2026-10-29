/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: process_zip_linput
// Address: 0x0007ADF8

//----- (0007ADF8) --------------------------------------------------------
int __fastcall process_zip_linput(
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
  unsigned __int64 v14; // [sp+Ch] [bp-34h] BYREF
  int v15[8]; // [sp+1Ch] [bp-24h] BYREF

  v15[1] = (int)sub_7ABFA;
  v15[0] = (int)nullsub_6;
  v15[2] = (int)byte_7AC09;
  v15[3] = (int)sub_7AC28;
  v15[4] = (int)sub_7AC40;
  v15[5] = (int)sub_7AC66;
  v15[6] = (int)sub_7AC6A;
  v15[7] = a1;
  v4 = sub_8D154((int)&byte_A0742, v15);
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
// 7ABF8: using guessed type int nullsub_6();
// A0742: using guessed type char byte_A0742;
