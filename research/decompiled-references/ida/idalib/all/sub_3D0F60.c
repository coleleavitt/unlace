__int64 __fastcall sub_3D0F60(_QWORD *a1, void *a2, const char *a3, unsigned __int8 a4)
{
  size_t v6; // r14
  const char *v7; // rbp
  __int16 v8; // ax
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a3
    || !(unsigned __int8)sub_3FD360(a1, a2)
    && !rangeset_t_find_range(a1 + 130, a2)
    && (*a3 || !(unsigned __int8)sub_3FC5C0(a1)) )
  {
    return 0;
  }
  ptr = nullptr;
  v16 = 0;
  v6 = strlen(a3);
  ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
  *(_QWORD *)&v16 = v6 + 1;
  memmove(ptr, a3, v6);
  *((_BYTE *)ptr + v6) = 0;
  sub_4CBEF0(&ptr);
  v7 = haystack;
  if ( (_QWORD)v16 )
    v7 = (const char *)ptr;
  sub_39ADA0(0x36u, a2, a4, v7);
  v8 = sub_3BE900(a1, (unsigned __int64)a2, 4);
  if ( *v7 )
  {
    if ( (v8 & 0x600) != 0x200 )
    {
      if ( a4 )
      {
        v13 = ea2node(a2);
        netnode_supset(v13, 1, v7, 0, 83, v14);
        if ( (unsigned __int8)sub_3CFD10(a1, a2, 2048) && qword_2CCB548 )
          qword_2CCB548(a2, 1);
        goto LABEL_8;
      }
      v10 = ea2node(a2);
      netnode_supset(v10, 0, v7, 0, 83, v11);
      if ( (unsigned __int8)sub_3CFD10(a1, a2, 2048) && qword_2CCB548 )
        qword_2CCB548(a2, 1);
      goto LABEL_16;
    }
  }
  else if ( (v8 & 0x800) != 0 )
  {
    v12 = ea2node(a2);
    if ( a4 )
      netnode_supdel(v12, 1, 83);
    else
      netnode_supdel(v12, 0, 83);
    if ( sub_3C3140(a1, 0, (unsigned __int64)a2, a4 ^ 1u) < 0
      && (unsigned __int8)sub_3CFF40(a1, a2, 2048)
      && qword_2CCB548 )
    {
      qword_2CCB548(a2, 1);
    }
  }
  if ( !a4 )
LABEL_16:
    clr_abits(a2, 0x8000);
LABEL_8:
  sub_39ADA0(0x37u, a2, a4);
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return 1;
}
