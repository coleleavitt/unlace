char *__fastcall sub_5B69C0(char *a1, unsigned __int64 a2)
{
  char *v3; // rax
  __int64 v4; // r12
  char *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  char *result; // rax
  char *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+8h] [rbp-70h]
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  ptr = nullptr;
  v15 = 0;
  if ( !a2 )
    return nullptr;
  v17 = 0;
  v16 = 0;
  v18 = 0;
  v3 = (char *)qvector_reserve(&ptr, 0, a2, 32);
  v4 = v15;
  ptr = v3;
  v5 = v3;
  if ( (unsigned __int64)v15 < a2 )
  {
    while ( 1 )
    {
      v6 = v17;
      v7 = &v5[32 * v4];
      v8 = v16;
      *((_QWORD *)v7 + 3) = 0;
      *(_QWORD *)v7 = v8;
      *(_OWORD *)(v7 + 8) = 0;
      *((_QWORD *)v7 + 1) = qstrdup(v6);
      *((_QWORD *)v7 + 2) = qstrdup(*((_QWORD *)&v17 + 1));
      ++v4;
      *((_QWORD *)v7 + 3) = qstrdup(v18);
      if ( a2 == v4 )
        break;
      v5 = (char *)ptr;
    }
  }
  *(_QWORD *)&v15 = a2;
  v9 = 0;
  free_regvar(&v16);
  result = (char *)ptr;
  do
  {
    v11 = &result[32 * v9];
    if ( v11 != a1 )
    {
      free_regvar(&result[32 * v9]);
      v12 = *(_QWORD *)a1;
      *((_QWORD *)v11 + 3) = 0;
      v13 = *((_QWORD *)a1 + 1);
      *(_OWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = v12;
      *((_QWORD *)v11 + 1) = qstrdup(v13);
      *((_QWORD *)v11 + 2) = qstrdup(*((_QWORD *)a1 + 2));
      *((_QWORD *)v11 + 3) = qstrdup(*((_QWORD *)a1 + 3));
      result = (char *)ptr;
    }
    ++v9;
    a1 += 32;
  }
  while ( a2 != v9 );
  if ( (unsigned __int64)v15 < *((_QWORD *)&v15 + 1) && result && (_QWORD)v15 )
  {
    result = (char *)qrealloc(result);
    if ( !result )
      return (char *)ptr;
  }
  return result;
}

