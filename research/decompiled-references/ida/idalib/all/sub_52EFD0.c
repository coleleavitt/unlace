__int64 __fastcall sub_52EFD0(__int64 *a1, __int64 a2, _BYTE *a3, char a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // zf
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    v6 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), a2);
    v7 = *a1;
    v8 = a4 & 1;
    v9 = *a3 == 0;
    v11[0] = v6;
    if ( !v9 )
      return sub_7BE7C0(v11, v7, v8, a3, 0, 83);
    sub_7BE850(v11, v7, v8, 83);
  }
  return 1;
}
