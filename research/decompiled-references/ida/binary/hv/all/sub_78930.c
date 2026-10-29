__int64 __fastcall sub_78930(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 result; // rax
  char v10; // [rsp+3h] [rbp-25h] BYREF
  unsigned int v11; // [rsp+4h] [rbp-24h]
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 640);
  v12 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_91D10(a1, v5) )
  {
    v7 = *(_QWORD *)(a1 + 640);
    if ( a4 )
    {
      v8 = sub_91B10(a1, v7, a2, 9, 1);
      result = 9;
      if ( v8 == 9 )
        return result;
    }
    else if ( sub_91B10(a1, v7, &v10, 5, 1) == 5 )
    {
      *(_QWORD *)(a2 + 1) = v11;
      *(_BYTE *)a2 = v10;
      return 5;
    }
  }
  return 0;
}

