/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027260
// Address: 0x0000000100027260

//----- (0000000100027260) ----------------------------------------------------
__int64 __fastcall sub_100027260(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  void *v3; // rax
  __int64 v4; // rcx

  v1 = *(unsigned __int8 *)(a1 + 212);
  if ( v1 != 168 && v1 != 191 )
  {
    *(_BYTE *)(a1 + 212) = -65;
    v2 = *(_QWORD *)(a1 + 200);
    v3 = *(void **)v2;
    v4 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
    {
      v3 = qvector_reserve(*(_QWORD *)(a1 + 200), v3, v4 + 1, 1u);
      *(_QWORD *)v2 = v3;
      v4 = *(_QWORD *)(v2 + 8);
    }
    *((_BYTE *)v3 + v4) = -65;
    ++*(_QWORD *)(v2 + 8);
    ++*(_DWORD *)(a1 + 208);
  }
  return 0;
}
