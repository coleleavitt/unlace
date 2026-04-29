char __fastcall sub_213140(__int64 a1, const char *a2, char a3)
{
  __int64 name_ea; // r12
  int v5; // eax
  _QWORD *v6; // r14
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // rbp
  char *v10; // rax
  _QWORD *v11; // r15
  char *v12; // rcx
  unsigned __int64 v13; // rbp
  const char *v14; // r8
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  __int16 flags; // ax
  __int64 v20; // [rsp+8h] [rbp-70h]
  char *s2; // [rsp+10h] [rbp-68h]
  char *v22; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (a3 & 1) != 0 && (unsigned __int8)is_c_keyword() )
      goto LABEL_22;
    if ( (a3 & 2) != 0 )
    {
      if ( *(_QWORD *)(a1 + 416) )
      {
        if ( !strcmp(*(const char **)(a1 + 408), a2) )
          goto LABEL_22;
      }
      else if ( !strcmp(::s1, a2) )
      {
        goto LABEL_22;
      }
    }
    if ( (a3 & 4) == 0 )
    {
LABEL_7:
      if ( (a3 & 0x18) == 0 )
        goto LABEL_9;
      name_ea = get_name_ea();
      if ( name_ea == -1 )
        goto LABEL_9;
      v15 = sub_330F80(a1);
      if ( (unsigned __int8)sub_332920(a1 + 8, v15) )
        return ((unsigned __int8)(a3 & 0x10) >> 4) & 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_9;
      flags = get_flags_ex();
      if ( (~flags & 0x600) != 0 )
      {
        if ( (flags & 0x1000) != 0 )
        {
          LOBYTE(v5) = (unsigned int)sub_343460(*(_QWORD *)(a1 + 1496), name_ea) == 0;
          return v5;
        }
        goto LABEL_9;
      }
LABEL_22:
      LOBYTE(v5) = 1;
      return v5;
    }
    s1 = nullptr;
    v6 = *(_QWORD **)(a1 + 872);
    v24 = 0;
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = v7;
    v10 = (char *)qvector_reserve((__int64)&s1, 0, v7 + 1, 1);
    *(_QWORD *)&v24 = v8;
    s1 = v10;
    memmove(v10, a2, v9);
    s1[v9] = 0;
    v11 = *(_QWORD **)(a1 + 872);
    v12 = s1;
    if ( !v11 )
      goto LABEL_19;
    v13 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v13 )
    {
      v11 = nullptr;
LABEL_19:
      if ( v12 )
      {
        *(_QWORD *)&v24 = 0;
        qfree((__int64)v12);
      }
      if ( v6 != v11 )
        goto LABEL_22;
      goto LABEL_7;
    }
    if ( (*(_BYTE *)v13 & 2) != 0 )
      goto LABEL_19;
    v20 = v24;
    while ( 1 )
    {
      if ( *(_QWORD *)(v13 + 32) )
      {
        v14 = *(const char **)(v13 + 24);
        if ( !v20 )
        {
          if ( !*v14 )
            goto LABEL_38;
LABEL_17:
          v13 = *(_QWORD *)(v13 + 8);
          goto LABEL_18;
        }
      }
      else
      {
        if ( !v20 )
          goto LABEL_38;
        v14 = ::s1;
      }
      s2 = v12;
      v22 = (char *)v14;
      v16 = strcmp(v12, v14);
      v12 = s2;
      if ( v16 < 0 )
        goto LABEL_17;
      v17 = strcmp(v22, s2);
      v12 = s2;
      if ( v17 >= 0 )
      {
LABEL_38:
        v11 = (_QWORD *)v13;
        goto LABEL_19;
      }
      v13 = *(_QWORD *)(v13 + 16);
LABEL_18:
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_19;
    }
  }
LABEL_9:
  LOBYTE(v5) = 0;
  return v5;
}
