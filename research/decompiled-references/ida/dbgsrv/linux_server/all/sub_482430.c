/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482430
// Address: 0x0000000000482430

//----- (0000000000482430) ----------------------------------------------------
__int64 __fastcall sub_482430(int fd)
{
  __pid_t v1; // eax
  __pid_t v3; // ebx
  __pid_t v4; // eax

  v1 = getsid(0);
  if ( v1 == -1 )
    return 0;
  v3 = v1;
  v4 = tcgetsid(fd);
  if ( v4 == -1 )
    return 0;
  else
    return (unsigned int)(v3 != v4) + 1;
}
