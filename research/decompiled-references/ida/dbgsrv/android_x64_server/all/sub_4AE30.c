/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AE30
// Address: 0x000000000004AE30

//----- (000000000004AE30) ----------------------------------------------------
__int64 __fastcall sub_4AE30(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  void *v4; // r14
  void *v5; // rdi
  __int64 v6; // rcx
  void *v8; // [rsp+0h] [rbp-48h]
  __int64 v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = qalloc_or_throw(8 * v3);
    memcpy(v4, *(const void **)a2, 8 * v3);
  }
  else
  {
    v4 = nullptr;
  }
  v8 = v4;
  v9 = v3;
  v10 = v3;
  v5 = *(void **)a1;
  v6 = v3;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    v4 = v8;
    v6 = v9;
    v3 = v10;
  }
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = v3;
  return a1;
}
