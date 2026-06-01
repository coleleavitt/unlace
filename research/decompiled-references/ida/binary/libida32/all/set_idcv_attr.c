__int64 __fastcall set_idcv_attr(__int64 a1, const char *a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r14
  char v11; // al
  unsigned int qerrno; // ebx
  _QWORD *v13; // rax
  char *v14; // r15
  char *v15; // rbp
  __int64 v16; // r12
  char *v17; // r14
  char *v18; // rax
  char *v19; // r13
  const char *v20; // rsi
  const char *v21; // rdi
  int v22; // eax
  char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 idc_gvar; // rax
  const char *v27; // rsi
  char *v28; // [rsp+8h] [rbp-120h]
  char *v29; // [rsp+10h] [rbp-118h]
  _QWORD *v30; // [rsp+18h] [rbp-110h]
  char **p_s2; // [rsp+28h] [rbp-100h] BYREF
  char *s2; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v33; // [rsp+38h] [rbp-F0h]
  _QWORD v34[19]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v35; // [rsp+E8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( !a1 )
  {
    idc_gvar = find_idc_gvar(a2);
    if ( idc_gvar )
    {
      qerrno = 0;
      copy_idcv(idc_gvar);
      return qerrno;
    }
    set_error_string();
    v5 = 1538;
    return set_qerrno(v5, a2);
  }
  if ( *(_BYTE *)a1 != 5 )
  {
    v5 = 1532;
    return set_qerrno(v5, a2);
  }
  s2 = nullptr;
  v33 = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    s2 = (char *)qvector_reserve(&s2, 0, v8 + 1, 1);
    *(_QWORD *)&v33 = v9;
    memmove(s2, a2, v10);
    s2[v10] = 0;
  }
  if ( a4 )
  {
    sub_7773B0((__int64)v34, 0, 1u);
    v11 = sub_778630(v34, *(_QWORD *)(a1 + 8), (const char **)&s2, a3);
    qerrno = 0;
    if ( !v11 )
      qerrno = get_qerrno(v34);
    sub_777510((__int64)v34);
    goto LABEL_11;
  }
  v13 = *(_QWORD **)(a1 + 8);
  v14 = (char *)v13[2];
  v15 = (char *)(v13 + 1);
  v30 = v13;
  v29 = (char *)(v13 + 1);
  if ( !v14 )
  {
    v15 = (char *)(v13 + 1);
    goto LABEL_36;
  }
  v16 = v33;
  v17 = s2;
  v18 = (char *)haystack;
  if ( (_QWORD)v33 )
    v18 = s2;
  v28 = v18;
  while ( 1 )
  {
    v24 = *((_QWORD *)v14 + 5);
    if ( !v16 )
      break;
    if ( v24 )
      goto LABEL_27;
    v19 = v14;
    v20 = v17;
    v21 = haystack;
LABEL_20:
    v22 = strcmp(v21, v20);
    v23 = *((char **)v14 + 2);
    v14 = *((char **)v14 + 3);
    if ( v22 >= 0 )
    {
      v15 = v19;
      v14 = v23;
    }
    if ( !v14 )
      goto LABEL_31;
  }
  if ( v24 )
  {
LABEL_27:
    v21 = *((const char **)v14 + 4);
    v20 = v28;
    v19 = v14;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v25 = *((_QWORD *)v14 + 2);
    if ( !v25 )
      break;
    v15 = v14;
    v14 = *((char **)v14 + 2);
    if ( *(_QWORD *)(v25 + 40) )
      goto LABEL_27;
  }
  v15 = v14;
LABEL_31:
  if ( v29 == v15 )
    goto LABEL_36;
  if ( *((_QWORD *)v15 + 5) )
  {
    v27 = *((const char **)v15 + 4);
    if ( !v16 )
      v17 = (char *)haystack;
LABEL_35:
    if ( strcmp(v17, v27) < 0 )
    {
LABEL_36:
      p_s2 = &s2;
      v15 = (char *)sub_775E70(v30, v15, (__int64 *)&p_s2);
    }
  }
  else
  {
    v27 = haystack;
    if ( v16 )
      goto LABEL_35;
  }
  copy_idcv(v15 + 56);
  qerrno = 0;
LABEL_11:
  if ( s2 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(s2);
  }
  return qerrno;
}

