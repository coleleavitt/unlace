/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96F40
// Address: 0x00096F40

//----- (00096F40) --------------------------------------------------------
ssize_t __cdecl sub_96F40(_DWORD *a1, void *buf, size_t n)
{
  int v3; // edi
  ssize_t v4; // eax
  int v5; // ecx
  ssize_t v6; // esi
  _DWORD *v7; // eax

  v3 = a1[7];
  while ( 1 )
  {
    v4 = sendto(v3, buf, n, 0, nullptr, 0);
    v6 = v4;
    if ( v4 != -1 )
      break;
    v7 = (_DWORD *)__errno(v5);
    if ( *v7 != 4 )
      goto LABEL_7;
  }
  if ( v4 >= 0 )
    return v6;
  v7 = (_DWORD *)__errno(v5);
LABEL_7:
  a1[11] = "send";
  a1[12] = *v7;
  return v6;
}
// 96F7F: variable 'v5' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
