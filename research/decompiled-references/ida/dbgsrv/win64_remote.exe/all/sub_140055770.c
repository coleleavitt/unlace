/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055770
// Address: 0x0000000140055770

//----- (0000000140055770) ----------------------------------------------------
__int64 __fastcall sub_140055770(__int64 a1, char a2, unsigned __int64 a3)
{
  signed int v3; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 24);
  v9 = a3;
  *(_QWORD *)&v10 = 0;
  BYTE8(v10) = a2;
  if ( *(_QWORD *)(a1 + 8) && v3 > -1 )
  {
    v5 = sub_14005A7C0();
    *(_QWORD *)&v10 = sub_140054640(v5, v3);
  }
  v6 = *(_QWORD *)(a1 + 40) + 1LL;
  if ( v6 > *(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a1 + 32) = sub_14005ABE0(a1 + 32, *(void **)(a1 + 32), v6, 0x20u);
  result = *(_QWORD *)(a1 + 32);
  v8 = 32LL * *(_QWORD *)(a1 + 40);
  *(_OWORD *)(v8 + result) = v9;
  *(_OWORD *)(v8 + result + 16) = v10;
  ++*(_QWORD *)(a1 + 40);
  return result;
}
// 1400557F7: variable 'v10' is possibly undefined
