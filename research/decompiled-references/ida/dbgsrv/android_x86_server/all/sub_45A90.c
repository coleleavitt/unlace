/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A90
// Address: 0x00045A90

//----- (00045A90) --------------------------------------------------------
int __cdecl sub_45A90(_DWORD *a1, int a2)
{
  pthread_mutex_t *v2; // edi
  char *v3; // eax
  char *v4; // ecx
  FILE *v5; // esi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD v13[5]; // [esp+8h] [ebp-14h] BYREF

  v2 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v3 = byte_EF875;
  v4 = byte_EF875;
  if ( a1[2] )
    v4 = (char *)a1[1];
  if ( a1[7] )
    v3 = (char *)a1[6];
  v5 = qfopen(v4, (int)v3);
  if ( v5 )
  {
    v6 = dword_13BD2C;
    if ( dword_13BD2C )
    {
LABEL_15:
      *(_DWORD *)(a2 + 4) = v6;
      v10 = dword_13BD2C;
      if ( dword_13BD30 >= (unsigned int)(dword_13BD2C + 1) )
      {
        v11 = (_DWORD *)dword_13BD28;
      }
      else
      {
        v11 = qvector_reserve((int)&dword_13BD28, (void *)dword_13BD28, dword_13BD2C + 1, 4u);
        dword_13BD28 = (int)v11;
        v10 = dword_13BD2C;
      }
      v11[v10] = v5;
      ++dword_13BD2C;
      goto LABEL_19;
    }
    v13[0] = 0;
    v7 = (_DWORD *)dword_13BD28;
    if ( dword_13BD28 > (unsigned int)v13 || dword_13BD28 + 4 * dword_13BD30 <= (unsigned int)v13 )
    {
      v8 = 0;
      if ( !dword_13BD30 )
      {
        v7 = qvector_reserve((int)&dword_13BD28, (void *)dword_13BD28, 1u, 4u);
        dword_13BD28 = (int)v7;
        v9 = dword_13BD2C;
        v8 = v13[0];
        goto LABEL_14;
      }
    }
    else
    {
      v8 = 0;
      if ( !dword_13BD30 )
      {
        v7 = qvector_reserve((int)&dword_13BD28, (void *)dword_13BD28, 1u, 4u);
        dword_13BD28 = (int)v7;
        v9 = dword_13BD2C;
        v8 = 0;
LABEL_14:
        v7[v9] = v8;
        v6 = ++dword_13BD2C;
        goto LABEL_15;
      }
    }
    v9 = 0;
    goto LABEL_14;
  }
LABEL_19:
  qmutex_unlock(v2);
  return 0;
}
// 13BD28: using guessed type int dword_13BD28;
// 13BD2C: using guessed type int dword_13BD2C;
// 13BD30: using guessed type int dword_13BD30;
// 13BD5C: using guessed type int dword_13BD5C;
