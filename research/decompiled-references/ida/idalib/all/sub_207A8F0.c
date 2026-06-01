__int64 __fastcall sub_207A8F0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v5; // r13
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
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
  v9 = sub_207A820(*(_QWORD **)(*a2 + 128), *(_QWORD *)(*a2 + 128) + 8LL * *(unsigned int *)(*a2 + 136));
  v10 = *a2;
  v11 = v8 & v9;
  v12 = (_QWORD *)(v5 + 8LL * v11);
  v13 = *v12;
  if ( *v12 == *a2 )
    goto LABEL_4;
  v14 = 1;
  v15 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( !v15 && v13 == -8192 )
        v15 = v12;
      v11 = v8 & (v14 + v11);
      v12 = (_QWORD *)(v5 + 8LL * v11);
      v13 = *v12;
      if ( *v12 == v10 )
        break;
      if ( v13 == -4096 )
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
