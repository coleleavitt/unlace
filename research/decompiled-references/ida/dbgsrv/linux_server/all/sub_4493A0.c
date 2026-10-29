/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4493A0
// Address: 0x00000000004493A0

//----- (00000000004493A0) ----------------------------------------------------
__int64 __fastcall sub_4493A0(__int64 a1, const char **a2)
{
  const char *v2; // rbp
  char *v4; // rax
  const char *v5; // r14
  void *v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  void *v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // r13
  char *v13; // rax

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v4 = strchr(*a2, 10);
  v5 = v4 + 1;
  if ( !v4 )
    v5 = &v2[strlen(v2)];
  *(_QWORD *)(a1 + 8) = 0;
  v6 = *(void **)a1;
  v7 = v5 - v2 + 1;
  if ( *(_QWORD *)(a1 + 16) < v7 )
  {
    v10 = sub_481540(a1, v6, v5 - v2 + 1, 1u);
    *(_QWORD *)a1 = v10;
    v6 = v10;
  }
  *(_QWORD *)(a1 + 8) = v7;
  *((_BYTE *)v6 + v5 - v2) = 0;
  memmove(*(void **)a1, v2, v5 - v2);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 > 1 )
  {
    v11 = *(char **)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + v8 - 2) == 10 )
    {
      v12 = v8 - 1;
      if ( (__int64)(v8 - 1) <= 1 )
      {
        if ( v11 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          j__free(v11);
          *(_QWORD *)a1 = 0;
          *(_QWORD *)(a1 + 16) = 0;
        }
      }
      else
      {
        if ( *(_QWORD *)(a1 + 16) < v12 )
        {
          v13 = (char *)sub_481540(a1, v11, v8 - 1, 1u);
          *(_QWORD *)a1 = v13;
          v11 = v13;
        }
        *(_QWORD *)(a1 + 8) = v12;
        v11[v8 - 2] = 0;
      }
    }
  }
  *a2 = v5;
  return (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
}
