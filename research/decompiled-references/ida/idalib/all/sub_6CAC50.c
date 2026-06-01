__int64 __fastcall sub_6CAC50(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v4[1] = __readfsqword(0x28u);
  v4[0] = sub_3BDD60(*(_QWORD **)(v2 + 1672), a2);
  return sub_7BEB80(v4, *a1, 109);
}
