/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400401B0
// Address: 0x00000001400401B0

//----- (00000001400401B0) ----------------------------------------------------
__int64 __fastcall sub_1400401B0(__int64 a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax

  v4 = operator new(0x1C8u);
  if ( v4 )
    v5 = sub_140046DB0((__int64)v4, a2, a1);
  else
    v5 = 0;
  *(_BYTE *)(v5 + 184) = *(_BYTE *)(a1 + 107);
  v6 = sub_14000EA90();
  *(_DWORD *)(v6 + 40) = 1;
  sub_14004F530(v5, v6);
  qword_1400CB068 = v5;
  return v5;
}
// 1400CB068: using guessed type __int64 qword_1400CB068;
