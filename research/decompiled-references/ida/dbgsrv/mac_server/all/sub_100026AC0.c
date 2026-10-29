/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026AC0
// Address: 0x0000000100026AC0

//----- (0000000100026AC0) ----------------------------------------------------
__int64 __fastcall sub_100026AC0(__int64 a1, const char *a2, size_t a3)
{
  __int64 v4; // r12
  void *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  *(_BYTE *)(a1 + 212) = -88;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(void **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve(*(_QWORD *)(a1 + 200), v5, v6 + 1, 1u);
    *(_QWORD *)v4 = v5;
    v6 = *(_QWORD *)(v4 + 8);
  }
  *((_BYTE *)v5 + v6) = -88;
  ++*(_QWORD *)(v4 + 8);
  ++*(_DWORD *)(a1 + 208);
  if ( !a3 )
    a3 = strlen(a2);
  sub_100026A20(a1, a3);
  sub_100026A20(a1, SWORD1(a3));
  result = sub_100032BC0(*(_QWORD **)(a1 + 200), a2, a3);
  *(_DWORD *)(a1 + 208) += a3;
  return result;
}
