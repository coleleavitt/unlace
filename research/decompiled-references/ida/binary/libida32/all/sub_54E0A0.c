__int64 __fastcall sub_54E0A0(_QWORD *a1, __int64 a2, char **a3)
{
  unsigned int v3; // r13d
  _BYTE *v5; // rdx
  char v6; // al
  char v8; // al
  char *v9; // r12
  __int64 v10; // r15
  char v11; // al
  const char *v12; // r13
  bool v13; // zf
  const char *numbered_type_name; // r15
  unsigned int v15; // eax
  unsigned int v16; // r8d
  char *s2; // [rsp+0h] [rbp-98h]
  unsigned int v18; // [rsp+Ch] [rbp-8Ch]
  char *v19; // [rsp+10h] [rbp-88h] BYREF
  char *v20; // [rsp+18h] [rbp-80h] BYREF
  char *s1; // [rsp+20h] [rbp-78h] BYREF
  __int128 v22; // [rsp+28h] [rbp-70h]
  char *v23; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v3 = 1;
  v26 = __readfsqword(0x28u);
  v5 = *(_BYTE **)a2;
  v19 = (char *)(*(_QWORD *)a2 + 1LL);
  v6 = **a3;
  v20 = *a3 + 1;
  if ( *v5 == v6 )
  {
    v25 = 0;
    v22 = 0;
    s1 = nullptr;
    v8 = sub_54DE00((__int64)&s1, &v19);
    v9 = s1;
    v3 = -1;
    if ( !v8 )
      goto LABEL_4;
    v23 = nullptr;
    v10 = v22;
    v24 = 0;
    v11 = sub_54DE00((__int64)&v23, &v20);
    s2 = v23;
    if ( !v11 )
    {
      v3 = -1;
LABEL_20:
      if ( s2 )
      {
        qfree(s2);
        if ( !v9 )
          return v3;
        goto LABEL_5;
      }
LABEL_4:
      if ( !v9 )
        return v3;
LABEL_5:
      qfree(v9);
      return v3;
    }
    v12 = haystack;
    v13 = v10 == 0;
    numbered_type_name = haystack;
    if ( !v13 )
      numbered_type_name = v9;
    if ( v24 )
      v12 = v23;
    v18 = sub_693310(*(_QWORD *)(qword_2CA1698 + 1480), *a1, numbered_type_name);
    v15 = sub_693310(*(_QWORD *)(qword_2CA1698 + 1480), *a1, v12);
    v16 = v18;
    if ( v18 )
    {
      if ( v15 )
      {
        if ( v18 == v15 )
        {
LABEL_14:
          v3 = 0;
          *(_QWORD *)a2 = v19;
          *a3 = v20;
          goto LABEL_20;
        }
        goto LABEL_19;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_18;
      v16 = v15;
      v12 = numbered_type_name;
    }
    numbered_type_name = (const char *)get_numbered_type_name(*a1, v16);
    if ( !numbered_type_name )
    {
LABEL_19:
      v3 = 1;
      goto LABEL_20;
    }
LABEL_18:
    if ( !strcmp(numbered_type_name, v12) )
      goto LABEL_14;
    goto LABEL_19;
  }
  return v3;
}

