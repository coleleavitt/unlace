/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F740
// Address: 0x000000000044F740

//----- (000000000044F740) ----------------------------------------------------
unsigned __int64 __fastcall sub_44F740(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int16 v4; // ax
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_44F5E0(a1, a2, a3);
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 560);
    v7 = 1;
    v8 = 0;
    v4 = *(_WORD *)(v3 + 24);
    if ( v4 == 43 )
    {
      sub_44F5E0(a1, (__int64)&v7, 1);
      v6 = *(_QWORD *)(a2 + 8) + v8;
      goto LABEL_6;
    }
    if ( v4 != 45 )
      return v9 - __readfsqword(0x28u);
    sub_44F5E0(a1, (__int64)&v7, 1);
    v6 = *(_QWORD *)(a2 + 8) - v8;
LABEL_6:
    *(_QWORD *)(a2 + 8) = v6;
  }
}
