/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063770
// Address: 0x0000000100063770

//----- (0000000100063770) ----------------------------------------------------
__int64 __fastcall sub_100063770(__int64 a1, void *a2, size_t a3)
{
  int v6; // w23
  ssize_t v7; // x0
  __int64 v8; // x20
  int v9; // w8

  v6 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    v7 = recv(v6, a2, a3, 0);
    v8 = v7;
    if ( v7 != -1 )
      break;
    if ( *__error() != 4 )
      goto LABEL_4;
  }
  if ( a3 && !v7 )
  {
    v9 = 0;
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    v8 = -1;
    goto LABEL_8;
  }
  if ( v7 < 0 )
  {
LABEL_4:
    *(_QWORD *)(a1 + 88) = "recv";
    v9 = *__error();
LABEL_8:
    *(_DWORD *)(a1 + 96) = v9;
  }
  return v8;
}
