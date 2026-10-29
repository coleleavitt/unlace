__int64 __fastcall sub_1029840(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]
  char v8[9]; // [rsp+1Fh] [rbp-9h] BYREF

  v6 = a2;
  v7 = a3;
  v8[0] = 58;
  v3 = sub_2246AB0(&v6, v8, 1, 0);
  if ( v3 == -1 )
  {
    result = v6;
    v4 = v7;
  }
  else
  {
    v4 = v3;
    result = v6;
    if ( v7 <= v4 )
      v4 = v7;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 32) - 25) <= 1 )
    return sub_22B0EE0(a1, result, v4);
  return result;
}
