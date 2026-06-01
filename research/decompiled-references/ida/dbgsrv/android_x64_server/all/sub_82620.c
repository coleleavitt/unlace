/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82620
// Address: 0x0000000000082620

//----- (0000000000082620) ----------------------------------------------------
__int64 __fastcall sub_82620(__int64 a1, const char **a2)
{
  const char *v2; // r13
  char *v3; // rax
  const char *v4; // r15
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  char *v7; // rax
  unsigned __int64 v8; // rbp
  char *v9; // rax
  unsigned __int64 v10; // rbx
  char *v11; // rax
  char *v12; // rbp
  __int64 v13; // rcx

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v3 = strchr(v2, 10);
  if ( v3 )
    v4 = v3 + 1;
  else
    v4 = &v2[strlen(v2)];
  *(_QWORD *)(a1 + 8) = 0;
  v6 = v4 - v2 + 1;
  if ( *(_QWORD *)(a1 + 16) >= v6 )
  {
    v7 = *(char **)a1;
  }
  else
  {
    v7 = (char *)qvector_reserve(a1, *(char **)a1, v4 - v2 + 1, 1u);
    *(_QWORD *)a1 = v7;
  }
  *(_QWORD *)(a1 + 8) = v6;
  v7[v4 - v2] = 0;
  memmove(*(void **)a1, v2, v4 - v2);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 >= 2 )
  {
    v9 = *(char **)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + v8 - 2) == 10 )
    {
      v10 = v8 - 1;
      if ( (__int64)(v8 - 1) > 1 )
      {
        if ( *(_QWORD *)(a1 + 16) >= v10 )
        {
          v12 = &v9[v8 - 2];
        }
        else
        {
          v11 = (char *)qvector_reserve(a1, *(char **)a1, v10, 1u);
          *(_QWORD *)a1 = v11;
          v12 = &v11[v8 - 2];
        }
        *(_QWORD *)(a1 + 8) = v10;
        *v12 = 0;
      }
      else if ( v9 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v9);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
  }
  *a2 = v4;
  v13 = *(_QWORD *)(a1 + 8);
  result = v13 - 1;
  if ( !v13 )
    return 0;
  return result;
}
