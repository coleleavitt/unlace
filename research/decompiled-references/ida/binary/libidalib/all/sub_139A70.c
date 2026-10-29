__int64 __fastcall sub_139A70(char a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *func; // rax
  const char *v5; // r8
  const char *v6; // rdx
  unsigned int v7; // ebx
  char *v9; // r13
  char *v10; // rdi
  char *v11; // rsi
  char *v12; // rdi
  const char *v13; // r8
  const char *v14; // rdx
  const char *v15; // r8
  const char *v16; // rdx
  char *s1; // [rsp+0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+8h] [rbp-80h]
  const char *v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  char *s2; // [rsp+40h] [rbp-48h]
  __int128 v22; // [rsp+48h] [rbp-40h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  s1 = nullptr;
  v18 = 0;
  v19 = nullptr;
  v20 = 0;
  if ( qword_254470 )
    sub_163D70(qword_254470, &s1);
  v2 = xmmword_2528A0;
  v3 = (_QWORD *)getseg();
  if ( !v3 || *v3 != v2 )
  {
LABEL_5:
    func = (_QWORD *)get_func();
    if ( func && *func == v2 )
    {
      v22 = 0;
      s2 = nullptr;
      get_ea_name();
      if ( a1 )
        goto LABEL_37;
      v9 = s2;
      if ( (unsigned __int64)v22 > 1 )
      {
        v10 = (char *)::s1;
        if ( (_QWORD)v18 )
          v10 = s1;
        if ( !strcmp(v10, s2) )
        {
LABEL_37:
          get_func_cmt();
          v13 = (const char *)itext();
          v14 = ::s1;
          if ( (_QWORD)v20 )
            v14 = v19;
          if ( (unsigned __int8)sub_1395B0((__int64)&v19, 0, (__int64)v14, (__int64)"%s", v13) )
            set_func_cmt();
          if ( s2 )
          {
            *(_QWORD *)&v22 = 0;
            qfree();
          }
          goto LABEL_10;
        }
      }
      if ( v9 )
      {
        *(_QWORD *)&v22 = 0;
        qfree();
      }
    }
    get_cmt();
    v5 = (const char *)itext();
    v6 = ::s1;
    if ( (_QWORD)v20 )
      v6 = v19;
    if ( (unsigned __int8)sub_1399B0((__int64)&v19, 1024, (__int64)v6, (__int64)"%s", v5) )
    {
      if ( (unsigned __int64)v20 > 1 )
        trim();
      set_cmt();
    }
LABEL_10:
    v7 = 1;
    goto LABEL_11;
  }
  s2 = nullptr;
  v22 = 0;
  get_segm_name();
  if ( (_QWORD)v22 )
  {
    v11 = s2;
    v12 = (char *)::s1;
    if ( !(_QWORD)v18 )
      goto LABEL_29;
  }
  else
  {
    v11 = (char *)::s1;
    if ( !(_QWORD)v18 )
      goto LABEL_34;
  }
  v12 = s1;
LABEL_29:
  if ( strcmp(v12, v11) )
  {
    if ( s2 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    goto LABEL_5;
  }
LABEL_34:
  v7 = 0;
  if ( !a1 )
  {
    get_segment_cmt();
    v15 = (const char *)itext();
    v16 = ::s1;
    if ( (_QWORD)v20 )
      v16 = v19;
    if ( (unsigned __int8)sub_1395B0((__int64)&v19, 0, (__int64)v16, (__int64)"%s", v15) )
      set_segment_cmt();
    v7 = 1;
  }
  if ( s2 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
LABEL_11:
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v7;
}

