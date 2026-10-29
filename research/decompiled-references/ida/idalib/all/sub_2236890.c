__int64 __fastcall sub_2236890(__int64 a1, void *a2, char **a3)
{
  char v4; // dl
  int v5; // edx
  void *v6; // rax
  char *v7; // rsi
  char *v8; // rdx
  __int64 result; // rax
  size_t v10; // r12
  int v11; // r13d

  v4 = *((_BYTE *)a3 + 20);
  *(_BYTE *)(a1 + 20) = v4;
  if ( v4 )
  {
    v5 = *((_DWORD *)a3 + 2);
    *(_QWORD *)a1 = a2;
    v6 = a2;
    v7 = *a3;
    *(_DWORD *)(a1 + 8) = v5;
    v8 = &v7[8 * *((unsigned int *)a3 + 3)];
  }
  else
  {
    v10 = 8LL * *((unsigned int *)a3 + 2);
    v11 = *((_DWORD *)a3 + 2);
    v6 = malloc(v10);
    if ( !v6 && (v10 || (v6 = malloc(1u)) == nullptr) )
      sub_2221CE0("Allocation failed", 1u);
    *(_QWORD *)a1 = v6;
    v7 = *a3;
    *(_DWORD *)(a1 + 8) = v11;
    v8 = &v7[v10];
  }
  if ( v8 != v7 )
    memmove(v6, v7, v8 - v7);
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a3 + 3);
  result = *((unsigned int *)a3 + 4);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
