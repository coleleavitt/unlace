__int64 __fastcall sub_4B7750(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a2;
  v4 = a1[3];
  v5 = *a1;
  v8[1] = __readfsqword(0x28u);
  v8[0] = v4;
  if ( v3 >= sub_7BE710(v8, v5, 1, 65) )
  {
    if ( !under_debugger )
      interr(1311);
    BUG();
  }
  return sub_7BE7C0(a1 + 3, *a1, v3, a3, 0, 82);
}
