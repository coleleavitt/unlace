char **__fastcall sub_2FE070(char **a1, int *a2)
{
  int v3; // eax
  size_t v4; // r13
  size_t v5; // r9
  unsigned __int64 v6; // rdx
  char *v7; // rax
  _BYTE *v8; // rax
  size_t v9; // r13
  _QWORD *v10; // rdi
  size_t v11; // r12
  unsigned __int64 v12; // rax
  size_t v13; // r12
  size_t v14; // r9
  unsigned __int64 v15; // rdx
  size_t v16; // rax
  _QWORD *v17; // rdi
  size_t v18; // rbx
  unsigned __int64 v19; // rax
  size_t v20; // rbx
  unsigned __int64 v21; // rdx
  size_t v23; // r14
  unsigned __int64 v24; // rdi
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  size_t v27; // [rsp+8h] [rbp-A0h]
  _BYTE *v28; // [rsp+8h] [rbp-A0h]
  size_t v29; // [rsp+8h] [rbp-A0h]
  void *dest; // [rsp+10h] [rbp-98h] BYREF
  size_t v31; // [rsp+18h] [rbp-90h]
  _QWORD v32[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD *v33; // [rsp+30h] [rbp-78h] BYREF
  size_t v34; // [rsp+38h] [rbp-70h]
  _QWORD v35[2]; // [rsp+40h] [rbp-68h] BYREF
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n; // [rsp+58h] [rbp-50h]
  unsigned __int64 v38; // [rsp+60h] [rbp-48h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
    sub_2FD7A0(a1, (__int64)(a2 + 8));
    return a1;
  }
  LOBYTE(v32[0]) = 0;
  dest = v32;
  v31 = 0;
  if ( (a2[1] & 1) != 0 )
  {
LABEL_3:
    sub_1850940(&src, qword_1C7F2C0, a2);
    v4 = n;
    if ( 0x7FFFFFFFFFFFFFFFLL - n <= 2 )
      std::__throw_length_error("basic_string::append");
    v5 = n + 3;
    if ( src == &v38 )
      v6 = 15;
    else
      v6 = v38;
    if ( v6 < v5 )
    {
      v27 = n + 3;
      sub_23A830(&src, n, 0, "*oo", 3u);
      v5 = v27;
    }
    else
    {
      v7 = (char *)src + n;
      *(_WORD *)v7 = 28458;
      v7[2] = 111;
    }
    n = v5;
    *((_BYTE *)src + v4 + 3) = 0;
    v8 = dest;
    v9 = n;
    if ( dest == v32 )
    {
      if ( n <= 0xF )
      {
LABEL_10:
        if ( !n )
        {
LABEL_11:
          v31 = v9;
          v8[v9] = 0;
          sub_233E40((__int64)&src);
          goto LABEL_12;
        }
LABEL_48:
        if ( v9 == 1 )
          *v8 = *(_BYTE *)src;
        else
          memcpy(v8, src, v9);
        v8 = dest;
        goto LABEL_11;
      }
      if ( (n & 0x8000000000000000LL) == 0LL )
      {
        if ( n <= 0x1D )
        {
          v24 = 31;
          v23 = 30;
          goto LABEL_47;
        }
        goto LABEL_46;
      }
    }
    else
    {
      if ( v32[0] >= n )
        goto LABEL_10;
      if ( (n & 0x8000000000000000LL) == 0LL )
      {
        v23 = 2LL * v32[0];
        if ( n < 2LL * v32[0] )
        {
          v24 = v23 + 1;
          if ( (v32[0] & 0x4000000000000000LL) == 0 )
            goto LABEL_47;
          goto LABEL_78;
        }
LABEL_46:
        v23 = n;
        v24 = n + 1;
        if ( (__int64)(n + 1) >= 0 )
        {
LABEL_47:
          v28 = (_BYTE *)operator new(v24);
          sub_233E40((__int64)&dest);
          v8 = v28;
          v32[0] = v23;
          dest = v28;
          goto LABEL_48;
        }
LABEL_78:
        std::__throw_bad_alloc();
      }
    }
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v3 == 1 )
  {
    if ( (a2[5] & 1) != 0 || a2[4] != 1 )
      goto LABEL_3;
    sub_2F7440((char **)&dest, 0, 0, "oo", 2u);
  }
  else
  {
    if ( v3 != -1 || (a2[5] & 1) != 0 || a2[4] != 1 )
      goto LABEL_3;
    sub_2F7440((char **)&dest, 0, 0, "-oo", 3u);
  }
LABEL_12:
  if ( a2[8] || a2[16] )
  {
    sub_2EB560((__int64 *)&v33, "(");
    if ( 0x7FFFFFFFFFFFFFFFLL - v34 < v31 )
      std::__throw_length_error("basic_string::append");
    v10 = v33;
    v11 = v31 + v34;
    if ( v33 == v35 )
      v12 = 15;
    else
      v12 = v35[0];
    if ( v12 < v11 )
    {
      sub_23A830(&v33, v34, 0, (char *)dest, v31);
      v10 = v33;
    }
    else if ( v31 )
    {
      v26 = (char *)v33 + v34;
      if ( v31 == 1 )
        *v26 = *(_BYTE *)dest;
      else
        memcpy(v26, dest, v31);
      v10 = v33;
    }
    v34 = v11;
    *((_BYTE *)v10 + v11) = 0;
    v13 = v34;
    if ( 0x7FFFFFFFFFFFFFFFLL - v34 <= 2 )
      std::__throw_length_error("basic_string::append");
    v14 = v34 + 3;
    if ( v33 == v35 )
      v15 = 15;
    else
      v15 = v35[0];
    if ( v15 < v14 )
    {
      v29 = v34 + 3;
      sub_23A830(&v33, v34, 0, " + ", 3u);
      v14 = v29;
    }
    else
    {
      v16 = (size_t)v33 + v34;
      *(_WORD *)v16 = 11040;
      *(_BYTE *)(v16 + 2) = 32;
    }
    v34 = v14;
    *((_BYTE *)v33 + v13 + 3) = 0;
    sub_2FD7A0((char **)&src, (__int64)(a2 + 8));
    if ( 0x7FFFFFFFFFFFFFFFLL - v34 < n )
      std::__throw_length_error("basic_string::append");
    v17 = v33;
    v18 = n + v34;
    if ( v33 == v35 )
      v19 = 15;
    else
      v19 = v35[0];
    if ( v19 < v18 )
    {
      sub_23A830(&v33, v34, 0, (char *)src, n);
      v17 = v33;
    }
    else if ( n )
    {
      v25 = (char *)v33 + v34;
      if ( n == 1 )
        *v25 = *(_BYTE *)src;
      else
        memcpy(v25, src, n);
      v17 = v33;
    }
    v34 = v18;
    *((_BYTE *)v17 + v18) = 0;
    sub_233E40((__int64)&src);
    v20 = v34;
    if ( v34 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    if ( v33 == v35 )
      v21 = 15;
    else
      v21 = v35[0];
    if ( v21 < v34 + 1 )
      sub_23A830(&v33, v34, 0, ")", 1u);
    else
      *((_BYTE *)v33 + v34) = 41;
    v34 = v20 + 1;
    *((_BYTE *)v33 + v20 + 1) = 0;
    sub_2333C0(a1, &v33);
    sub_233E40((__int64)&v33);
  }
  else
  {
    sub_2333C0(a1, &dest);
  }
  sub_233E40((__int64)&dest);
  return a1;
}

