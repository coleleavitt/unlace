/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B0AC0
// Address: 0x00000000000B0AC0

//----- (00000000000B0AC0) ----------------------------------------------------
char __fastcall sub_B0AC0(__int64 a1, const char *a2)
{
  char *v2; // rax
  size_t v3; // rbx
  unsigned __int64 v4; // r12
  char *v5; // rax

  v2 = strstr(a2, ".clt");
  if ( !v2 )
    return 0;
  *(_QWORD *)(a1 + 8) = 0;
  v3 = v2 - a2;
  v4 = v2 - a2 + 1;
  if ( *(_QWORD *)(a1 + 16) >= v4 )
  {
    v5 = *(char **)a1;
  }
  else
  {
    v5 = (char *)qvector_reserve(a1, *(char **)a1, v2 - a2 + 1, 1u);
    *(_QWORD *)a1 = v5;
  }
  *(_QWORD *)(a1 + 8) = v4;
  v5[v3] = 0;
  memmove(*(void **)a1, a2, v3);
  return 1;
}
