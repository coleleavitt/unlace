/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DD30
// Address: 0x0006DD30

//----- (0006DD30) --------------------------------------------------------
ssize_t __fastcall sub_6DD30(int a1, void *a2, size_t a3)
{
  int v4; // r7
  int v5; // r6
  ssize_t v6; // r5
  int *v7; // r0
  int v8; // r1

  v4 = *(_DWORD *)(a1 + 28);
  while ( 1 )
  {
    v5 = 0;
    v6 = recvfrom(v4, a2, a3, 0, nullptr, nullptr);
    if ( v6 != -1 )
      break;
    v7 = (int *)_errno(0);
    if ( *v7 != 4 )
      goto LABEL_4;
  }
  if ( a3 && !v6 )
  {
    v8 = a1;
    *(_DWORD *)(a1 + 44) = "connection_closed_by_peer";
    v6 = -1;
    goto LABEL_8;
  }
  if ( v6 < 0 )
  {
    v7 = (int *)_errno(a3);
LABEL_4:
    *(_DWORD *)(a1 + 44) = "recv";
    v8 = a1;
    v5 = *v7;
LABEL_8:
    *(_DWORD *)(v8 + 48) = v5;
  }
  return v6;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
