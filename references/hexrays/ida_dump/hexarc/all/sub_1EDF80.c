void __fastcall sub_1EDF80(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // ebp
  __int64 i; // rcx
  int *v9; // rdi
  int v10; // edx

  v3 = *(_QWORD *)(a1 + 800);
  if ( v3 )
    sub_1F7740(v3, a1, (unsigned int)a2, 0xFFFFFFFFLL);
  v4 = *(_QWORD *)(a1 + 808);
  if ( v4 )
    sub_1F7740(v4, a1, (unsigned int)a2, 0xFFFFFFFFLL);
  v5 = *(_DWORD *)(a1 + 792);
  if ( v5 > a2 )
    *(_DWORD *)(a1 + 792) = v5 - 1;
  v6 = *(_QWORD *)(a1 + 464);
  v7 = 0;
  for ( i = 0; v7 < v6; i = v7 )
  {
    while ( 1 )
    {
      v9 = (int *)(*(_QWORD *)(a1 + 456) + 4 * i);
      v10 = *v9;
      if ( a2 != *v9 )
        break;
      if ( *(_BYTE *)(a1 + 320) )
      {
        if ( !under_debugger )
          sub_37B760(51216);
        BUG();
      }
      memmove(v9, v9 + 1, 4 * (v6 - i) - 4);
      i = v7;
      v6 = *(_QWORD *)(a1 + 464) - 1LL;
      *(_QWORD *)(a1 + 464) = v6;
      if ( v7 >= v6 )
        goto LABEL_15;
    }
    ++v7;
    if ( a2 < v10 )
      *v9 = v10 - 1;
    v6 = *(_QWORD *)(a1 + 464);
  }
LABEL_15:
  sub_1EDEF0(a1, a2);
}
