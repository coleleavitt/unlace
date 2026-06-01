bool __fastcall sub_1119E80(__int64 a1)
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

  v1 = sub_2293740(a1);
  v3 = sub_2278E20(v1, v2);
  v4 = sub_2293740(a1);
  v6 = sub_2278D80(v4, v5) - 7;
  result = 1;
  if ( (v6 & 0xFFFFFFFD) != 0 )
  {
    result = 0;
    if ( v3 > 6 )
    {
      v8 = sub_2293740(a1);
      return (unsigned int)sub_2278ED0(v8, v9) != 3;
    }
  }
  return result;
}

