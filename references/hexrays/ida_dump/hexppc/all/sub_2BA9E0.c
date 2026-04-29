__int64 __fastcall sub_2BA9E0(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 i; // r13
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-48h]

  v1 = a1[4];
  *a1 = &off_4CE2B0;
  if ( v1 )
  {
    sub_80850(v1);
    j__qfree(v1);
  }
  result = a1[5];
  a1[8] = 0;
  if ( result )
  {
    v10 = a1[6];
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v4 = (__int64 *)(result + 24 * i);
        v5 = *v4;
        if ( *v4 )
        {
          v6 = v4[1];
          if ( v6 )
          {
            v7 = 0;
            v8 = 0;
            do
            {
              v9 = v5 + v7;
              ++v8;
              v7 += 112;
              sub_119360(v9 + 88);
              sub_119360(v9 + 72);
              sub_119360(v9 + 56);
              v5 = *v4;
            }
            while ( v6 != v8 );
          }
          v4[1] = 0;
          qfree(v5);
          result = a1[5];
        }
      }
    }
    a1[6] = 0;
    return qfree(result);
  }
  return result;
}
