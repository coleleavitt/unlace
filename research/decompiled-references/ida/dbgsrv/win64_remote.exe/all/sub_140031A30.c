/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031A30
// Address: 0x0000000140031A30

//----- (0000000140031A30) ----------------------------------------------------
__int64 __fastcall sub_140031A30(__int64 a1)
{
  __int64 v1; // rax
  const char *v2; // rdx
  size_t v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = Str1;
  v4 = v1 - 1;
  if ( v1 )
    v2 = *(const char **)(a1 + 32);
  else
    v4 = 0;
  sub_140034980(a1, v2, v4);
  v5 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -80;
  v6 = *(_QWORD *)(v5 + 8) + 1LL;
  if ( v6 > *(_QWORD *)(v5 + 16) )
    *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v6, 1u);
  *(_BYTE *)(*(_QWORD *)(v5 + 8) + *(_QWORD *)v5) = -80;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 200);
  return 0;
}
