/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54C40
// Address: 0x00054C40

//----- (00054C40) --------------------------------------------------------
int __fastcall sub_54C40(int result, int a2)
{
  int v2; // r7
  int v3; // r4
  int v5; // r5
  int (*v6)(); // r3

  v2 = result + 316;
  v3 = *(_DWORD *)(result + 324);
  if ( v3 != result + 316 )
  {
    v5 = result;
    do
    {
      while ( 1 )
      {
        v6 = *(int (**)())(*(_DWORD *)v5 + 172);
        if ( v6 != sub_14ED4 )
          break;
        result = sub_81290(v3);
        v3 = result;
        if ( v2 == result )
          return result;
      }
      ((void (__fastcall *)(int, int, int))v6)(v5, v3, a2);
      result = sub_81290(v3);
      v3 = result;
    }
    while ( v2 != result );
  }
  return result;
}
