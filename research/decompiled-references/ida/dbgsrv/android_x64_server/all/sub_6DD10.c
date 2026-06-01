/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DD10
// Address: 0x000000000006DD10

//----- (000000000006DD10) ----------------------------------------------------
__int64 __fastcall sub_6DD10(_QWORD *a1, const char *a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdi
  int v8; // eax
  int *v9; // r13
  char **v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp

  v2 = 0x7FFFFFFF;
  if ( a2 )
  {
    v4 = a1[1];
    v5 = v4;
    while ( --v5 >= 0 )
    {
      v6 = *(_QWORD *)(*a1 + 8 * v4 - 8);
      v7 = s1;
      if ( *(_QWORD *)(v6 + 8) )
        v7 = *(const char **)v6;
      v8 = strcmp(v7, a2);
      v4 = v5;
      if ( !v8 )
      {
        if ( (_DWORD)v5 != -1 )
          return (unsigned int)v5;
        break;
      }
    }
    v9 = off_154A20;
    if ( off_154A20 )
    {
      v10 = off_154A28;
      v11 = 0;
      v12 = 0;
      while ( strcmp(v10[v11], a2) )
      {
        ++v12;
        v11 += 5;
        if ( v12 >= (unsigned __int64)v9 )
          return v2;
      }
      if ( &v10[v11] && v10[v11 + 1] )
        return (unsigned int)((int)(v11 * 8) / -40);
    }
  }
  return v2;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
