unsigned __int64 __fastcall sub_6CAE70(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v7 = sub_6CAD10(a1, a3, a5);
  v8 = *a1;
  v15[0] = v7;
  v9 = *(_QWORD **)(v8 + 1672);
  v10 = sub_7BE710(v15, v8, a4, 69);
  v11 = sub_3BDE50(v9, v10 - 1);
  if ( v11 != -1 && a2 )
  {
    v13 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), v11);
    v14 = *a1;
    v15[0] = v13;
    *a2 = sub_7BE710(v15, v14, -7, 65);
  }
  return v11;
}
