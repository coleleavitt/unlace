__int64 __fastcall sub_52F7F0(__int64 *a1, __int64 *a2, _BYTE *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool v10; // zf
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v7 = sub_3BDD60(*(_QWORD **)(*a1 + 1672), *a2);
      v8 = *a1;
      v9 = a4 & 1;
      v10 = *a3 == 0;
      v11[0] = v7;
      if ( !v10 )
        return sub_7BE7C0(v11, v8, v9, a3, 0, 83);
      sub_7BE850(v11, v8, v9, 83);
    }
    return 1;
  }
  return result;
}
