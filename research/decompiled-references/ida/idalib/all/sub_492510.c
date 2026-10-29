__int64 __fastcall sub_492510(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  unsigned int v5; // edx

  v3 = sub_492440(a1, *a2, a3);
  v5 = 0;
  if ( v3 != -1 )
  {
    *v4 = v3;
    return 1;
  }
  return v5;
}
