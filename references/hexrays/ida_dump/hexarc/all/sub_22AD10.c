__int64 __fastcall sub_22AD10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5, char a6)
{
  _QWORD *v9; // rsi
  __int64 result; // rax
  int v11; // r13d
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v9 = *(_QWORD **)(a1 + 1504);
  v20 = __readfsqword(0x28u);
  if ( a5 )
    sub_1E8570(a3, (__int64)v9, a5, 0);
  else
    sub_1E8300((_DWORD *)a3, v9, a4, 0);
  result = 0;
  if ( (a6 & 2) == 0 )
  {
    if ( !*(_QWORD *)(a2 + 40) )
      goto LABEL_5;
LABEL_9:
    v15.m128_u64[1] = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v15.m128_u64[0] = (unsigned __int64)&off_4ABFE8;
    sub_1194F0(a1, (__int64)&v15);
    sub_1EE080(a1, a2, v14);
    result = 1;
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(a3 + 88);
  if ( *(_DWORD *)a3 == 1 )
    v12 = *(_QWORD *)(a3 + 8);
  else
    v12 = -1;
  v13 = *(_QWORD *)(a1 + 816);
  v15 = _mm_loadh_ps((const double *)(a1 + 816));
  v16 = v13;
  sub_2203C0((__int64)&v15, v12, v11);
  result = sub_229130((__int64)&v15, v12, v11);
  if ( *(_QWORD *)(a2 + 40) )
    goto LABEL_9;
LABEL_5:
  *(_DWORD *)a1 |= 0x20000u;
  return result;
}
