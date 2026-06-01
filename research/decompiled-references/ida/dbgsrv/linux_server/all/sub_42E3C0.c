/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E3C0
// Address: 0x000000000042E3C0

//----- (000000000042E3C0) ----------------------------------------------------
void *__fastcall sub_42E3C0(void **a1, __int64 a2)
{
  bool v2; // zf
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // rdx
  unsigned __int8 *v6; // rsi
  size_t v7; // r12
  int *v8; // r15
  char *v9; // rbp
  size_t v10; // r13
  void *v11; // rsi
  void *v13; // rax
  size_t v14; // r14
  void *v15; // r13
  unsigned __int64 v16; // r15
  void *v17; // rsi
  void *v18; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v2 = *(_BYTE *)(a2 + 40) == 0;
  v3 = *(_QWORD *)(a2 + 8);
  v21 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v5 = 0;
    ptr = nullptr;
    v6 = (unsigned __int8 *)s1;
    *(_OWORD *)n = 0;
    if ( v3 )
    {
      v6 = *(unsigned __int8 **)a2;
      v5 = (unsigned int)(v3 - 1);
    }
    if ( !(unsigned __int8)sub_479BA0((__int64)&ptr, v6, v5) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(274);
      BUG();
    }
    v7 = n[0];
    v8 = &dword_48FFAC;
    if ( n[0] )
    {
      v8 = (int *)ptr;
      v7 = 2 * n[0] - 2;
    }
    v9 = (char *)a1[1];
    v10 = v7;
    if ( v9 )
      v10 = (size_t)&(--v9)[v7];
    v11 = *a1;
    if ( (unsigned __int64)a1[2] < v10 + 1 )
    {
      v13 = sub_481540((__int64)a1, v11, v10 + 1, 1u);
      *a1 = v13;
      v11 = v13;
    }
    a1[1] = (void *)(v10 + 1);
    *((_BYTE *)v11 + v10) = 0;
    memmove((char *)*a1 + (_QWORD)v9, v8, v7);
    if ( ptr )
    {
      n[0] = 0;
      j__free(ptr);
    }
    return (void *)(v21 - __readfsqword(0x28u));
  }
  if ( !v3 )
    return (void *)(v21 - __readfsqword(0x28u));
  v14 = v3 - 1;
  if ( v3 == 1 )
    return (void *)(v21 - __readfsqword(0x28u));
  v15 = a1[1];
  v16 = v3 - 1;
  if ( v15 )
  {
    v15 = (char *)v15 - 1;
    v16 = (unsigned __int64)v15 + v14;
    v3 += (unsigned __int64)v15;
  }
  v17 = *a1;
  if ( (unsigned __int64)a1[2] < v3 )
  {
    v18 = sub_481540((__int64)a1, v17, v3, 1u);
    *a1 = v18;
    v17 = v18;
  }
  a1[1] = (void *)v3;
  *((_BYTE *)v17 + v16) = 0;
  return memcpy((char *)*a1 + (_QWORD)v15, *(const void **)a2, v14);
}
// 48FFAC: using guessed type int dword_48FFAC;
// 4C94E1: using guessed type char byte_4C94E1;
