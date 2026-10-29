__int64 __fastcall sub_22B74E0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v1 = *a1;
  LOBYTE(v8[0]) = 45;
  v9 = v1;
  v10 = a1[1];
  v2 = sub_2246AB0(&v9, v8, 1u, 0);
  if ( v2 == -1 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    v3 = v10;
    v4 = v2 + 1;
    v5 = 0;
    if ( v4 <= v10 )
    {
      v3 = v4;
      v5 = v10 - v4;
    }
    v6 = v9 + v3;
  }
  v8[0] = v6;
  v8[1] = v5;
  LOBYTE(v9) = 45;
  sub_2246AB0(v8, &v9, 1u, 0);
  return v8[0];
}
