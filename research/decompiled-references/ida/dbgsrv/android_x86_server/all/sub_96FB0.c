/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96FB0
// Address: 0x00096FB0

//----- (00096FB0) --------------------------------------------------------
int __cdecl sub_96FB0(int a1, void *buf, size_t n)
{
  int v3; // edi
  ssize_t v4; // eax
  int v5; // ecx
  int v6; // esi
  int *v7; // eax
  int v8; // ecx
  int v9; // eax

  v3 = *(_DWORD *)(a1 + 28);
  while ( 1 )
  {
    v4 = recvfrom(v3, buf, n, 0, nullptr, nullptr);
    v6 = v4;
    if ( v4 != -1 )
      break;
    v7 = (int *)__errno(v5);
    if ( *v7 != 4 )
      goto LABEL_4;
  }
  if ( n && !v4 )
  {
    v8 = a1;
    *(_DWORD *)(a1 + 44) = "connection_closed_by_peer";
    v6 = -1;
    v9 = 0;
    goto LABEL_8;
  }
  if ( v4 < 0 )
  {
    v7 = (int *)__errno(v5);
LABEL_4:
    *(_DWORD *)(a1 + 44) = "recv";
    v8 = a1;
    v9 = *v7;
LABEL_8:
    *(_DWORD *)(v8 + 48) = v9;
  }
  return v6;
}
// 96FEF: variable 'v5' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
