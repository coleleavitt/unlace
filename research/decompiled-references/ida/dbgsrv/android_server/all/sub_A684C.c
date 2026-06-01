/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A684C
// Address: 0x00000000000A684C

//----- (00000000000A684C) ----------------------------------------------------
__int64 __fastcall sub_A684C(__int64 a1, void *buf, size_t n)
{
  int v3; // w22
  ssize_t v7; // x0
  __int64 v8; // x20
  int *v9; // x0
  int v10; // w8

  v3 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    v7 = recvfrom(v3, buf, n, 0, nullptr, nullptr);
    v8 = v7;
    if ( v7 != -1 )
      break;
    v9 = (int *)__errno(-1);
    if ( *v9 != 4 )
      goto LABEL_4;
  }
  if ( n && !v7 )
  {
    v10 = 0;
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    v8 = -1;
    goto LABEL_8;
  }
  if ( v7 < 0 )
  {
    v9 = (int *)__errno(v7);
LABEL_4:
    *(_QWORD *)(a1 + 88) = "recv";
    v10 = *v9;
LABEL_8:
    *(_DWORD *)(a1 + 96) = v10;
  }
  return v8;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
