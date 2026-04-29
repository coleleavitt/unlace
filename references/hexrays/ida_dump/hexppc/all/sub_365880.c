__int64 __fastcall sub_365880(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // ebp
  int v6; // ebx
  _QWORD *v7; // rdx
  int i; // r13d
  int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // eax
  int v13; // edi
  int v14; // r8d
  int v15; // esi
  __int64 v16; // rdx
  _DWORD *v17; // rax
  _DWORD *v18; // rdx

  v5 = -1;
  v6 = *(_DWORD *)(a1 + 36);
  v7 = *(_QWORD **)a1;
  if ( v6 )
    v5 = *(_DWORD *)(v7[26] + 4LL * (v6 - 1));
  for ( i = 0; a3 >= v6; ++v6 )
  {
    v9 = v5;
    v5 = *(_DWORD *)(v7[26] + 4LL * v6);
    if ( v5 != v9 )
    {
      v10 = v7[35];
      v11 = sub_139840(a2, v5);
      v12 = sub_CF000(v10, v11);
      v7 = *(_QWORD **)a1;
      i += v12;
    }
  }
  v13 = *(_DWORD *)(a1 + 32);
  v14 = *(_DWORD *)(a1 + 40);
  v15 = i + v13 + v14;
  if ( v7[24] < (unsigned __int64)v15 )
    v15 = v7[24];
  if ( v13 >= v15 )
  {
LABEL_14:
    *(_DWORD *)(a1 + 40) = i + v14;
    return 1;
  }
  else
  {
    v16 = v7[23];
    v17 = (_DWORD *)(v16 + 4LL * v13);
    v18 = (_DWORD *)(v16 + 4 * (v13 + (unsigned __int64)(unsigned int)(v15 - v13)));
    while ( *v17 == -1 )
    {
      if ( v18 == ++v17 )
        goto LABEL_14;
    }
    return 0;
  }
}
