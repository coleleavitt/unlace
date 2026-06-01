__int64 __fastcall sub_228EC0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  char v4; // al
  unsigned int v5; // r12d
  __int64 v6; // r13
  const char *v7; // rsi
  char *v8; // rdi
  bool v9; // cc
  char v10; // al
  const char *v11; // rbx
  char *v12; // rdi
  const char *v13; // rsi
  char *s1; // [rsp+0h] [rbp-258h] BYREF
  __int128 v16; // [rsp+8h] [rbp-250h]
  char s2[520]; // [rsp+20h] [rbp-238h] BYREF
  unsigned __int64 v18; // [rsp+228h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  v3 = getseg(*a1);
  if ( !v3 )
    return (unsigned int)-1;
  v4 = *(_BYTE *)(a2 + 73);
  v5 = 0;
  if ( v4 != *(_BYTE *)(v3 + 42) )
  {
    *(_BYTE *)(v3 + 42) = v4;
    v5 = 1;
    update_segm(v3);
  }
  if ( *(_BYTE *)(a2 + 72) != *(_BYTE *)(v3 + 43) )
  {
    if ( !(unsigned __int8)set_segm_addressing(v3) )
      return (unsigned int)-1;
    ++v5;
  }
  v6 = *(_QWORD *)(a2 + 64);
  if ( v6 == sel2para(*(_QWORD *)(v3 + 48)) )
  {
    if ( !*(_QWORD *)(a2 + 24) )
      goto LABEL_24;
  }
  else
  {
    ++v5;
    set_segm_base(v3, *(_QWORD *)(a2 + 64));
    if ( !*(_QWORD *)(a2 + 24) )
      goto LABEL_24;
  }
  if ( **(_BYTE **)(a2 + 16) )
  {
    v7 = (const char *)&dword_200;
    s1 = nullptr;
    v16 = 0;
    if ( sub_226FF0((__int64)s2, 512, a2) )
    {
      v7 = (const char *)v3;
      if ( get_segm_name(&s1, v3, 0) >= 0 )
      {
        v8 = (char *)&::s1;
        if ( (_QWORD)v16 )
          v8 = s1;
        if ( strcmp(v8, s2) )
          v5 -= ((unsigned int)set_segm_name(v3, s2, 0) == 0) - 1;
        if ( s1 )
        {
          *(_QWORD *)&v16 = 0;
          qfree(s1, s2);
        }
        v9 = *(_QWORD *)(a2 + 48) <= 1u;
        s1 = nullptr;
        v16 = 0;
        if ( v9 )
          goto LABEL_20;
        goto LABEL_25;
      }
    }
    if ( s1 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(s1, v7);
    }
    return (unsigned int)-1;
  }
LABEL_24:
  s1 = nullptr;
  v16 = 0;
  if ( *(_QWORD *)(a2 + 48) <= 1u )
  {
LABEL_20:
    v10 = *(_BYTE *)(a2 + 73);
    v11 = "CODE";
    if ( (v10 & 1) == 0 )
    {
      v11 = "CONST";
      if ( (v10 & 6) != 4 )
        v11 = "DATA";
    }
    goto LABEL_26;
  }
LABEL_25:
  v11 = *(const char **)(a2 + 40);
LABEL_26:
  get_segm_class(&s1, v3);
  v12 = (char *)&::s1;
  if ( (_QWORD)v16 )
    v12 = s1;
  v13 = v11;
  if ( strcmp(v12, v11) )
  {
    v13 = v11;
    ++v5;
    if ( !(unsigned int)set_segm_class(v3, v11, 0) )
      v5 = -1;
  }
  if ( s1 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(s1, v13);
  }
  return v5;
}
