unsigned __int64 __fastcall sub_452DA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  const char **v3; // r14
  __int64 v4; // r13
  const char *v6; // rdx
  const char *v7; // rsi
  const char *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  const char *v11; // r8
  size_t v12; // rax
  size_t v13; // rbx
  void *v14; // rdi
  size_t v15; // r9
  size_t v17; // [rsp+0h] [rbp-68h]
  const char *v18; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v20; // [rsp+18h] [rbp-50h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 8);
  v21 = __readfsqword(0x28u);
  v3 = *(const char ***)a2;
  v4 = *(_QWORD *)a2 + 24 * v2;
  if ( v4 != *(_QWORD *)a2 )
  {
    do
    {
      v8 = v3[1];
      if ( v8 )
      {
        v9 = (unsigned __int64)(v8 - 1);
        v10 = 18;
        v11 = *v3;
        v20 = 0;
        ptr = nullptr;
        if ( v9 <= 0x12 )
          v10 = v9;
        v12 = v9 - v10;
        v13 = v12;
        if ( v12 )
        {
          v14 = nullptr;
          v15 = v12 + 1;
          if ( v12 != -1 )
          {
            v18 = v11;
            v17 = v12 + 1;
            ptr = (void *)qvector_reserve(&ptr, 0, v12 + 1, 1);
            v11 = v18;
            v14 = ptr;
            v15 = v17;
          }
          *(_QWORD *)&v20 = v15;
          memmove(v14, &v11[v10], v13);
          v6 = haystack;
          *((_BYTE *)ptr + v13) = 0;
          if ( v3[1] )
LABEL_5:
            v6 = *v3;
          v7 = haystack;
          if ( (_QWORD)v20 )
            v7 = (const char *)ptr;
          goto LABEL_8;
        }
      }
      else
      {
        ptr = nullptr;
        v20 = 0;
      }
      v6 = haystack;
      v7 = haystack;
      if ( v3[1] )
        goto LABEL_5;
LABEL_8:
      sub_452AF0(a1, v7, v6);
      if ( ptr )
      {
        *(_QWORD *)&v20 = 0;
        qfree(ptr);
      }
      v3 += 3;
    }
    while ( (const char **)v4 != v3 );
  }
  return v21 - __readfsqword(0x28u);
}

