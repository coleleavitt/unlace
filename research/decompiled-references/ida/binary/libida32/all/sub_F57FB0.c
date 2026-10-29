void __fastcall sub_F57FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  if ( a1 )
  {
    sub_BE1550(v3, 7u, a1, 0);
    v2 = sub_971800(a2, " method: ");
    sub_22581D0(v2, v3[0], v3[1]);
    if ( v3[0] != &v4 )
      operator delete(v3[0]);
  }
}

