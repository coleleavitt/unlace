__int64 __fastcall sub_229770(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = clear_tinfo_t(a1 + 3);
  v3 = *a1;
  if ( v3 )
  {
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}
