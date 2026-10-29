/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_create
// Address: 0x0000000100072A20

//----- (0000000100072A20) ----------------------------------------------------
_QWORD *__fastcall qsem_create(char *a1, __int64 a2)
{
  char *v4; // x0
  _QWORD *v5; // x19
  mode_t v6; // w23
  sem_t *v7; // x21
  size_t v8; // x0
  size_t v9; // x22
  unsigned __int64 v10; // x23
  _QWORD *v11; // x1
  _QWORD *v12; // x0
  char v14[31]; // [xsp+19h] [xbp-57h] BYREF

  v4 = (char *)operator new(0x20u);
  v5 = v4;
  *((_QWORD *)v4 + 1) = 0;
  *((_QWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = 0;
  if ( a1 && *a1 )
  {
    v6 = umask(0);
    if ( strlen(a1) >= 0x1F )
    {
      sub_10007292C(a1, v14, 31);
      v14[30] = 0;
      a1 = v14;
    }
    v7 = sem_open(a1, 512, 438, a2);
    umask(v6);
    if ( v7 != (sem_t *)-1LL )
    {
      v5[3] = v7;
      v8 = strlen(a1);
      if ( v8 )
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = (_QWORD *)*v5;
        if ( v5[2] < v8 + 1 )
        {
          v11 = qvector_reserve(v5, v11, v10, 1u);
          *v5 = v11;
        }
        v5[1] = v10;
        memmove(v11, a1, v9);
        *(_BYTE *)(*v5 + v9) = 0;
      }
      else
      {
        v5[1] = 0;
      }
      return v5;
    }
    goto LABEL_11;
  }
  v7 = (sem_t *)(v4 + 24);
  if ( !semaphore_create(mach_task_self_, (semaphore_t *)v4 + 6, 0, a2) )
  {
LABEL_11:
    if ( v7 != (sem_t *)-1LL )
      return v5;
  }
  v12 = (_QWORD *)*v5;
  if ( *v5 )
  {
    v5[1] = 0;
    qfree(v12);
  }
  operator delete(v5);
  return nullptr;
}
// 100072B2C: conditional instruction was optimized away because x21.8!=FFFFFFFFFFFFFFFF
// 100072BB8: conditional instruction was optimized away because x21.8!=FFFFFFFFFFFFFFFF
