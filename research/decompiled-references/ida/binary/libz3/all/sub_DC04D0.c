__m128i *__fastcall sub_DC04D0(__m128i *a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  int vars10; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  __int64 vars580; // [rsp+580h] [rbp+580h]
  int vars590; // [rsp+590h] [rbp+590h]
  int vars5E8; // [rsp+5E8h] [rbp+5E8h]
  int vars814; // [rsp+814h] [rbp+814h]
  int vars830; // [rsp+830h] [rbp+830h]

  sub_DC7C20((unsigned int)&vars0, a2, a3, 0, a4, a5, vars0);
  vars5E8 = 0;
  vars830 = 0;
  if ( vars580 )
    v5 = *(_DWORD *)(vars580 - 4);
  else
    v5 = 0;
  vars814 = v5;
  vars590 = sub_DDB0A0((int)&vars10, vars0, vars8, vars10, vars18);
  sub_DC4C60(&vars0);
  v6 = *(_QWORD *)(sub_DC0880(&vars0) + 8);
  if ( v6 && *(_DWORD *)(v6 - 4) )
  {
    v7 = vars0;
    v8 = *(_QWORD *)(vars0 + 320);
    if ( !v8 )
    {
      v8 = sub_186B270(0x210u);
      sub_17F71C0(v8);
      *(_QWORD *)(v7 + 320) = v8;
    }
    v9 = *(_QWORD *)(sub_DC0880(&vars0) + 8);
    v10 = 0x7FFFFFFF8LL;
    if ( v9 )
      v10 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
    v11 = *(_QWORD *)(v9 + v10);
    *a1 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(unsigned __int64)v8);
    if ( v11 )
      ++*(_DWORD *)(v11 + 4);
  }
  else
  {
    v12 = vars0;
    v13 = *(_QWORD *)(vars0 + 320);
    if ( !v13 )
    {
      v13 = sub_186B270(0x210u);
      sub_17F71C0(v13);
      *(_QWORD *)(v12 + 320) = v13;
    }
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v13;
  }
  sub_DC4720(&vars0);
  return a1;
}

