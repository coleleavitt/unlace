unsigned __int64 __fastcall sub_B73BE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = sub_B8C330(a1);
  v2 = sub_A852C0(v1, a1);
  v3 = 0;
  if ( v2 && (v2 & 4) == 0 )
    return v2 & 0xFFFFFFFFFFFFFFF8LL;
  return v3;
}
