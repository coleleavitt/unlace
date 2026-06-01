/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B790
// Address: 0x000000010006B790

//----- (000000010006B790) ----------------------------------------------------
__int64 __fastcall sub_10006B790(__int64 a1, char a2)
{
  char *v2; // rax
  __int64 v3; // rax

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v2 = (char *)qvector_reserve(a1, nullptr, 5u, 1u);
  *(_QWORD *)a1 = v2;
  __bzero(&v2[*(_QWORD *)(a1 + 8)], 5LL - *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 5;
  v3 = *(_QWORD *)a1;
  *(_DWORD *)v3 = 0;
  *(_BYTE *)(v3 + 4) = a2;
  return a1;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
