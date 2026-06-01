/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FEF0
// Address: 0x000000000044FEF0

//----- (000000000044FEF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_44FEF0(__int64 a1, __int64 a2, char a3)
{
  bool v3; // zf
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  sub_44FDA0(a1, a2, a3);
  for ( ; *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 31868; *(_QWORD *)(a2 + 8) = !v3 )
  {
    v5 = 1;
    v6 = 0;
    sub_44FDA0(a1, (__int64)&v5, 1);
    v3 = (v6 | *(_QWORD *)(a2 + 8)) == 0;
    *(_BYTE *)a2 = 0;
  }
  return v7 - __readfsqword(0x28u);
}
