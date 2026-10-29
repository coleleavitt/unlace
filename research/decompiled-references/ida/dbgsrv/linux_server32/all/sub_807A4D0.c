/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807A4D0
// Address: 0x0807A4D0

//----- (0807A4D0) --------------------------------------------------------
int __cdecl sub_807A4D0(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  int v6; // eax
  _BYTE v7[17]; // [esp+1h] [ebp-11h] BYREF

  *(_DWORD *)&v7[1] = __readgsdword(0x14u);
  v7[0] = 0;
  if ( a2 < 0 )
  {
    if ( (unsigned int)-a2 >= dword_811D3A0[0] )
      goto LABEL_7;
    v6 = dword_811D3A0[1] - 24 * a2;
    v4 = *(_DWORD *)(v6 + 16);
    result = sub_8081160(*(char **)(v6 + 8), v7);
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || (unsigned int)a2 >= a1[1] )
      goto LABEL_7;
    v3 = *(_DWORD *)(*a1 + 4 * a2);
    v4 = *(_DWORD *)(v3 + 36);
    result = *(_DWORD *)(v3 + 12);
  }
  if ( a3 + v4 >= result )
  {
    LOBYTE(result) = v7[0] | (result >= a3);
    goto LABEL_8;
  }
LABEL_7:
  result = 0;
LABEL_8:
  if ( *(_DWORD *)&v7[1] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811D3A0: using guessed type int dword_811D3A0[3];
