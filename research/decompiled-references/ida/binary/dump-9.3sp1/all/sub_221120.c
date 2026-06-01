__int64 __fastcall sub_221120(__m128i *a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5, int a6)
{
  bool v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r12d
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rax
  __int64 v22[11]; // [rsp+10h] [rbp-58h] BYREF

  v22[3] = __readfsqword(0x28u);
  v10 = a5 != 1;
  if ( a1[4].m128i_i8[0] && a5 != 1 )
  {
    v16 = a1->m128i_i32[2];
    v17 = a1->m128i_u32[1];
    v22[0] = 0;
    v22[1] = 0;
    sub_63E80(v22, v17, v16);
    v20 = (unsigned __int64 *)sub_670E0((_QWORD *)a3[8], v17, v18, v19);
    if ( (unsigned int)sub_141E80(v20, (__int64)v22, nullptr) == 2 )
    {
      qfree(v22[0]);
      return 2;
    }
    qfree(v22[0]);
  }
  v11 = a2;
  v14 = sub_220840(a1, a2, a3, a4, a5, a6);
  if ( (v14 & 1) != 0 && v10 )
  {
    v21 = (unsigned __int64 *)sub_670E0((_QWORD *)a3[8], v11, v12, v13);
    if ( (unsigned int)sub_141E80(v21, a1[1].m128i_i64[0], nullptr) == 2 )
    {
      sub_139250(a3[8]);
      return 2;
    }
  }
  return v14;
}
