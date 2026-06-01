__int64 __fastcall sub_779110(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v4; // ebp
  __int64 v5; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  const char *v12; // rsi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v4 = *(_DWORD *)(a2 + 52);
  v5 = *a4;
  v15 = __readfsqword(0x28u);
  if ( v4 )
  {
    v9 = v4;
    while ( 1 )
    {
      v10 = sub_76D4A0(a1[1], v9);
      if ( *(_DWORD *)(v10 + 80) != -1 )
        break;
      v9 = *(int *)(v10 + 48);
      if ( !(_DWORD)v9 )
        goto LABEL_6;
    }
    *a4 = 0;
    return sub_7782A0(a1, a2, *(_DWORD *)(v10 + 80), a3, v5, 1);
  }
  else
  {
LABEL_6:
    ptr = nullptr;
    v14 = 0;
    sub_76D4A0(a1[1], v4);
    sub_3573A0((char **)&ptr);
    v12 = haystack;
    if ( (_QWORD)v14 )
      v12 = (const char *)ptr;
    set_error_string();
    set_qerrno(1538, v12);
    sub_778F50(a1);
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
    return 0;
  }
}

