__int64 __fastcall sub_5AAE9A(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+28h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+4Ch] [rbp-4h]

  if ( !sub_5AAC29(a1) )
    return 0;
  if ( !sub_5AAC71(a1, (__int64)".dynamic", 6u, &v8, &v7) )
    return 0;
  if ( !sub_5AAC71(a1, (__int64)".dynstr", 3u, &v6, &v5) )
    return 0;
  v9 = sub_5AAC54(a1);
  if ( v9 == 1 )
    return sub_5AB6D9(v8, v7, v6, v5, a2, a3);
  else
    return sub_5AB7C5(v8, v7, v6, v5, a2, a3);
}
