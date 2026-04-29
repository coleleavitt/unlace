__int64 __fastcall sub_3FC5B0(__int64 a1, __int64 *a2, int a3, int a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // rdi
  unsigned int v8; // r13d
  int v9; // r15d
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  int v14; // ebp
  void *v16; // rdi
  size_t v17; // rdx
  __int64 v18; // rax
  size_t v19; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xCD1Cu, (__int64)a2, a5);
LABEL_22:
    BUG();
  }
  v5 = a1 + 536;
  v7 = a1 + 4408;
  while ( a3 >= *(_DWORD *)(v5 + 28) )
  {
    v5 += 32;
    if ( v5 == v7 )
      goto LABEL_6;
  }
  if ( v5 == 32 )
  {
    if ( !under_debugger )
      sub_37EEE0(0xC8A4u, (__int64)a2, a5);
    goto LABEL_22;
  }
LABEL_6:
  if ( *(char *)(v5 - 11) <= a4 )
    a4 = *(char *)(v5 - 11);
  v8 = a4;
  if ( a2 )
  {
    v9 = *(_DWORD *)(v5 - 4);
    v10 = (const char *)(v5 - 24);
    v11 = v10;
    if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
    {
      v16 = (void *)*a2;
      v17 = v12 + 1;
      if ( a2[2] < v12 + 1 )
      {
        v19 = v12 + 1;
        v18 = qvector_reserve(a2, *a2, v17, 1);
        v17 = v19;
        *a2 = v18;
        v16 = (void *)v18;
      }
      a2[1] = v17;
      memmove(v16, v11, v13);
      *(_BYTE *)(*a2 + v13) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    v14 = a3 - v9;
    if ( v14 )
      sub_F7090(a2, (__int64)"^%d", v14);
  }
  return v8;
}
