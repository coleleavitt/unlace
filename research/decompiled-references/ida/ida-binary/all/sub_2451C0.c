unsigned __int64 __fastcall sub_2451C0(__int64 a1, __int64 *a2, char a3)
{
  char **v3; // rbx
  size_t v4; // r14
  size_t v5; // rbp
  char *v6; // r12
  const char *v7; // rdi
  char *v8; // r13
  char *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  char *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // r13
  _QWORD *v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 i; // r15
  __int64 *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  char *v32; // rax
  __int64 v33; // [rsp+0h] [rbp-B0h]
  __int64 (__fastcall **v34)(); // [rsp+10h] [rbp-A0h] BYREF
  char *v35; // [rsp+18h] [rbp-98h] BYREF
  __int128 v36; // [rsp+20h] [rbp-90h]
  char *s2; // [rsp+38h] [rbp-78h] BYREF
  __int128 v38; // [rsp+40h] [rbp-70h]
  __int64 v39; // [rsp+58h] [rbp-58h] BYREF
  __int128 v40; // [rsp+60h] [rbp-50h]
  unsigned __int64 v41; // [rsp+70h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v36 = 0;
  v35 = nullptr;
  if ( a3 )
  {
    v5 = xmmword_8CC318;
    if ( !byte_8CC2C8 )
      goto LABEL_12;
    a2 = &qword_8CC2D0;
    sub_22B9B0(&qword_8CC2F0, &qword_8CC2D0);
  }
  else
  {
    v3 = (char **)a2;
    if ( a2 )
    {
      v4 = a2[1];
      if ( v4 <= 1 )
        return v41 - __readfsqword(0x28u);
    }
    else
    {
      v3 = &v35;
      a2 = (__int64 *)&v35;
      sub_230BD0(a1, &v35);
      v4 = v36;
      if ( (unsigned __int64)v36 <= 1 )
        goto LABEL_51;
    }
    v5 = xmmword_8CC318;
    v6 = qword_8CC310;
    v7 = &s1;
    v8 = *v3;
    if ( xmmword_8CC318 )
      v7 = qword_8CC310;
    a2 = (__int64 *)*v3;
    if ( strcmp(v7, *v3) )
    {
      if ( v3 != &qword_8CC310 )
      {
        v9 = v6;
        if ( *(&xmmword_8CC318 + 1) < v4 )
        {
          v9 = (char *)qvector_reserve(&qword_8CC310, v6, v4, 1);
          qword_8CC310 = v9;
        }
        a2 = (__int64 *)v8;
        xmmword_8CC318 = v4;
        memmove(v9, v8, v4 - 1);
        qword_8CC310[v4 - 1] = 0;
        v5 = xmmword_8CC318;
      }
      byte_8CC2C8 = 0;
LABEL_12:
      s2 = nullptr;
      v38 = 0;
      if ( v5 )
      {
        v32 = (char *)qalloc_or_throw(v5);
        a2 = (__int64 *)qword_8CC310;
        s2 = v32;
        *((_QWORD *)&v38 + 1) = v5;
        memcpy(v32, qword_8CC310, v5);
        *(_QWORD *)&v38 = v5;
      }
      v10 = qword_8CC2F0;
      if ( qword_8CC2F0 )
      {
        v11 = xmmword_8CC2F8;
        if ( (_QWORD)xmmword_8CC2F8 )
        {
          v12 = 0;
          v13 = 0;
          do
          {
            v14 = (_QWORD *)(v10 + v12);
            v15 = *(_QWORD *)(v10 + v12 + 32);
            if ( v15 )
            {
              v14[5] = 0;
              qfree(v15, (const char *)a2);
            }
            v16 = v14[1];
            if ( v16 )
            {
              v14[2] = 0;
              qfree(v16, (const char *)a2);
            }
            ++v13;
            v10 = qword_8CC2F0;
            v12 += 56;
          }
          while ( v11 != v13 );
        }
        *(_QWORD *)&xmmword_8CC2F8 = 0;
        qfree(v10, (const char *)a2);
        qword_8CC2F0 = 0;
        *((_QWORD *)&xmmword_8CC2F8 + 1) = 0;
      }
      v39 = 0;
      v40 = 0;
      v34 = cb_fallback_t___vtable;
      read_ioports(&v39, &s2, "exceptions.cfg", &v34);
      if ( (_QWORD)v40 )
        sub_16B930((__int64)"Syntax error in %s", "exceptions.cfg");
      if ( (_QWORD)v38 )
      {
        v17 = s2;
        v18 = &s1;
        if ( !xmmword_8CC318 )
          goto LABEL_26;
      }
      else
      {
        v17 = (char *)&s1;
        if ( !xmmword_8CC318 )
        {
LABEL_27:
          sub_22B9B0(&qword_8CC2D0, &qword_8CC2F0);
          v19 = v39;
          byte_8CC2C8 = 1;
          if ( v39 )
          {
            v33 = v40;
            if ( (_QWORD)v40 )
            {
              v20 = 0;
              v21 = 0;
              do
              {
                v22 = (_QWORD *)(v19 + v20);
                v23 = *(_QWORD *)(v19 + v20 + 56);
                if ( v23 )
                {
                  v24 = v22[8];
                  if ( v24 )
                  {
                    for ( i = 0; i != v24; ++i )
                    {
                      v26 = (__int64 *)(v23 + 48 * i);
                      v27 = v26[3];
                      if ( v27 )
                      {
                        v26[4] = 0;
                        qfree(v27, (const char *)&qword_8CC2F0);
                      }
                      v28 = *v26;
                      if ( *v26 )
                      {
                        v26[1] = 0;
                        qfree(v28, (const char *)&qword_8CC2F0);
                      }
                      v23 = v22[7];
                    }
                  }
                  v22[8] = 0;
                  qfree(v23, (const char *)&qword_8CC2F0);
                }
                v29 = v22[4];
                if ( v29 )
                {
                  v22[5] = 0;
                  qfree(v29, (const char *)&qword_8CC2F0);
                }
                v30 = v22[1];
                if ( v30 )
                {
                  v22[2] = 0;
                  qfree(v30, (const char *)&qword_8CC2F0);
                }
                v19 = v39;
                ++v21;
                v20 += 88;
              }
              while ( v33 != v21 );
            }
            *(_QWORD *)&v40 = 0;
            qfree(v19, (const char *)&qword_8CC2F0);
          }
          if ( s2 )
          {
            *(_QWORD *)&v38 = 0;
            qfree(s2, (const char *)&qword_8CC2F0);
          }
          if ( v35 )
          {
            *(_QWORD *)&v36 = 0;
            qfree(v35, (const char *)&qword_8CC2F0);
          }
          return v41 - __readfsqword(0x28u);
        }
      }
      v18 = qword_8CC310;
LABEL_26:
      if ( strcmp(v18, v17) )
        sub_16B930((__int64)".default directive is forbidden in %s", "exceptions.cfg");
      goto LABEL_27;
    }
  }
LABEL_51:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, (const char *)a2);
  }
  return v41 - __readfsqword(0x28u);
}
