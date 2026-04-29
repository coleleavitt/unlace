__int64 __fastcall sub_2214E0(__m128i *a1, __int64 a2, _QWORD *a3, unsigned int *a4, int a5)
{
  bool v9; // r14
  unsigned int v10; // r12d
  int v12; // edx
  int v13; // esi
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 v16[11]; // [rsp+10h] [rbp-58h] BYREF

  v16[3] = __readfsqword(0x28u);
  v9 = a5 != 1;
  if ( a1[4].m128i_i8[0] && a5 != 1 )
  {
    v12 = a1->m128i_i32[2];
    v13 = a1->m128i_i32[1];
    v16[0] = 0;
    v16[1] = 0;
    sub_63880(v16, v13, v12);
    v14 = (__int64 *)sub_66AE0((_QWORD *)a3[8]);
    if ( (unsigned int)sub_1418C0(v14, (__int64)v16, nullptr) == 2 )
    {
      qfree(v16[0]);
      return 2;
    }
    qfree(v16[0]);
  }
  v10 = sub_220C00(a1, a2, a3, a4, a5);
  if ( (v10 & 1) != 0 && v9 )
  {
    v15 = (__int64 *)sub_66AE0((_QWORD *)a3[8]);
    if ( (unsigned int)sub_1418C0(v15, a1[1].m128i_i64[0], nullptr) == 2 )
    {
      sub_138C90(a3[8]);
      return 2;
    }
  }
  return v10;
}
