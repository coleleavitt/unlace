/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4794B8
// Address: 0x00000000004794B8

//----- (00000000004794B8) ----------------------------------------------------
ssize_t __fastcall sub_4794B8(__int64 a1, void *buf, int a3)
{
  size_t v4; // x21
  int v6; // w20
  int *v7; // x0
  ssize_t result; // x0
  ssize_t v9; // x19

  v4 = a3;
  v6 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    result = send(v6, buf, v4, 0);
    v9 = result;
    if ( result != -1 )
      break;
    v7 = __errno_location();
    if ( *v7 != 4 )
      goto LABEL_6;
  }
  if ( (result & 0x8000000000000000LL) == 0 )
    return result;
  v7 = __errno_location();
LABEL_6:
  *(_QWORD *)(a1 + 88) = "send";
  *(_DWORD *)(a1 + 96) = *v7;
  return v9;
}
