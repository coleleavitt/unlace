/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C590
// Address: 0x000000010000C590

//----- (000000010000C590) ----------------------------------------------------
int __fastcall sub_10000C590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rdi
  _QWORD *v9; // rax

  v6 = *(_QWORD *)(a1 + 96);
  v7 = _s1;
  v8 = _s1;
  if ( *(_QWORD *)(v6 + 8) )
    v8 = *(const char **)v6;
  if ( *(_QWORD *)(a4 + 8) )
    v7 = *(const char **)a4;
  LODWORD(v9) = strcmp(v8, v7);
  if ( !(_DWORD)v9 )
  {
    v9 = *(_QWORD **)(a1 + 88);
    *v9 = a2;
  }
  return (int)v9;
}
