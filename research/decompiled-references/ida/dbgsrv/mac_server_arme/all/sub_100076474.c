/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100076474
// Address: 0x0000000100076474

//----- (0000000100076474) ----------------------------------------------------
int *__fastcall sub_100076474(int *result)
{
  int *v1; // x19
  int *v2; // x20
  __int64 v3; // x8
  int v4; // [xsp+4h] [xbp-2Ch] BYREF

  v1 = result + 6;
  v2 = *((int **)result + 3);
  if ( v2 != result + 6 )
  {
    do
    {
      if ( (v2[10] & 1) != 0 )
        goto LABEL_4;
      result = (int *)(unsigned int)v2[4];
      if ( (_DWORD)result == -1 )
        goto LABEL_4;
      result = (int *)waitpid((pid_t)result, &v4, v2[7] | 1);
      if ( (_DWORD)result )
      {
        if ( (int)result < 1 )
        {
          if ( (_DWORD)result == -1 )
          {
            result = __error();
            if ( *result == 10 )
              *((_BYTE *)v2 + 24) = 1;
          }
        }
        else
        {
          v2[5] = v4;
        }
        *((_BYTE *)v2 + 40) = 1;
        v3 = *((_QWORD *)v2 + 4);
        if ( !v3 )
          goto LABEL_4;
      }
      else
      {
        if ( *((_BYTE *)v2 + 41) != 1 )
          goto LABEL_4;
        *((_BYTE *)v2 + 41) = 0;
        v3 = *((_QWORD *)v2 + 4);
        if ( !v3 )
          goto LABEL_4;
      }
      if ( *(_QWORD *)(v3 + 8) > 1u )
        result = (int *)sem_post(*(sem_t **)(v3 + 24));
      else
        result = (int *)semaphore_signal(*(_DWORD *)(v3 + 24));
LABEL_4:
      v2 = *(int **)v2;
    }
    while ( v2 != v1 );
  }
  return result;
}
