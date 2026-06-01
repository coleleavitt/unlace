char *__fastcall sub_7E59A0(
        __int64 a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbp
  _DWORD **v12; // rdx
  _DWORD **v13; // rcx
  char *v14; // rcx
  __int64 v15; // r13
  char *result; // rax
  __int64 v17; // r8
  _DWORD **v18; // rdx
  _DWORD **v19; // rcx
  _DWORD *v20; // rdi
  _DWORD *v21; // r9

  v10 = a4;
  *(_OWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = a6;
  v12 = *(_DWORD ***)a7;
  v13 = *(_DWORD ***)(a7 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a7;
  *(_QWORD *)(a1 + 16) = v13;
  if ( v12 && **v13 < **v12 )
  {
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 16) = v12;
  }
  v14 = (char *)(a1 + 56);
  *(_DWORD *)(a1 + 32) = a2;
  v15 = a2;
  *(_DWORD *)(a1 + 36) = v10;
  *(_QWORD *)(a1 + 24) = a8;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  if ( a2 )
    v14 = (char *)memmove((void *)(a1 + 56), a3, 4LL * a2);
  result = &v14[4 * v15];
  *(_QWORD *)(a1 + 48) = result;
  if ( (_DWORD)v10 )
  {
    v17 = a5;
    result += 8;
    do
    {
      v18 = *(_DWORD ***)v17;
      v19 = *(_DWORD ***)(v17 + 8);
      v20 = **(_DWORD ***)v17;
      v21 = *v19;
      *((_QWORD *)result - 1) = *(_QWORD *)v17;
      *(_QWORD *)result = v19;
      if ( *v21 < *v20 )
      {
        *((_QWORD *)result - 1) = v19;
        *(_QWORD *)result = v18;
      }
      v17 += 16;
      result += 16;
    }
    while ( a5 + 16 * v10 != v17 );
  }
  return result;
}

