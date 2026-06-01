unsigned __int64 __fastcall sub_6CAD10(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // al
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *a1;
  v14[1] = __readfsqword(0x28u);
  v7 = sub_3BDD60(*(_QWORD **)(v5 + 1672), a2);
  v8 = *a1;
  v14[0] = v7;
  v9 = sub_7BE710(v14, v8, -5, 65);
  v10 = *(_QWORD **)(*a1 + 1672);
  if ( (v9 & 1) == 0 )
    return sub_3BDD60(v10, a2);
  v11 = sub_3BDD60(v10, a2);
  v12 = *a1;
  v14[0] = v11;
  return sub_7BE710(v14, v12, a3, 109) - 1;
}
