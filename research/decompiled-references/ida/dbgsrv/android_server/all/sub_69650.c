/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69650
// Address: 0x0000000000069650

//----- (0000000000069650) ----------------------------------------------------
void __fastcall sub_69650(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // x9
  _QWORD *v4; // x0
  __int64 v5; // x9
  __int64 v6[2]; // [xsp+0h] [xbp-20h] BYREF

  v6[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 120);
  v4 = (_QWORD *)(a1 + 112);
  if ( v3 && (v5 = v3 - 1, *(_DWORD *)(*v4 + 8 * v5) == a2) )
  {
    *(_DWORD *)(*v4 + 8 * v5 + 4) = a3;
  }
  else
  {
    v6[0] = __PAIR64__(a3, a2);
    sub_696C0((__int64)v4, v6);
  }
}
