__int64 *__fastcall sub_492530(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 v6; // rdi
  _QWORD *v8; // r14
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rdx
  __int128 v13; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v14[88]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v6 = *(int *)(a1 + 4LL * a4 + 16);
  v15 = __readfsqword(0x28u);
  v8 = *(_QWORD **)(switch_dbctx(v6) + 1672);
  v13 = 0;
  sub_630CA0(*v8, 26, &v13, 16);
  if ( a3 < (unsigned __int64)v13 || a3 >= *((_QWORD *)&v13 + 1) )
    goto LABEL_3;
  if ( (unsigned __int8)sub_6B9E00(v8, a2, a3) )
    return (__int64 *)(v15 - __readfsqword(0x28u));
  *(_QWORD *)&v13 = sub_3BDD60(v8, a3);
  if ( sub_7BF130(&v13, *v8, a2) > 0 )
    return (__int64 *)(v15 - __readfsqword(0x28u));
  v12 = sub_492440(a1, a3, a4);
  if ( v12 == -1 || !(unsigned __int8)sub_6B9E00(v8, a2, v12) )
  {
LABEL_3:
    sub_42D210((__int64)v14, v8);
    sub_42D250((__int64)v14, a3, nullptr, 0, v9, v10);
    sub_35A910(a2);
    return (__int64 *)(v15 - __readfsqword(0x28u));
  }
  return sub_35A910(a2);
}
