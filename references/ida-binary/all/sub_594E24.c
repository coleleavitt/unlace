__int64 __fastcall sub_594E24(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+8h] [rbp-18h] BYREF
  __int64 v6; // [rsp+10h] [rbp-10h] BYREF
  __int64 v7; // [rsp+18h] [rbp-8h] BYREF

  v7 = a1;
  v6 = a2;
  v5 = a3;
  while ( sub_593C9C(&v7, &v6) && (unsigned __int8)sub_5954E0(&v5, v7) != 1 )
    sub_59551A(&v7);
  return v7;
}
