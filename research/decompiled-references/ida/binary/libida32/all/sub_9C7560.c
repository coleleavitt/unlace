__int64 __fastcall sub_9C7560(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r13
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // r12
  unsigned int v9; // ebx

  for ( result = *a1; a1[1] != result; *a1 = result )
  {
    v2 = a1[2];
    v3 = *(_QWORD *)(result + 32);
    v4 = *(_QWORD **)(v2 + 16);
    v5 = (_QWORD *)(v2 + 8);
    if ( v4 )
    {
      v6 = (_QWORD *)(v2 + 8);
      do
      {
        while ( 1 )
        {
          v7 = sub_B4F350(v4[4]);
          if ( v7 < (unsigned int)sub_B4F350(v3) )
            break;
          v6 = v4;
          v4 = (_QWORD *)v4[2];
          if ( !v4 )
            goto LABEL_7;
        }
        v4 = (_QWORD *)v4[3];
      }
      while ( v4 );
LABEL_7:
      if ( v5 != v6 )
      {
        v8 = v6[4];
        v9 = sub_B4F350(v3);
        result = sub_B4F350(v8);
        if ( v9 >= (unsigned int)result )
          break;
      }
    }
    result = std::_Rb_tree_increment();
  }
  return result;
}

