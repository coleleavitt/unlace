/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465BD8
// Address: 0x0000000000465BD8

//----- (0000000000465BD8) ----------------------------------------------------
__int64 __fastcall sub_465BD8(__int64 a1, __int64 a2, signed int a3, __int64 a4)
{
  __int64 v8; // x1
  __int64 v9; // x1
  char *v11; // x1
  __int64 v12; // [xsp+30h] [xbp-30h] BYREF
  void *ptr; // [xsp+38h] [xbp-28h]
  __int64 v14; // [xsp+40h] [xbp-20h]
  __int64 v15; // [xsp+48h] [xbp-18h]
  int v16; // [xsp+50h] [xbp-10h]
  __int64 v17; // [xsp+58h] [xbp-8h]

  sub_4631C0(a2, a3);
  if ( a3 <= 0 )
  {
    if ( *(_QWORD *)(a4 + 8) )
      v11 = *(char **)a4;
    else
      v11 = (char *)&qword_4B2D48;
    sub_4632A0(a2, v11);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 440);
    v12 = 0x800000028LL;
    ptr = nullptr;
    v14 = 0;
    v15 = 0;
    v16 = -1;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 552LL))(v8, &v12);
    sub_473710(a2, (__int64)&v12);
    v9 = *(_QWORD *)(a1 + 440);
    if ( *(_BYTE *)(a1 + 184) )
    {
      sub_40A690((int)"RPC: append_start_or_attach idaregs.nregs %zu\n", *(_QWORD *)(v9 + 680));
      v9 = *(_QWORD *)(a1 + 440);
    }
    sub_4738F8(a2, v9 + 672);
    if ( ptr )
    {
      v14 = 0;
      j__free(ptr);
    }
  }
  return v17 ^ _stack_chk_guard;
}
// 4738F8: using guessed type __int64 __fastcall sub_4738F8(_QWORD, _QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
