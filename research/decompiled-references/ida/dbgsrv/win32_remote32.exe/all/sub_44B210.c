/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B210
// Address: 0x0044B210

//----- (0044B210) --------------------------------------------------------
int __stdcall sub_44B210(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx

  if ( a2 == 4 )
    return 0;
  v5 = 0;
  v6 = (_DWORD *)(a1 + 392);
  do
  {
    v7 = *(v6 - 4);
    if ( v7 == a3 && *v6 == a2 )
      break;
    if ( v7 == -1 )
      goto LABEL_9;
    ++v5;
    ++v6;
  }
  while ( v5 < 4 );
  v5 = -1;
LABEL_9:
  result = 0;
  if ( v5 == -1 )
    return 6;
  return result;
}
