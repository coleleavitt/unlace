__int64 __fastcall sub_3741F0(_QWORD *a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // rbp
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rbp
  int v11; // eax
  char v12; // al

  if ( (unsigned __int64)(int)a3 >= a1[35] )
  {
    v6 = a1[31];
    v8 = a3;
    v9 = *(_QWORD *)(v6 + 24);
    v10 = v6 + 8;
    while ( v10 == v9 )
    {
      while ( 1 )
      {
LABEL_7:
        if ( under_debugger )
          goto LABEL_17;
        v9 = 40328;
        interr(40328, a2, a3, a4, a5);
LABEL_9:
        v12 = 0;
LABEL_10:
        *a2 = v12;
        v9 = std::_Rb_tree_increment(v9);
        if ( (_DWORD)v5 == -1 )
          break;
        if ( (v5 & 0x80000000) == 0LL && v5 < a1[35] )
          return a1[34] + 40 * v5;
      }
    }
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 32);
      v5 = *(int *)(v9 + 36);
      if ( v11 == v8 )
        goto LABEL_9;
      if ( v8 == (_DWORD)v5 )
      {
        v5 = v11;
        v12 = 1;
        goto LABEL_10;
      }
      v9 = std::_Rb_tree_increment(v9);
      if ( v10 == v9 )
        goto LABEL_7;
    }
  }
  if ( under_debugger )
LABEL_17:
    BUG();
  interr(40331, a2, a3, a4, a5);
  return sub_3742D0();
}
