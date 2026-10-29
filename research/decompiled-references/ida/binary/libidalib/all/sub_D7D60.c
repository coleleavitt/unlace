unsigned __int64 __fastcall sub_D7D60(__int64 a1, __int64 a2, char a3)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rsi
  const char *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r13
  _QWORD *v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 i; // r15
  _QWORD *v32; // rbx
  char v34; // [rsp-8h] [rbp-B8h]
  __int64 v35; // [rsp+0h] [rbp-B0h]
  __int64 v36; // [rsp+18h] [rbp-98h] BYREF
  __int128 v37; // [rsp+20h] [rbp-90h]
  char *s2; // [rsp+38h] [rbp-78h]
  __int128 v39; // [rsp+40h] [rbp-70h]
  __int64 v40; // [rsp+58h] [rbp-58h]
  __int128 v41; // [rsp+60h] [rbp-50h]
  unsigned __int64 v42; // [rsp+70h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v37 = 0;
  v36 = 0;
  if ( a3 )
  {
    v5 = xmmword_252478;
    if ( !byte_252428 )
      goto LABEL_12;
    sub_BDDB0(&qword_252450, (__int64)&qword_252430);
  }
  else
  {
    v3 = (char **)a2;
    if ( a2 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( v4 <= 1 )
        return v42 - __readfsqword(0x28u);
    }
    else
    {
      v3 = (char **)&v36;
      sub_C2420(a1, (__int64)&v36);
      v4 = v37;
      if ( (unsigned __int64)v37 <= 1 )
        goto LABEL_51;
    }
    v5 = xmmword_252478;
    v6 = qword_252470;
    v7 = s1;
    v8 = *v3;
    if ( xmmword_252478 )
      v7 = qword_252470;
    if ( strcmp(v7, *v3) )
    {
      if ( v3 != &qword_252470 )
      {
        v9 = v6;
        if ( *(&xmmword_252478 + 1) < v4 )
        {
          v9 = (char *)qvector_reserve();
          qword_252470 = v9;
        }
        xmmword_252478 = v4;
        memmove(v9, v8, v4 - 1);
        qword_252470[v4 - 1] = 0;
        v5 = xmmword_252478;
      }
      byte_252428 = 0;
LABEL_12:
      s2 = nullptr;
      v39 = 0;
      if ( v5 )
      {
        s2 = (char *)qalloc_or_throw();
        *((_QWORD *)&v39 + 1) = v5;
        memcpy(s2, qword_252470, v5);
        *(_QWORD *)&v39 = v5;
      }
      v10 = qword_252450;
      if ( qword_252450 )
      {
        v11 = xmmword_252458;
        if ( (_QWORD)xmmword_252458 )
        {
          v12 = 0;
          v13 = 0;
          do
          {
            v14 = (_QWORD *)(v10 + v12);
            if ( *(_QWORD *)(v10 + v12 + 32) )
            {
              v14[5] = 0;
              qfree();
            }
            if ( v14[1] )
            {
              v14[2] = 0;
              qfree();
            }
            ++v13;
            v10 = qword_252450;
            v12 += 56;
          }
          while ( v11 != v13 );
        }
        *(_QWORD *)&xmmword_252458 = 0;
        qfree();
        qword_252450 = 0;
        *((_QWORD *)&xmmword_252458 + 1) = 0;
      }
      v40 = 0;
      v41 = 0;
      read_ioports();
      if ( (_QWORD)v41 )
        sub_92050((__int64)"Syntax error in %s", (__int64)"exceptions.cfg", v15, v16, v17, v18, v34);
      if ( (_QWORD)v39 )
      {
        v19 = s2;
        v20 = s1;
        if ( !xmmword_252478 )
          goto LABEL_26;
      }
      else
      {
        v19 = (char *)s1;
        if ( !xmmword_252478 )
          goto LABEL_27;
      }
      v20 = qword_252470;
LABEL_26:
      if ( strcmp(v20, v19) )
        sub_92050((__int64)".default directive is forbidden in %s", (__int64)"exceptions.cfg", v21, v22, v23, v24, v34);
LABEL_27:
      sub_BDDB0(&qword_252430, (__int64)&qword_252450);
      v25 = v40;
      byte_252428 = 1;
      if ( v40 )
      {
        v35 = v41;
        if ( (_QWORD)v41 )
        {
          v26 = 0;
          v27 = 0;
          do
          {
            v28 = (_QWORD *)(v25 + v26);
            v29 = *(_QWORD *)(v25 + v26 + 56);
            if ( v29 )
            {
              v30 = v28[8];
              if ( v30 )
              {
                for ( i = 0; i != v30; ++i )
                {
                  v32 = (_QWORD *)(v29 + 48 * i);
                  if ( v32[3] )
                  {
                    v32[4] = 0;
                    qfree();
                  }
                  if ( *v32 )
                  {
                    v32[1] = 0;
                    qfree();
                  }
                  v29 = v28[7];
                }
              }
              v28[8] = 0;
              qfree();
            }
            if ( v28[4] )
            {
              v28[5] = 0;
              qfree();
            }
            if ( v28[1] )
            {
              v28[2] = 0;
              qfree();
            }
            v25 = v40;
            ++v27;
            v26 += 88;
          }
          while ( v35 != v27 );
        }
        *(_QWORD *)&v41 = 0;
        qfree();
      }
      if ( s2 )
      {
        *(_QWORD *)&v39 = 0;
        qfree();
      }
      if ( v36 )
        goto LABEL_52;
      return v42 - __readfsqword(0x28u);
    }
  }
LABEL_51:
  if ( v36 )
  {
LABEL_52:
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v42 - __readfsqword(0x28u);
}

