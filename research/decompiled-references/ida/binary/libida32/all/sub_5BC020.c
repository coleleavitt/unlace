__int64 __fastcall sub_5BC020(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v7; // rcx
  int v8; // r12d
  __int64 result; // rax
  int v10; // r12d
  unsigned int *v11; // rdx
  unsigned int *v12; // rdx

  v3 = *(_QWORD *)(a2 + 16);
  v5 = a2 + 8;
  while ( v3 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v3 + 16);
      if ( a3 >= *(_DWORD *)(v3 + 32) )
        break;
      v5 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v7 )
        goto LABEL_5;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
LABEL_5:
  v8 = *(_DWORD *)(a1 + 88);
  if ( *(_QWORD *)(a2 + 24) == v5
    || (result = *(int *)(std::_Rb_tree_decrement() + 36), (int)result >= v8)
    || (v12 = (unsigned int *)(*(_QWORD *)(a1 + 64) + 56 * result), a3 < *v12)
    || a3 >= v12[1]
    || result == -1 )
  {
    v10 = v8 - 1;
    result = v10;
    if ( v10 < 0LL )
    {
      return -1;
    }
    else
    {
      v11 = (unsigned int *)(*(_QWORD *)(a1 + 64) + 56LL * v10);
      do
      {
        if ( a3 >= *v11 && a3 < v11[1] )
          break;
        --result;
        v11 -= 14;
      }
      while ( result != -1 );
    }
  }
  return result;
}

