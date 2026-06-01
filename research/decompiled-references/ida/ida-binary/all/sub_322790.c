__int64 __fastcall sub_322790(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rax
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  __int64 v8; // rsi
  char *v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  const char *v13; // r15
  bool v14; // bp
  char *v15; // r14
  char *v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // eax
  const char *v19; // r8
  const char *v20; // rcx
  const char *v21; // rdx
  const char *v22; // rdx
  char *v24; // rdi
  size_t v25; // r14
  unsigned int *v26; // [rsp+8h] [rbp-D0h]
  __int64 v27; // [rsp+10h] [rbp-C8h]
  const char *v29; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-B0h]
  const char *v31; // [rsp+40h] [rbp-98h] BYREF
  __int128 v32; // [rsp+48h] [rbp-90h]
  char *haystack; // [rsp+60h] [rbp-78h] BYREF
  __int128 v34; // [rsp+68h] [rbp-70h]
  const char *v35; // [rsp+80h] [rbp-58h] BYREF
  __int128 v36; // [rsp+88h] [rbp-50h]
  unsigned __int64 v37; // [rsp+98h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( byte_8CDA59 )
    qfputs("</span>\n", a1);
  if ( byte_8CDA58 )
    qfputs("</span>\n", a1);
  v29 = nullptr;
  v31 = nullptr;
  haystack = nullptr;
  v35 = nullptr;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v27 = sub_203890();
  v1 = (unsigned int *)qword_8CDA60;
  v26 = (unsigned int *)(qword_8CDA60 + 8 * xmmword_8CDA68);
  if ( (unsigned int *)qword_8CDA60 != v26 )
  {
    do
    {
      v2 = *v1;
      if ( v1[1] )
      {
        sub_169A50((__int64 *)&haystack, (__int64)"user-defined-%08x", v2);
      }
      else
      {
        v3 = sub_524F70(v27 + 40, (unsigned int)v2, v2);
        v4 = (const char *)sub_524F10(v27 + 40, v3);
        v5 = v4;
        if ( !v4 || (v6 = strlen(v4), (v7 = v6) == 0) )
        {
          *(_QWORD *)&v34 = 0;
LABEL_10:
          v8 = v1[1];
          v9 = (char *)&s1;
          if ( (_DWORD)v8 )
            goto LABEL_11;
          goto LABEL_45;
        }
        v24 = haystack;
        v25 = v6 + 1;
        if ( *((_QWORD *)&v34 + 1) < v6 + 1 )
        {
          haystack = (char *)qvector_reserve(&haystack, haystack, v25, 1);
          v24 = haystack;
        }
        *(_QWORD *)&v34 = v25;
        memmove(v24, v5, v7);
        haystack[v7] = 0;
      }
      v9 = haystack;
      if ( !(_QWORD)v34 )
        goto LABEL_10;
      v8 = v1[1];
      if ( (_DWORD)v8 )
      {
LABEL_11:
        v10 = *v1;
        v11 = (_QWORD *)(qword_8CDA60 + 8 * xmmword_8CDA68);
        if ( (_QWORD *)qword_8CDA60 == v11 )
        {
LABEL_50:
          if ( !under_debugger )
            interr(40734, v8, v11, v10, 0.0);
          BUG();
        }
        v12 = (_QWORD *)qword_8CDA60;
        while ( __PAIR64__(v8, v10) != *v12 )
        {
          if ( v11 == ++v12 )
            goto LABEL_50;
        }
        sub_169A50((__int64 *)&v31, (__int64)"c%zu", ((__int64)v12 - qword_8CDA60 + 424) >> 3);
        goto LABEL_16;
      }
LABEL_45:
      sub_169A50((__int64 *)&v31, (__int64)"c%d", *v1);
LABEL_16:
      v13 = &s1;
      if ( (_QWORD)v32 )
        v13 = v31;
      v14 = v13 != nullptr && v9 != nullptr;
      if ( v14 )
      {
        if ( !v1[1] )
        {
          v14 = 0;
          if ( (_QWORD)v34 )
          {
            v15 = haystack;
            v16 = strstr(haystack, "-bg-");
            if ( v16 )
              v14 = v16 - v15 != -1;
          }
        }
        sub_16FAA0((__int64 *)&v29, (__int64)"/* %s */\n", v9);
        v17 = *v1;
        if ( v1[1] )
        {
          sub_525EC0(&v35, v17);
        }
        else
        {
          v18 = sub_524F80(v27 + 40, v17, 1);
          sub_525EC0(&v35, v18);
        }
        v19 = &s1;
        if ( (_QWORD)v36 )
          v19 = v35;
        v20 = (const char *)&unk_5C2F25;
        if ( v14 )
          v20 = "background-";
        sub_16FAA0((__int64 *)&v29, (__int64)".%s { %scolor: %s; }\n", v13, v20, v19);
      }
      v1 += 2;
    }
    while ( v26 != v1 );
  }
  v21 = &s1;
  if ( (_QWORD)v30 )
    v21 = v29;
  sub_199CF0(a1, (__int64)"</span><style type=\"text/css\">\n%s</style></body></html>\n", v21);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, "</span><style type=\"text/css\">\n%s</style></body></html>\n", v22);
  }
  if ( haystack )
  {
    *(_QWORD *)&v34 = 0;
    qfree(haystack, "</span><style type=\"text/css\">\n%s</style></body></html>\n");
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, "</span><style type=\"text/css\">\n%s</style></body></html>\n");
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29, "</span><style type=\"text/css\">\n%s</style></body></html>\n");
  }
  return 0;
}
