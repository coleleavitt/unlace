__int64 __fastcall sub_799550(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
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
      v10 = sub_78D8E0(a1[1], v9);
      if ( *(_DWORD *)(v10 + 80) != -1 )
        break;
      v9 = *(int *)(v10 + 48);
      if ( !(_DWORD)v9 )
        goto LABEL_6;
    }
    *a4 = 0;
    return sub_7986E0(a1, a2, *(_DWORD *)(v10 + 80), a3, v5, 1);
  }
  else
  {
LABEL_6:
    ptr = nullptr;
    v14 = 0;
    sub_78D8E0(a1[1], v4);
    sub_35A790((char **)&ptr);
    v12 = haystack;
    if ( (_QWORD)v14 )
      v12 = (const char *)ptr;
    set_error_string(0, v12);
    set_qerrno(1538);
    sub_799390(a1);
    if ( ptr )
    {
      *(_QWORD *)&v14 = 0;
      qfree(ptr);
    }
    return 0;
  }
}
