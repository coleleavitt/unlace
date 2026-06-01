/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000271F0
// Address: 0x00000001000271F0

//----- (00000001000271F0) ----------------------------------------------------
__int64 __fastcall sub_1000271F0(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 212) != 0xD3 )
  {
    *(_BYTE *)(a1 + 212) = -47;
    v1 = *(_QWORD *)(a1 + 200);
    v2 = *(void **)v1;
    v3 = *(_QWORD *)(v1 + 8);
    if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
    {
      v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
      *(_QWORD *)v1 = v2;
      v3 = *(_QWORD *)(v1 + 8);
    }
    *((_BYTE *)v2 + v3) = -47;
    ++*(_QWORD *)(v1 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return 0;
}
