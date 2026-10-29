__int64 __fastcall sub_BABF00(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rdx
  __int64 (*v5)(); // rdx
  unsigned int v6; // r13d
  __int64 v7; // rbx
  __int64 v8; // r12

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6672);
  if ( v4 != sub_BA3480 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v5 = *(__int64 (**)())(v2 + 6680);
  if ( v5 != sub_BA3490 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    v2 = *a1;
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v2 + 128))(a1, *(_QWORD *)(a2 + 24));
  if ( !(_BYTE)v6 )
    return 0;
  if ( *(_QWORD *)(a2 + 32) )
  {
    v7 = a2 + 48;
    v8 = a2 + 48 + 24LL * *(unsigned int *)(a2 + 20);
    if ( a2 + 48 != v8 )
    {
      while ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 104))(a1, v7) )
      {
        v7 += 24;
        if ( v8 == v7 )
          return v6;
      }
      return 0;
    }
  }
  return v6;
}

