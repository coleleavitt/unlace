/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000219A4
// Address: 0x00000001000219A4

//----- (00000001000219A4) ----------------------------------------------------
_QWORD *__fastcall sub_1000219A4(__int64 a1, char *__s, size_t a3)
{
  __int64 v6; // x22
  _QWORD *v7; // x1
  __int64 v8; // x8
  _QWORD *result; // x0

  *(_BYTE *)(a1 + 212) = -88;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD **)(a1 + 200), v7, v8 + 1, 1u);
    *(_QWORD *)v6 = v7;
    v8 = *(_QWORD *)(v6 + 8);
  }
  *((_BYTE *)v7 + v8) = -88;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  if ( !a3 )
    a3 = strlen(__s);
  sub_1000218E0((_QWORD *)a1, a3);
  sub_1000218E0((_QWORD *)a1, SWORD1(a3));
  result = sub_10002CAD4(*(_QWORD **)(a1 + 200), __s, a3);
  *(_DWORD *)(a1 + 208) += a3;
  return result;
}
