__int64 __fastcall sub_FBD870(__int64 *a1, unsigned int a2, _DWORD *a3, bool *a4)
{
  int v6; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 i; // rdi
  char *v11; // rdi
  __int64 result; // rax

  v6 = *((_DWORD *)a1 + 42);
  if ( a2 < v6 + 1499 )
  {
    v7 = *a1;
    if ( a2 > 0x5DA )
    {
      v7 = a1[7];
      a2 -= 1499;
    }
  }
  else
  {
    v7 = a1[14];
    a2 = a2 - 1499 - v6;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = a2;
  for ( i = v7 + 40; a2 >= v8; v9 = a2 )
  {
    v7 = i;
    i += 40;
    a2 -= v8;
    v8 = *(_QWORD *)(i - 24);
  }
  v11 = strpbrk((const char *)(**(_QWORD **)v7 + *(unsigned int *)(*(_QWORD *)(v7 + 8) + 20 * v9 + 8)), "sS");
  result = 0;
  if ( v11 )
  {
    *a4 = *v11 == 83;
    *a3 = strtol(v11 + 2, nullptr, 10);
    return 1;
  }
  return result;
}
