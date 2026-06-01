unsigned __int64 __fastcall sub_29BFD0(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  _BYTE v13[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_29BDC0(a1, v13, 1024, a5, a2);
  v5 = ea2node(*(_QWORD *)(a1 + 72));
  v9 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, __int64, __int64, __int64))netnode_hashval_long)(
         v5,
         v13,
         112,
         v6,
         v7,
         v8);
  if ( v9 )
  {
    v11 = v9;
    v12 = ea2node(*(_QWORD *)(a1 + 72));
    netnode_hashdel(v12, v13, 112);
    netnode_delblob(v12, v11, 108);
  }
  return v14 - __readfsqword(0x28u);
}
