__int64 __fastcall sub_2BE0C0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = v2 + v4;
        ++v5;
        v4 += 112;
        sub_1188E0(v6 + 88);
        sub_1188E0(v6 + 72);
        sub_1188E0(v6 + 56);
        v2 = *a1;
      }
      while ( v3 != v5 );
    }
    a1[1] = 0;
    return qfree(v2);
  }
  return result;
}
