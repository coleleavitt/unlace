/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007A530
// Address: 0x000000010007A530

//----- (000000010007A530) ----------------------------------------------------
char __fastcall sub_10007A530(__int64 a1, int a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0;
  if ( *(unsigned __int8 *)(v3 + 1) == a2 )
  {
    if ( a3 )
      return 1;
    if ( (*(_DWORD *)(a1 + 16) & 0x49) == 0x41 )
    {
      v5 = *(_QWORD *)(a1 + 48);
      if ( !v5 || *(_DWORD *)(v5 + 20) && *(_DWORD *)(v5 + 28) )
        return 1;
    }
  }
  return 0;
}
