__int64 __fastcall sub_3B8B00(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v8; // r13
  __int64 v9; // r15
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r8
  char *v14; // rdi
  char *v15; // rcx
  int v17; // eax
  __int64 *func; // r15
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  char *v23; // r9
  char *v24; // r8
  void *v25; // rax
  size_t v26; // rdx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // eax
  size_t v31; // rbx
  char *v32; // rdi
  __int64 v33; // r9
  __int64 v34; // rdx
  char s2; // [rsp+0h] [rbp-A8h]
  char *s2a; // [rsp+0h] [rbp-A8h]
  char *s2c; // [rsp+0h] [rbp-A8h]
  char *s2b; // [rsp+0h] [rbp-A8h]
  char *s2d; // [rsp+0h] [rbp-A8h]
  char *s2f; // [rsp+0h] [rbp-A8h]
  char *s2e; // [rsp+0h] [rbp-A8h]
  char *v42; // [rsp+8h] [rbp-A0h]
  char *v43; // [rsp+8h] [rbp-A0h]
  __int64 v44; // [rsp+8h] [rbp-A0h]
  char *v45; // [rsp+8h] [rbp-A0h]
  __int64 v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+18h] [rbp-90h]
  __int64 v48; // [rsp+18h] [rbp-90h]
  char *v49; // [rsp+20h] [rbp-88h] BYREF
  __int128 v50; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+40h] [rbp-68h] BYREF
  __int128 v52; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+58h] [rbp-50h]
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = (char *)sub_387930(a2);
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &s1, &callui, a4, a5, a6);
    v8 = s1;
    func = (__int64 *)get_func();
    if ( (~(unsigned __int16)get_flags_ex() & 0x600) != 0 || !func )
    {
      sub_2B1D90(
        (unsigned int)"Only instructions inside a function can be converted to calls",
        4,
        v19,
        v20,
        v21,
        v22,
        s2);
      return 1;
    }
    v9 = *func;
  }
  s1 = 0;
  v52 = 0;
  if ( !(_BYTE)a3 )
  {
    sub_3C0DD0(&s1, a1, v9, v8);
    if ( !(_QWORD)v52 )
    {
      if ( !(unsigned __int8)sub_383FA0(
                               (unsigned int)&s1,
                               6,
                               (unsigned int)"Please enter the type declaration",
                               v10,
                               v11,
                               v12,
                               s2) )
      {
LABEL_25:
        v14 = s1;
        goto LABEL_26;
      }
      v13 = v52;
      v14 = s1;
      if ( !(_QWORD)v52 || (v15 = s1, !*s1) )
      {
LABEL_26:
        if ( v14 )
        {
          *(_QWORD *)&v52 = 0;
          qfree();
        }
        return a3;
      }
      s2a = 0;
      goto LABEL_9;
    }
    s2c = (char *)v52;
    v25 = (void *)qalloc_or_throw();
    v26 = (size_t)s2c;
    LOBYTE(s2c) = (_BYTE)v25;
    memcpy(v25, s1, v26);
    if ( (unsigned __int8)sub_383FA0(
                            (unsigned int)&s1,
                            6,
                            (unsigned int)"Please enter the type declaration",
                            v27,
                            v28,
                            v29,
                            (char)s2c) )
    {
      if ( (_QWORD)v52 )
      {
        v47 = v52;
        v42 = s1;
        v17 = strcmp(s1, s2a);
        v14 = v42;
        v13 = v47;
        v15 = v42;
        if ( v17 )
        {
LABEL_9:
          if ( v13 == 1 || v14[v13 - 2] == 59 )
          {
LABEL_11:
            if ( (unsigned __int8)sub_3C12D0(a1, v9, v8, v15, 0) )
            {
              if ( s2a )
                qfree();
              if ( s1 )
              {
                *(_QWORD *)&v52 = 0;
                qfree();
              }
LABEL_16:
              if ( a2 )
                sub_3912F0(a2, 1);
              return 1;
            }
            goto LABEL_23;
          }
          v33 = v13 - 1;
          v34 = v13 + 1;
          if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v13 + 1) )
          {
            v48 = v13 - 1;
            v46 = v13;
            v44 = v13 + 1;
            s1 = (char *)qvector_reserve();
            v33 = v48;
            v15 = s1;
            v13 = v46;
            v34 = v44;
          }
          *(_QWORD *)&v52 = v34;
          v15[v33] = 59;
          s1[v13] = 0;
          if ( (_QWORD)v52 )
          {
            v15 = s1;
            goto LABEL_11;
          }
LABEL_43:
          v15 = (char *)::s1;
          goto LABEL_11;
        }
      }
      else if ( *s2a )
      {
        goto LABEL_43;
      }
    }
LABEL_23:
    if ( s2a )
      qfree();
    goto LABEL_25;
  }
  v53 = 0;
  a3 = sub_3C0B20(&s1, a1, v9, v8);
  if ( (_BYTE)a3 )
  {
    v49 = 0;
    v50 = 0;
    if ( (_QWORD)v52 )
    {
      s2b = (char *)v52;
      v49 = (char *)qalloc_or_throw();
      *((_QWORD *)&v50 + 1) = s2b;
      memcpy(v49, s1, (size_t)s2b);
      *(_QWORD *)&v50 = s2b;
    }
    if ( (unsigned __int8)sub_3B8A30((__int64)&v49, (__int64)"Please enter new function name") )
    {
      v23 = (char *)v50;
      if ( (_QWORD)v50 )
      {
        v24 = v49;
        if ( (_QWORD)v52 )
        {
          v43 = (char *)v50;
          s2d = v49;
          v30 = strcmp(s1, v49);
          v24 = s2d;
          v23 = v43;
          if ( !v30 )
            goto LABEL_46;
        }
        else if ( !*v49 )
        {
LABEL_46:
          if ( v24 )
          {
            *(_QWORD *)&v50 = 0;
            qfree();
          }
          goto LABEL_19;
        }
        v31 = (size_t)(v23 - 1);
        if ( v23 != &byte_1 )
        {
          v32 = s1;
          if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)v23 )
          {
            v45 = v24;
            s2e = v23;
            s1 = (char *)qvector_reserve();
            v24 = v45;
            v32 = s1;
            v23 = s2e;
          }
          *(_QWORD *)&v52 = v23;
          s2f = v23;
          memmove(v32, v24, v31);
          s2f[(_QWORD)s1 - 1] = 0;
          goto LABEL_50;
        }
LABEL_49:
        *(_QWORD *)&v52 = 0;
LABEL_50:
        sub_3C0EA0(a1, v9, v8, &s1);
        if ( v49 )
        {
          *(_QWORD *)&v50 = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( s1 )
        {
          *(_QWORD *)&v52 = 0;
          qfree();
        }
        goto LABEL_16;
      }
      if ( (_QWORD)v52 && *s1 )
        goto LABEL_49;
    }
    v24 = v49;
    goto LABEL_46;
  }
LABEL_19:
  clear_tinfo_t();
  if ( s1 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  return a3;
}
