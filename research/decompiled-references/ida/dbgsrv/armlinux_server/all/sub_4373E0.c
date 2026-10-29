/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4373E0
// Address: 0x00000000004373E0

//----- (00000000004373E0) ----------------------------------------------------
__int64 __fastcall sub_4373E0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x1
  _BYTE *v4; // x0
  unsigned __int16 v5; // w2

  if ( dword_52019C <= 0 )
    return 1612;
  v2 = *(_QWORD *)(a1 + 200);
  *(_BYTE *)(a1 + 212) = -44;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned __int64)(v3 + 1) > *(_QWORD *)(v2 + 16) )
  {
    v4 = sub_491288(v2, *(void **)v2, v3 + 1, 1u);
    *(_QWORD *)v2 = v4;
    v3 = *(_QWORD *)(v2 + 8);
  }
  else
  {
    v4 = *(_BYTE **)v2;
  }
  v4[v3] = -44;
  ++*(_QWORD *)(v2 + 8);
  v5 = dword_52019C;
  ++*(_DWORD *)(a1 + 208);
  sub_4370A8(a1, 0, v5);
  return 0;
}
// 52019C: using guessed type int dword_52019C;
