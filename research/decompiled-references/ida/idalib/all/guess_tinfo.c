__int64 __fastcall guess_tinfo(__int64 *a1, char *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 *v4; // r15
  _QWORD *v5; // r14
  char *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r12d
  char *v10; // rdx
  char *v11; // r12
  unsigned __int8 v12; // al
  unsigned int v13; // eax
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 item_end; // r14
  __int64 flags; // rax
  char *s; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v21[3]; // [rsp+8h] [rbp-F0h]
  __int64 v22[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *v23; // [rsp+30h] [rbp-C8h]
  int v24[4]; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+48h] [rbp-B0h]
  int v26[4]; // [rsp+50h] [rbp-A8h]
  int v27[4]; // [rsp+60h] [rbp-98h] BYREF
  int v28[2]; // [rsp+90h] [rbp-68h]
  void *v29; // [rsp+98h] [rbp-60h]
  void *v30; // [rsp+A0h] [rbp-58h]
  __int64 v31; // [rsp+A8h] [rbp-50h]
  void *v32; // [rsp+B8h] [rbp-40h]

  v32 = (void *)__readfsqword(0x28u);
  v2 = qword_2CCB598;
  v3 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( (unsigned __int8)sub_605A80(v3, (__int64)a1, (__int64)a2) )
    return 2;
  s = nullptr;
  *(_OWORD *)v21 = 0;
  if ( (unsigned __int8)sub_6BB290(v3) || !(unsigned __int8)sub_6BB720(v3, &s, a2) )
  {
    v4 = *(__int64 **)(v2 + 1872);
    if ( sub_5302B0(v4, (void **)&s, (__int64)a2) <= 0 )
      goto LABEL_21;
    v5 = sub_530470(v4, v22, s);
    if ( !v5 )
      goto LABEL_21;
    if ( !(unsigned __int8)sub_6BB290(v3) )
    {
      if ( !under_debugger )
        interr(3030);
      BUG();
    }
    v6 = nullptr;
    if ( v21[0] )
    {
      v14 = strrchr(s, 46);
      v7 = v5[2];
      v6 = &v14[-(v14 == nullptr) + 1];
      if ( (*((_BYTE *)v5 + 28) & 2) != 0 )
        goto LABEL_8;
    }
    else
    {
      v7 = v5[2];
      if ( (*((_BYTE *)v5 + 28) & 2) != 0 )
        goto LABEL_8;
    }
    v7 -= v5[1];
LABEL_8:
    if ( a1 )
    {
      v8 = 0;
      if ( (v5[3] & 0x600) != 0x400 )
        goto LABEL_10;
      v13 = sub_614250(*(_QWORD *)(v2 + 1648), a2, *((unsigned int *)v5 + 6), v7, v6, a1);
      goto LABEL_27;
    }
    goto LABEL_35;
  }
  v23 = nullptr;
  v10 = (char *)haystack;
  ptr = nullptr;
  *(_QWORD *)v28 = 1;
  LODWORD(v29) = -1;
  v30 = nullptr;
  LOBYTE(v31) = 0;
  *(_OWORD *)v22 = 0;
  *(_OWORD *)v24 = 0;
  *(_OWORD *)v26 = 0;
  *(_OWORD *)v27 = 0;
  if ( v21[0] )
    v10 = s;
  if ( sub_6BDD30(v3, v22, v10, 0) )
  {
    v17 = *a1;
    *a1 = *(_QWORD *)v27;
    *(_QWORD *)v27 = v17;
    clear_tinfo_t(v27);
    if ( ptr )
    {
      *(_QWORD *)v26 = 0;
      qfree(ptr);
    }
    if ( v23 )
    {
      *(_QWORD *)v24 = 0;
      qfree(v23);
    }
    v8 = 2;
    goto LABEL_10;
  }
  clear_tinfo_t(v27);
  if ( ptr )
  {
    *(_QWORD *)v26 = 0;
    qfree(ptr);
  }
  if ( v23 )
  {
    *(_QWORD *)v24 = 0;
    qfree(v23);
  }
LABEL_21:
  v11 = (char *)haystack;
  if ( v21[0] )
    v11 = s;
  v12 = segtype(a2);
  if ( v12 != 6 )
  {
    if ( v12 <= 6u )
    {
      if ( v12 == 1 )
        goto LABEL_26;
    }
    else if ( (unsigned __int8)(v12 - 10) <= 1u )
    {
LABEL_26:
      v13 = sub_614320(*(_QWORD *)(v2 + 1648), a2, v12, v11, a1);
LABEL_27:
      v8 = v13;
      goto LABEL_10;
    }
    if ( (get_flags_ex(a2, 4) & 0x600) != 0x400 )
    {
      v13 = sub_6119A0(v2, a2, v11, a1, 0);
      goto LABEL_27;
    }
    item_end = get_item_end(a2, 4, v15, v16);
    flags = get_flags_ex(a2, 4);
    if ( a1 && (flags & 0x600) == 0x400 )
    {
      v13 = sub_614250(*(_QWORD *)(v2 + 1648), a2, flags, item_end - (_QWORD)a2, v11, a1);
      goto LABEL_27;
    }
  }
LABEL_35:
  v8 = 0;
LABEL_10:
  if ( s )
  {
    v21[0] = 0;
    qfree(s);
  }
  return v8;
}
