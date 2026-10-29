/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59048
// Address: 0x0000000000059048

//----- (0000000000059048) ----------------------------------------------------
__int64 __fastcall sub_59048(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x8
  void *v6; // x21
  void *v7; // x0
  __int64 v8; // x20
  void *v10[3]; // [xsp+8h] [xbp-98h] BYREF
  void *ptr; // [xsp+20h] [xbp-80h]
  __int64 v12; // [xsp+28h] [xbp-78h]
  __int64 v13; // [xsp+30h] [xbp-70h]
  __int64 v14; // [xsp+68h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_5AEEC((__int64)v10, a3);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)a1;
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v7 = *(void **)a1;
  }
  else
  {
    v7 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v5 + 1, 0x60u);
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
  }
  v8 = (__int64)v7 + a2 - (_QWORD)v6;
  memmove((void *)(v8 + 96), (const void *)v8, (size_t)v7 + 96 * v5 - v8);
  sub_5AEEC(v8, (__int64)v10);
  ++*(_QWORD *)(a1 + 8);
  if ( ptr )
  {
    v12 = 0;
    qfree(ptr);
    ptr = nullptr;
    v13 = 0;
  }
  if ( v10[0] )
  {
    v10[1] = nullptr;
    qfree(v10[0]);
    v10[0] = nullptr;
    v10[2] = nullptr;
  }
  return v8;
}
