__int64 __fastcall sub_2A9FD0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 i; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  bool (__fastcall *v7)(__int64); // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int8 (*v11)(void); // rax
  __int64 v12; // rdi
  unsigned __int8 (*v13)(void); // rax

  i = a2;
  if ( a3 == 1 )
  {
LABEL_5:
    if ( a2 != -1 )
    {
LABEL_6:
      v5 = *(_QWORD *)(a1 + 48);
      goto LABEL_7;
    }
    return -1;
  }
  if ( a3 == 2 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( a2 <= v9 )
      v9 = a2;
    for ( i = v9 - 1; i != -1; --i )
    {
      v10 = *(_QWORD *)(a1 + 40) + 192 * i;
      v11 = **(unsigned __int8 (***)(void))v10;
      if ( (char *)v11 == (char *)sub_2A8840 )
      {
        if ( *(_DWORD *)(v10 + 40) == 1 )
          return i;
      }
      else if ( v11() )
      {
        return i;
      }
    }
  }
  else
  {
    if ( a3 )
      return i;
    v5 = *(_QWORD *)(a1 + 48);
    if ( a2 >= v5 )
      goto LABEL_5;
    v12 = *(_QWORD *)(a1 + 40) + 192 * a2;
    v13 = **(unsigned __int8 (***)(void))v12;
    if ( (char *)v13 != (char *)sub_2A8840 )
    {
      if ( !v13() )
        goto LABEL_6;
      return i;
    }
    if ( *(_DWORD *)(v12 + 40) == 1 )
      return i;
LABEL_7:
    while ( ++i < v5 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 40) + 192 * i;
        v7 = **(bool (__fastcall ***)(__int64))v6;
        if ( v7 == sub_2A8840 )
          break;
        if ( ((unsigned __int8 (*)(void))v7)() )
          return i;
        v5 = *(_QWORD *)(a1 + 48);
        if ( ++i >= v5 )
          return -1;
      }
      if ( *(_DWORD *)(v6 + 40) == 1 )
        return i;
    }
  }
  return -1;
}
