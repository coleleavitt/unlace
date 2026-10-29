/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_wait
// Address: 0x00000000000C63F0

//----- (00000000000C63F0) ----------------------------------------------------
bool __fastcall qsem_wait(__int64 a1, int a2)
{
  sem_t *v2; // rbx
  __time_t v3; // rax
  __syscall_slong_t v4; // rcx
  int v5; // ebp
  int v6; // eax
  struct timespec abstime; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v2 = (sem_t *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 8) > 1u )
    v2 = (sem_t *)v2->__align;
  if ( a2 == -1 )
  {
    while ( 1 )
    {
      v6 = sem_wait(v2);
      if ( !v6 )
        break;
      v5 = v6;
      if ( *(_DWORD *)__errno(v2) != 4 )
        return v5 == 0;
    }
    v5 = 0;
    return v5 == 0;
  }
  if ( !sub_C3BE0(&abstime) )
    return 0;
  v3 = a2 / 1000 + abstime.tv_sec;
  abstime.tv_sec = v3;
  v4 = abstime.tv_nsec + 1000000 * (a2 % 1000);
  abstime.tv_nsec = v4;
  if ( v4 >= 1000000000 )
  {
    abstime.tv_nsec = v4 - 1000000000;
    abstime.tv_sec = v3 + 1;
  }
  do
    v5 = sem_timedwait(v2, &abstime);
  while ( v5 && *(_DWORD *)__errno(v2) == 4 );
  return v5 == 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
