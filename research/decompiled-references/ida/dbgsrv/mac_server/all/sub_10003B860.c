/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003B860
// Address: 0x000000010003B860

//----- (000000010003B860) ----------------------------------------------------
__int64 __fastcall sub_10003B860(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  const char *v4; // r14
  __int64 v5; // rax
  const char *v6; // rax
  size_t v7; // rax
  size_t v8; // r15
  void *v9; // rbx
  void *v10; // rdi
  size_t v11; // rax
  size_t v12; // r14
  void *v13; // rbx
  void *v14; // rdi
  void *v15; // rbx
  void *v16; // rbx
  __int64 v18; // [rsp+0h] [rbp-70h]
  char *__s; // [rsp+10h] [rbp-60h]
  int v20; // [rsp+1Ch] [rbp-54h] BYREF
  unsigned __int8 v21[8]; // [rsp+20h] [rbp-50h] BYREF
  void *__p[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]

  v21[0] = 2;
  *(_OWORD *)__p = 0;
  v23 = 0;
  v20 = -1;
  get_qerrno();
  v3 = *(_QWORD **)(a1 + 104);
  v18 = a1;
  if ( v3 )
  {
    v4 = sub_1000338B0(v3, *(_DWORD *)(a1 + 112), (unsigned int *)&v20);
    v5 = *(_QWORD *)(v18 + 104);
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    else
      v6 = _s1;
    __s = (char *)v6;
  }
  else
  {
    __s = nullptr;
    v4 = nullptr;
  }
  if ( v21[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v21);
  }
  else if ( v21[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
    v23 = 0;
  }
  v21[0] = 2;
  __p[0] = nullptr;
  if ( v4 )
  {
    v7 = strlen(v4);
    v21[0] = 7;
    *(_OWORD *)__p = 0;
    v23 = 0;
    if ( v7 )
    {
      v8 = v7;
      v9 = (void *)(v7 + 1);
      if ( v7 == -1 )
      {
        v10 = nullptr;
      }
      else
      {
        v10 = qvector_reserve((__int64)__p, nullptr, v7 + 1, 1u);
        __p[0] = v10;
      }
      __p[1] = v9;
      memmove(v10, v4, v8);
      *((_BYTE *)__p[0] + v8) = 0;
    }
  }
  else
  {
    v21[0] = 7;
    *(_OWORD *)__p = 0;
    v23 = 0;
  }
  set_idcv_attr(a2, "file", v21, 0);
  if ( v21[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v21);
  }
  else if ( v21[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
    v23 = 0;
  }
  v21[0] = 2;
  __p[0] = nullptr;
  if ( __s )
  {
    v11 = strlen(__s);
    v21[0] = 7;
    *(_OWORD *)__p = 0;
    v23 = 0;
    if ( v11 )
    {
      v12 = v11;
      v13 = (void *)(v11 + 1);
      if ( v11 == -1 )
      {
        v14 = nullptr;
      }
      else
      {
        v14 = qvector_reserve((__int64)__p, nullptr, v11 + 1, 1u);
        __p[0] = v14;
      }
      __p[1] = v13;
      memmove(v14, __s, v12);
      *((_BYTE *)__p[0] + v12) = 0;
    }
  }
  else
  {
    v21[0] = 7;
    *(_OWORD *)__p = 0;
    v23 = 0;
  }
  set_idcv_attr(a2, "func", v21, 0);
  v15 = (void *)v20;
  if ( v21[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v21);
  }
  else if ( v21[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
    v23 = 0;
  }
  v21[0] = 2;
  __p[0] = v15;
  set_idcv_attr(a2, "line", v21, 0);
  v16 = *(void **)(v18 + 112);
  if ( v21[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v21);
  }
  else if ( v21[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
    v23 = 0;
  }
  v21[0] = 2;
  __p[0] = v16;
  set_idcv_attr(a2, "pc", v21, 0);
  set_qerrno();
  if ( v21[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v21);
  }
  else if ( v21[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
  }
  return __stack_chk_guard;
}
