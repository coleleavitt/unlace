/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061BF0
// Address: 0x08061BF0

//----- (08061BF0) --------------------------------------------------------
int __cdecl sub_8061BF0(int a1)
{
  char v1; // si
  _DWORD *v2; // ebp
  __pid_t v3; // eax
  int v4; // eax
  char *v5; // eax
  int result; // eax
  int v7; // eax
  char *v8; // eax

  v1 = 1;
  sub_8061880(a1, 0, 1);
  v2 = *(_DWORD **)(a1 + 668);
  if ( v2 == (_DWORD *)(a1 + 660) )
    goto LABEL_16;
  do
  {
    v3 = v2[5];
    if ( v2[10] == 1 )
    {
      if ( ptrace(PTRACE_KILL, v3, 0, 9) )
      {
        v7 = *__errno_location();
        if ( v7 != 3 )
        {
          v8 = strerror(v7);
          sub_8058E20(a1, "PTRACE_KILL %d: %s\n", v2[5], v8);
          goto LABEL_7;
        }
      }
    }
    else if ( v3 != -1 )
    {
      if ( sub_8054B10(v3, 9) )
      {
        v4 = *__errno_location();
        if ( v4 != 3 )
        {
          v5 = strerror(v4);
          sub_8058E20(a1, "SIGKILL %d: %s\n", v2[5], v5);
LABEL_7:
          v1 = 0;
          goto LABEL_8;
        }
      }
    }
    if ( !v1 )
      goto LABEL_7;
    v2[10] = 0;
    v2[6] = 0;
LABEL_8:
    v2 = (_DWORD *)std::_Rb_tree_increment(v2);
  }
  while ( v2 != (_DWORD *)(a1 + 660) );
  if ( v1 )
  {
LABEL_16:
    *(_DWORD *)(a1 + 724) = -1;
    *(_BYTE *)(a1 + 732) = 0;
    result = 1;
    goto LABEL_11;
  }
  result = -1;
LABEL_11:
  *(_BYTE *)(a1 + 733) = 1;
  *(_BYTE *)(a1 + 768) = 1;
  return result;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
