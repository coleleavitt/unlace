/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457950
// Address: 0x0000000000457950

//----- (0000000000457950) ----------------------------------------------------
__int64 __fastcall sub_457950(__int64 a1, __int64 a2)
{
  int v3; // w2
  __int64 result; // x0
  int v6; // w22
  int v7; // w21
  __int64 v8; // x4
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x0

  v3 = *(_DWORD *)(a1 + 352) + 1;
  *(_DWORD *)(a1 + 352) = v3;
  if ( v3 > 1023 )
    __longjmp_chk(a1 + 360, 54);
  sub_4585C0(a1, a2, 1);
  if ( *(_WORD *)(*(_QWORD *)(a1 + 672) + 24LL) != 41 )
    sub_451CA0(a1);
  sub_457918(a1);
  if ( *(_BYTE *)(a1 + 680) )
  {
    *(_BYTE *)(a1 + 680) = 0;
    v6 = *(_DWORD *)(a1 + 688);
    v7 = *(unsigned __int8 *)(a1 + 684);
    sub_457BA0(a1, a2, 0);
    v8 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)a2 = v7;
    v9 = 0xFFFFFFFFFFFFFFFFLL >> (8 * (8 - (unsigned __int8)v6));
    *(_QWORD *)(a2 + 8) = v9 & v8;
    if ( !v7 )
    {
      v10 = 0x8000000000000000LL >> (8 * (8 - (unsigned __int8)v6));
      if ( (v10 & v9 & v8) != 0 )
        *(_QWORD *)(a2 + 8) = v10 | v8 | ~v9;
    }
    *(_BYTE *)(a1 + 684) = v7;
    *(_DWORD *)(a1 + 688) = v6;
    result = (unsigned int)(*(_DWORD *)(a1 + 352) - 1);
    *(_DWORD *)(a1 + 352) = result;
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 352) - 1);
    *(_DWORD *)(a1 + 352) = result;
  }
  return result;
}
// 406560: using guessed type void __fastcall __noreturn __longjmp_chk(_QWORD, _QWORD);
