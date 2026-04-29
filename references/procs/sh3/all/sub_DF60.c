__int64 __fastcall sub_DF60(_QWORD *a1, __int64 a2, double a3)
{
  __int64 (__fastcall **v3)(); // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 i; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 j; // r15
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v21; // [rsp+8h] [rbp-40h]

  v3 = &off_142E0;
  *a1 = &off_142E0;
  v5 = a1[7];
  if ( v5 )
  {
    a1[8] = 0;
    qfree(v5, a2, &off_142E0, a3);
  }
  v6 = a1[4];
  if ( v6 )
  {
    v21 = a1[5];
    if ( v21 )
    {
      v7 = 0;
      for ( i = 0; i != v21; ++i )
      {
        v9 = (_QWORD *)(v6 + v7);
        v10 = *(_QWORD *)(v6 + v7 + 56);
        if ( v10 )
        {
          v11 = v9[8];
          if ( v11 )
          {
            for ( j = 0; j != v11; ++j )
            {
              v13 = (__int64 *)(v10 + 48 * j);
              v14 = v13[3];
              if ( v14 )
              {
                v13[4] = 0;
                qfree(v14, a2, v3, a3);
              }
              v15 = *v13;
              if ( *v13 )
              {
                v13[1] = 0;
                qfree(v15, a2, v3, a3);
              }
              v10 = v9[7];
            }
          }
          v9[8] = 0;
          qfree(v10, a2, v3, a3);
        }
        v16 = v9[4];
        if ( v16 )
        {
          v9[5] = 0;
          qfree(v16, a2, v3, a3);
        }
        v17 = v9[1];
        if ( v17 )
        {
          v9[2] = 0;
          qfree(v17, a2, v3, a3);
        }
        v7 += 88;
        v6 = a1[4];
      }
    }
    a1[5] = 0;
    qfree(v6, a2, v3, a3);
  }
  result = (__int64)a1;
  v19 = a1[1];
  if ( v19 )
  {
    a1[2] = 0;
    return qfree(v19, a2, v3, a3);
  }
  return result;
}
