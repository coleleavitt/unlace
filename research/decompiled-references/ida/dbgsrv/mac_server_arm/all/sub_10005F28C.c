/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F28C
// Address: 0x000000010005F28C

//----- (000000010005F28C) ----------------------------------------------------
ssize_t __fastcall sub_10005F28C(__int64 a1, void *a2, int a3)
{
  int v5; // w22
  size_t v6; // x23
  ssize_t v7; // x0
  ssize_t v8; // x21

  v5 = *(_DWORD *)(a1 + 56);
  v6 = a3;
  while ( 1 )
  {
    v7 = send(v5, a2, v6, 0);
    v8 = v7;
    if ( v7 != -1 )
      break;
    if ( *__error() != 4 )
      goto LABEL_6;
  }
  if ( (v7 & 0x8000000000000000LL) == 0 )
    return v8;
LABEL_6:
  *(_QWORD *)(a1 + 88) = "send";
  *(_DWORD *)(a1 + 96) = *__error();
  return v8;
}
