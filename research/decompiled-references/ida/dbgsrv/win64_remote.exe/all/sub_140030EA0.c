/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030EA0
// Address: 0x0000000140030EA0

//----- (0000000140030EA0) ----------------------------------------------------
__int64 __fastcall sub_140030EA0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  const char *v4; // rdx
  __int64 v5; // rax
  size_t v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // r8

  v1 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -86;
  v3 = *(_QWORD *)(v1 + 8) + 1LL;
  if ( v3 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v3, 1u);
  v4 = Str1;
  *(_BYTE *)(*(_QWORD *)(v1 + 8) + *(_QWORD *)v1) = -86;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v5 - 1;
  if ( v5 )
    v4 = *(const char **)(a1 + 32);
  else
    v6 = 0;
  sub_140034980(a1, v4, v6);
  v7 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = 1;
  v8 = *(_QWORD *)(v7 + 8) + 1LL;
  if ( v8 > *(_QWORD *)(v7 + 16) )
    *(_QWORD *)v7 = sub_14005ABE0(v7, *(void **)v7, v8, 1u);
  *(_BYTE *)(*(_QWORD *)(v7 + 8) + *(_QWORD *)v7) = 1;
  ++*(_QWORD *)(v7 + 8);
  ++*(_DWORD *)(a1 + 200);
  return 0;
}
