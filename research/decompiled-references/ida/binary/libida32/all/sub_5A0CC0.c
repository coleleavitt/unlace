__int64 __fastcall sub_5A0CC0(__int64 a1, unsigned int **a2)
{
  _DWORD *func; // rax
  unsigned int v4; // edx
  int v5; // ecx
  __int64 v6; // rdi

  func = (_DWORD *)get_func(**a2);
  *(_QWORD *)a1 = func;
  if ( !func || *func != **a2 )
  {
    if ( !under_debugger )
      interr(1919);
LABEL_11:
    BUG();
  }
  v4 = *((_DWORD *)a2 + 2);
  *(_DWORD *)(a1 + 8) = v4;
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(a1 + 12) = v5;
  *(_BYTE *)(a1 + 16) = *((_BYTE *)a2 + 16);
  if ( !(unsigned __int8)sub_59FDE0(*(_QWORD **)(qword_2CA1698 + 1480), (__int64)func, v4, v5) )
  {
    if ( !under_debugger )
      interr(1920);
    goto LABEL_11;
  }
  v6 = *(unsigned int *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 16) )
    return set_abits(v6, 2);
  else
    return clr_abits(v6, 2);
}

