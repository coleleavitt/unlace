__int64 __fastcall sub_295E00(int *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  int v12; // ebx
  __int64 i; // r15
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v21; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v6 = *a3;
  v22 = __readfsqword(0x28u);
  if ( v6 )
  {
    a3[1] = 0;
    qfree(v6, (const char *)a2);
    *a3 = 0;
    a3[2] = 0;
  }
  v8 = *(_QWORD *)a1;
  v21 = 0;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 56);
  if ( v9 == interactive_graph_t__::vfunc_7 )
    v10 = a1[46];
  else
    v10 = (int)v9((__int64)a1);
  v11 = a3[1];
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_7;
    v16 = *a3;
    v17 = a3[2];
    if ( (unsigned __int64)&v21 < *a3 || (unsigned __int64)&v21 >= v16 + 4 * v17 )
    {
      if ( v17 >= v10 || (v19 = qvector_reserve(a3, v16, v10, 4), v11 = a3[1], *a3 = v19, v16 = v19, v11 < v10) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v16 + 4 * v11++) = 0;
          if ( v10 == v11 )
            break;
          v16 = *a3;
        }
      }
    }
    else if ( v17 >= v10 || (v18 = qvector_reserve(a3, v16, v10, 4), v11 = a3[1], *a3 = v18, v16 = v18, v11 < v10) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v16 + 4 * v11++) = 0;
        if ( v10 == v11 )
          break;
        v16 = *a3;
      }
    }
  }
  a3[1] = v10;
LABEL_7:
  v12 = 0;
  for ( i = *(_QWORD *)(a2 + 24); i != a2 + 8; i = std::_Rb_tree_increment(i) )
  {
    v14 = sub_295C10(a1, *(unsigned int *)(i + 32), a3, a4);
    if ( v12 < v14 )
      v12 = v14;
  }
  result = 0;
  if ( *(_QWORD *)(a2 + 40) )
    return (unsigned int)(v12 + 1);
  return result;
}
