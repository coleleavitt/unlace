__int64 __fastcall sub_46AB00(_QWORD **a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r13
  unsigned int i; // ebp
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edx

  v3 = (unsigned int *)(*a1[5] + 8 * a3);
  for ( i = *v3; ; i = v7 )
  {
    v5 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[21])(a1, i);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, i);
    if ( v6 | v5
      && (!v5
       || !v6
       || *(_DWORD *)v5 != *(_DWORD *)v6
       || *(_DWORD *)(v5 + 4) != *(_DWORD *)(v6 + 4)
       || !((unsigned __int8 (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[23])(a1, v5, a2)) )
    {
      return 1;
    }
    v7 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[22])(a1, i);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, i);
    v9 = v8;
    if ( v7 <= v8 )
      v9 = v7;
    if ( v9 >= v3[1] )
      break;
    if ( v7 != v8 )
      return 1;
  }
  return 0;
}

