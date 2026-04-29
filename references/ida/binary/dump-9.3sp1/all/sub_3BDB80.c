__int64 __fastcall sub_3BDB80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v19; // eax
  __int64 *func; // r15
  unsigned __int64 v21; // r9
  char *v22; // r8
  char *v23; // rax
  size_t v24; // rdx
  int v25; // eax
  size_t v26; // rbx
  char *v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rdx
  char *s2; // [rsp+0h] [rbp-A8h]
  char *s2b; // [rsp+0h] [rbp-A8h]
  char *s2a; // [rsp+0h] [rbp-A8h]
  char *s2c; // [rsp+0h] [rbp-A8h]
  char *s2e; // [rsp+0h] [rbp-A8h]
  char *s2d; // [rsp+0h] [rbp-A8h]
  char *v36; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+8h] [rbp-A0h]
  __int64 v38; // [rsp+8h] [rbp-A0h]
  char *v39; // [rsp+8h] [rbp-A0h]
  __int64 v40; // [rsp+10h] [rbp-98h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  __int64 v42; // [rsp+18h] [rbp-90h]
  char *v43; // [rsp+20h] [rbp-88h] BYREF
  __int128 v44; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+40h] [rbp-68h] BYREF
  __int128 v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+58h] [rbp-50h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = sub_38C130(a2);
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &s1, &callui, a4, a5, a6);
    v8 = (unsigned __int64)s1;
    func = (__int64 *)get_func();
    if ( (~(unsigned __int16)get_flags_ex() & 0x600) != 0 || !func )
    {
      sub_2B4E70((__int64)"Only instructions inside a function can be converted to calls", 4);
      return 1;
    }
    v9 = *func;
  }
  s1 = nullptr;
  v46 = 0;
  if ( !(_BYTE)a3 )
  {
    sub_3C5ED0(&s1, a1, v9, v8);
    if ( !(_QWORD)v46 )
    {
      if ( !(unsigned __int8)sub_3884C0((__int64)&s1, 6u, (__int64)"Please enter the type declaration") )
      {
LABEL_25:
        v12 = s1;
        goto LABEL_26;
      }
      v11 = v46;
      v12 = s1;
      if ( !(_QWORD)v46 || (v13 = s1, !*s1) )
      {
LABEL_26:
        if ( v12 )
        {
          *(_QWORD *)&v46 = 0;
          qfree((__int64)v12);
        }
        return a3;
      }
      s2 = nullptr;
      goto LABEL_9;
    }
    s2b = (char *)v46;
    v23 = (char *)qalloc_or_throw(v46, a1, v46, v10);
    v24 = (size_t)s2b;
    s2 = v23;
    memcpy(v23, s1, v24);
    if ( (unsigned __int8)sub_3884C0((__int64)&s1, 6u, (__int64)"Please enter the type declaration") )
    {
      if ( (_QWORD)v46 )
      {
        v41 = v46;
        v36 = s1;
        v19 = strcmp(s1, s2);
        v12 = v36;
        v11 = v41;
        v13 = v36;
        if ( v19 )
        {
LABEL_9:
          if ( v11 == 1 || v12[v11 - 2] == 59 )
          {
LABEL_11:
            if ( (unsigned __int8)sub_3C63D0(a1, v9, v8, v13, 0) )
            {
              if ( s2 )
                qfree((__int64)s2);
              if ( s1 )
              {
                *(_QWORD *)&v46 = 0;
                qfree((__int64)s1);
              }
LABEL_16:
              if ( a2 )
                sub_395CC0(a2, 1u, v14, v15, v16, 0.0);
              return 1;
            }
            goto LABEL_23;
          }
          v28 = v11 - 1;
          v29 = v11 + 1;
          if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v11 + 1) )
          {
            v42 = v11 - 1;
            v40 = v11;
            v38 = v11 + 1;
            s1 = (char *)qvector_reserve((__int64)&s1, (__int64)v12, v29, 1);
            v28 = v42;
            v13 = s1;
            v11 = v40;
            v29 = v38;
          }
          *(_QWORD *)&v46 = v29;
          v13[v28] = 59;
          s1[v11] = 0;
          if ( (_QWORD)v46 )
          {
            v13 = s1;
            goto LABEL_11;
          }
LABEL_43:
          v13 = (char *)::s1;
          goto LABEL_11;
        }
      }
      else if ( *s2 )
      {
        goto LABEL_43;
      }
    }
LABEL_23:
    if ( s2 )
      qfree((__int64)s2);
    goto LABEL_25;
  }
  v47 = 0;
  a3 = sub_3C5C20(&s1, a1, v9, v8);
  if ( (_BYTE)a3 )
  {
    v43 = nullptr;
    v44 = 0;
    if ( (_QWORD)v46 )
    {
      s2a = (char *)v46;
      v43 = (char *)qalloc_or_throw(v46, a1, v46, v17);
      *((_QWORD *)&v44 + 1) = s2a;
      memcpy(v43, s1, (size_t)s2a);
      *(_QWORD *)&v44 = s2a;
    }
    if ( (unsigned __int8)sub_3BDAB0((__int64)&v43, (__int64)"Please enter new function name") )
    {
      v21 = v44;
      if ( (_QWORD)v44 )
      {
        v22 = v43;
        if ( (_QWORD)v46 )
        {
          v37 = v44;
          s2c = v43;
          v25 = strcmp(s1, v43);
          v22 = s2c;
          v21 = v37;
          if ( !v25 )
            goto LABEL_46;
        }
        else if ( !*v43 )
        {
LABEL_46:
          if ( v22 )
          {
            *(_QWORD *)&v44 = 0;
            qfree((__int64)v22);
          }
          goto LABEL_19;
        }
        v26 = v21 - 1;
        if ( v21 != 1 )
        {
          v27 = s1;
          if ( *((_QWORD *)&v46 + 1) < v21 )
          {
            v39 = v22;
            s2d = (char *)v21;
            s1 = (char *)qvector_reserve((__int64)&s1, (__int64)s1, v21, 1);
            v22 = v39;
            v27 = s1;
            v21 = (unsigned __int64)s2d;
          }
          *(_QWORD *)&v46 = v21;
          s2e = (char *)v21;
          memmove(v27, v22, v26);
          s2e[(_QWORD)s1 - 1] = 0;
          goto LABEL_50;
        }
LABEL_49:
        *(_QWORD *)&v46 = 0;
LABEL_50:
        sub_3C5FA0(a1, v9, v8, &s1);
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree((__int64)v43);
        }
        clear_tinfo_t();
        if ( s1 )
        {
          *(_QWORD *)&v46 = 0;
          qfree((__int64)s1);
        }
        goto LABEL_16;
      }
      if ( (_QWORD)v46 && *s1 )
        goto LABEL_49;
    }
    v22 = v43;
    goto LABEL_46;
  }
LABEL_19:
  clear_tinfo_t();
  if ( s1 )
  {
    *(_QWORD *)&v46 = 0;
    qfree((__int64)s1);
  }
  return a3;
}
