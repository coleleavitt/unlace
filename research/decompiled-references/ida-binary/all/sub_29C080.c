__int64 __fastcall sub_29C080(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  sub_29BDC0(a2, v10, 1024, a5, a3);
  v5 = ea2node(a1);
  return ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, __int64, __int64, __int64))netnode_hashval_long)(
           v5,
           v10,
           112,
           v6,
           v7,
           v8);
}
