/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034980
// Address: 0x0000000140034980

//----- (0000000140034980) ----------------------------------------------------
void __fastcall sub_140034980(__int64 a1, const char *a2, size_t a3)
{
  __int64 v3; // rbx
  unsigned __int64 v7; // r8

  v3 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -88;
  v7 = *(_QWORD *)(v3 + 8) + 1LL;
  if ( v7 > *(_QWORD *)(v3 + 16) )
    *(_QWORD *)v3 = sub_14005ABE0(v3, *(void **)v3, v7, 1u);
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + *(_QWORD *)v3) = -88;
  ++*(_QWORD *)(v3 + 8);
  ++*(_DWORD *)(a1 + 200);
  if ( !a3 )
    a3 = strlen(a2);
  sub_1400343E0(a1, a3);
  sub_1400343E0(a1, WORD1(a3));
  sub_14002CB40(*(void ***)(a1 + 192), a2, a3);
  *(_DWORD *)(a1 + 200) += a3;
}
