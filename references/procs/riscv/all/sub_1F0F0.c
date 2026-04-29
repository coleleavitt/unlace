__int64 __fastcall sub_1F0F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 i; // r15
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]

  *a1 = off_33DD8;
  v2 = a1[59];
  if ( v2 )
  {
    v15 = a1[60];
    if ( v15 )
    {
      v14 = 0;
      v3 = 0;
      do
      {
        v4 = (_QWORD *)(v2 + v3);
        v5 = *(_QWORD *)(v2 + v3 + 56);
        if ( v5 )
        {
          v6 = v4[8];
          if ( v6 )
          {
            for ( i = 0; i != v6; ++i )
            {
              v8 = (__int64 *)(v5 + 48 * i);
              v9 = v8[3];
              if ( v9 )
              {
                v8[4] = 0;
                qfree(v9);
              }
              v10 = *v8;
              if ( *v8 )
              {
                v8[1] = 0;
                qfree(v10);
              }
              v5 = v4[7];
            }
          }
          v4[8] = 0;
          qfree(v5);
        }
        v11 = v4[4];
        if ( v11 )
        {
          v4[5] = 0;
          qfree(v11);
        }
        v12 = v4[1];
        if ( v12 )
        {
          v4[2] = 0;
          qfree(v12);
        }
        ++v14;
        v2 = a1[59];
        v3 += 88;
      }
      while ( v15 != v14 );
    }
    a1[60] = 0;
    qfree(v2);
  }
  a1[16] = &off_34D10;
  remove_event_listener(a1 + 16);
  *a1 = &off_34D10;
  remove_event_listener(a1);
  return qfree(a1);
}
