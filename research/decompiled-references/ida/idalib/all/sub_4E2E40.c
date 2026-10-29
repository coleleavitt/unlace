__int64 __fastcall sub_4E2E40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 segm_base; // rax
  __int64 v14; // rax

  if ( !a3 )
    return -1;
  v6 = sub_518710(a1, a2, *(unsigned int *)(*(_QWORD *)a1 + 1012LL), 0);
  v7 = sub_422460(a1, v6);
  if ( v7 == -1
    || (v8 = sub_510420(a1, v7), (v9 = v8) == 0)
    || (v3 = get_segm_base(v8), v10 = sub_510880(a1, v9, a3 + v3), !sub_3BD540(a1, v10)) )
  {
    v11 = sub_505D70(a1 + 1624, a2);
    v12 = v11;
    if ( !v11 )
      return -1;
    segm_base = get_segm_base(v11);
    v3 = segm_base;
    if ( segm_base == -1 )
      return -1;
    v14 = sub_510880(a1, v12, a3 + segm_base);
    if ( !sub_3BD540(a1, v14) )
      return -1;
  }
  return v3;
}
