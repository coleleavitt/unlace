/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C81C
// Address: 0x000000000008C81C

//----- (000000000008C81C) ----------------------------------------------------
void __fastcall sub_8C81C(__int64 a1, __int64 a2, unsigned int a3, char *a4, char *a5)
{
  __int64 v10; // x8
  pthread_mutex_t *v11; // x0
  pthread_mutex_t *v12; // x0
  __int64 v13; // x8
  __int64 align; // x1
  unsigned __int64 v15; // x2
  pthread_mutex_t *v16; // x0
  size_t v17; // x0
  void *v18; // x0
  pthread_mutex_t ptr; // [xsp+0h] [xbp-70h] BYREF
  __int64 v20; // [xsp+28h] [xbp-48h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 == 1 )
  {
    v10 = a1 - 192;
    if ( !a1 )
      v10 = 0;
    a4 = (char *)(*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 440) + 408LL))(*(_QWORD *)(v10 + 440));
  }
  sub_A640C(56, &ptr);
  v11 = pack_dq((pthread_mutex_t *)((char *)&ptr.__align + 28), (unsigned __int64)&ptr.__align + 38, a2 + 1);
  sub_545E8(&ptr, (char *)&ptr.__align + 28, (char *)v11 - ((char *)&ptr.__align + 28));
  v12 = pack_dd((pthread_mutex_t *)((char *)&ptr.__align + 28), (unsigned __int64)&ptr.__align + 33, a3);
  sub_545E8(&ptr, (char *)&ptr.__align + 28, (char *)v12 - ((char *)&ptr.__align + 28));
  v13 = *(&ptr.__align + 1);
  align = ptr.__align;
  v15 = *(&ptr.__align + 1) + 1;
  if ( a4 == a5 )
  {
    if ( *(&ptr.__align + 2) < v15 )
    {
      align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v15, 1u);
      v13 = *(&ptr.__align + 1);
      ptr.__align = align;
    }
    *(_BYTE *)(align + v13) = 1;
    if ( !a5 )
      a5 = "";
    ++*(&ptr.__align + 1);
    v17 = strlen(a5);
    sub_545E8(&ptr, a5, v17 + 1);
  }
  else
  {
    if ( *(&ptr.__align + 2) < v15 )
    {
      align = (__int64)qvector_reserve(&ptr, (void *)ptr.__align, v15, 1u);
      v13 = *(&ptr.__align + 1);
      ptr.__align = align;
    }
    *(_BYTE *)(align + v13) = 0;
    ++*(&ptr.__align + 1);
    v16 = pack_dq(
            (pthread_mutex_t *)((char *)&ptr.__align + 28),
            (unsigned __int64)&ptr.__align + 38,
            (unsigned __int64)(a4 + 1));
    sub_545E8(&ptr, (char *)&ptr.__align + 28, (char *)v16 - ((char *)&ptr.__align + 28));
  }
  v18 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, pthread_mutex_t *))(*(_QWORD *)a1 + 16LL))(a1, 56, &ptr);
  qfree(v18);
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
  }
}
