/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CA80
// Address: 0x000000000046CA80

//----- (000000000046CA80) ----------------------------------------------------
void *__fastcall sub_46CA80(char **a1, char **a2, char **a3, unsigned __int64 *a4)
{
  int v7; // eax
  unsigned __int64 v8; // rdx
  size_t v9; // r12
  const void *v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rdx
  size_t v16; // r12
  const void *v17; // rsi
  void *result; // rax
  char *v19; // rdi
  char *v20; // rsi
  char *v21; // rsi
  char *v22; // rax
  char *v23; // rax

  sub_46C740(a1, 1, a4);
  v7 = sub_47FD50(a4, a4[1]);
  v8 = (unsigned __int64)a2[1];
  v9 = v7;
  if ( v8 < v7 )
  {
    v21 = *a2;
    if ( (unsigned __int64)a2[2] < v7 )
    {
      v23 = (char *)sub_481540((__int64)a2, v21, v7, 1u);
      v8 = (unsigned __int64)a2[1];
      *a2 = v23;
      v21 = v23;
    }
    memset(&v21[v8], 0, v9 - v8);
    a2[1] = (char *)v9;
  }
  else if ( v7 != v8 )
  {
    a2[1] = (char *)v7;
  }
  v10 = (const void *)*a4;
  v11 = a4[1];
  v12 = v9 + *a4;
  if ( !__CFADD__(v9, *a4) && v11 >= v12 )
  {
    v13 = *a2;
    *a4 = v12;
    memcpy(v13, v10, v9);
    v11 = a4[1];
  }
  a2[3] = (char *)(sub_47FE70(a4, v11) - 1);
  v14 = sub_47FD50(a4, a4[1]);
  v15 = (unsigned __int64)a2[5];
  v16 = v14;
  if ( v15 < v14 )
  {
    v20 = a2[4];
    if ( (unsigned __int64)a2[6] < v14 )
    {
      v22 = (char *)sub_481540((__int64)(a2 + 4), v20, v14, 1u);
      v15 = (unsigned __int64)a2[5];
      a2[4] = v22;
      v20 = v22;
    }
    memset(&v20[v15], 0, v16 - v15);
    a2[5] = (char *)v16;
  }
  else if ( v14 != v15 )
  {
    a2[5] = (char *)v14;
  }
  v17 = (const void *)*a4;
  result = (void *)(*a4 + v16);
  if ( a4[1] >= (unsigned __int64)result && result >= v17 )
  {
    v19 = a2[4];
    *a4 = (unsigned __int64)result;
    result = memcpy(v19, v17, v16);
  }
  if ( a3 )
    return (void *)sub_46C740(a3, 0, a4);
  return result;
}
