_DWORD *__fastcall sub_518080(_QWORD *a1, __int64 *a2, void *a3)
{
  __int64 v4; // rax
  _QWORD *v6; // r14
  const char *v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  int v13; // [rsp+4h] [rbp-5Ch] BYREF
  void *ptr; // [rsp+8h] [rbp-58h]
  __int128 v15; // [rsp+10h] [rbp-50h]
  unsigned __int64 v16; // [rsp+20h] [rbp-40h]

  v4 = *a1;
  v16 = __readfsqword(0x28u);
  v15 = 0;
  ptr = nullptr;
  v6 = *(_QWORD **)(v4 + 1616);
  if ( !sub_69C980(a3) )
    goto LABEL_18;
  v7 = haystack;
  if ( (_QWORD)v15 )
    v7 = (const char *)ptr;
  v8 = sub_517FB0(v6, (__int64)v7);
  if ( !v8 )
    goto LABEL_18;
  netnode_check(&v13, a3, 0, 0);
  if ( (unsigned __int8)sub_79B370(*a1, &v13) )
    v9 = sub_3B9110(*(_QWORD **)(*a1 + 1480LL), v13);
  else
    v9 = sub_698F20(*(_QWORD *)(*v6 + 1480LL), a3, 0, 0);
  v10 = nullptr;
  if ( v9 == -1 )
    goto LABEL_14;
  v11 = *(unsigned int *)(v8 + 4);
  v10 = *(_DWORD **)(v8 + 8);
  if ( *(_DWORD *)(v8 + 4) )
  {
    while ( *v10 != v9 )
    {
      v10 += 5;
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

