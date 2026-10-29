/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F8E0
// Address: 0x000000014004F8E0

//----- (000000014004F8E0) ----------------------------------------------------
__int64 __fastcall sub_14004F8E0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rdi
  const char *v6; // rcx

  v2 = *(_QWORD **)(a1 + 16);
  v5 = sub_14004D360(*(_QWORD *)(a1 + 8) + 104LL);
  *(_QWORD *)v5 = *(unsigned int *)(a2 + 12);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = *(int *)(a2 + 20);
  sub_14004C980((__int16 **)(v5 + 16), (_QWORD *)a2, v2);
  *(_QWORD *)(v5 + 56) = 0;
  v6 = Str1;
  *(_QWORD *)(v5 + 64) = 0;
  if ( *(_QWORD *)(v5 + 24) )
    v6 = *(const char **)(v5 + 16);
  if ( !strncmp(v6, ".debug_", 7u) )
    *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
