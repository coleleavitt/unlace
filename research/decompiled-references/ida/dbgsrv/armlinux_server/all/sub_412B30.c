/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412B30
// Address: 0x0000000000412B30

//----- (0000000000412B30) ----------------------------------------------------
__int64 __fastcall sub_412B30(__int64 a1, __int64 a2, __off64_t a3)
{
  __off64_t v4; // x19
  unsigned int v6; // w21

  v4 = a3;
  v6 = 4;
  if ( (a3 & 1) != 0 )
  {
    v4 = a3 - 1;
    v6 = 2;
  }
  if ( *(_BYTE *)(a1 + 2053)
    || *(_DWORD *)(a1 + 2044) == -1
    || v6 != (unsigned int)sub_412600(a1, 0xFFFFFFFF, v4, (void *)(a2 + 8), v6, 0)
    || !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __off64_t, _QWORD))(*(_QWORD *)a1 + 312LL))(
          a1,
          0,
          4,
          v4,
          v6) )
  {
    return 0;
  }
  *(_QWORD *)a2 = v4;
  *(_BYTE *)(a2 + 12) = v6;
  return 1;
}
