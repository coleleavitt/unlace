unsigned __int64 __fastcall sub_6CAF40(__int64 *a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 result; // rax
  _QWORD *v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(2838);
    BUG();
  }
  v3 = (unsigned __int8)*a2;
  v6 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), a3);
  v7 = *a1;
  v14[0] = v6;
  v8 = sub_7BEBF0(v14, v7, v3, 115);
  result = -1;
  if ( v8 <= 0xFF )
  {
    *a2 = v8;
    v10 = *(_QWORD **)(*a1 + 1672);
    v11 = sub_3BDD60(v10, a3);
    v12 = *a1;
    v14[0] = v11;
    v13 = sub_7BE710(v14, v12, v8, 115);
    return sub_3BDE50(v10, v13 - 1);
  }
  return result;
}
