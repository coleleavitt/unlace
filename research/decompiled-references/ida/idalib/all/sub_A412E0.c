__int64 __fastcall sub_A412E0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v5 = a1;
  v6 = a2;
  v2 = sub_2246FB0(&v5, "0123456789", 10, 0);
  v3 = v6;
  if ( v2 < v6 )
    v3 = v2;
  return v3 + v5;
}
