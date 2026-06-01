__int64 __fastcall sub_454640(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14
  int v5; // r13d
  unsigned __int64 v7; // rbx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  void *v15; // rsi
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // [rsp+0h] [rbp-78h]
  void *v22; // [rsp+8h] [rbp-70h] BYREF
  __int64 v23[2]; // [rsp+10h] [rbp-68h] BYREF
  int v24[2]; // [rsp+20h] [rbp-58h] BYREF
  int v25[2]; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v4 = a4 + a3;
  v5 = a2;
  v7 = a3;
  v27 = __readfsqword(0x28u);
  *(_QWORD *)v24 = a3;
  *(_QWORD *)v25 = a4 + a3;
  if ( (unsigned __int8)rangeset_t_has_common(a2, v24, 0) || __CFADD__(v7, a4) )
    return 0;
  v9 = *(_QWORD **)(a1 + 1672);
  *(_OWORD *)v23 = 0;
  sub_630CA0(*v9, 26, v23, 16);
  v10 = v4 - 1;
  if ( v7 < v23[0] )
  {
    if ( v10 >= v23[0] && v10 < v23[1] )
    {
      v4 = v23[0];
      goto LABEL_10;
    }
  }
  else
  {
    if ( v7 < v23[1] )
      v7 = v23[1];
    if ( v10 >= v23[0] && v10 < v23[1] )
      v4 = v23[0];
  }
  if ( v7 >= v4 )
    return 1;
LABEL_10:
  v11 = *(_QWORD **)(a1 + 1672);
  if ( *(_QWORD *)(v11[3] + 16LL) < v7 )
    return 1;
  v12 = sub_3BDD60(v11, v7);
  v13 = sub_3BDD60(*(_QWORD **)(a1 + 1672), v4);
  v22 = (void *)-1LL;
  if ( (unsigned int)sub_7B0B60(a1, v12, sub_454250, &v22) )
  {
    v15 = v22;
    if ( v22 != (void *)-1LL && (unsigned __int64)v22 >= v12 )
      goto LABEL_16;
    goto LABEL_25;
  }
  if ( v12 < v13 )
    return 1;
  if ( !(unsigned int)sub_7B0B60(a1, 0, sub_454250, &v22) )
  {
    if ( !under_debugger )
      interr(2145);
LABEL_29:
    BUG();
  }
  v15 = v22;
  if ( v22 == (void *)-1LL )
  {
LABEL_25:
    if ( !under_debugger )
      interr(2146);
    goto LABEL_29;
  }
  v13 = v12;
LABEL_16:
  if ( (unsigned __int64)v15 >= v13 )
    return 1;
  v16 = sub_3BDE50(*(_QWORD **)(a1 + 1672), (__int64)v15);
  rangeset_t_add(v5, (int)v24, v17, v18, v19, v20, v21, v22, v23[0], v23[1], v16, v16 + 1, v26);
  return 0;
}
