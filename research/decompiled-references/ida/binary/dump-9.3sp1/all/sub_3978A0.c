__int64 __fastcall sub_3978A0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 func; // r13
  char v5; // al
  char *v6; // rax
  char v7; // al
  char **p_s1; // r8
  char *v9; // rsi
  unsigned int v10; // r15d
  int v12; // eax
  int v13; // eax
  __int64 v14; // [rsp+8h] [rbp-78h] BYREF
  char *s2; // [rsp+10h] [rbp-70h]
  __int128 v16; // [rsp+18h] [rbp-68h]
  char *s1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 128);
  v19 = __readfsqword(0x28u);
  v14 = 0;
  sub_381D00(*(_QWORD *)(v2 + 112), a2, (__int64)&v14, 2);
  s2 = nullptr;
  v16 = 0;
  get_ea_name();
  calc_c_cpp_name();
  s1 = nullptr;
  v18 = 0;
  func = get_func();
  v5 = get_tinfo_property() & 0xF;
  if ( func && v5 == 12 )
  {
    v6 = (char *)::s1;
    if ( (_QWORD)v16 )
      v6 = s2;
    v7 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, char **, __int64, __int64 *, char *))callui)(
           200,
           0,
           &v14,
           &s1,
           func,
           &v14,
           v6);
  }
  else
  {
    v7 = sub_388A20(&v14, (__int64)&s1, *(_QWORD *)(a1 + 128), (__int64)s2, (__int64)&v14, v5 == 12, nullptr);
  }
  if ( v7 )
  {
    if ( (_QWORD)v16 )
    {
      v9 = s2;
      if ( !(_QWORD)v18 )
      {
        v12 = strcmp(::s1, s2);
        p_s1 = nullptr;
        if ( v12 )
          p_s1 = &s1;
        goto LABEL_9;
      }
    }
    else
    {
      p_s1 = nullptr;
      v9 = (char *)::s1;
      if ( !(_QWORD)v18 )
      {
LABEL_9:
        sub_397700(a1, (const char *)&v14, a2, 1, (__int64)p_s1, 0.0);
        v10 = 1;
        goto LABEL_10;
      }
    }
    v13 = strcmp(s1, v9);
    p_s1 = nullptr;
    if ( v13 )
      p_s1 = &s1;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_10:
  if ( s1 )
  {
    *(_QWORD *)&v18 = 0;
    qfree((__int64)s1);
  }
  if ( s2 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)s2);
  }
  clear_tinfo_t();
  return v10;
}
