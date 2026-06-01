__int64 __fastcall sub_8B71E0(_QWORD *a1, void **a2, __int64 a3)
{
  char *v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r15
  size_t v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  char *v11; // rax
  __int64 v12; // rax
  void *src[9]; // [rsp+0h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  src[0] = *a2;
  if ( __CFADD__(a3, src[0]) )
    return 0;
  v5 = (char *)src[0] + a3;
  v6 = unpack_dd(src);
  if ( v6 )
  {
    v7 = a1[3];
    v8 = v6;
    v9 = a1[2];
    v10 = v7 + v6;
    if ( a1[4] < v10 )
    {
      v12 = qvector_reserve(a1 + 2, v9, v7 + v6, 1);
      a1[2] = v12;
      v9 = v12;
    }
    v11 = (char *)src[0];
    a1[3] = v10;
    if ( __CFADD__(v8, v11) )
      return 0;
    if ( v5 < &v11[v8] )
      return 0;
    src[0] = &v11[v8];
    if ( !memcpy((void *)(v9 + v7), v11, v8) )
      return 0;
  }
  *a2 = src[0];
  return 1;
}

