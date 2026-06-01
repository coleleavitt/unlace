/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEB00
// Address: 0x080CEB00

//----- (080CEB00) --------------------------------------------------------
int __cdecl sub_80CEB00(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi

  v3 = open64(a1, 32834, a2);
  if ( v3 == -1 )
  {
    sub_80C7880(1);
  }
  else
  {
    v4 = v3;
    if ( !sub_80CE9C0(v3, 66, a3) && !sub_80CEA70(v4, 0, 0) )
      return v4;
    sub_80CEAB0(v4);
  }
  return -1;
}
// 804B170: using guessed type int __cdecl open64(_DWORD, _DWORD, _DWORD);
