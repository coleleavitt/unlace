/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA1E0
// Address: 0x080BA1E0

//----- (080BA1E0) --------------------------------------------------------
int __cdecl sub_80BA1E0(int a1, int a2, char a3)
{
  int v3; // eax
  int v4; // edx
  int result; // eax
  _DWORD *v6; // eax

  *(_DWORD *)a1 = dword_811CDC4;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 68) = a2;
  v3 = dword_811E3E4;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v3;
  dword_811E3E4 = v3 + 1;
  *(_DWORD *)(a1 + 88) = sub_80D0330();
  *(_DWORD *)(a1 + 92) = v4;
  *(_BYTE *)(a1 + 96) = a3;
  result = sub_80BBFB0(*(_DWORD *)(a1 + 68), a1 + 72, 0);
  if ( !(_BYTE)result )
  {
    v6 = *(_DWORD **)(a1 + 72);
    if ( *(_DWORD *)(a1 + 80) <= 9u )
    {
      v6 = sub_80CF920(a1 + 72, v6, 0xAu, 1u);
      *(_DWORD *)(a1 + 72) = v6;
    }
    *(_DWORD *)(a1 + 76) = 10;
    *v6 = 1802401064;
    v6[1] = 1853321070;
    *((_BYTE *)v6 + 8) = 41;
    result = *(_DWORD *)(a1 + 72);
    *(_BYTE *)(result + 9) = 0;
  }
  *(_OWORD *)(a1 + 4) = 0;
  *(_OWORD *)(a1 + 20) = 0;
  *(_OWORD *)(a1 + 36) = 0;
  *(_OWORD *)(a1 + 52) = 0;
  return result;
}
// 80BA243: variable 'v4' is possibly undefined
// 811CDC4: using guessed type int dword_811CDC4[2];
// 811E3E4: using guessed type int dword_811E3E4;
