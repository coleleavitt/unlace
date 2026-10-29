/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A870
// Address: 0x000000000008A870

//----- (000000000008A870) ----------------------------------------------------
__int64 __fastcall sub_8A870(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-48h]
  __int128 v7; // [rsp+10h] [rbp-38h]
  char v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v7 = *(_OWORD *)a1;
  v6 = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 136) = a4;
  v8[0] = 1;
  v9 = 0;
  result = sub_8A480(a1, (__int64)v8);
  if ( !(_DWORD)result )
    *a3 = v9;
  *(_OWORD *)a1 = v7;
  *(_OWORD *)(a1 + 136) = v6;
  return result;
}
