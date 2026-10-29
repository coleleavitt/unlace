__int64 __fastcall sub_5E0A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  char *v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rax
  const void *v10; // rsi
  unsigned int v11; // r15d
  int v12; // r13d
  char *v13; // rdi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 result; // rax
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // eax

  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(char **)(v6 + 72);
  if ( !v7 )
  {
    v7 = (char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 64))(
                   *(_QWORD *)(a1 + 80),
                   (unsigned int)(1 << *(_DWORD *)(v6 + 56)),
                   1);
    *(_QWORD *)(v6 + 72) = v7;
    if ( !v7 )
      return 1;
  }
  v8 = *(_DWORD *)(v6 + 60);
  if ( v8 )
  {
    if ( a3 < v8 )
      goto LABEL_4;
LABEL_11:
    memcpy(v7, (const void *)(a2 - v8), v8);
    v19 = *(_DWORD *)(v6 + 60);
    *(_DWORD *)(v6 + 68) = 0;
    *(_DWORD *)(v6 + 64) = v19;
    return 0;
  }
  v18 = *(_DWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 64) = 0;
  v8 = 1 << v18;
  *(_DWORD *)(v6 + 60) = 1 << v18;
  if ( a3 >= 1 << v18 )
    goto LABEL_11;
LABEL_4:
  v9 = *(unsigned int *)(v6 + 68);
  v10 = (const void *)(a2 - a3);
  v11 = v8 - v9;
  v12 = *(_DWORD *)(v6 + 68);
  v13 = &v7[v9];
  if ( a3 >= v8 - (unsigned int)v9 )
  {
    memcpy(v13, v10, v11);
    v20 = v12 + a3 - v8;
    if ( v20 )
    {
      memcpy(*(void **)(v6 + 72), (const void *)(a2 - v20), v20);
      v21 = *(_DWORD *)(v6 + 60);
      *(_DWORD *)(v6 + 68) = v20;
      *(_DWORD *)(v6 + 64) = v21;
      return 0;
    }
    a3 = v11;
  }
  else
  {
    memcpy(v13, v10, a3);
  }
  v14 = *(_DWORD *)(v6 + 60);
  v15 = a3 + *(_DWORD *)(v6 + 68);
  if ( v15 == v14 )
    v15 = 0;
  v16 = *(_DWORD *)(v6 + 64);
  *(_DWORD *)(v6 + 68) = v15;
  result = 0;
  if ( v14 > v16 )
    *(_DWORD *)(v6 + 64) = v16 + a3;
  return result;
}

