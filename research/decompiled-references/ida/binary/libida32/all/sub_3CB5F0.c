__int64 __fastcall sub_3CB5F0(_QWORD *a1, __int64 a2, const char *a3, unsigned __int8 a4)
{
  size_t v6; // r14
  const char *v7; // rbp
  __int16 v8; // ax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v14; // [rsp+18h] [rbp-50h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !a3
    || !(unsigned __int8)sub_3EA400(a1, a2)
    && !rangeset_t_find_range(a1 + 129, (unsigned int)a2)
    && (*a3 || !(unsigned __int8)sub_3E9680(a1)) )
  {
    return 0;
  }
  ptr = nullptr;
  v14 = 0;
  v6 = strlen(a3);
  ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
  *(_QWORD *)&v14 = v6 + 1;
  memmove(ptr, a3, v6);
  *((_BYTE *)ptr + v6) = 0;
  sub_4B51C0(&ptr);
  v7 = haystack;
  if ( (_QWORD)v14 )
    v7 = (const char *)ptr;
  sub_396090(0x36u, (unsigned int)a2, a4, v7);
  v8 = sub_3B9AA0((__int64)a1, a2, 4);
  if ( *v7 )
  {
    if ( (v8 & 0x600) != 0x200 )
    {
      if ( a4 )
      {
        v12 = ea2node((unsigned int)a2);
        netnode_supset(v12, 1, v7, 0, 83);
        if ( (unsigned __int8)sub_3CA430(a1, a2, 2048) && qword_2CA1648 )
          qword_2CA1648((unsigned int)a2, 1);
        goto LABEL_8;
      }
      v10 = ea2node((unsigned int)a2);
      netnode_supset(v10, 0, v7, 0, 83);
      if ( (unsigned __int8)sub_3CA430(a1, a2, 2048) && qword_2CA1648 )
        qword_2CA1648((unsigned int)a2, 1);
      goto LABEL_16;
    }
  }
  else if ( (v8 & 0x800) != 0 )
  {
    v11 = ea2node((unsigned int)a2);
    if ( a4 )
      netnode_supdel(v11, 1, 83);
    else
      netnode_supdel(v11, 0, 83);
    if ( sub_3BE050((__int64)a1, 0, a2, a4 ^ 1u) < 0 && (unsigned __int8)sub_3CA660(a1, a2, 2048) && qword_2CA1648 )
      qword_2CA1648((unsigned int)a2, 1);
  }
  if ( !a4 )
LABEL_16:
    clr_abits((unsigned int)a2, 0x8000);
LABEL_8:
  sub_396090(0x37u, (unsigned int)a2, a4);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return 1;
}

