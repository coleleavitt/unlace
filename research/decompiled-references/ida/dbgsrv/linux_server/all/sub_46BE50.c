/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BE50
// Address: 0x000000000046BE50

//----- (000000000046BE50) ----------------------------------------------------
unsigned __int64 __fastcall sub_46BE50(__int64 a1, unsigned __int64 *a2)
{
  const char *v3; // r12
  unsigned __int64 result; // rax
  size_t v5; // rbx
  void *v6; // rdi
  unsigned __int64 v7; // r13
  void *v8; // rax

  *(_DWORD *)a1 = sub_47FD50(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = (unsigned int)sub_47FD50(a2, a2[1]) != 0;
  *(_QWORD *)(a1 + 8) = sub_47FE70(a2, a2[1]) - 1;
  v3 = (const char *)*a2;
  result = *a2;
  do
  {
    if ( result >= a2[1] )
      goto LABEL_4;
    ++result;
  }
  while ( *(_BYTE *)(result - 1) );
  *a2 = result;
  if ( !v3 || (result = strlen(v3), (v5 = result) == 0) )
  {
LABEL_4:
    *(_QWORD *)(a1 + 24) = 0;
    return result;
  }
  v6 = *(void **)(a1 + 16);
  v7 = result + 1;
  if ( *(_QWORD *)(a1 + 32) < result + 1 )
  {
    v8 = sub_481540(a1 + 16, *(void **)(a1 + 16), v7, 1u);
    *(_QWORD *)(a1 + 16) = v8;
    v6 = v8;
  }
  *(_QWORD *)(a1 + 24) = v7;
  memmove(v6, v3, v5);
  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(result + v5) = 0;
  return result;
}
