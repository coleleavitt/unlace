/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BA20
// Address: 0x000000010006BA20

//----- (000000010006BA20) ----------------------------------------------------
ssize_t __fastcall sub_10006BA20(__int64 a1, const void *a2, int a3)
{
  int v3; // r12d
  size_t v4; // r13
  ssize_t v5; // rax
  ssize_t v6; // r14

  v3 = *(_DWORD *)(a1 + 56);
  v4 = a3;
  while ( 1 )
  {
    v5 = send(v3, a2, v4, 0);
    v6 = v5;
    if ( v5 != -1 )
      break;
    if ( *__error() != 4 )
      goto LABEL_6;
  }
  if ( v5 >= 0 )
    return v6;
LABEL_6:
  *(_QWORD *)(a1 + 88) = "send";
  *(_DWORD *)(a1 + 96) = *__error();
  return v6;
}
