__int64 __fastcall sub_24620(_QWORD *a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v2 = (_QWORD *)a1[10];
  if ( v2 == a1 + 4 )
    return 0;
  v3 = v2[6];
  v4 = a1[11];
  v5 = 0;
  if ( v4 < v3 )
  {
    v6 = v2[5];
    v7 = 5 * v4;
    v8 = v4 + 1;
    a1[11] = v8;
    a1[9] = v6 + 8 * v7;
    if ( v8 >= v3 )
    {
      v9 = std::_Rb_tree_increment();
      a1[11] = 0;
      a1[10] = v9;
    }
    return 1;
  }
  return v5;
}
