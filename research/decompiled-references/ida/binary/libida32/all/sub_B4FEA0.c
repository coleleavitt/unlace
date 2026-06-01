unsigned __int64 __fastcall sub_B4FEA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = sub_B685F0(a1);
  v2 = sub_A61580(v1, a1);
  v3 = 0;
  if ( v2 && (v2 & 4) == 0 )
    return v2 & 0xFFFFFFFFFFFFFFF8LL;
  return v3;
}

