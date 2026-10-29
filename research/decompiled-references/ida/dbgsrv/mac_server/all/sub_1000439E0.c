/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000439E0
// Address: 0x00000001000439E0

//----- (00000001000439E0) ----------------------------------------------------
char *__fastcall sub_1000439E0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _BYTE *v3; // r15
  __int64 v4; // rdx
  _BYTE *v5; // r12
  __int64 v6; // r14
  unsigned __int8 v8[8]; // [rsp+8h] [rbp-48h] BYREF
  void *__p[2]; // [rsp+10h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-30h]

  v8[0] = 2;
  *(_OWORD *)__p = 0;
  v10 = 0;
  copy_idcv(v8, a3);
  v3 = *(_BYTE **)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v5 = qvector_reserve(a1, *(void **)a1, v4 + 1, 0x20u);
    *(_QWORD *)a1 = v5;
    v4 = *(_QWORD *)(a1 + 8);
  }
  v6 = a2 - (_QWORD)v3;
  memmove(&v5[v6 + 32], &v5[v6], 32 * v4 - v6);
  v5[v6] = 2;
  *(_OWORD *)&v5[v6 + 8] = 0;
  *(_QWORD *)&v5[v6 + 24] = 0;
  copy_idcv(&v5[a2 - (_QWORD)v3], v8);
  ++*(_QWORD *)(a1 + 8);
  if ( v8[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], v8);
  }
  else if ( v8[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
  }
  return &v5[v6];
}
