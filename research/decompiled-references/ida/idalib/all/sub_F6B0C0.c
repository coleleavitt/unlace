unsigned __int64 __fastcall sub_F6B0C0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v5 = sub_F6AEA0(a1, a2, a3, a4, a5);
  if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return sub_A70C40(a2, v5, v6);
  else
    return v6 | v5 & 0xFFFFFFFFFFFFFFF0LL;
}
