/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025810
// Address: 0x0000000100025810

//----- (0000000100025810) ----------------------------------------------------
__int64 __fastcall sub_100025810(__int64 a1)
{
  __int64 v1; // x19
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x22

  if ( dword_10009CA54 < 1 )
    return 1612;
  *(_BYTE *)(a1 + 212) = -44;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(_QWORD **)v1;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
  {
    v4 = a1;
    v2 = qvector_reserve(*(_QWORD **)(a1 + 200), v2, v3 + 1, 1u);
    a1 = v4;
    *(_QWORD *)v1 = v2;
    v3 = *(_QWORD *)(v1 + 8);
  }
  *((_BYTE *)v2 + v3) = -44;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_100021C2C((_QWORD *)a1, 0, (unsigned __int16)dword_10009CA54);
  return 0;
}
// 10009CA54: using guessed type int dword_10009CA54;
