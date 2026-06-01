/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000540A0
// Address: 0x00000001000540A0

//----- (00000001000540A0) ----------------------------------------------------
__int64 __fastcall sub_1000540A0(__int64 a1, __int64 a2, unsigned int a3, const char *a4, const char *a5)
{
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  const char *v13; // r12
  size_t v14; // rax
  size_t v15; // r14
  unsigned __int64 v16; // r13
  char *v17; // rax
  unsigned __int64 v18; // rcx
  void *v19; // rax
  char *v21; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-48h]
  unsigned __int64 v23; // [rsp+10h] [rbp-40h]
  unsigned __int8 v24; // [rsp+1Fh] [rbp-31h] BYREF

  if ( a3 == 1 )
  {
    v8 = a1 - 192;
    if ( !a1 )
      v8 = 0;
    a4 = (const char *)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 440) + 408LL))(*(_QWORD *)(v8 + 440));
  }
  sub_10006B790((__int64)&v21, 56);
  sub_10005A320((void **)&v21, a2 + 1);
  sub_100032FE0((void **)&v21, a3);
  v9 = v21;
  v10 = v22;
  v11 = v22 + 1;
  if ( a4 == a5 )
  {
    if ( v23 < v11 )
    {
      v9 = (char *)qvector_reserve((__int64)&v21, v21, v11, 1u);
      v21 = v9;
      v10 = v22;
    }
    v9[v10] = 1;
    v12 = ++v22;
    v13 = &_s;
    if ( a5 )
      v13 = a5;
    v14 = strlen(v13);
    v15 = v14 + 1;
    if ( v14 != -1 )
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      if ( !__CFADD__(v12, v15) )
        v16 = v12 + v15;
      if ( v12 >= v16 )
      {
        if ( v12 != v16 )
        {
          v24 = 0;
          sub_10001CE90((__int64)&v21, v16, &v24);
        }
      }
      else
      {
        v17 = v21;
        if ( v23 >= v16 )
        {
          v18 = v12;
        }
        else
        {
          v17 = (char *)qvector_reserve((__int64)&v21, v21, v16, 1u);
          v21 = v17;
          v18 = v22;
        }
        __bzero(&v17[v18], v16 - v18);
        v22 = v16;
      }
      memcpy(&v21[v12], v13, v15);
    }
  }
  else
  {
    if ( v23 < v11 )
    {
      v9 = (char *)qvector_reserve((__int64)&v21, v21, v11, 1u);
      v21 = v9;
      v10 = v22;
    }
    v9[v10] = 0;
    ++v22;
    sub_10005A320((void **)&v21, (__int64)(a4 + 1));
  }
  v19 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, char **))(*(_QWORD *)a1 + 16LL))(a1, 56, &v21);
  qfree(v19);
  if ( v21 )
  {
    v22 = 0;
    qfree(v21);
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
