unsigned __int64 __fastcall sub_3CDBF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(int *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  v9 = a2;
  switch_dbctx(v4);
  if ( !(unsigned __int8)sub_2B6130(a2) )
    sub_3CCE30(a3, a2, a2);
  sub_179D00((_QWORD *)(v3 + 152), (unsigned __int64 *)&v9, v5, v6, v7);
  return v10 - __readfsqword(0x28u);
}
