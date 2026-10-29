/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6510
// Address: 0x00000000000C6510

//----- (00000000000C6510) ----------------------------------------------------
unsigned __int64 __fastcall sub_C6510(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int *v3; // r15
  int v4; // ebp
  __int64 v5; // rax
  sem_t *v6; // r12
  struct timespec v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 24);
  if ( (_QWORD *)(a1 + 24) == v2 )
  {
LABEL_4:
    if ( !(_BYTE)under_debugger )
      interr(1209);
    goto LABEL_17;
  }
  while ( v2 + 2 != a2 )
  {
    v2 = (_QWORD *)*v2;
    if ( (_QWORD *)(a1 + 24) == v2 )
      goto LABEL_4;
  }
  v3 = (int *)__errno(a1);
  v4 = *v3;
  v5 = a2[2];
  if ( v5 )
  {
    v6 = (sem_t *)(v5 + 24);
    if ( *(_QWORD *)(v5 + 8) > 1u )
      v6 = (sem_t *)v6->__align;
    if ( sub_C3BE0(&v8) )
    {
      if ( v8.tv_nsec >= 1000000000 )
      {
        v8.tv_nsec -= 1000000000LL;
        ++v8.tv_sec;
      }
      while ( sem_timedwait(v6, &v8) )
      {
        if ( *v3 != 4 )
          goto LABEL_14;
      }
      if ( !(_BYTE)under_debugger )
        interr(1158);
LABEL_17:
      BUG();
    }
  }
LABEL_14:
  *(_QWORD *)v2[1] = *v2;
  *(_QWORD *)(*v2 + 8LL) = v2[1];
  qsem_free((sem_t **)v2[4]);
  qfree(v2);
  --*(_QWORD *)(a1 + 40);
  *v3 = v4;
  return __readfsqword(0x28u);
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
