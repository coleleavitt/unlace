__int64 __fastcall sub_15F00B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 *j; // rax
  __int64 v11; // rdx

  sub_A842A0(*(_QWORD *)(a1 + 248), a2);
  result = 1;
  if ( !v3 )
  {
    v4 = *(_QWORD **)(a2 + 1032);
    v5 = &v4[*(unsigned int *)(a2 + 1040)];
    if ( v4 != v5 )
    {
      if ( *(char *)((*v4 & 0xFFFFFFFFFFFFFFF8LL) + 905) < 0 )
        return result;
      for ( i = v4 + 1; ; ++i )
      {
        v7 = i;
        if ( v5 == i )
          break;
        if ( *(char *)((*v7 & 0xFFFFFFFFFFFFFFF8LL) + 905) < 0 )
          return 1;
      }
    }
    v8 = *(__int64 **)(a2 + 944);
    v9 = &v8[*(unsigned int *)(a2 + 952)];
    if ( v8 != v9 )
    {
      if ( *(char *)(*v8 + 905) < 0 )
        return 1;
      for ( j = v8 + 1; v9 != j; ++j )
      {
        v11 = *j;
        if ( *(char *)(v11 + 905) < 0 )
          return 1;
      }
    }
    return 0;
  }
  return result;
}
