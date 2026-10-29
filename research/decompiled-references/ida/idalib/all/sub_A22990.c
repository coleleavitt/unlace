__int64 __fastcall sub_A22990(__int64 *a1, __int64 *a2, int **a3)
{
  int v3; // ebp
  __int64 v5; // r13
  int v8; // ebp
  int v9; // eax
  int v10; // esi
  int v11; // r8d
  int *v12; // rdi
  unsigned int i; // eax
  int *v14; // rcx
  int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = nullptr;
    return 0;
  }
  v5 = *a1;
  v8 = v3 - 1;
  v17 = *a2;
  v9 = sub_A22530(v17, (int *)&v17 + 1);
  v10 = *(_DWORD *)a2;
  v11 = 1;
  v12 = nullptr;
  for ( i = v8 & v9; ; i = v8 & v16 )
  {
    v14 = (int *)(v5 + 152LL * i);
    v15 = *v14;
    if ( *v14 == v10 && *((_DWORD *)a2 + 1) == v14[1] )
    {
      *a3 = v14;
      return 1;
    }
    if ( v15 == -1 )
      break;
    if ( v15 == -2 && v14[1] == -2 && !v12 )
      v12 = (int *)(v5 + 152LL * i);
LABEL_7:
    v16 = v11 + i;
    ++v11;
  }
  if ( v14[1] != -1 )
    goto LABEL_7;
  if ( !v12 )
    v12 = (int *)(v5 + 152LL * i);
  *a3 = v12;
  return 0;
}
