unsigned __int64 __fastcall std::string::_M_mutate(_QWORD *a1, size_t a2, __int64 a3, _BYTE *a4, size_t a5)
{
  _QWORD *v6; // r13
  __int64 v9; // rdx
  size_t v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  size_t v13; // r12
  bool v14; // zf
  _BYTE *v15; // rax
  _BYTE *v16; // r15
  _BYTE *v17; // rcx
  size_t v18; // r8
  _BYTE *v19; // rsi
  _BYTE *v20; // rdi
  _QWORD *v21; // rdi
  _BYTE *v22; // rsi
  _BYTE *v23; // rdi
  __int64 v24; // rax
  void *srca; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v6 = a1 + 2;
  v9 = a1[1];
  v30 = __readfsqword(0x28u);
  v10 = v9 - a2;
  v11 = v9 + a5 - a3;
  v12 = 15;
  v13 = v10 - a3;
  v14 = a1 + 2 == (_QWORD *)*a1;
  v29 = v11;
  if ( !v14 )
    v12 = a1[2];
  v15 = (_BYTE *)std::string::_M_create(a1, &v29, v12);
  v16 = v15;
  v17 = a4;
  v18 = a5;
  if ( a2 )
  {
    v19 = (_BYTE *)*a1;
    if ( a2 == 1 )
    {
      *v15 = *v19;
    }
    else
    {
      memcpy(v15, v19, a2);
      v18 = a5;
      v17 = a4;
    }
  }
  if ( v17 && v18 )
  {
    v20 = &v16[a2];
    if ( v18 == 1 )
    {
      *v20 = *v17;
    }
    else
    {
      srca = (void *)v18;
      memcpy(v20, v17, v18);
      v18 = (size_t)srca;
    }
  }
  v21 = (_QWORD *)*a1;
  if ( v13 )
  {
    v22 = (char *)v21 + a2 + a3;
    v23 = &v16[v18 + a2];
    if ( v13 == 1 )
      *v23 = *v22;
    else
      memcpy(v23, v22, v13);
    v21 = (_QWORD *)*a1;
  }
  if ( v6 != v21 )
    operator delete(v21);
  v24 = v29;
  *a1 = v16;
  a1[2] = v24;
  return __readfsqword(0x28u) ^ v30;
}

