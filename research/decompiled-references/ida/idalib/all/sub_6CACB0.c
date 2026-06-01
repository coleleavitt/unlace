__int64 __fastcall sub_6CACB0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a1;
  v8[1] = __readfsqword(0x28u);
  v5 = sub_3BDD60(*(_QWORD **)(v3 + 1672), a2);
  v6 = *a1;
  v8[0] = v5;
  return sub_7BEBF0(v8, v6, a3, 109);
}
