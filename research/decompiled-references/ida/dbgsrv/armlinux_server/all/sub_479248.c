/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479248
// Address: 0x0000000000479248

//----- (0000000000479248) ----------------------------------------------------
__int64 __fastcall sub_479248(__int64 a1, void *buf, size_t n)
{
  int v6; // w21
  int *v7; // x0
  ssize_t v8; // x0
  __int64 v9; // x19
  bool v10; // zf

  v6 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    v8 = recv(v6, buf, n, 0);
    v9 = v8;
    if ( v8 != -1 )
      break;
    v7 = __errno_location();
    if ( *v7 != 4 )
      goto LABEL_12;
  }
  if ( v8 )
    v10 = 1;
  else
    v10 = n == 0;
  if ( !v10 )
  {
    v9 = -1;
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    *(_DWORD *)(a1 + 96) = 0;
    return v9;
  }
  if ( (v8 & 0x8000000000000000LL) == 0 )
    return v9;
  v7 = __errno_location();
LABEL_12:
  *(_QWORD *)(a1 + 88) = "recv";
  *(_DWORD *)(a1 + 96) = *v7;
  return v9;
}
