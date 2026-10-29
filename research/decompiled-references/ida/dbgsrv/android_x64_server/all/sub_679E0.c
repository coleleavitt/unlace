/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_679E0
// Address: 0x00000000000679E0

//----- (00000000000679E0) ----------------------------------------------------
__int64 __fastcall sub_679E0(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 368);
  v3 = 16 * (*(_QWORD *)(a1 + 376) - 1LL);
  v4 = (_QWORD *)(a1 + 392);
  v9 = *(_OWORD *)(v2 + v3);
  v5 = *(_QWORD *)(a1 + 400);
  if ( *(_QWORD *)(a1 + 408) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = (_OWORD *)*v4;
  }
  else
  {
    v6 = qvector_reserve((__int64)v4, *(char **)(a1 + 392), v5 + 1, 0x10u);
    *(_QWORD *)(a1 + 392) = v6;
    v5 = *(_QWORD *)(a1 + 400);
  }
  v6[v5] = v9;
  ++*(_QWORD *)(a1 + 400);
  sub_6BEF0(
    *(_QWORD **)(a1 + 200),
    (unsigned int)(*(_DWORD *)(v2 + v3 + 4) - 4),
    *(_DWORD *)(a1 + 208) - *(_DWORD *)(v2 + v3 + 4));
  v7 = *(_QWORD *)(a1 + 376);
  if ( v7 )
    *(_QWORD *)(a1 + 376) = v7 - 1;
  return 0;
}
