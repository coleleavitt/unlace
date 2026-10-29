_QWORD *__fastcall sub_10BEA20(_QWORD *a1, __int64 a2, _BYTE *a3, size_t a4, int a5)
{
  __int64 v9; // rbp
  _QWORD *v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  char *v14; // rax
  size_t v15; // rdx
  size_t v16; // rsi
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r8
  char *v20; // rdi

  sub_22984A0(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24), 0);
  if ( a4 )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_24;
    sub_9CA820(a1, "-", 1u);
    if ( a4 > 0x7FFFFFFFFFFFFFFFLL - a1[1] )
      goto LABEL_24;
    sub_9CA820(a1, a3, a4);
  }
  v9 = a1[1];
  if ( v9 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_24;
  v10 = a1 + 2;
  v11 = v9 + 1;
  v12 = (_QWORD *)*a1 == a1 + 2 ? 15LL : a1[2];
  if ( v11 > v12 )
    sub_974DF0((__int64)a1, a1[1], 0, "-", 1u);
  else
    *(_BYTE *)(*a1 + v9) = 45;
  v13 = (_QWORD *)*a1;
  a1[1] = v11;
  *((_BYTE *)v13 + v9 + 1) = 0;
  v14 = sub_10AE240(a5);
  v16 = a1[1];
  if ( v15 > 0x7FFFFFFFFFFFFFFFLL - v16 )
LABEL_24:
    std::__throw_length_error("basic_string::append");
  v17 = (_QWORD *)*a1;
  v18 = v15 + v16;
  if ( v10 == (_QWORD *)*a1 )
    v19 = 15;
  else
    v19 = a1[2];
  if ( v18 > v19 )
  {
    sub_974DF0((__int64)a1, v16, 0, v14, v15);
    v17 = (_QWORD *)*a1;
  }
  else if ( v15 )
  {
    v20 = (char *)v17 + v16;
    if ( v15 == 1 )
      *v20 = *v14;
    else
      memcpy(v20, v14, v15);
    v17 = (_QWORD *)*a1;
  }
  a1[1] = v18;
  *((_BYTE *)v17 + v18) = 0;
  return a1;
}

