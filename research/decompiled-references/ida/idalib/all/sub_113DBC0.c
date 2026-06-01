bool __fastcall sub_113DBC0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // edx
  bool result; // al
  __int64 v8; // rax
  __int64 v9; // rdx

  v1 = sub_22B7480(a1);
  v3 = sub_229CB60(v1, v2);
  v4 = sub_22B7480(a1);
  v6 = sub_229CAC0(v4, v5) - 7;
  result = 1;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    result = 0;
    if ( v3 > 6 )
    {
      v8 = sub_22B7480(a1);
      return (unsigned int)sub_229CC10(v8, v9) != 3;
    }
  }
  return result;
}
