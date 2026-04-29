_QWORD *__fastcall sub_DAE0(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 *v10; // rax
  __int64 v11; // r8
  unsigned __int64 *v12; // r10
  __int64 v13; // rax
  struct _Unwind_Exception *v15; // r14
  char v16; // [rsp+0h] [rbp-18h]

  v6 = a4;
  v8 = 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(unsigned __int64 **)(a2 + 16);
  v11 = 8 * v9;
  v12 = &v10[v9];
  if ( 8 * v9 )
  {
    v8 = 0;
    while ( a3 >= *v10 )
    {
      ++v10;
      v11 = (unsigned int)(v8 + 1);
      if ( v10 == v12 )
        goto LABEL_7;
      v8 = (unsigned int)v11;
    }
    v8 = (unsigned int)(v8 - 1);
  }
LABEL_7:
  if ( v8 >= *(_QWORD *)(a2 + 56) )
  {
    v15 = (struct _Unwind_Exception *)sub_BBD0(v8, a2, v6, v9, v11, a3, v16);
    v4 = *a1;
    if ( *a1 )
    {
      a1[1] = 0;
      qfree(v4, (const char *)a2);
    }
    _Unwind_Resume(v15);
  }
  v13 = *(_QWORD *)(a2 + 48);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  sub_C8C0((__int64)a1, *(_QWORD *)(v13 + 8 * v8), v6, 0x4Fu);
  return a1;
}
