__int64 __fastcall sub_416840(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 *func; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r9
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  void *v14; // rdi
  _QWORD *v15; // rdi
  size_t v16; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  void *s; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-70h]
  void *v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  int v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  _QWORD v30[9]; // [rsp+50h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v3 = *a2;
  s = v30;
  v4 = a2[1];
  v25 = 1;
  v5 = v3 + 8 * v4;
  v28 = 1065353216;
  v26 = nullptr;
  v27 = 0;
  v29 = 0;
  v30[0] = 0;
  if ( v5 == v3 )
  {
    v15 = v30;
    v16 = 8;
    goto LABEL_15;
  }
  do
  {
    func = (unsigned __int64 *)get_func();
    v7 = func;
    if ( !func )
      goto LABEL_11;
    v8 = *func;
    if ( v27 )
    {
      v9 = *((_QWORD **)s + v8 % v25);
      v10 = v8 % v25;
      if ( v9 )
      {
        v11 = (_QWORD *)*v9;
        if ( *(_QWORD *)(*v9 + 8LL) == v8 )
        {
LABEL_9:
          if ( v9 && *v9 )
            goto LABEL_11;
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)*v11;
            if ( !*v11 )
              break;
            v9 = v11;
            if ( v8 % v25 != v12[1] % v25 )
              break;
            v11 = (_QWORD *)*v11;
            if ( v12[1] == v8 )
              goto LABEL_9;
          }
        }
      }
      goto LABEL_22;
    }
    v18 = v26;
    if ( !v26 )
    {
LABEL_21:
      v10 = v8 % v25;
LABEL_22:
      v19 = operator new(0x10u);
      *(_QWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = *v7;
      sub_416670((char **)&s, v10, v8, (char *)v19, 1u);
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *v7;
      v22 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v20 + 1) )
      {
        v23 = qvector_reserve();
        *(_QWORD *)a1 = v23;
        v20 = *(_QWORD *)(a1 + 8);
        v22 = v23;
      }
      *(_QWORD *)(v22 + 8 * v20) = v21;
      ++*(_QWORD *)(a1 + 8);
      goto LABEL_11;
    }
    while ( v18[1] != v8 )
    {
      v18 = (_QWORD *)*v18;
      if ( !v18 )
        goto LABEL_21;
    }
LABEL_11:
    v3 += 8;
  }
  while ( v5 != v3 );
  v13 = v26;
  if ( v26 )
  {
    do
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
      operator delete(v14, 0x10u);
    }
    while ( v13 );
  }
  v15 = s;
  v16 = 8 * v25;
LABEL_15:
  memset(v15, 0, v16);
  v27 = 0;
  v26 = nullptr;
  if ( s != v30 )
    operator delete(s, 8 * v25);
  return a1;
}
