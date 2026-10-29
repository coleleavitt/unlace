__int64 __fastcall sub_1114A50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v5; // rax
  __int64 v6; // rdx
  size_t v7; // rbx
  size_t v8; // rcx
  __int64 v9; // r14
  _WORD *v10; // r15
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  __int64 v18; // [rsp+8h] [rbp-B0h]
  _QWORD v19[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *v20[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+50h] [rbp-68h]
  void *s1; // [rsp+60h] [rbp-58h] BYREF
  size_t n; // [rsp+68h] [rbp-50h]
  _BYTE v25[72]; // [rsp+70h] [rbp-48h] BYREF

  v19[0] = a2;
  v19[1] = a3;
  sub_2222710(v20, v19);
  s1 = v20[0];
  n = (size_t)v20[1];
  v5 = sub_2222D70(&s1, "+", 1, 0);
  if ( v5 == -1 )
  {
    v10 = s1;
    v7 = n;
    v9 = 0;
    v22 = 0;
  }
  else
  {
    v7 = n;
    v8 = v5 + 1;
    if ( v5 + 1 > n )
    {
      v8 = n;
      v9 = 0;
    }
    else
    {
      v9 = n - v8;
    }
    v10 = s1;
    if ( v5 <= n )
      v7 = v5;
    v22 = (__int64)s1 + v8;
  }
  v21[2] = v10;
  v21[3] = v7;
  v11 = sub_2274CD0(v10, v7, v6);
  if ( v7 == 6 && *(_DWORD *)v10 == 1769234798 && v10[2] == 25974 )
  {
    v15 = (_BYTE *)sub_227F670();
    if ( v15 )
    {
      s1 = v25;
      sub_11144E0(&s1, v15, (__int64)&v15[v14]);
      v16 = s1;
      v15 = (_BYTE *)n;
    }
    else
    {
      v16 = v25;
      v25[0] = 0;
      s1 = v25;
      n = 0;
    }
    v11 = sub_2274290(v16, (size_t)v15);
    if ( s1 != v25 )
    {
      v18 = v11;
      operator delete(s1);
      v11 = v18;
    }
  }
  v12 = 0;
  if ( v11 )
  {
    v12 = 1;
    sub_22756C0(a4, v11);
    if ( v9 )
      v12 = sub_11145A0(a1, v22, v9, a4);
  }
  if ( v20[0] != v21 )
    operator delete(v20[0]);
  return v12;
}

