unsigned __int64 __fastcall sub_6F94D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  bool v3; // cc
  __int64 v6; // rsi
  const char *v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8) <= 1u;
  v10 = __readfsqword(0x28u);
  if ( v3 )
  {
    netnode_check(&v9, "$ type parser", 0, 0);
    if ( v9 != -1 )
      sub_7BE850(&v9, *a1, a3, 83);
  }
  else
  {
    v6 = *a1;
    v9 = -1;
    sub_7BF040(&v9, v6, "$ type parser", 0);
    v7 = haystack;
    if ( *(_QWORD *)(a2 + 8) )
      v7 = *(const char **)a2;
    sub_7BE7C0(&v9, *a1, a3, v7, 0, 83);
  }
  return v10 - __readfsqword(0x28u);
}
