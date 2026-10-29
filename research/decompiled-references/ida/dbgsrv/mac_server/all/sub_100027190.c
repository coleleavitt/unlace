/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027190
// Address: 0x0000000100027190

//----- (0000000100027190) ----------------------------------------------------
__int64 __fastcall sub_100027190(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx

  if ( !sub_100027020(a1) )
  {
    *(_BYTE *)(a1 + 212) = -50;
    v1 = *(_QWORD *)(a1 + 200);
    v2 = *(void **)v1;
    v3 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
    {
      v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
      *(_QWORD *)v1 = v2;
      v3 = *(_QWORD *)(v1 + 8);
    }
    *((_BYTE *)v2 + v3) = -50;
    ++*(_QWORD *)(v1 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return 0;
}
