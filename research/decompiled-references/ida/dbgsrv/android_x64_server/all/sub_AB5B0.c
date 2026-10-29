/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB5B0
// Address: 0x00000000000AB5B0

//----- (00000000000AB5B0) ----------------------------------------------------
ssize_t __fastcall sub_AB5B0(__int64 a1, const void *a2, int a3)
{
  unsigned int v3; // r12d
  size_t v4; // rbp
  ssize_t v5; // rax
  ssize_t v6; // rbx
  _DWORD *v7; // rax

  v3 = *(_DWORD *)(a1 + 56);
  v4 = a3;
  while ( 1 )
  {
    v5 = sendto(v3, a2, v4, 0, nullptr, 0);
    v6 = v5;
    if ( v5 != -1 )
      break;
    v7 = (_DWORD *)__errno(v3);
    if ( *v7 != 4 )
      goto LABEL_7;
  }
  if ( v5 >= 0 )
    return v6;
  v7 = (_DWORD *)__errno(v3);
LABEL_7:
  *(_QWORD *)(a1 + 88) = "send";
  *(_DWORD *)(a1 + 96) = *v7;
  return v6;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
