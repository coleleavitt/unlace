void *__fastcall sub_62A340(__int64 a1, const char *a2, unsigned __int8 a3)
{
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // r8
  size_t v8; // r13
  const char *v9; // rdx
  char *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  void *v14; // rdi
  char v15[8]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v16; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v5 = strchr(a2, 47);
  if ( !v5 )
  {
    sub_7BEFF0(&ptr, a1, a2, 0, a3);
    return ptr;
  }
  v6 = v5;
  v7 = a3;
  ptr = nullptr;
  v19 = 0;
  v8 = v5 - a2;
  if ( v5 == a2 )
    goto LABEL_3;
  v14 = nullptr;
  if ( v8 != -1 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v8 + 1, 1);
    v14 = ptr;
  }
  *(_QWORD *)&v19 = v8 + 1;
  memmove(v14, a2, v8);
  v7 = a3;
  *((_BYTE *)ptr + v8) = 0;
  if ( !(_QWORD)v19 )
LABEL_3:
    v9 = haystack;
  else
    v9 = (const char *)ptr;
  sub_7BEFF0(v15, a1, v9, 0, v7);
  v10 = v6 + 1;
  v11 = sub_7BF490(v15, a1, v10, 72);
  if ( !v11 )
  {
    v16 = -1;
    if ( !a3 )
      goto LABEL_6;
    goto LABEL_15;
  }
  v16 = v11;
  if ( v11 == -1 && a3 )
  {
LABEL_15:
    sub_7BF040(&v16, a1, 0, 0);
    v17 = v16;
    sub_7BF4E0(v15, a1, v10, &v17, 8, 72);
  }
LABEL_6:
  v12 = v16;
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return (void *)v12;
}
