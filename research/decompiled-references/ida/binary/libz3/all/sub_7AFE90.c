__int64 __fastcall sub_7AFE90(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 (*v5)(void); // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v13; // edx

  v5 = *(__int64 (**)(void))(*a1 + 552LL);
  if ( v5 == sub_7C5680 )
  {
    if ( a1[20] )
      return 0;
    v7 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3296LL) + 24LL * (a2 >> 1));
  }
  else
  {
    v7 = v5();
  }
  if ( !v7 )
    return 0;
  v8 = a1[3];
  v9 = *(_QWORD *)(v8 + 3784);
  v10 = *(_DWORD *)(*(_QWORD *)(v8 + 3856) + 12LL * (unsigned int)(v7 - 1));
  if ( v9 )
    v11 = *(_DWORD *)(v9 - 4);
  else
    v11 = 0;
  while ( 1 )
  {
    v13 = v11--;
    if ( v10 >= v13 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1548);
    }
    v12 = *(_DWORD *)(v9 + 4LL * v11);
    if ( v12 == a2 )
      break;
    if ( v12 == a3 )
      return 0;
  }
  return 1;
}

