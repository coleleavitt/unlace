__int64 __fastcall sub_9C0480(__int64 a1, __int64 a2, unsigned int a3)
{
  int i; // ebx
  __int64 v5; // r8
  __int64 v7; // [rsp+8h] [rbp-40h]
  __int64 v8[6]; // [rsp+18h] [rbp-30h] BYREF

  if ( a3 <= 1 )
  {
    v5 = a2;
  }
  else
  {
    for ( i = 1; i != a3; ++i )
      v5 = sub_15E1B70(*(_QWORD *)(a1 + 408));
  }
  v8[0] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v7 = v5;
  sub_98C750((_QWORD *)(a1 + 1464), v8);
  return v7;
}

