/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002707C
// Address: 0x000000010002707C

//----- (000000010002707C) ----------------------------------------------------
__int64 __fastcall sub_10002707C(__int64 a1)
{
  __int64 v1; // x30
  __int64 v3; // x19
  _QWORD *v4; // x1
  __int64 v5; // x8
  __int64 v6; // x21

  if ( *(_DWORD *)(a1 + 216) )
  {
    if ( ((v1 ^ (2 * v1)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
  else
  {
    *(_BYTE *)(a1 + 212) = -81;
    v3 = *(_QWORD *)(a1 + 200);
    v4 = *(_QWORD **)v3;
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v5 + 1) )
    {
      v6 = a1;
      v4 = qvector_reserve(*(_QWORD **)(a1 + 200), v4, v5 + 1, 1u);
      a1 = v6;
      *(_QWORD *)v3 = v4;
      v5 = *(_QWORD *)(v3 + 8);
    }
    *((_BYTE *)v4 + v5) = -81;
    ++*(_QWORD *)(v3 + 8);
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
}
// 100027088: variable 'v1' is possibly undefined
