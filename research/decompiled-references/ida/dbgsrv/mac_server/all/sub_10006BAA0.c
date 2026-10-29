/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BAA0
// Address: 0x000000010006BAA0

//----- (000000010006BAA0) ----------------------------------------------------
ssize_t __fastcall sub_10006BAA0(__int64 a1, void *a2, size_t a3)
{
  int v4; // r13d
  ssize_t v5; // r14
  int v6; // eax

  v4 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    v5 = recv(v4, a2, a3, 0);
    if ( v5 != -1 )
      break;
    if ( *__error() != 4 )
      goto LABEL_4;
  }
  if ( v5 == 0 && a3 != 0 )
  {
    *(_QWORD *)(a1 + 88) = "connection_closed_by_peer";
    v5 = -1;
    v6 = 0;
    goto LABEL_7;
  }
  if ( v5 < 0 )
  {
LABEL_4:
    *(_QWORD *)(a1 + 88) = "recv";
    v6 = *__error();
LABEL_7:
    *(_DWORD *)(a1 + 96) = v6;
  }
  return v5;
}
