/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022118
// Address: 0x0000000100022118

//----- (0000000100022118) ----------------------------------------------------
__int64 __fastcall sub_100022118(__int64 a1)
{
  __int64 v1; // x19
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x21

  if ( *(unsigned __int8 *)(a1 + 212) != 211 )
  {
    *(_BYTE *)(a1 + 212) = -47;
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
    *((_BYTE *)v2 + v3) = -47;
    ++*(_QWORD *)(v1 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return 0;
}
