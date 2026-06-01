__int64 __fastcall sub_7C3AD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-28h]

  while ( a1 != a5 )
  {
    v9 = a1;
    a1 += 32;
    sub_9EE70(v9);
    if ( a3 == a1 )
    {
      a1 = *(_QWORD *)(a4 + 8);
      a4 += 8;
      a3 = a1 + 512;
    }
  }
  return v11;
}

