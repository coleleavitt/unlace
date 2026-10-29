__int64 __fastcall sub_8DDDA0(__int64 a1, void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  char *v8; // r13
  unsigned int v9; // eax
  __int64 v10; // r15
  size_t v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  char *v14; // rax
  __int64 v15; // rax
  void *src; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  src = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v17[0] = v3;
  v8 = v5;
  *(_DWORD *)(a1 + 12) = unpack_dd(v17);
  src = (void *)v17[0];
  if ( (unsigned __int64)v3 >= v17[0] )
    return 0;
  v9 = unpack_dd(&src);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = v9;
    v12 = *(_QWORD *)(a1 + 16);
    v13 = v10 + v9;
    if ( *(_QWORD *)(a1 + 32) < v13 )
    {
      v15 = qvector_reserve(a1 + 16, v12, v10 + v9, 1);
      *(_QWORD *)(a1 + 16) = v15;
      v12 = v15;
    }
    v14 = (char *)src;
    *(_QWORD *)(a1 + 24) = v13;
    if ( __CFADD__(v11, v14) )
      return 0;
    if ( v8 < &v14[v11] )
      return 0;
    src = &v14[v11];
    if ( !memcpy((void *)(v12 + v10), v14, v11) )
      return 0;
  }
  *a2 = src;
  return 1;
}
