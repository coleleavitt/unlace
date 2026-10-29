/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A67C4
// Address: 0x00000000000A67C4

//----- (00000000000A67C4) ----------------------------------------------------
ssize_t __fastcall sub_A67C4(__int64 a1, void *buf, int a3)
{
  int v3; // w22
  size_t v6; // x23
  ssize_t v7; // x0
  ssize_t v8; // x20
  _DWORD *v9; // x0

  v3 = *(_DWORD *)(a1 + 56);
  v6 = a3;
  while ( 1 )
  {
    v7 = sendto(v3, buf, v6, 0, nullptr, 0);
    v8 = v7;
    if ( v7 != -1 )
      break;
    v9 = (_DWORD *)__errno(-1);
    if ( *v9 != 4 )
      goto LABEL_7;
  }
  if ( (v7 & 0x8000000000000000LL) == 0 )
    return v8;
  v9 = (_DWORD *)__errno(v7);
LABEL_7:
  *(_QWORD *)(a1 + 88) = "send";
  *(_DWORD *)(a1 + 96) = *v9;
  return v8;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
