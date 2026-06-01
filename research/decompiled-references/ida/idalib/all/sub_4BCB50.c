__int64 __fastcall sub_4BCB50(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  char v12; // bp
  void *v13; // r12
  void *v14; // r14
  __int64 v15; // r12
  char **v16; // rdi
  const char *v17; // r13
  __int64 v18; // rax
  char **v19; // rdi
  __int64 i; // rax
  void *v21; // rdi
  const char *v22; // rdx
  const char *v23; // rbp
  __int64 v24; // r12
  size_t v25; // rax
  size_t v26; // r12
  char **v27; // rdi
  const char *v28; // r14
  __int64 v29; // rax
  char **v30; // rdi
  __int64 v31; // rax
  void *v32; // r14
  __int64 v33; // rsi
  void *v34; // [rsp+20h] [rbp-568h]
  __int64 v35; // [rsp+28h] [rbp-560h]
  void *v36; // [rsp+30h] [rbp-558h]
  __int64 v38; // [rsp+70h] [rbp-518h] BYREF
  int v39[2]; // [rsp+78h] [rbp-510h] BYREF
  void *v40; // [rsp+80h] [rbp-508h] BYREF
  void *v41; // [rsp+88h] [rbp-500h] BYREF
  void *v42; // [rsp+90h] [rbp-4F8h] BYREF
  __int128 v43; // [rsp+98h] [rbp-4F0h]
  _BYTE s1[24]; // [rsp+B0h] [rbp-4D8h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-4C0h]
  __int64 v46; // [rsp+D0h] [rbp-4B8h]
  void *v47; // [rsp+D8h] [rbp-4B0h]
  void *v48[3]; // [rsp+E0h] [rbp-4A8h] BYREF
  int v49[2]; // [rsp+F8h] [rbp-490h]
  int v50; // [rsp+100h] [rbp-488h]
  void *v51[2]; // [rsp+108h] [rbp-480h]
  __int128 v52; // [rsp+118h] [rbp-470h]
  int v53[2]; // [rsp+128h] [rbp-460h]
  __int128 v54; // [rsp+130h] [rbp-458h]
  _BYTE v55[1032]; // [rsp+140h] [rbp-448h] BYREF
  unsigned __int64 v56; // [rsp+548h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  sub_7BEFF0(&v38, *a1, "$ curlocs", 0, 0);
  if ( v38 == -1 )
    return 1;
  v35 = sub_7BEB80(&v38, *a1, 65);
  if ( v35 == -1 )
    return 1;
  while ( 2 )
  {
    v4 = *a1;
    v48[0] = &dword_0 + 1;
    sub_7BE7C0(&v38, v4, v35, v48, 8, 65);
    v5 = *a1;
    *(_QWORD *)v39 = v35;
    if ( !(unsigned __int8)sub_7BEFD0(v39, v5, &v40, 1, 65) )
      goto LABEL_5;
    v6 = *a1;
    *(_QWORD *)s1 = *(_QWORD *)v39;
    v48[0] = v40;
    sub_7BE7C0(s1, v6, 1, v48, 8, 65);
    if ( (unsigned __int8)sub_7BEFD0(v39, *a1, &v41, 0, 65) )
    {
      v33 = *a1;
      v48[0] = v41;
      sub_7BE7C0(v39, v33, 0, v48, 8, 65);
    }
    v7 = 0;
    v8 = 0;
    if ( v40 )
    {
      while ( 1 )
      {
        v15 = *a1;
        memset(s1, 0, sizeof(s1));
        sub_7BEA80(v39, v15, s1, v8, 80);
        if ( *(_QWORD *)&s1[8] <= 1u )
        {
          memset(v48, 0, sizeof(v48));
          sub_35A790((char **)v48);
          v16 = (char **)sub_498150(a2);
          sub_35A790(v16);
          if ( v48[0] )
          {
            v48[1] = nullptr;
            qfree(v48[0]);
          }
          goto LABEL_27;
        }
        if ( (unsigned int)get_place_class_id(*(const char **)s1) != -1 )
        {
          v9 = *(void **)s1;
          if ( !*(_QWORD *)s1 )
            goto LABEL_14;
LABEL_13:
          *(_QWORD *)&s1[8] = 0;
          qfree(v9);
          goto LABEL_14;
        }
        if ( !*(_QWORD *)&s1[8] )
          break;
        v17 = *(const char **)s1;
        if ( strcmp(*(const char **)s1, "watchplace_t")
          && strcmp(v17, "user_graph_place_t")
          && strcmp(v17, "hintplace_t") )
        {
          goto LABEL_38;
        }
LABEL_35:
        v18 = sub_7BE950(v39, v15, v8, v55, 1024, 83);
        if ( v18 > 0 )
          sub_7BE7C0(v39, v15, v8, v55, v18, 83);
LABEL_27:
        v9 = *(void **)s1;
        if ( *(_QWORD *)s1 )
          goto LABEL_13;
LABEL_14:
        v10 = *a1;
        v11 = *(_QWORD *)v39;
        memset(s1, 0, sizeof(s1));
        v45 = -1;
        v46 = 0;
        v42 = *(void **)v39;
        v52 = 0;
        v54 = 0;
        if ( v7 < (unsigned int)sub_7BE710(&v42, v10, 1, 65) )
        {
          memset(v48, 0, sizeof(v48));
          *(_QWORD *)v49 = -1;
          v50 = 0;
          *(_QWORD *)v53 = 0;
          *(_OWORD *)v51 = 0;
          v12 = sub_4B8CB0(v10, (__int64)v48, v11, v7, 1);
          v36 = v51[1];
          v34 = *(void **)v53;
          v13 = v51[0];
          if ( v12 )
          {
            v45 = *(_QWORD *)v49;
            LODWORD(v46) = v50;
            *(_OWORD *)s1 = *(_OWORD *)v48;
            *(void **)&s1[16] = v48[2];
            if ( v51[0] )
            {
              v14 = (void *)(*(__int64 (__fastcall **)(void *, double))(*(_QWORD *)v51[0] + 16LL))(
                              v51[0],
                              *(double *)v48);
              qfree(v13);
              if ( v36 )
              {
LABEL_18:
                qfree(v36);
                if ( v34 )
                  goto LABEL_19;
LABEL_20:
                if ( v12 )
                  goto LABEL_32;
              }
              else
              {
                if ( v34 )
                {
LABEL_19:
                  qfree(v34);
                  goto LABEL_20;
                }
LABEL_32:
                v47 = v14;
                sub_4B6F80(*(__int64 *)v39, v7, (const __m128i *)s1);
              }
              if ( v14 )
                qfree(v14);
              goto LABEL_23;
            }
            if ( v51[1] )
            {
              qfree(v51[1]);
              if ( v34 )
              {
                v14 = nullptr;
                qfree(v34);
                goto LABEL_32;
              }
            }
            else if ( *(_QWORD *)v53 )
            {
              qfree(*(void **)v53);
            }
            v47 = nullptr;
            sub_4B6F80(*(__int64 *)v39, v7, (const __m128i *)s1);
          }
          else if ( v51[0] )
          {
            v14 = nullptr;
            qfree(v51[0]);
            if ( v36 )
              goto LABEL_18;
            if ( v34 )
              goto LABEL_19;
          }
          else
          {
            if ( !v51[1] )
            {
              if ( !*(_QWORD *)v53 )
                goto LABEL_23;
LABEL_86:
              qfree(v34);
              goto LABEL_23;
            }
            qfree(v51[1]);
            if ( v34 )
              goto LABEL_86;
          }
        }
LABEL_23:
        v8 = ++v7;
        if ( v7 >= (unsigned __int64)v40 )
          goto LABEL_40;
      }
      v17 = haystack;
LABEL_38:
      if ( strcmp(v17, "fileplace_t") )
      {
        v19 = (char **)sub_498150(a2);
        sub_35A790(v19);
        goto LABEL_27;
      }
      goto LABEL_35;
    }
LABEL_40:
    v42 = nullptr;
    v43 = 0;
    for ( i = netnode_qhashfirst(*(_QWORD *)v39, &v42, 72); i > 0; i = netnode_qhashnext(*(_QWORD *)v39, &v42, v22, 72) )
    {
      v23 = haystack;
      if ( (_QWORD)v43 )
        v23 = (const char *)v42;
      v24 = *a1;
      memset(s1, 0, sizeof(s1));
      sub_7BF410(v39, v24, s1, v23, 80);
      if ( *(_QWORD *)&s1[8] <= 1u )
      {
        memset(v48, 0, sizeof(v48));
        if ( v23 )
        {
          v25 = strlen(v23);
          v26 = v25;
          if ( v25 )
          {
            v32 = (void *)(v25 + 1);
            v48[0] = (void *)qvector_reserve(v48, 0, v25 + 1, 1);
            v48[1] = v32;
            memmove(v48[0], v23, v26);
            *((_BYTE *)v48[0] + v26) = 0;
          }
        }
        v27 = (char **)sub_498150(a2);
        sub_35A790(v27);
        if ( v48[0] )
        {
          v48[1] = nullptr;
          qfree(v48[0]);
        }
        goto LABEL_56;
      }
      if ( (unsigned int)get_place_class_id(*(const char **)s1) != -1 )
      {
        v21 = *(void **)s1;
        if ( !*(_QWORD *)s1 )
          goto LABEL_44;
LABEL_43:
        *(_QWORD *)&s1[8] = 0;
        qfree(v21);
        goto LABEL_44;
      }
      if ( !*(_QWORD *)&s1[8] )
      {
        v28 = haystack;
LABEL_63:
        if ( strcmp(v28, "fileplace_t") )
        {
          v30 = (char **)sub_498150(a2);
          sub_35A790(v30);
          goto LABEL_56;
        }
        goto LABEL_60;
      }
      v28 = *(const char **)s1;
      if ( strcmp(*(const char **)s1, "watchplace_t") && strcmp(v28, "user_graph_place_t") && strcmp(v28, "hintplace_t") )
        goto LABEL_63;
LABEL_60:
      v29 = sub_7BF3B0(v39, v24, v23, v55, 1024, 72);
      if ( v29 > 0 )
        sub_7BF4E0(v39, v24, v23, v55, v29, 72);
LABEL_56:
      v21 = *(void **)s1;
      if ( *(_QWORD *)s1 )
        goto LABEL_43;
LABEL_44:
      v22 = haystack;
      if ( (_QWORD)v43 )
        v22 = (const char *)v42;
    }
    v31 = sub_7BE950(v39, *a1, 0xFFFFFFFFLL, v55, 1024, 83);
    if ( v31 > 0 )
      sub_7BE7C0(v39, *a1, -1, v55, v31, 83);
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
LABEL_5:
    v35 = sub_7BEBF0(&v38, *a1, v35, 65);
    if ( v35 != -1 )
      continue;
    return 1;
  }
}
