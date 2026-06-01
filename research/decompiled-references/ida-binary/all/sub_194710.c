__int64 __fastcall sub_194710(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 module_data; // rax
  _QWORD *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 *v9; // rbp
  unsigned int v10; // ebx
  const char *v11; // rdx
  unsigned __int64 v12; // rbx
  const void *v14; // r12
  void *v15; // rdi
  __int64 v16; // rax

  if ( !dword_8CD7F0 )
    goto LABEL_12;
  module_data = get_module_data();
  if ( !module_data )
    goto LABEL_12;
  v5 = *(_QWORD **)(module_data + 912);
  if ( !v5 )
    goto LABEL_12;
  v6 = v5[1];
  if ( (int)v6 <= 0 )
    goto LABEL_12;
  v7 = 0;
  v8 = 16 * (3LL * (unsigned int)(v6 - 1) + 3);
  while ( 1 )
  {
    v9 = (__int64 *)(v7 + *v5);
    v10 = sub_194240(v9, (__int64)a3);
    if ( (_BYTE)v10 )
      break;
    v7 += 48;
    if ( v8 == v7 )
      goto LABEL_12;
  }
  if ( v9 )
  {
    v11 = &s1;
    if ( v9[4] )
      v11 = (const char *)v9[3];
    sub_169A50(a2, (__int64)"$ %s", v11);
  }
  else
  {
LABEL_12:
    if ( a3 != a2 )
    {
      v12 = a3[1];
      if ( v12 > 1 )
      {
        v14 = (const void *)*a3;
        v15 = (void *)*a2;
        if ( a2[2] < v12 )
        {
          v16 = qvector_reserve(a2, *a2, v12, 1);
          *a2 = v16;
          v15 = (void *)v16;
        }
        a2[1] = v12;
        memmove(v15, v14, v12 - 1);
        *(_BYTE *)(*a2 + v12 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    return 0;
  }
  return v10;
}
