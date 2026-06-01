/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0E30
// Address: 0x080D0E30

//----- (080D0E30) --------------------------------------------------------
unsigned int __cdecl sub_80D0E30(int a1)
{
  int *v1; // esi
  int *i; // edi
  __pid_t v3; // eax
  __pid_t v4; // eax
  unsigned int result; // eax
  int stat_loc; // [esp+0h] [ebp-24h] BYREF
  unsigned int v7; // [esp+4h] [ebp-20h]

  v7 = __readgsdword(0x14u);
  v1 = *(int **)(a1 + 12);
  for ( i = (int *)(a1 + 12); v1 != i; v1 = (int *)*v1 )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)v1 + 28) )
      {
        v3 = v1[2];
        if ( v3 != -1 )
          break;
      }
LABEL_5:
      v1 = (int *)*v1;
      if ( v1 == i )
        goto LABEL_12;
    }
    v4 = waitpid(v3, &stat_loc, v1[5] | 1);
    if ( !v4 )
    {
      if ( *((_BYTE *)v1 + 29) )
      {
        *((_BYTE *)v1 + 29) = 0;
        sub_80D0DE0(v1[6]);
      }
      goto LABEL_5;
    }
    if ( v4 <= 0 )
    {
      if ( v4 == -1 && *__errno_location() == 10 )
        *((_BYTE *)v1 + 16) = 1;
    }
    else
    {
      v1[3] = stat_loc;
    }
    *((_BYTE *)v1 + 28) = 1;
    sub_80D0DE0(v1[6]);
  }
LABEL_12:
  result = v7 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
