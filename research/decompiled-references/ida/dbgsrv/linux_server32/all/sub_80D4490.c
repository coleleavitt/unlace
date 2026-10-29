/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D4490
// Address: 0x080D4490

//----- (080D4490) --------------------------------------------------------
int __cdecl sub_80D4490(_DWORD *a1)
{
  _DWORD *v1; // eax

  if ( !a1 || !a1[8] || !a1[9] || sub_80D4390((int)a1) )
    return -2;
  v1 = (_DWORD *)a1[7];
  v1[11] = 0;
  v1[12] = 0;
  v1[13] = 0;
  return sub_80D43C0(a1);
}
