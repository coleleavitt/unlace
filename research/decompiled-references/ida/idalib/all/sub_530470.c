_QWORD *__fastcall sub_530470(_QWORD *a1, __int64 *a2, void *a3)
{
  __int64 v4; // rax
  _QWORD *v6; // r14
  const char *v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h]
  __int128 v15; // [rsp+10h] [rbp-50h]
  unsigned __int64 v16; // [rsp+20h] [rbp-40h]

  v4 = *a1;
  v16 = __readfsqword(0x28u);
  v15 = 0;
  ptr = nullptr;
  v6 = *(_QWORD **)(v4 + 1808);
  if ( !sub_6BD400(a3) )
    goto LABEL_18;
  v7 = haystack;
  if ( (_QWORD)v15 )
    v7 = (const char *)ptr;
  v8 = sub_5303A0(v6, (__int64)v7);
  if ( !v8 )
    goto LABEL_18;
  netnode_check(&v13, a3, 0, 0);
  if ( (unsigned __int8)sub_7BE6E0(*a1, &v13) )
    v9 = sub_3BDE50(*(_QWORD **)(*a1 + 1672LL), v13);
  else
    v9 = sub_6B9860(*(_QWORD *)(*v6 + 1672LL), a3, 0, 0);
  v10 = nullptr;
  if ( v9 == -1 )
    goto LABEL_14;
  v11 = *(unsigned int *)(v8 + 8);
  v10 = *(_QWORD **)(v8 + 16);
  if ( *(_DWORD *)(v8 + 8) )
  {
    while ( *v10 != v9 )
    {
      v10 += 4;
      if ( !--v11 )
        goto LABEL_18;
    }
    if ( a2 )
      *a2 = v8;
  }
  else
  {
LABEL_18:
    v10 = nullptr;
  }
LABEL_14:
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return v10;
}
