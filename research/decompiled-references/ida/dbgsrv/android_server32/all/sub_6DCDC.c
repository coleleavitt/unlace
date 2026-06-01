/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DCDC
// Address: 0x0006DCDC

//----- (0006DCDC) --------------------------------------------------------
ssize_t __fastcall sub_6DCDC(_DWORD *a1, const void *a2, size_t a3)
{
  int v5; // r4
  ssize_t v6; // r5
  _DWORD *v7; // r0

  v5 = a1[7];
  while ( 1 )
  {
    v6 = sendto(v5, a2, a3, 0, nullptr, 0);
    if ( v6 != -1 )
      break;
    v7 = (_DWORD *)_errno(0);
    if ( *v7 != 4 )
      goto LABEL_7;
  }
  if ( v6 >= 0 )
    return v6;
  v7 = (_DWORD *)_errno(v6 + 1);
LABEL_7:
  a1[11] = "send";
  a1[12] = *v7;
  return v6;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
