__int64 sub_1E230()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  char *v2; // r9
  const char *v3; // rdi
  __int64 v4; // r15
  char *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // r13
  _QWORD *v10; // rbx
  unsigned __int8 tinfo_details; // [rsp+1h] [rbp-A1h]
  char *s2; // [rsp+Ah] [rbp-98h] BYREF
  __int128 v14; // [rsp+12h] [rbp-90h]
  __int64 v15; // [rsp+2Ah] [rbp-78h]
  __int128 v16; // [rsp+32h] [rbp-70h]
  __int128 v17; // [rsp+42h] [rbp-60h]
  __int64 v18; // [rsp+52h] [rbp-50h]
  int v19; // [rsp+5Ah] [rbp-48h]
  unsigned __int64 v20; // [rsp+62h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v19 = 1;
  v15 = 0;
  v18 = 0;
  v16 = 0;
  v17 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details )
  {
LABEL_13:
    v4 = v15;
    goto LABEL_14;
  }
  v0 = v16;
  if ( (_QWORD)v16 )
  {
    v1 = 0;
    while ( 1 )
    {
      v14 = 0;
      s2 = 0;
      sub_D6A0((__int64 *)&s2);
      v4 = v15;
      v5 = s2;
      v6 = v15 + 144 * v1;
      v7 = *(_QWORD *)(v6 + 24);
      if ( (_QWORD)v14 )
      {
        v2 = s2;
        v3 = src;
        if ( !v7 )
          goto LABEL_6;
      }
      else
      {
        v2 = (char *)src;
        if ( !v7 )
          goto LABEL_7;
      }
      v3 = *(const char **)(v6 + 16);
LABEL_6:
      if ( strcmp(v3, v2) )
      {
        if ( v5 )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
          v4 = v15;
        }
        tinfo_details = 0;
LABEL_14:
        if ( v4 )
        {
          v8 = v16;
          if ( (_QWORD)v16 )
          {
            v9 = 0;
            do
            {
              v10 = (_QWORD *)(v4 + 144 * v9);
              clear_tinfo_t();
              if ( v10[5] )
              {
                v10[6] = 0;
                qfree();
              }
              if ( v10[2] )
              {
                v10[3] = 0;
                qfree();
              }
              ++v9;
              v4 = v15;
            }
            while ( v8 != v9 );
          }
          *(_QWORD *)&v16 = 0;
          qfree();
        }
        return tinfo_details;
      }
LABEL_7:
      if ( v5 )
      {
        *(_QWORD *)&v14 = 0;
        qfree();
      }
      if ( ++v1 == v0 )
        goto LABEL_13;
    }
  }
  return tinfo_details;
}
