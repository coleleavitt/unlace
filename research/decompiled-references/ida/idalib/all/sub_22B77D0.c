__int64 __fastcall sub_22B77D0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v1 = *a1;
  LOBYTE(v11) = 45;
  v13 = v1;
  v14 = a1[1];
  v2 = sub_2246AB0(&v13, &v11, 1u, 0);
  if ( v2 == -1 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    v3 = v14;
    v4 = v2 + 1;
    v5 = 0;
    if ( v4 <= v14 )
    {
      v3 = v4;
      v5 = v14 - v4;
    }
    v6 = v13 + v3;
  }
  v11 = v6;
  v12 = v5;
  LOBYTE(v13) = 45;
  v7 = sub_2246AB0(&v11, &v13, 1u, 0);
  if ( v7 == -1 )
    return 0;
  v8 = v7 + 1;
  v9 = v12;
  if ( v8 <= v12 )
    v9 = v8;
  return v11 + v9;
}
