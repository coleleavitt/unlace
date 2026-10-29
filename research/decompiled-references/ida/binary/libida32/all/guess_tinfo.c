__int64 __fastcall guess_tinfo(__int64 *a1, unsigned int a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 *v5; // r15
  _DWORD *v6; // r14
  char *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  char *v13; // rdx
  char *v14; // r12
  unsigned __int8 v15; // al
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 flags; // rax
  char *s; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v23[3]; // [rsp+8h] [rbp-E0h]
  __int64 v24[2]; // [rsp+20h] [rbp-C8h] BYREF
  void *v25; // [rsp+30h] [rbp-B8h]
  int v26[4]; // [rsp+38h] [rbp-B0h]
  void *ptr; // [rsp+48h] [rbp-A0h]
  int v28[4]; // [rsp+50h] [rbp-98h]
  int v29[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-68h]
  int v31; // [rsp+88h] [rbp-60h]
  int v32[2]; // [rsp+90h] [rbp-58h]
  void *v33; // [rsp+98h] [rbp-50h]
  __int64 v34; // [rsp+A8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v3 = qword_2CA1698;
  v4 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( (unsigned __int8)sub_5E9BB0(v4, (__int64)a1, a2) )
    return 2;
  s = nullptr;
  *(_OWORD *)v23 = 0;
  if ( (unsigned __int8)sub_69A8C0(v4) || !(unsigned __int8)sub_69AD40(v4, &s, a2) )
  {
    v5 = *(__int64 **)(v3 + 1680);
    if ( sub_517EC0(v5, (void **)&s, a2) > 0 )
    {
      v6 = sub_518080(v5, v24, s);
      if ( v6 )
      {
        if ( !(unsigned __int8)sub_69A8C0(v4) )
        {
          if ( !under_debugger )
            interr(3030);
          BUG();
        }
        v7 = nullptr;
        if ( v23[0] )
        {
          v16 = strrchr(s, 46);
          v7 = &v16[-(v16 == nullptr) + 1];
        }
        v8 = *(_QWORD *)(v3 + 1456);
        v9 = (unsigned int)v6[2];
        if ( (v6[4] & 2) != 0 )
          v10 = sub_5F8190(v8, a2, (unsigned int)v6[3], v9, v7, a1);
        else
          v10 = sub_5F8190(v8, a2, (unsigned int)v6[3], (unsigned int)(v9 - v6[1]), v7, a1);
        goto LABEL_10;
      }
    }
  }
  else
  {
    v25 = nullptr;
    v13 = (char *)haystack;
    ptr = nullptr;
    v30 = 1;
    v31 = -1;
    *(_QWORD *)v32 = 0;
    LOBYTE(v33) = 0;
    *(_OWORD *)v24 = 0;
    *(_OWORD *)v26 = 0;
    *(_OWORD *)v28 = 0;
    *(_OWORD *)v29 = 0;
    if ( v23[0] )
      v13 = s;
    if ( sub_69D2B0(v4, v24, v13, 0) )
    {
      v19 = *a1;
      *a1 = *(_QWORD *)v29;
      *(_QWORD *)v29 = v19;
      clear_tinfo_t(v29);
      if ( ptr )
      {
        *(_QWORD *)v28 = 0;
        qfree(ptr);
      }
      if ( v25 )
      {
        *(_QWORD *)v26 = 0;
        qfree(v25);
      }
      v11 = 2;
      goto LABEL_11;
    }
    clear_tinfo_t(v29);
    if ( ptr )
    {
      *(_QWORD *)v28 = 0;
      qfree(ptr);
    }
    if ( v25 )
    {
      *(_QWORD *)v26 = 0;
      qfree(v25);
    }
  }
  v14 = (char *)haystack;
  if ( v23[0] )
    v14 = s;
  v15 = segtype(a2);
  if ( v15 != 6 )
  {
    if ( v15 <= 6u )
    {
      if ( v15 == 1 )
        goto LABEL_27;
    }
    else if ( (unsigned __int8)(v15 - 10) <= 1u )
    {
LABEL_27:
      v10 = sub_5F8290(*(_QWORD *)(v3 + 1456), a2, v15, v14, a1);
LABEL_10:
      v11 = v10;
      goto LABEL_11;
    }
    if ( (get_flags_ex(a2, 4) & 0x600) == 0x400 )
    {
      v20 = get_item_end(a2, 4, v17, v18) - a2;
      flags = get_flags_ex(a2, 4);
      v10 = sub_5F8190(*(_QWORD *)(v3 + 1456), a2, flags, v20, v14, a1);
    }
    else
    {
      v10 = sub_5F5920(v3, a2, v14, a1, 0);
    }
    goto LABEL_10;
  }
  v11 = 0;
LABEL_11:
  if ( s )
  {
    v23[0] = 0;
    qfree(s);
  }
  return v11;
}

