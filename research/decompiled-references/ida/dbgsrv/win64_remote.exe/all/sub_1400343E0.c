/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400343E0
// Address: 0x00000001400343E0

//----- (00000001400343E0) ----------------------------------------------------
__int64 __fastcall sub_1400343E0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rbx
  __int16 v7; // si
  unsigned __int64 v8; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(v2 + 8) + 1LL;
  if ( v5 > *(_QWORD *)(v2 + 16) )
    *(_QWORD *)v2 = sub_14005ABE0(*(_QWORD *)(a1 + 192), *(void **)v2, v5, 1u);
  *(_BYTE *)(*(_QWORD *)v2 + (*(_QWORD *)(v2 + 8))++) = a2;
  v6 = *(_QWORD *)(a1 + 192);
  ++*(_DWORD *)(a1 + 200);
  v7 = HIBYTE(a2);
  v8 = *(_QWORD *)(v6 + 8) + 1LL;
  if ( v8 > *(_QWORD *)(v6 + 16) )
    *(_QWORD *)v6 = sub_14005ABE0(v6, *(void **)v6, v8, 1u);
  result = *(_QWORD *)(v6 + 8);
  *(_BYTE *)(*(_QWORD *)v6 + result) = v7;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 200);
  return result;
}
