_QWORD *__fastcall sub_2C0640(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rdi
  _QWORD *result; // rax
  _QWORD *v11; // [rsp+8h] [rbp-40h]

  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = a1 + 8;
  v11 = a1 - 1;
  do
  {
    if ( *v3 )
    {
      v4 = v3[1];
      if ( v4 )
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v7 = (_QWORD *)(v5 + *v3);
          *v7 = &off_4CE648;
          cleanup_argloc(v7 + 18);
          v8 = v7[13];
          if ( v8 )
          {
            v7[14] = 0;
            qfree(v8);
          }
          clear_tinfo_t(v7 + 12);
          v9 = v7[9];
          if ( v9 )
          {
            v7[10] = 0;
            qfree(v9);
          }
          ++v6;
          v5 += 200;
          cleanup_argloc(v7 + 6);
          cleanup_argloc(v7 + 1);
        }
        while ( v4 != v6 );
      }
      v3[1] = 0;
      qfree(*v3);
    }
    result = v11;
    v3 -= 3;
  }
  while ( v3 != v11 );
  return result;
}
