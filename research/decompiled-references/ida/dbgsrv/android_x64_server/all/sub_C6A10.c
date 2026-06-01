/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6A10
// Address: 0x00000000000C6A10

//----- (00000000000C6A10) ----------------------------------------------------
unsigned __int64 __fastcall sub_C6A10(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *i; // r15
  __int64 v3; // rdi
  __pid_t v4; // eax
  __int64 v5; // rax
  sem_t *v6; // rdi
  int stat_loc; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v1 = *(__int64 **)(a1 + 24);
  for ( i = (__int64 *)(a1 + 24); i != v1; v1 = (__int64 *)*v1 )
  {
    if ( !*((_BYTE *)v1 + 40) )
    {
      v3 = *((unsigned int *)v1 + 4);
      if ( (_DWORD)v3 != -1 )
      {
        v4 = waitpid(v3, &stat_loc, *((_DWORD *)v1 + 7) | 1);
        if ( v4 )
        {
          if ( v4 <= 0 )
          {
            if ( v4 == -1 && *(_DWORD *)__errno(v3) == 10 )
              *((_BYTE *)v1 + 24) = 1;
          }
          else
          {
            *((_DWORD *)v1 + 5) = stat_loc;
          }
          *((_BYTE *)v1 + 40) = 1;
          goto LABEL_13;
        }
        if ( *((_BYTE *)v1 + 41) )
        {
          *((_BYTE *)v1 + 41) = 0;
LABEL_13:
          v5 = v1[4];
          if ( v5 )
          {
            v6 = (sem_t *)(v5 + 24);
            if ( *(_QWORD *)(v5 + 8) > 1u )
              v6 = (sem_t *)v6->__align;
            sem_post(v6);
          }
        }
      }
    }
  }
  return __readfsqword(0x28u);
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
