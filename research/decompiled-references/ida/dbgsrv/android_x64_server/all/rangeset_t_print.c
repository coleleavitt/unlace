/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_print
// Address: 0x00000000000CA020

//----- (00000000000CA020) ----------------------------------------------------
_BYTE *__fastcall rangeset_t_print(__int64 **a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  char *v4; // rax
  __int64 *v5; // rcx
  char *v6; // rbx
  __int64 *v7; // r13

  v3 = (unsigned __int64)&a2[a3];
  v4 = a2;
  if ( 16LL * (_QWORD)a1[1] )
  {
    v5 = *a1;
    v6 = a2;
    v7 = *a1;
    do
    {
      if ( v7 != v5 )
      {
        if ( (unsigned __int64)v6 >= v3 )
        {
          if ( !(_BYTE)under_debugger )
            interr(518);
LABEL_14:
          BUG();
        }
        *v6++ = 44;
        if ( (unsigned __int64)v6 >= v3 )
        {
          *(_BYTE *)(v3 - 1) = 0;
          v6 = (char *)(v3 - 1);
        }
      }
      v4 = &v6[range_t_print(v7, v6, v3 - (_QWORD)v6)];
      v7 += 2;
      v5 = *a1;
      v6 = v4;
    }
    while ( v7 != &(*a1)[2 * (_QWORD)a1[1]] );
  }
  if ( (unsigned __int64)v4 >= v3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(519);
    goto LABEL_14;
  }
  *v4 = 0;
  return (_BYTE *)(v4 - a2);
}
// 158B40: using guessed type __int64 under_debugger;
