__int64 __fastcall detach_custom_data_format(int a1, int a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rbx
  char *v4; // rdi
  char *v5; // rdx

  v2 = *(_QWORD **)(qword_2CCB598 + 1552);
  if ( a1 && (a1 <= 0 || (unsigned __int64)a1 >= v2[1] || !*(_QWORD *)(*v2 + 48LL * a1))
    || a2 <= 0
    || (unsigned __int64)a2 >= v2[15]
    || !*(_QWORD *)(v2[14] + 16LL * a2)
    || !a1 && !v2[1] )
  {
    return 0;
  }
  v3 = *v2 + 48LL * a1;
  v4 = *(char **)(v3 + 24);
  v5 = &v4[4 * *(_QWORD *)(v3 + 32)];
  if ( v4 == v5 )
    return 0;
  while ( *(_DWORD *)v4 != a2 )
  {
    v4 += 4;
    if ( v5 == v4 )
      return 0;
  }
  if ( v4 == v5 )
  {
    return 0;
  }
  else
  {
    memmove(v4, v4 + 4, v5 - v4 - 4);
    --*(_QWORD *)(v3 + 32);
    return 1;
  }
}
