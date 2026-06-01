/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4B00
// Address: 0x000B4B00

//----- (000B4B00) --------------------------------------------------------
unsigned int __cdecl sub_B4B00(int a1)
{
  int *i; // edi
  __pid_t v2; // eax
  __pid_t v3; // eax
  int v4; // ecx
  int v5; // eax
  bool v6; // cc
  sem_t *v7; // eax
  int stat_loc[6]; // [esp+14h] [ebp-18h] BYREF

  stat_loc[1] = __readgsdword(0x14u);
  for ( i = *(int **)(a1 + 12); (int *)(a1 + 12) != i; i = (int *)*i )
  {
    if ( !*((_BYTE *)i + 28) )
    {
      v2 = i[2];
      if ( v2 != -1 )
      {
        v3 = waitpid(v2, stat_loc, i[5] | 1);
        if ( v3 )
        {
          if ( v3 <= 0 )
          {
            if ( v3 == -1 && *(_DWORD *)__errno(v4) == 10 )
              *((_BYTE *)i + 16) = 1;
          }
          else
          {
            i[3] = stat_loc[0];
          }
          *((_BYTE *)i + 28) = 1;
          goto LABEL_15;
        }
        if ( *((_BYTE *)i + 29) )
        {
          *((_BYTE *)i + 29) = 0;
LABEL_15:
          v5 = i[6];
          if ( v5 )
          {
            v6 = *(_DWORD *)(v5 + 4) <= 1u;
            v7 = (sem_t *)(v5 + 12);
            if ( !v6 )
              v7 = (sem_t *)v7->__align;
            sem_post(v7);
          }
        }
      }
    }
  }
  return __readgsdword(0x14u);
}
// B4B8E: variable 'v4' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
