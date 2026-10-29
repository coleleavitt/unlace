__int64 __fastcall sub_6CAA60(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = *a1;
  v10[1] = __readfsqword(0x28u);
  v7 = sub_3BDD60(*(_QWORD **)(v5 + 1672), a3);
  v8 = *a1;
  v10[0] = v7;
  return sub_7BEA80(v10, v8, a2, a4, 83);
}
