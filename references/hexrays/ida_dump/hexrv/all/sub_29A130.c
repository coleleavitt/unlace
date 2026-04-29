__int64 __fastcall sub_29A130(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = v4++;
        v6 = v2 + 32 * v5;
        clear_tinfo_t(v6 + 16);
        sub_29A030(v6);
        v2 = *a1;
      }
      while ( v3 != v4 );
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
