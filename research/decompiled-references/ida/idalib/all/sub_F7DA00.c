size_t *__fastcall sub_F7DA00(size_t *a1, __int64 a2, const char *a3)
{
  _BYTE *v3; // r14
  unsigned __int64 v6; // rax
  size_t v7; // rcx
  size_t v8; // r15
  _BYTE *v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  char *v12; // rdi
  _BYTE *v14; // rax
  size_t v15; // rcx
  _BYTE *v16; // r8
  size_t v17; // rdx
  char *v18; // rdi
  __int64 v19; // rax
  size_t n; // [rsp+0h] [rbp-58h]
  size_t na; // [rsp+0h] [rbp-58h]
  size_t nb; // [rsp+0h] [rbp-58h]
  size_t v23; // [rsp+8h] [rbp-50h]
  __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a1 + 2;
  *a1 = (size_t)(a1 + 2);
  sub_F7A450(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v6 = strlen(a3);
  v7 = a1[1];
  v8 = v6;
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v6 )
    std::__throw_length_error("basic_string::append");
  v9 = (_BYTE *)*a1;
  v10 = v7 + v6;
  if ( v3 == (_BYTE *)*a1 )
  {
    if ( v10 <= 0xF )
    {
LABEL_4:
      if ( v6 )
      {
        v12 = &v9[v7];
        if ( v6 == 1 )
          *v12 = *a3;
        else
          memcpy(v12, a3, v6);
        v9 = (_BYTE *)*a1;
      }
      goto LABEL_8;
    }
    v24[0] = v7 + v6;
    v11 = 15;
  }
  else
  {
    v11 = a1[2];
    if ( v10 <= v11 )
      goto LABEL_4;
    v24[0] = v7 + v6;
  }
  n = v7;
  v14 = (_BYTE *)sub_F79BF0(v24, v11);
  v15 = n;
  v16 = (_BYTE *)*a1;
  v9 = v14;
  if ( n )
  {
    if ( n == 1 )
    {
      *v14 = *v16;
    }
    else
    {
      v17 = n;
      v23 = n;
      na = *a1;
      memcpy(v14, (const void *)*a1, v17);
      v15 = v23;
      v16 = (_BYTE *)na;
    }
  }
  if ( v8 )
  {
    v18 = &v9[v15];
    if ( v8 == 1 )
    {
      *v18 = *a3;
    }
    else
    {
      nb = (size_t)v16;
      memcpy(v18, a3, v8);
      v16 = (_BYTE *)nb;
    }
  }
  if ( v3 != v16 )
    operator delete(v16);
  v19 = v24[0];
  *a1 = (size_t)v9;
  a1[2] = v19;
LABEL_8:
  a1[1] = v10;
  v9[v10] = 0;
  return a1;
}
