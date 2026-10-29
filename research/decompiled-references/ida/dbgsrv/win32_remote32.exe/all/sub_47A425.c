/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A425
// Address: 0x0047A425

//----- (0047A425) --------------------------------------------------------
char __cdecl sub_47A425(int a1, __int64 a2, __int16 a3, int a4)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // di
  char result; // al
  int v7; // eax

  v4 = sub_463600(a2 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL, a3);
  v5 = v4;
  if ( !a4 )
    return v4 >= 8u;
  v7 = sub_47B587();
  switch ( v7 )
  {
    case 0:
      return sub_479B6A((unsigned __int64 *)a1, a2, a3);
    case 512:
      result = 0;
      if ( v5 && *(int *)(a1 + 4) >= 0 )
        return 1;
      break;
    case 256:
      result = 0;
      if ( v5 && *(int *)(a1 + 4) < 0 )
        return 1;
      break;
    default:
      return 0;
  }
  return result;
}
