/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BCA0
// Address: 0x000000000046BCA0

//----- (000000000046BCA0) ----------------------------------------------------
__int64 __fastcall sub_46BCA0(__int64 a1, unsigned __int64 *a2)
{
  const char *v3; // r12
  unsigned __int64 v4; // rax
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r13
  void *v8; // rdi
  size_t v9; // r14
  void *v10; // rax

  v3 = (const char *)*a2;
  v4 = *a2;
  do
  {
    if ( v4 >= a2[1] )
      goto LABEL_4;
    ++v4;
  }
  while ( *(_BYTE *)(v4 - 1) );
  *a2 = v4;
  if ( !v3 || (v6 = strlen(v3), (v7 = v6) == 0) )
  {
LABEL_4:
    *(_QWORD *)(a1 + 8) = 0;
    goto LABEL_5;
  }
  v8 = *(void **)a1;
  v9 = v6 + 1;
  if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
  {
    v10 = sub_481540(a1, *(void **)a1, v6 + 1, 1u);
    *(_QWORD *)a1 = v10;
    v8 = v10;
  }
  *(_QWORD *)(a1 + 8) = v9;
  memmove(v8, v3, v7);
  *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
LABEL_5:
  *(_QWORD *)(a1 + 24) = sub_47FE70(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 32) = sub_47FE70(a2, a2[1]) - 1;
  result = sub_47FE70(a2, a2[1]) - 1;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
