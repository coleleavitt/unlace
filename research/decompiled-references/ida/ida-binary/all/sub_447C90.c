unsigned __int64 __fastcall sub_447C90(__int64 a1, __int64 *a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r14
  const char *v8; // rsi
  char v9; // bl
  void *v10; // rdi
  size_t v12; // rbx
  void *v13; // r14
  void *src; // [rsp+0h] [rbp-88h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-80h]
  int v16; // [rsp+18h] [rbp-70h]
  void *v17; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  src = nullptr;
  v16 = 0;
  v17 = nullptr;
  *(_OWORD *)n = 0;
  v18 = 0;
  if ( a3 )
  {
    v5 = strlen(a3);
    v6 = v5 + 1;
    v7 = v5;
    v17 = (void *)qvector_reserve(&v17, 0, v5 + 1, 1);
    *(_QWORD *)&v18 = v6;
    memmove(v17, a3, v7);
    *((_BYTE *)v17 + v7) = 0;
  }
  v8 = (const char *)&v17;
  v9 = sub_442560((__int64 *)&src, (__int64)&v17);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, (const char *)&v17);
  }
  if ( v9 )
  {
    v12 = n[0];
    v18 = 0;
    if ( n[0] )
    {
      v13 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v18 + 1) = v12;
      memcpy(v13, src, v12);
      v8 = (const char *)a2;
      *(_QWORD *)&v18 = v12;
      v19 = v16;
      v17 = v13;
      sub_447440(a1, a2, (__int64)&v17);
      if ( v13 )
        qfree(v13, (const char *)a2);
    }
    else
    {
      v8 = (const char *)a2;
      v17 = nullptr;
      v19 = v16;
      sub_447440(a1, a2, (__int64)&v17);
    }
    v10 = src;
    if ( src )
      goto LABEL_7;
  }
  else
  {
    v10 = src;
    if ( src )
    {
LABEL_7:
      n[0] = 0;
      qfree(v10, v8);
    }
  }
  return v20 - __readfsqword(0x28u);
}
