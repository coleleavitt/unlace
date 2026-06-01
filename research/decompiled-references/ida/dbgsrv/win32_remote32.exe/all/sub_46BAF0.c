/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BAF0
// Address: 0x0046BAF0

//----- (0046BAF0) --------------------------------------------------------
void __cdecl sub_46BAF0(UINT uExitCode, char a2, int a3)
{
  int *v3[3]; // [esp+0h] [ebp-18h] BYREF
  int v4; // [esp+Ch] [ebp-Ch] BYREF
  int v5; // [esp+10h] [ebp-8h] BYREF
  char v6; // [esp+17h] [ebp-1h] BYREF

  if ( !a3 && sub_46BB96() )
    sub_46BBD9(uExitCode);
  v6 = 0;
  v3[0] = (int *)&a2;
  v3[1] = &a3;
  v3[2] = (int *)&v6;
  v5 = 2;
  v4 = 2;
  sub_46B997(&v4, v3, &v5);
  if ( !a3 )
    sub_46BB54(uExitCode);
}
