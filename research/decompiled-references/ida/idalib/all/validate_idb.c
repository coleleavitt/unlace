__int64 __fastcall validate_idb(
        char a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int *v14; // rbx
  int *v15; // rax
  __int64 *p_ptr; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  double v21; // xmm4_8
  double v22; // xmm5_8
  void **v23; // r15
  __int64 v24; // r13
  void **v25; // r12
  __int64 i; // r14
  void *v27; // rdi
  __int64 v29; // [rsp+8h] [rbp-110h]
  __int64 *v30; // [rsp+10h] [rbp-108h]
  void *ptr; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v32; // [rsp+28h] [rbp-F0h]
  _BYTE v33[144]; // [rsp+40h] [rbp-D8h] BYREF
  int v34; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+D8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v30 = *(__int64 **)(qword_2CCB598 + 1672);
  v14 = &v34;
  v15 = (int *)v33;
  do
  {
    *(_QWORD *)v15 = 0;
    v15 += 6;
    *((_OWORD *)v15 - 1) = 0;
  }
  while ( v15 != &v34 );
  v34 = 0;
  if ( (a1 & 4) == 0 )
    sub_387AC0();
  p_ptr = (__int64 *)&ptr;
  if ( (a1 & 2) == 0 )
    p_ptr = nullptr;
  ptr = nullptr;
  v32 = 0;
  v29 = sub_6B7B80(v30, (__int64)v33, (a1 & 4) != 0, p_ptr, a13, a14, 0.0, a3, a4, a5, a6, a7, a8, a9);
  if ( v29 )
  {
    if ( (a1 & 2) != 0 )
      sub_378E50();
    if ( (a1 & 1) != 0 )
      sub_6B7DC0(v30, (__int64)v33, 0.0, a3, a4, a5, v21, v22, a8, a9, v17, v18, v19, v20);
  }
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  do
  {
    v23 = *((void ***)v14 - 3);
    v14 -= 6;
    if ( v23 )
    {
      v24 = *((_QWORD *)v14 + 1);
      if ( v24 )
      {
        v25 = v23;
        for ( i = 0; i != v24; ++i )
        {
          v27 = *v25;
          if ( *v25 )
          {
            v25[1] = nullptr;
            qfree(v27);
          }
          v25 += 3;
        }
      }
      qfree(v23);
    }
  }
  while ( v14 != (int *)v33 );
  return v29;
}
