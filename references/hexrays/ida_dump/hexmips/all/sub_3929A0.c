__int64 __fastcall sub_3929A0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 func; // r13
  char v8; // al
  char *v9; // rax
  char v10; // al
  char **p_s1; // r8
  char *v12; // rsi
  unsigned int v13; // r15d
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-78h] BYREF
  char *s2; // [rsp+10h] [rbp-70h] BYREF
  __int128 v19; // [rsp+18h] [rbp-68h]
  char *s1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+38h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 128);
  v22 = __readfsqword(0x28u);
  v17 = 0;
  sub_37CE00(*(_QWORD *)(v5 + 112), a2, (unsigned __int64)&v17, 2, a5);
  s2 = nullptr;
  v19 = 0;
  get_ea_name(&s2, a2, 0, 0);
  calc_c_cpp_name(&s2, s2, &v17, 0);
  s1 = nullptr;
  v21 = 0;
  func = get_func(a2);
  v8 = get_tinfo_property(v17, 2) & 0xF;
  if ( func && v8 == 12 )
  {
    v9 = (char *)::s1;
    if ( (_QWORD)v19 )
      v9 = s2;
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, char **, __int64, __int64 *, char *))callui)(
            200,
            0,
            &v17,
            &s1,
            func,
            &v17,
            v9);
  }
  else
  {
    v10 = sub_383B20(&v17, (__int64)&s1, *(_QWORD *)(a1 + 128), (__int64)s2, &v17, v8 == 12, nullptr);
  }
  if ( v10 )
  {
    if ( (_QWORD)v19 )
    {
      v12 = s2;
      if ( !(_QWORD)v21 )
      {
        v15 = strcmp(::s1, s2);
        p_s1 = nullptr;
        if ( v15 )
          p_s1 = &s1;
        goto LABEL_9;
      }
    }
    else
    {
      p_s1 = nullptr;
      v12 = (char *)::s1;
      if ( !(_QWORD)v21 )
      {
LABEL_9:
        sub_392800(a1, (const char *)&v17, a2, 1, (__int64)p_s1, 0.0);
        v13 = 1;
        goto LABEL_10;
      }
    }
    v16 = strcmp(s1, v12);
    p_s1 = nullptr;
    if ( v16 )
      p_s1 = &s1;
    goto LABEL_9;
  }
  v13 = 0;
LABEL_10:
  if ( s1 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(s1);
  }
  if ( s2 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(s2);
  }
  clear_tinfo_t(&v17);
  return v13;
}
