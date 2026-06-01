_QWORD *__fastcall sub_222A8E0(_QWORD *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  size_t v5; // r14
  char *v6; // rax
  char *v7; // r13
  unsigned int *v8; // r8
  signed __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  _QWORD *v12; // r12
  _BYTE *v13; // rax
  unsigned __int64 v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // rdi
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbp
  void *v20; // rax
  void *v21; // rdi
  unsigned __int64 v22; // rax
  _BYTE *v23; // rdi
  _BYTE *v24; // rax
  unsigned __int8 *v25; // [rsp+0h] [rbp-68h] BYREF
  char *v26; // [rsp+8h] [rbp-60h] BYREF
  unsigned int *v27; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v28; // [rsp+18h] [rbp-50h] BYREF
  void *v29[2]; // [rsp+20h] [rbp-48h] BYREF
  char *v30; // [rsp+30h] [rbp-38h]

  *(_OWORD *)v29 = 0;
  v30 = nullptr;
  if ( a3 )
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v5 = 4 * a3;
    v6 = (char *)operator new(4 * a3);
    v7 = &v6[v5];
    v29[0] = v6;
    v30 = &v6[v5];
    v8 = (unsigned int *)memset(v6, 0, v5);
  }
  else
  {
    v8 = nullptr;
    v7 = nullptr;
  }
  v26 = (char *)v8;
  v25 = a2;
  v29[1] = v7;
  sub_2218E30(&v25, (char *)&a2[a3], (unsigned int **)&v26, (unsigned __int64)v7, 1);
  v9 = (char *)v29[1] - (char *)v29[0];
  v10 = (v26 - (char *)v29[0]) >> 2;
  v11 = ((char *)v29[1] - (char *)v29[0]) >> 2;
  if ( v10 > v11 )
  {
    sub_434B30((__int64)v29, v10 - v11);
    v9 = (char *)v29[1] - (char *)v29[0];
  }
  else if ( v26 != v29[1] && v10 < v11 )
  {
    v29[1] = v26;
    v9 = v26 - (char *)v29[0];
  }
  v12 = a1 + 2;
  *a1 = a1 + 2;
  if ( (unsigned __int64)v9 > 0xF )
  {
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v20 = (void *)operator new(v9 + 1);
    a1[2] = v9;
    *a1 = v20;
    v21 = v20;
  }
  else
  {
    v13 = a1 + 2;
    if ( !v9 )
      goto LABEL_10;
    v21 = a1 + 2;
  }
  memset(v21, 0, v9);
  v13 = (_BYTE *)*a1;
LABEL_10:
  a1[1] = v9;
  v13[v9] = 0;
  v28 = (_BYTE *)*a1;
  v14 = (unsigned __int64)&v28[a1[1]];
  v27 = (unsigned int *)v29[0];
  sub_22185F0(&v27, (unsigned __int64)v29[1], (__int64 *)&v28, v14, 0);
  v15 = v28;
  v16 = (_BYTE *)*a1;
  v17 = a1[1];
  v18 = (unsigned __int64)&v28[-*a1];
  if ( v18 > v17 )
  {
    if ( v18 - v17 > 0x7FFFFFFFFFFFFFFFLL - v17 )
      std::__throw_length_error("basic_string::_M_replace_aux");
    if ( v12 == (_QWORD *)v16 )
      v22 = 15;
    else
      v22 = a1[2];
    if ( v18 > v22 )
    {
      sub_998B30((__int64)a1, a1[1], 0, nullptr, v18 - v17);
      v16 = (_BYTE *)*a1;
    }
    v23 = &v16[v17];
    if ( v18 - v17 == 1 )
      *v23 = 0;
    else
      memset(v23, 0, v18 - v17);
    v24 = (_BYTE *)*a1;
    a1[1] = v18;
    v24[v18] = 0;
  }
  else if ( v18 < v17 )
  {
    a1[1] = v18;
    *v15 = 0;
  }
  if ( v29[0] )
    operator delete(v29[0]);
  return a1;
}
