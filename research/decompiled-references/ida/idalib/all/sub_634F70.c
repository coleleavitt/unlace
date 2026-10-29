unsigned __int64 __fastcall sub_634F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1672);
  v9 = a1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 1520);
  else
    v10 = -1;
  v11 = a1 + 640;
  v7 = sub_6317E0(&v9, (__int64)&off_2B35420, 0, a4, a5, a6);
  return sub_3BDD60(v6, v7 - 1) + 1;
}
