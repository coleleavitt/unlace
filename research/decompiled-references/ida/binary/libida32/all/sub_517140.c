__int64 __fastcall sub_517140(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 *v6; // r15
  __int64 v7; // rax
  void *v8; // rbx
  unsigned int *v9; // rbx
  unsigned __int64 i; // r12
  unsigned int v11; // edx
  __int64 v12; // rax
  void *v13; // rbp
  const char *v14; // rcx
  unsigned __int8 v16; // [rsp+Fh] [rbp-79h]
  void *v17; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v3 = *a1;
  v4 = *(_DWORD *)a2;
  v21 = __readfsqword(0x28u);
  v6 = *(__int64 **)(v3 + 1616);
  v7 = *v6;
  v18 = 0;
  v17 = nullptr;
  if ( (unsigned __int8)sub_6994A0(*(_QWORD *)(v7 + 1480), &v17, v4) )
  {
    sub_698E00(&ptr, a3);
    v8 = ptr;
    a3 = haystack;
    if ( (_QWORD)v20 )
      a3 = (const char *)ptr;
  }
  else
  {
    v8 = nullptr;
  }
  LODWORD(ptr) = sub_3B90A0(*(_QWORD **)(*v6 + 1480), v4);
  v16 = sub_79BD70(&ptr, *v6, a3, 0);
  if ( v8 )
    qfree(v8);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v16 )
  {
    v9 = *(unsigned int **)(a2 + 8);
    for ( i = 0; i < *(unsigned int *)(a2 + 4); v9 += 5 )
    {
      v11 = *v9;
      ptr = nullptr;
      v20 = 0;
      v12 = sub_516900(a1, (__int64)&ptr, v11);
      v13 = ptr;
      if ( v12 > 0 )
      {
        v14 = haystack;
        if ( (_QWORD)v20 )
          v14 = (const char *)ptr;
        sub_516F40(v6, (unsigned int *)a2, *v9, (__int64)v14);
      }
      if ( v13 )
        qfree(v13);
      ++i;
    }
  }
  return v16;
}

