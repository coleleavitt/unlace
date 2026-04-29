char __fastcall sub_20E8C0(__int64 a1, const char *a2, char a3)
{
  __int64 v5; // rdi
  __int64 name_ea; // rax
  __int64 v7; // r12
  int v8; // eax
  _QWORD *v9; // r14
  size_t v10; // rax
  size_t v11; // r15
  size_t v12; // rbp
  char *v13; // rax
  _QWORD *v14; // r15
  char *v15; // rcx
  unsigned __int64 v16; // rbp
  const char *v17; // r8
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int16 flags; // ax
  __int64 v23; // [rsp+8h] [rbp-70h]
  char *s2; // [rsp+10h] [rbp-68h]
  char *v25; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (a3 & 1) != 0 && (unsigned __int8)is_c_keyword(a2) )
      goto LABEL_24;
    if ( (a3 & 2) != 0 )
    {
      if ( *(_QWORD *)(a1 + 416) )
      {
        if ( !strcmp(*(const char **)(a1 + 408), a2) )
          goto LABEL_24;
      }
      else if ( !strcmp(::s1, a2) )
      {
        goto LABEL_24;
      }
    }
    if ( (a3 & 4) == 0 )
    {
LABEL_7:
      if ( (a3 & 0x18) == 0 )
        goto LABEL_11;
      v5 = -1;
      if ( (a3 & 0x10) != 0 )
        v5 = *(_QWORD *)(a1 + 40);
      name_ea = get_name_ea(v5, a2);
      v7 = name_ea;
      if ( name_ea == -1 )
        goto LABEL_11;
      v18 = sub_32BF20(a1, name_ea);
      if ( (unsigned __int8)sub_32D8E0(a1 + 8, v18) )
        return ((unsigned __int8)(a3 & 0x10) >> 4) & 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_11;
      flags = get_flags_ex(v7, 4);
      if ( (~flags & 0x600) != 0 )
      {
        if ( (flags & 0x1000) != 0 )
        {
          LOBYTE(v8) = (unsigned int)sub_33E560(*(_QWORD *)(a1 + 1496), v7) == 0;
          return v8;
        }
        goto LABEL_11;
      }
LABEL_24:
      LOBYTE(v8) = 1;
      return v8;
    }
    s1 = nullptr;
    v9 = *(_QWORD **)(a1 + 872);
    v27 = 0;
    v10 = strlen(a2);
    v11 = v10 + 1;
    v12 = v10;
    v13 = (char *)qvector_reserve(&s1, 0, v10 + 1, 1);
    *(_QWORD *)&v27 = v11;
    s1 = v13;
    memmove(v13, a2, v12);
    s1[v12] = 0;
    v14 = *(_QWORD **)(a1 + 872);
    v15 = s1;
    if ( !v14 )
      goto LABEL_21;
    v16 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v16 )
    {
      v14 = nullptr;
LABEL_21:
      if ( v15 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v15);
      }
      if ( v9 != v14 )
        goto LABEL_24;
      goto LABEL_7;
    }
    if ( (*(_BYTE *)v16 & 2) != 0 )
      goto LABEL_21;
    v23 = v27;
    while ( 1 )
    {
      if ( *(_QWORD *)(v16 + 32) )
      {
        v17 = *(const char **)(v16 + 24);
        if ( !v23 )
        {
          if ( !*v17 )
            goto LABEL_40;
LABEL_19:
          v16 = *(_QWORD *)(v16 + 8);
          goto LABEL_20;
        }
      }
      else
      {
        if ( !v23 )
          goto LABEL_40;
        v17 = ::s1;
      }
      s2 = v15;
      v25 = (char *)v17;
      v19 = strcmp(v15, v17);
      v15 = s2;
      if ( v19 < 0 )
        goto LABEL_19;
      v20 = strcmp(v25, s2);
      v15 = s2;
      if ( v20 >= 0 )
      {
LABEL_40:
        v14 = (_QWORD *)v16;
        goto LABEL_21;
      }
      v16 = *(_QWORD *)(v16 + 16);
LABEL_20:
      if ( (*(_BYTE *)v16 & 2) != 0 )
        goto LABEL_21;
    }
  }
LABEL_11:
  LOBYTE(v8) = 0;
  return v8;
}
