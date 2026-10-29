/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31FF4
// Address: 0x00031FF4

//----- (00031FF4) --------------------------------------------------------
int __fastcall sub_31FF4(int a1, int a2, bool *a3)
{
  int v3; // r4
  int result; // r0
  int v5; // r4
  int v6; // r5

  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !under_debugger )
      interr(20099);
LABEL_19:
    __debugbreak();
  }
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(20056);
    goto LABEL_19;
  }
  v3 = *(_DWORD *)(a1 + 20);
  if ( !(v3 << 6) )
    return 0;
  result = *(_DWORD *)(a1 + 16);
  v5 = v3 << 6;
  while ( 1 )
  {
    if ( *(_DWORD *)(result + 44) == a2 )
    {
      v6 = *(_DWORD *)(result + 4);
      if ( v6 == 9 || v6 == 4 )
        break;
    }
    v5 -= 64;
    result += 64;
    if ( !v5 )
      return 0;
  }
  if ( a3 )
    *a3 = v6 == 4;
  return result;
}
// E0550: using guessed type char under_debugger;
