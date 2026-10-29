/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AEDD0
// Address: 0x080AEDD0

//----- (080AEDD0) --------------------------------------------------------
int __cdecl sub_80AEDD0(int a1, int a2, int a3)
{
  int *v3; // eax
  int *v4; // esi
  int v5; // eax
  int v6; // edi

  v3 = sub_80CD4D0(a2, 0);
  if ( v3 )
  {
    v4 = v3;
    if ( a3 == 11 )
    {
      v5 = sub_80AE710(a1, v3);
    }
    else
    {
      if ( a3 != 18 )
      {
        v6 = 0;
        goto LABEL_6;
      }
      v5 = sub_80A8B60(a1, v3);
    }
    v6 = v5;
LABEL_6:
    sub_80CD620(v4);
    return v6;
  }
  return 0;
}
