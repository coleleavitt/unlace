void *__fastcall sub_359D90(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 *v9; // rdx
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 k; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 m; // rbp
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 n; // rbp
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  void *result; // rax
  __int64 v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  *a1 = off_4D9210;
  v2 = a1[25];
  if ( v2 )
  {
    a1[26] = 0;
    qfree(v2);
  }
  v3 = a1[22];
  if ( v3 )
  {
    v4 = a1[23];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = v3 + v5;
        v8 = *(_QWORD *)(v3 + v5 + 8);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree(v8);
        }
        v9 = *(__int64 **)v7;
        if ( *(_QWORD *)v7 )
        {
          if ( (*((_DWORD *)v9 + 26))-- == 1 )
          {
            v11 = *(__int64 **)v7;
            if ( *(_QWORD *)v7 )
            {
              sub_254CF0(*(__int64 **)v7);
              v12 = v11[23];
              if ( v12 )
              {
                v13 = v11[24];
                if ( v13 )
                {
                  for ( j = 0; j != v13; ++j )
                  {
                    v15 = (__int64 *)(v12 + 24 * j);
                    v16 = *v15;
                    if ( *v15 )
                    {
                      v15[1] = 0;
                      v38 = v13;
                      qfree(v16);
                      v12 = v11[23];
                      v13 = v38;
                    }
                  }
                }
                v11[24] = 0;
                qfree(v12);
              }
              v17 = v11[20];
              if ( v17 )
              {
                v11[21] = 0;
                qfree(v17);
              }
              v18 = v11[16];
              if ( v18 )
              {
                v19 = v11[17];
                if ( v19 )
                {
                  for ( k = 0; k != v19; ++k )
                  {
                    v21 = (__int64 *)(v18 + 32 * k);
                    v22 = *v21;
                    if ( *v21 )
                    {
                      v21[1] = 0;
                      v39 = v19;
                      qfree(v22);
                      v18 = v11[16];
                      v19 = v39;
                    }
                  }
                }
                v11[17] = 0;
                qfree(v18);
              }
              sub_2513D0((__int64)(v11 + 2));
              j__qfree(v11);
            }
          }
        }
        v3 = a1[22];
        v5 += 120;
      }
    }
    a1[23] = 0;
    qfree(v3);
  }
  v23 = a1[19];
  *a1 = off_4D8B78;
  if ( v23 )
  {
    a1[20] = 0;
    qfree(v23);
  }
  v24 = a1[15];
  if ( v24 )
  {
    a1[16] = 0;
    qfree(v24);
  }
  v25 = a1[12];
  if ( v25 )
  {
    a1[13] = 0;
    qfree(v25);
  }
  v26 = a1[9];
  if ( v26 )
  {
    v27 = a1[10];
    if ( v27 )
    {
      for ( m = 0; m != v27; ++m )
      {
        v29 = (__int64 *)(v26 + 24 * m);
        v30 = *v29;
        if ( *v29 )
        {
          v29[1] = 0;
          qfree(v30);
          v26 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v26);
  }
  v31 = a1[6];
  if ( v31 )
  {
    v32 = a1[7];
    if ( v32 )
    {
      for ( n = 0; n != v32; ++n )
      {
        v34 = (__int64 *)(v31 + 24 * n);
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          qfree(v35);
          v31 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v31);
  }
  v36 = a1[1];
  result = &unk_4D96E8;
  *a1 = &unk_4D96E8;
  if ( v36 )
  {
    a1[2] = 0;
    return (void *)qfree(v36);
  }
  return result;
}
