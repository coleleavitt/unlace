__int64 __fastcall set_idcv_attr(__int64 a1, const char *a2, __int64 a3, char a4)
{
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r14
  char v10; // al
  unsigned int qerrno; // ebx
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // rbp
  __int64 v15; // r12
  char *v16; // r14
  char *v17; // rax
  _QWORD *v18; // r13
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 idc_gvar; // rax
  const char *v26; // rsi
  char *v27; // [rsp+8h] [rbp-120h]
  _QWORD *v28; // [rsp+10h] [rbp-118h]
  _QWORD *v29; // [rsp+18h] [rbp-110h]
  char **p_s2; // [rsp+28h] [rbp-100h] BYREF
  char *s2; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-F0h]
  _QWORD v33[19]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *(_BYTE *)a1 != 5 )
      return set_qerrno(1532);
    s2 = nullptr;
    v32 = 0;
    if ( a2 )
    {
      v7 = strlen(a2);
      v8 = v7 + 1;
      v9 = v7;
      s2 = (char *)qvector_reserve(&s2, 0, v7 + 1, 1);
      *(_QWORD *)&v32 = v8;
      memmove(s2, a2, v9);
      s2[v9] = 0;
    }
    if ( a4 )
    {
      sub_7977F0((__int64)v33, 0, 1u);
      v10 = sub_798A70(v33, *(_QWORD *)(a1 + 8), (const char **)&s2, a3);
      qerrno = 0;
      if ( !v10 )
        qerrno = get_qerrno(v33);
      sub_797950((__int64)v33);
      goto LABEL_11;
    }
    v12 = *(_QWORD **)(a1 + 8);
    v13 = (_QWORD *)v12[2];
    v14 = v12 + 1;
    v29 = v12;
    v28 = v12 + 1;
    if ( !v13 )
    {
      v14 = v12 + 1;
      goto LABEL_36;
    }
    v15 = v32;
    v16 = s2;
    v17 = (char *)haystack;
    if ( (_QWORD)v32 )
      v17 = s2;
    v27 = v17;
    while ( 1 )
    {
      v23 = v13[5];
      if ( !v15 )
        break;
      if ( v23 )
        goto LABEL_27;
      v18 = v13;
      v19 = v16;
      v20 = haystack;
LABEL_20:
      v21 = strcmp(v20, v19);
      v22 = (_QWORD *)v13[2];
      v13 = (_QWORD *)v13[3];
      if ( v21 >= 0 )
      {
        v14 = v18;
        v13 = v22;
      }
      if ( !v13 )
        goto LABEL_31;
    }
    if ( !v23 )
    {
      while ( 1 )
      {
        v24 = v13[2];
        if ( !v24 )
          break;
        v14 = v13;
        v13 = (_QWORD *)v13[2];
        if ( *(_QWORD *)(v24 + 40) )
          goto LABEL_27;
      }
      v14 = v13;
LABEL_31:
      if ( v28 == v14 )
        goto LABEL_36;
      if ( v14[5] )
      {
        v26 = (const char *)v14[4];
        if ( !v15 )
          v16 = (char *)haystack;
LABEL_35:
        if ( strcmp(v16, v26) < 0 )
        {
LABEL_36:
          p_s2 = &s2;
          v14 = sub_7962C0(v29, v14, (__int64 *)&p_s2);
        }
      }
      else
      {
        v26 = haystack;
        if ( v15 )
          goto LABEL_35;
      }
      copy_idcv(v14 + 7);
      qerrno = 0;
LABEL_11:
      if ( s2 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(s2);
      }
      return qerrno;
    }
LABEL_27:
    v20 = (const char *)v13[4];
    v19 = v27;
    v18 = v13;
    goto LABEL_20;
  }
  idc_gvar = find_idc_gvar(a2);
  if ( idc_gvar )
  {
    qerrno = 0;
    copy_idcv(idc_gvar);
    return qerrno;
  }
  set_error_string(0, a2);
  return set_qerrno(1538);
}
