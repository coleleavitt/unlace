unsigned __int64 __fastcall sub_29C0F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v13; // [rsp+0h] [rbp-448h] BYREF
  __int64 v14; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v15[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v16; // [rsp+418h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_29BDC0(a2, v15, 1024, a4, a5);
  v7 = ea2node(a1);
  v13 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, __int64, __int64, __int64, __int64, __int64))netnode_hashval_long)(
          v7,
          v15,
          112,
          v8,
          v9,
          v10,
          v13,
          v14);
  v11 = v13;
  if ( !v13 )
  {
    v13 = netnode_altval(v7, -1, 112) + 4096;
    v14 = v13;
    netnode_supset(v7, -1, &v14, 8, 112);
    netnode_hashset(v7, v15, &v13, 8, 112);
    v11 = v13;
  }
  netnode_setblob(v7, a3, a4, v11, 108);
  return v16 - __readfsqword(0x28u);
}
