__int64 __fastcall sub_1EB1680(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // r12d
  __int64 v5; // rbx
  int v8; // r12d
  int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  int v14; // r8d
  _QWORD *v15; // rdi

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v8 = v3 - 1;
  v9 = sub_FDE780(*a2);
  v10 = *a2;
  v11 = v8 & v9;
  v12 = (_QWORD *)(v5 + 16LL * v11);
  v13 = *v12;
  if ( *a2 == *v12 )
    goto LABEL_4;
  v14 = 1;
  v15 = nullptr;
  if ( v13 != -1 )
  {
    while ( 1 )
    {
      if ( !v15 && v13 == -2 )
        v15 = v12;
      v11 = v8 & (v14 + v11);
      v12 = (_QWORD *)(v5 + 16LL * v11);
      v13 = *v12;
      if ( v10 == *v12 )
        break;
      if ( v13 == -1 )
      {
        if ( v15 )
          v12 = v15;
        goto LABEL_6;
      }
      ++v14;
    }
LABEL_4:
    *a3 = v12;
    return 1;
  }
LABEL_6:
  *a3 = v12;
  return 0;
}
