void __fastcall sub_440A10(__int64 a1, _QWORD *a2, _QWORD *a3, _DWORD *a4, int a5, int a6)
{
  int v7; // edx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax

  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 == -1 )
    goto LABEL_13;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 104LL) != v7 )
    sub_47D740((unsigned int)"concurrent dictionary modification and search", (_DWORD)a2, v7, (_DWORD)a4, a5, a6);
  v9 = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
  {
    sub_4409E0(a1);
LABEL_13:
    *a4 = 1;
    return;
  }
  v10 = v9[6];
  *a4 = 0;
  *(_QWORD *)a1 = v10;
  if ( a2 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 60LL) == 1 || *(_DWORD *)(*(_QWORD *)(a1 + 16) + 60LL) == -1 )
      v11 = (_QWORD *)v9[4];
    else
      v11 = v9 + 4;
    *a2 = v11;
  }
  if ( a3 )
    *a3 = v9[3];
}

