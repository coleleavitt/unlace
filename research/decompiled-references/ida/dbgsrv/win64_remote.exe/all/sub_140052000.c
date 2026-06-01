/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052000
// Address: 0x0000000140052000

//----- (0000000140052000) ----------------------------------------------------
__int64 __fastcall sub_140052000(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // r9d
  _DWORD *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rdx

  if ( a2 == 4 )
    return 0;
  v6 = 0;
  v7 = (_DWORD *)(a1 + 728);
  v8 = 0;
  v9 = (_QWORD *)(a1 + 696);
  do
  {
    if ( *v9 == a3 && *v7 == a2 )
      break;
    if ( *v9 == -1 )
      goto LABEL_9;
    ++v8;
    ++v9;
    ++v7;
  }
  while ( v8 < 4 );
  v8 = -1;
LABEL_9:
  if ( v8 == -1 )
    return 6;
  return v6;
}
