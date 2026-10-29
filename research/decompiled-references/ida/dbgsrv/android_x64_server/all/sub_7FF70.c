/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7FF70
// Address: 0x000000000007FF70

//----- (000000000007FF70) ----------------------------------------------------
unsigned __int64 __fastcall sub_7FF70(__int64 a1, __int64 a2, char *a3, int a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  char *v10; // rax
  __int128 *v12; // [rsp+8h] [rbp-70h] BYREF
  __int128 v13; // [rsp+10h] [rbp-68h] BYREF
  char v14[8]; // [rsp+20h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+40h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v6 - 1;
  if ( !v6 )
    v7 = 0;
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v7 + 2) )
  {
    v10 = *(char **)a1;
  }
  else
  {
    v10 = (char *)qvector_reserve(a1, *(char **)a1, v7 + 2, 1u);
    *(_QWORD *)a1 = v10;
  }
  *(_QWORD *)(a1 + 8) = v7 + 2;
  v10[v7] = 10;
  *(_BYTE *)(*(_QWORD *)a1 + v7 + 1) = 0;
  v14[0] = 2;
  *(_OWORD *)ptr = 0;
  v16 = 0;
  get_idcv_attr(v14, a2, a3, 1, 0.0, a6);
  v13 = 0;
  v12 = &v13;
  sub_71F60(a1, (unsigned __int64)v14, a3, a4, (__int64 **)&v12, 0.0, a6);
  sub_802C0((__int64)&v12, (_QWORD *)v13);
  if ( v14[0] == 5 )
  {
    sub_72DD0((char **)ptr[0], v14, 0.0, a6);
  }
  else if ( v14[0] == 7 && ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v16 = 0;
  }
  return __readfsqword(0x28u);
}
