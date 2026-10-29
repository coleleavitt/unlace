/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A910
// Address: 0x000000000008A910

//----- (000000000008A910) ----------------------------------------------------
__int64 __fastcall sub_8A910(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-28h]
  __int128 v6; // [rsp+10h] [rbp-18h]

  v6 = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 144) = a4;
  *(_QWORD *)(a1 + 136) = 0;
  result = sub_8A480(a1, a3);
  *(_OWORD *)a1 = v6;
  *(_OWORD *)(a1 + 136) = v5;
  return result;
}
