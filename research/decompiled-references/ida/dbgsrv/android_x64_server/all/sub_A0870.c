/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0870
// Address: 0x00000000000A0870

//----- (00000000000A0870) ----------------------------------------------------
char __fastcall sub_A0870(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
