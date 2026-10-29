char **__fastcall sub_2FD7A0(char **a1, __int64 a2)
{
  _QWORD *v4; // rdi
  size_t v5; // r9
  unsigned __int64 v6; // rax
  size_t v7; // rax
  size_t v8; // r9
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdi
  size_t v11; // r14
  unsigned __int64 v12; // rax
  size_t v13; // rbx
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rdi
  _BYTE *v16; // rdi
  size_t v17; // [rsp+0h] [rbp-A8h]
  size_t v18; // [rsp+0h] [rbp-A8h]
  size_t v19; // [rsp+0h] [rbp-A8h]
  size_t v20; // [rsp+8h] [rbp-A0h]
  _QWORD *v21; // [rsp+10h] [rbp-98h] BYREF
  size_t v22; // [rsp+18h] [rbp-90h]
  _QWORD v23[2]; // [rsp+20h] [rbp-88h] BYREF
  int v24; // [rsp+30h] [rbp-78h] BYREF
  char v25; // [rsp+34h] [rbp-74h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  int v27; // [rsp+40h] [rbp-68h]
  char v28; // [rsp+44h] [rbp-64h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]

  if ( *(_DWORD *)(a2 + 32) )
  {
    sub_2EB560((__int64 *)&v21, "(");
    sub_1850940(&src, qword_1C7F2C0, a2);
    if ( 0x7FFFFFFFFFFFFFFFLL - v22 < n )
      std::__throw_length_error("basic_string::append");
    v4 = v21;
    v5 = n + v22;
    if ( v21 == v23 )
      v6 = 15;
    else
      v6 = v23[0];
    if ( v6 < v5 )
    {
      v19 = n + v22;
      sub_23A830(&v21, v22, 0, (char *)src, n);
      v4 = v21;
      v5 = v19;
    }
    else if ( n )
    {
      v15 = (char *)v21 + v22;
      if ( n == 1 )
      {
        *v15 = *(_BYTE *)src;
        v4 = v21;
      }
      else
      {
        v17 = n + v22;
        memcpy(v15, src, n);
        v4 = v21;
        v5 = v17;
      }
    }
    v22 = v5;
    *((_BYTE *)v4 + v5) = 0;
    sub_233E40((__int64)&src);
    if ( *(int *)(a2 + 32) < 0 )
    {
      sub_2B3190((__int64)&v21, " -e*");
    }
    else
    {
      v7 = v22;
      if ( 0x7FFFFFFFFFFFFFFFLL - v22 <= 3 )
        std::__throw_length_error("basic_string::append");
      v8 = v22 + 4;
      if ( v21 == v23 )
        v9 = 15;
      else
        v9 = v23[0];
      if ( v9 < v8 )
      {
        v20 = v22 + 4;
        v18 = v22;
        sub_23A830(&v21, v22, 0, " +e*", 4u);
        v8 = v20;
        v7 = v18;
      }
      else
      {
        *(_DWORD *)((char *)v21 + v22) = 711273248;
      }
      v22 = v8;
      *((_BYTE *)v21 + v7 + 4) = 0;
    }
    v25 &= 0xFCu;
    v28 &= 0xFCu;
    v24 = 0;
    v26 = 0;
    v27 = 1;
    v29 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v24, (int *)(a2 + 32));
    sub_1831690(qword_1C7F2C0, &v24);
    sub_1850940(&src, qword_1C7F2C0, &v24);
    if ( 0x7FFFFFFFFFFFFFFFLL - v22 < n )
      std::__throw_length_error("basic_string::append");
    v10 = v21;
    v11 = n + v22;
    if ( v21 == v23 )
      v12 = 15;
    else
      v12 = v23[0];
    if ( v12 < v11 )
    {
      sub_23A830(&v21, v22, 0, (char *)src, n);
      v10 = v21;
    }
    else if ( n )
    {
      v16 = (char *)v21 + v22;
      if ( n == 1 )
        *v16 = *(_BYTE *)src;
      else
        memcpy(v16, src, n);
      v10 = v21;
    }
    v22 = v11;
    *((_BYTE *)v10 + v11) = 0;
    sub_233E40((__int64)&src);
    sub_25A130((char *)&v24);
    v13 = v22;
    if ( v22 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    if ( v21 == v23 )
      v14 = 15;
    else
      v14 = v23[0];
    if ( v14 < v22 + 1 )
      sub_23A830(&v21, v22, 0, ")", 1u);
    else
      *((_BYTE *)v21 + v22) = 41;
    v22 = v13 + 1;
    *((_BYTE *)v21 + v13 + 1) = 0;
    sub_2333C0(a1, &v21);
    sub_233E40((__int64)&v21);
  }
  else
  {
    sub_1850940(a1, qword_1C7F2C0, a2);
  }
  return a1;
}

