/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AA18
// Address: 0x000000000006AA18

//----- (000000000006AA18) ----------------------------------------------------
__int64 __fastcall sub_6AA18(_QWORD *a1, char *s2)
{
  __int64 v2; // x8
  __int64 v5; // x20
  __int64 v6; // x8
  const char *v7; // x0
  int v8; // w0
  unsigned __int64 v9; // x22
  _UNKNOWN **v10; // x21
  unsigned __int64 v11; // x23

  if ( !s2 )
    goto LABEL_17;
  v2 = a1[1];
  while ( 1 )
  {
    v5 = v2 - 1;
    if ( v2 - 1 < 0 )
      break;
    v6 = *(_QWORD *)(*a1 + 8 * v2 - 8);
    if ( *(_QWORD *)(v6 + 8) )
      v7 = *(const char **)v6;
    else
      v7 = &byte_F154B;
    v8 = strcmp(v7, s2);
    v2 = v5;
    if ( !v8 )
    {
      if ( (_DWORD)v5 != -1 )
        return (unsigned int)v5;
      break;
    }
  }
  v9 = qword_164A28;
  if ( !qword_164A28 )
    goto LABEL_17;
  v10 = off_164A30;
  v5 = 0;
  v11 = 0;
  while ( strcmp(*(const char **)((char *)v10 + v5), s2) )
  {
    ++v11;
    v5 += 40;
    if ( v11 >= v9 )
      goto LABEL_17;
  }
  if ( (_UNKNOWN **)((char *)v10 + v5) && *(_UNKNOWN **)((char *)v10 + v5 + 8) )
    LODWORD(v5) = (int)v5 / -40;
  else
LABEL_17:
    LODWORD(v5) = 0x7FFFFFFF;
  return (unsigned int)v5;
}
// F154B: using guessed type char byte_F154B;
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
