__int64 __fastcall sub_6CAAD0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // dl
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *a1;
  v12[1] = __readfsqword(0x28u);
  v6 = sub_3BDD60(*(_QWORD **)(v4 + 1672), a2);
  v7 = *a1;
  v12[0] = v6;
  v8 = sub_7BE710(v12, v7, -5, 65);
  result = -1;
  if ( (v8 & 1) != 0 )
  {
    v10 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), a2);
    v11 = *a1;
    v12[0] = v10;
    return sub_7BE710(v12, v11, a3, 109) - 1;
  }
  return result;
}
