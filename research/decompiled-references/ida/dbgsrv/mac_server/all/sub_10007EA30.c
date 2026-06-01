/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007EA30
// Address: 0x000000010007EA30

//----- (000000010007EA30) ----------------------------------------------------
__int64 __fastcall sub_10007EA30(__int64 a1)
{
  __int64 *v1; // r15
  __int64 *i; // rbx
  pid_t v3; // edi
  pid_t v4; // eax
  __int64 v5; // rax
  int v7; // [rsp+Ch] [rbp-24h] BYREF

  v1 = *(__int64 **)(a1 + 24);
  for ( i = (__int64 *)(a1 + 24); v1 != i; v1 = (__int64 *)*v1 )
  {
    if ( !*((_BYTE *)v1 + 40) )
    {
      v3 = *((_DWORD *)v1 + 4);
      if ( v3 != -1 )
      {
        v4 = waitpid(v3, &v7, *((_DWORD *)v1 + 7) | 1);
        if ( v4 )
        {
          if ( v4 <= 0 )
          {
            if ( v4 == -1 && *__error() == 10 )
              *((_BYTE *)v1 + 24) = 1;
          }
          else
          {
            *((_DWORD *)v1 + 5) = v7;
          }
          *((_BYTE *)v1 + 40) = 1;
          goto LABEL_16;
        }
        if ( *((_BYTE *)v1 + 41) == 1 )
        {
          *((_BYTE *)v1 + 41) = 0;
LABEL_16:
          v5 = v1[4];
          if ( v5 )
          {
            if ( *(_QWORD *)(v5 + 8) > 1u )
              sem_post(*(sem_t **)(v5 + 24));
            else
              semaphore_signal(*(_DWORD *)(v5 + 24));
          }
        }
      }
    }
  }
  return __stack_chk_guard;
}
