__m128i *__fastcall sub_DC0390(__m128i *a1, int a2, int a3, unsigned __int8 a4, int a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  int vars10; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  __int64 vars580; // [rsp+580h] [rbp+580h]
  int vars590; // [rsp+590h] [rbp+590h]
  int vars5E8; // [rsp+5E8h] [rbp+5E8h]
  int vars814; // [rsp+814h] [rbp+814h]
  int vars830; // [rsp+830h] [rbp+830h]

  sub_DC7C20((unsigned int)&vars0, a2, a3, a4, a5, a6, vars0);
  vars5E8 = 0;
  vars830 = 0;
  if ( vars580 )
    v7 = *(_DWORD *)(vars580 - 4);
  else
    v7 = 0;
  vars814 = v7;
  vars590 = sub_DDB0A0((int)&vars10, vars0, vars8, vars10, vars18);
  sub_DC3500(&vars0, a6);
  v8 = *(_QWORD *)(sub_DC07A0(&vars0) + 8);
  if ( v8 && *(_DWORD *)(v8 - 4) )
  {
    v9 = vars0;
    sub_DFBCB0(vars0);
    v10 = *(_QWORD *)(v9 + 296);
    v11 = *(_QWORD *)(sub_DC07A0(&vars0) + 8);
    v12 = 0x7FFFFFFF8LL;
    if ( v11 )
      v12 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
    v13 = *(_QWORD *)(v11 + v12);
    *a1 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v10);
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
  }
  else
  {
    v14 = vars0;
    sub_DFBCB0(vars0);
    v15 = *(_QWORD *)(v14 + 296);
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v15;
  }
  sub_DC4720(&vars0);
  return a1;
}

