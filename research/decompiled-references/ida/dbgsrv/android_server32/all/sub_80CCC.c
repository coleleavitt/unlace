/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CCC
// Address: 0x00080CCC

//----- (00080CCC) --------------------------------------------------------
int __fastcall sub_80CCC(int a1, int *a2)
{
  int *v3; // r0
  int *v4; // r5
  int *v6; // r6
  int v7; // r7
  unsigned int v8; // r0
  sem_t *v9; // r7
  int *v10; // r0
  int v11; // r1
  int *v12; // r5
  int v14; // [sp+0h] [bp-14h]
  struct timespec abstime; // [sp+8h] [bp-Ch] BYREF
  int v16; // [sp+10h] [bp-4h]

  v3 = (int *)(a1 + 12);
  v4 = *(int **)(a1 + 12);
  if ( v3 == v4 )
  {
LABEL_14:
    if ( !under_debugger )
      interr(1209);
    goto LABEL_18;
  }
  while ( v4 + 2 != a2 )
  {
    v4 = (int *)*v4;
    if ( v3 == v4 )
      goto LABEL_14;
  }
  v6 = (int *)_errno(v3);
  v7 = a2[4];
  v14 = *v6;
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    v9 = (sem_t *)(v7 + 12);
    if ( v8 > 1 )
      v9 = (sem_t *)v9->__align;
    if ( sub_7F0E8(&abstime) )
    {
      if ( abstime.tv_nsec >= 0x3B9ACA00u )
      {
        abstime.tv_nsec -= 1000000000;
        ++abstime.tv_sec;
      }
      while ( sem_timedwait(v9, &abstime) )
      {
        if ( *v6 != 4 )
          goto LABEL_13;
      }
      if ( !under_debugger )
        interr(1158);
LABEL_18:
      __debugbreak();
    }
  }
LABEL_13:
  *(_DWORD *)v4[1] = *v4;
  v10 = (int *)*v4;
  v11 = v4[1];
  v12 = v4 + 2;
  v10[1] = v11;
  qsem_free(v12[4]);
  qfree(v12 - 2);
  --*(_DWORD *)(a1 + 20);
  *v6 = v14;
  return _stack_chk_guard - v16;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
