__int64 __fastcall sub_5CD940(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rdx
  const char *v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // r12
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( *(_DWORD *)(a1 + 212) == 2 )
  {
    if ( (unsigned int)set_qerrno(63, a2) )
      return 0xFFFFFFFFLL;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 1;
  }
  v3 = *(_QWORD *)(a1 + 104);
  if ( !*(_BYTE *)(v3 + 186) && (*(_QWORD *)(v3 + 40) & 0x180000000LL) == 0 )
    return set_qerrno(47, a2);
  v4 = sub_5C5F70(*(_QWORD *)(a1 + 240), a2, 1);
  v5 = sub_5CC700((_QWORD *)a1, v4);
  v6 = *(_QWORD **)(a1 + 104);
  v7 = v5;
  *v6 = qstrdup(v4);
  v8 = *(char **)(a1 + 600);
  v9 = *(_QWORD *)(a1 + 600);
  if ( v7 )
  {
    v11 = *(_QWORD *)(a1 + 608);
    v12 = v7 + 1;
    if ( v11 < v7 + 1 )
    {
      if ( *(_QWORD *)(a1 + 616) < v12 )
      {
        v14 = qvector_reserve(a1 + 600, *(_QWORD *)(a1 + 600), v7 + 1, 1);
        *(_QWORD *)(a1 + 600) = v14;
        v8 = (char *)v14;
        v11 = *(_QWORD *)(a1 + 608);
      }
      memset(&v8[v11], 0, v12 - v11);
      v13 = *(_QWORD *)(a1 + 600);
      *(_QWORD *)(a1 + 608) = v12;
      *(_BYTE *)(v13 + v7) = 0;
    }
    else
    {
      if ( v12 != v11 )
        *(_QWORD *)(a1 + 608) = v12;
      *(_BYTE *)(v9 + v7) = 0;
    }
  }
  else if ( v8 )
  {
    *(_QWORD *)(a1 + 608) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 600) = 0;
    *(_QWORD *)(a1 + 616) = 0;
  }
  return 0;
}

