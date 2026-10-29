__int64 __fastcall sub_61A210(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 idati; // r13
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 i; // rbp
  const char *v13; // rdi

  v3 = *(int *)(a1 + 8);
  switch_dbctx(v3);
  idati = get_idati(v3, a2);
  v5 = *(_DWORD *)(idati + 16);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 >= 0 )
    {
      v7 = 8LL * v6;
      v8 = 8 * (v6 - (unsigned __int64)(unsigned int)v6);
      do
      {
        del_til(**(const char ***)(*(_QWORD *)(idati + 24) + v7));
        v9 = v7;
        v7 -= 8;
      }
      while ( v9 != v8 );
    }
  }
  result = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 40);
  for ( i = v11 + 48 * result; i != v11; result = add_til(v13, 3) )
  {
    v13 = haystack;
    if ( *(_QWORD *)(v11 + 8) )
      v13 = *(const char **)v11;
    v11 += 48;
  }
  return result;
}
