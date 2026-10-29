/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FCA0
// Address: 0x0807FCA0

//----- (0807FCA0) --------------------------------------------------------
_DWORD *__cdecl sub_807FCA0(_DWORD *a1)
{
  _DWORD *result; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  int v5; // [esp-14h] [ebp-18h]
  int v6; // [esp-10h] [ebp-14h]
  int v7; // [esp-Ch] [ebp-10h]

  result = a1;
  v2 = a1[1];
  if ( v2 <= 2 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(278, v5, v6, v7);
LABEL_7:
    BUG();
  }
  v3 = v2 - 2;
  v4 = *(__int16 *)(*a1 + v2 - 2);
  a1[3] = v3 - v4;
  if ( v4 >= v3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(279, v5, v6, v7);
    goto LABEL_7;
  }
  return result;
}
// 807FCF0: variable 'v5' is possibly undefined
// 807FCF0: variable 'v6' is possibly undefined
// 807FCF0: variable 'v7' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
