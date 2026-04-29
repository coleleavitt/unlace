_QWORD *__fastcall sub_2B8B70(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  bool v3; // zf
  __int64 func_qty; // r12
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-50h]
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 104) == -1;
  v14[1] = __readfsqword(0x28u);
  if ( !v3 )
    netnode_check(a1 + 104, "$ ignore micro", 0, 1);
  func_qty = get_func_qty();
  if ( func_qty )
  {
    v6 = 0;
    v13 = a3 + 1;
    do
    {
      v7 = (_QWORD *)getn_func(v6);
      v8 = ea2node(*v7);
      v9 = netnode_altval(v8, 2, 65);
      v10 = v9 - 1;
      if ( v9 )
      {
        v11 = node2ea(v9 - 1);
        if ( v11 >= *a2 && v11 < a2[1] )
        {
          v14[0] = v13 + v10;
          netnode_supset(v8, 2, v14, 8, 65);
        }
      }
      ++v6;
    }
    while ( func_qty != v6 );
  }
  *(_QWORD *)(a1 + 1112) = -1;
  return sub_261C10(a1);
}
