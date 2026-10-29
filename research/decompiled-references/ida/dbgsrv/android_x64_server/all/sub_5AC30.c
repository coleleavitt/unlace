/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AC30
// Address: 0x000000000005AC30

//----- (000000000005AC30) ----------------------------------------------------
__int64 __fastcall sub_5AC30(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r14
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  void *v9[3]; // [rsp+8h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+30h] [rbp-58h]
  unsigned __int64 v13; // [rsp+68h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_5D190((__int64)v9, a3);
  v3 = *(char **)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v5 = (char *)qvector_reserve(a1, *(char **)a1, v4 + 1, 0x60u);
    *(_QWORD *)a1 = v5;
    v4 = *(_QWORD *)(a1 + 8);
  }
  v6 = a2 - (_QWORD)v3;
  v7 = (__int64)&v5[a2 - (_QWORD)v3];
  memmove(&v5[v6 + 96], &v5[v6], 96 * v4 - v6);
  sub_5D190(v7, (__int64)v9);
  ++*(_QWORD *)(a1 + 8);
  if ( ptr )
  {
    v11 = 0;
    qfree(ptr);
    ptr = nullptr;
    v12 = 0;
  }
  if ( v9[0] )
  {
    v9[1] = nullptr;
    qfree(v9[0]);
    v9[0] = nullptr;
    v9[2] = nullptr;
  }
  return v7;
}
