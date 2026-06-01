__int64 __fastcall sub_5D7830(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rcx
  int v8; // r12d
  __int64 result; // rax
  int v10; // r12d
  unsigned __int64 *v11; // rdx
  unsigned __int64 *v12; // rdx

  v3 = *(_QWORD **)(a2 + 16);
  v5 = (_QWORD *)(a2 + 8);
  while ( v3 )
  {
    while ( 1 )
    {
      v7 = v3[2];
      if ( a3 >= v3[4] )
        break;
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v7 )
        goto LABEL_5;
    }
    v3 = (_QWORD *)v3[3];
  }
LABEL_5:
  v8 = *(_DWORD *)(a1 + 96);
  if ( *(_QWORD **)(a2 + 24) == v5
    || (result = *(int *)(std::_Rb_tree_decrement(v5) + 40), (int)result >= v8)
    || (v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + (result << 6)), a3 < *v12)
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
      v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + ((__int64)v10 << 6));
      do
      {
        if ( a3 >= *v11 && a3 < v11[1] )
          break;
        --result;
        v11 -= 8;
      }
      while ( result != -1 );
    }
  }
  return result;
}
