char *__fastcall sub_5B6E50(char *a1, unsigned __int64 a2)
{
  char *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  char *v6; // r12
  int v7; // eax
  __int64 v8; // rbx
  char *result; // rax
  char *v10; // r12
  int v11; // eax
  __int64 v12; // rdi
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  ptr = nullptr;
  v14 = 0;
  if ( !a2 )
    return nullptr;
  v16 = 0;
  v15 = 0;
  v3 = (char *)qvector_reserve(&ptr, 0, a2, 24);
  v4 = v14;
  ptr = v3;
  if ( (unsigned __int64)v14 < a2 )
  {
    while ( 1 )
    {
      v5 = v16;
      v6 = &v3[24 * v4];
      v7 = v15;
      *(_OWORD *)(v6 + 8) = 0;
      *(_DWORD *)v6 = v7;
      *((_QWORD *)v6 + 1) = qstrdup(v5);
      ++v4;
      *((_QWORD *)v6 + 2) = qstrdup(*((_QWORD *)&v16 + 1));
      if ( a2 == v4 )
        break;
      v3 = (char *)ptr;
    }
  }
  *(_QWORD *)&v14 = a2;
  v8 = 0;
  free_regarg(&v15);
  result = (char *)ptr;
  do
  {
    v10 = &result[24 * v8];
    if ( v10 != a1 )
    {
      free_regarg(&result[24 * v8]);
      v11 = *(_DWORD *)a1;
      v12 = *((_QWORD *)a1 + 1);
      *(_OWORD *)(v10 + 8) = 0;
      *(_DWORD *)v10 = v11;
      *((_QWORD *)v10 + 1) = qstrdup(v12);
      *((_QWORD *)v10 + 2) = qstrdup(*((_QWORD *)a1 + 2));
      result = (char *)ptr;
    }
    ++v8;
    a1 += 24;
  }
  while ( a2 != v8 );
  if ( (unsigned __int64)v14 < *((_QWORD *)&v14 + 1) && result && (_QWORD)v14 )
  {
    result = (char *)qrealloc(result);
    if ( !result )
      return (char *)ptr;
  }
  return result;
}

