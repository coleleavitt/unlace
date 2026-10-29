/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045C40
// Address: 0x0000000100045C40

//----- (0000000100045C40) ----------------------------------------------------
__int64 __fastcall sub_100045C40(__int64 a1, char **a2)
{
  const char *v2; // r15
  char *v3; // rax
  char *v4; // r12
  __int64 result; // rax
  size_t v6; // r12
  _BYTE *v7; // rax
  unsigned __int64 v8; // r13
  char *v9; // rax
  signed __int64 v10; // r13
  __int64 v11; // rcx
  bool v12; // cf
  __int64 v13; // rcx

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v3 = strchr(*a2, 10);
  if ( v3 )
    v4 = v3 + 1;
  else
    v4 = (char *)&v2[strlen(v2)];
  v6 = v4 - v2;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < v6 + 1 )
  {
    v7 = qvector_reserve(a1, *(void **)a1, v6 + 1, 1u);
    *(_QWORD *)a1 = v7;
  }
  *(_QWORD *)(a1 + 8) = v6 + 1;
  v7[v6] = 0;
  memmove(*(void **)a1, v2, v6);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 >= 2 )
  {
    v9 = *(char **)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + v8 - 2) == 10 )
    {
      v10 = v8 - 1;
      if ( v10 > 1 )
      {
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v10 )
        {
          v9 = (char *)qvector_reserve(a1, *(void **)a1, v10, 1u);
          *(_QWORD *)a1 = v9;
        }
        *(_QWORD *)(a1 + 8) = v10;
        v9[v10 - 1] = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v9);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
  }
  *a2 = (char *)&v2[v6];
  v11 = *(_QWORD *)(a1 + 8);
  result = 0;
  v12 = v11 == 0;
  v13 = v11 - 1;
  if ( !v12 )
    return v13;
  return result;
}
