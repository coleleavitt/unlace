/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E2480
// Address: 0x00000000000E2480

//----- (00000000000E2480) ----------------------------------------------------
__int64 __fastcall sub_E2480(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  _BYTE *v5; // rax
  size_t v6; // rsi

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 + 1 >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v3 + 1 )
      v6 = v3 + 1;
    *(_QWORD *)(a2 + 16) = v6;
    v5 = realloc(*(void **)a2, v6);
    *(_QWORD *)a2 = v5;
    v3 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v5 = *(_BYTE **)a2;
  }
  v5[v3] = 126;
  ++*(_QWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), a2);
}
