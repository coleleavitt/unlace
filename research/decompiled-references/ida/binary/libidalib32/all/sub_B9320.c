__int64 __fastcall sub_B9320(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // al
  unsigned int v4; // r12d
  int v5; // r13d
  char v6; // al
  const char *v7; // rbx
  char s2[520]; // [rsp+20h] [rbp-238h] BYREF
  unsigned __int64 v10; // [rsp+228h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  v2 = getseg();
  if ( !v2 )
    return (unsigned int)-1;
  v3 = *(_BYTE *)(a2 + 61);
  v4 = 0;
  if ( v3 != *(_BYTE *)(v2 + 22) )
  {
    *(_BYTE *)(v2 + 22) = v3;
    v4 = 1;
    update_segm();
  }
  if ( *(_BYTE *)(a2 + 60) != *(_BYTE *)(v2 + 23) )
  {
    if ( !(unsigned __int8)set_segm_addressing() )
      return (unsigned int)-1;
    ++v4;
  }
  v5 = *(_DWORD *)(a2 + 56);
  if ( v5 == (unsigned int)sel2para() )
  {
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_20;
  }
  else
  {
    ++v4;
    set_segm_base();
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_20;
  }
  if ( **(_BYTE **)(a2 + 8) )
  {
    if ( sub_B74F0((__int64)s2, 512, a2) && get_segm_name() >= 0 )
    {
      if ( strcmp(s1, s2) )
        v4 -= ((unsigned int)set_segm_name() == 0) - 1;
      if ( *(_QWORD *)(a2 + 40) <= 1u )
        goto LABEL_16;
      goto LABEL_21;
    }
    return (unsigned int)-1;
  }
LABEL_20:
  if ( *(_QWORD *)(a2 + 40) <= 1u )
  {
LABEL_16:
    v6 = *(_BYTE *)(a2 + 61);
    v7 = "CODE";
    if ( (v6 & 1) == 0 )
    {
      v7 = "CONST";
      if ( (v6 & 6) != 4 )
        v7 = "DATA";
    }
    goto LABEL_22;
  }
LABEL_21:
  v7 = *(const char **)(a2 + 32);
LABEL_22:
  get_segm_class();
  if ( strcmp(s1, v7) )
  {
    ++v4;
    if ( !(unsigned int)set_segm_class() )
      return (unsigned int)-1;
  }
  return v4;
}

