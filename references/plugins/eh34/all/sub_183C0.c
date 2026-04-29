__int64 __fastcall sub_183C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-40h]

  if ( !a5 )
  {
    v9 = ea2node(a2);
    v11 = ea2node(a3);
    v10 = sub_31370();
    netnode_altshift(v10, v9, v11, a4, 67);
  }
  *(_QWORD *)(a1 + 248) = (**(__int64 (__fastcall ***)(__int64))(*(_QWORD *)(a1 + 168) + 40LL))(*(_QWORD *)(a1 + 168) + 40LL);
  sub_74E30(a1 + 200, a2, a3, a4, a5);
  return sub_1E970(a2, a3, a4, a5);
}
