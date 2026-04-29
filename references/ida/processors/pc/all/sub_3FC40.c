__int64 __fastcall sub_3FC40(__int64 a1, unsigned __int64 a2, int a3, _QWORD *a4, __int64 a5)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a3 )
    return 1;
  if ( a3 != 1 )
    return 0;
  if ( a2 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = a1 + 24 * v6;
      if ( *(_DWORD *)(v7 + 20) )
        break;
      v6 = ++v5;
      if ( v5 >= a2 )
        goto LABEL_11;
    }
    v8 = *(int *)(v7 + 16);
    if ( (_DWORD)v8 != -1 )
    {
      *(_QWORD *)(*a4 + 32 * v8 + 8) = a5;
      return 1;
    }
  }
LABEL_11:
  if ( under_debugger )
    BUG();
  interr();
  return sub_3FCC0(10123);
}
