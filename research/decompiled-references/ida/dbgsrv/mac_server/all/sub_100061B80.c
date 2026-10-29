/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061B80
// Address: 0x0000000100061B80

//----- (0000000100061B80) ----------------------------------------------------
char __fastcall sub_100061B80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  char result; // al

  v4 = *(_DWORD *)(a3 + 20) & 0xFFFFFFF;
  if ( v4 == 5 )
    goto LABEL_4;
  if ( v4 == 7 )
  {
    result = 1;
    if ( *(_QWORD *)(a3 + 32) == a4 )
      return result;
LABEL_4:
    result = 1;
    if ( *(_QWORD *)(a3 + 8) == a4 )
      return result;
  }
  return 0;
}
