__int64 __fastcall sub_1022B90(__int64 *a1, int a2, bool *a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+10h] [rbp-18h]

  sub_1022900((__int64)&v6, a1, a2, 1);
  v4 = v6;
  if ( a3 )
    *a3 = v6 == 0;
  if ( v4 )
    return v7;
  else
    return 0;
}
