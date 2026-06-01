/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A7C8
// Address: 0x0005A7C8

//----- (0005A7C8) --------------------------------------------------------
int __fastcall sub_5A7C8(int a1, const char *a2, int a3)
{
  int v5; // r5
  int *v6; // r0
  int *v7; // r4
  int v8; // r0

  v5 = 0;
  v6 = open_linput(a2, 0);
  if ( v6 )
  {
    v7 = v6;
    v5 = 0;
    if ( a3 == 11 )
    {
      v8 = sub_595E4(a1, v6);
    }
    else
    {
      if ( a3 != 18 )
      {
LABEL_7:
        close_linput(v7);
        return v5;
      }
      v8 = sub_593D0(a1, v6);
    }
    v5 = v8;
    goto LABEL_7;
  }
  return v5;
}
