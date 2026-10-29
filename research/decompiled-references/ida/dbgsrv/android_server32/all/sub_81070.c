/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81070
// Address: 0x00081070

//----- (00081070) --------------------------------------------------------
int __fastcall sub_81070(int a1)
{
  int *v1; // r6
  int *i; // r4
  __pid_t v3; // r0
  __pid_t v4; // r0
  int v5; // r0
  unsigned int v6; // r1
  sem_t *v7; // r0
  int stat_loc[2]; // [sp+4h] [bp-8h] BYREF

  v1 = *(int **)(a1 + 12);
  for ( i = (int *)(a1 + 12); i != v1; v1 = (int *)*v1 )
  {
    if ( !*((_BYTE *)v1 + 28) )
    {
      v3 = v1[2];
      if ( v3 != -1 )
      {
        v4 = waitpid(v3, stat_loc, v1[5] | 1);
        if ( v4 )
        {
          if ( v4 < 1 )
          {
            if ( v4 == -1 && *(_DWORD *)_errno(0) == 10 )
              *((_BYTE *)v1 + 16) = 1;
          }
          else
          {
            v1[3] = stat_loc[0];
          }
          *((_BYTE *)v1 + 28) = 1;
          goto LABEL_15;
        }
        if ( *((_BYTE *)v1 + 29) )
        {
          *((_BYTE *)v1 + 29) = 0;
LABEL_15:
          v5 = v1[6];
          if ( v5 )
          {
            v6 = *(_DWORD *)(v5 + 4);
            v7 = (sem_t *)(v5 + 12);
            if ( v6 > 1 )
              v7 = (sem_t *)v7->__align;
            sem_post(v7);
          }
        }
      }
    }
  }
  return _stack_chk_guard - stat_loc[1];
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
