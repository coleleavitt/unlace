/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002A040
// Address: 0x000000010002A040

//----- (000000010002A040) ----------------------------------------------------
__int64 __fastcall sub_10002A040(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    return set_qerrno();
  *(_BYTE *)(a1 + 212) = -81;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(void **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD *)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = -81;
  ++*(_QWORD *)(v2 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
