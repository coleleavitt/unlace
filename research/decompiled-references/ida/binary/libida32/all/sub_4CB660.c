__int64 __fastcall sub_4CB660(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned int segm_base; // eax
  unsigned int v14; // eax

  if ( !a3 )
    return (unsigned int)-1;
  v6 = sub_500AC0(a1, a2, *(unsigned int *)(*(_QWORD *)a1 + 844LL), 0);
  v7 = sub_40EC70(a1, v6);
  if ( v7 == -1
    || (v8 = sub_4F8AE0(a1, v7), (v9 = v8) == 0)
    || (v3 = get_segm_base(v8), v10 = sub_4F8EC0(a1, v9, a3 + v3), !sub_3B8910(a1, v10)) )
  {
    v11 = sub_4EE820(a1 + 1552, (unsigned int)a2);
    v12 = v11;
    if ( !v11 )
      return (unsigned int)-1;
    segm_base = get_segm_base(v11);
    v3 = segm_base;
    if ( segm_base == -1 )
      return (unsigned int)-1;
    v14 = sub_4F8EC0(a1, v12, a3 + segm_base);
    if ( !sub_3B8910(a1, v14) )
      return (unsigned int)-1;
  }
  return v3;
}

