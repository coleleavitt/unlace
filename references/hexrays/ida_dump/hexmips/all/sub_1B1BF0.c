const char *__fastcall sub_1B1BF0(unsigned __int64 *a1, double a2, double a3)
{
  __int64 module_data; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  int v6; // edx
  __int64 v7; // rbx
  __m128i si128; // xmm0
  const char *result; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rbp
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4CF8F8);
  v4 = *(_QWORD *)(module_data + 1024);
  v5 = *(int *)(v4 + 384);
  v6 = *(_DWORD *)(v4 + 384) + 1;
  v7 = v4 + 24 * v5 + 144;
  *(_DWORD *)(v4 + 384) = v6;
  if ( v6 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v4 + 24 * v5 + 152) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
  v15 = si128;
  if ( (unsigned int)sub_3121C0(a1, &v15) )
  {
    sub_1AF0D0(a1, (__int64 *)(v4 + 24 * v5 + 144), *(double *)si128.m128i_i64, a3);
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v4 + 24 * v5 + 152);
  if ( v10 )
  {
    v12 = v10 + 5;
    v11 = v10 + 6;
    --v10;
    if ( *(_QWORD *)(v4 + 24 * v5 + 160) >= v11 )
      goto LABEL_10;
LABEL_12:
    *(_QWORD *)(v4 + 24 * v5 + 144) = qvector_reserve(v4 + 24 * v5 + 144, *(_QWORD *)(v4 + 24 * v5 + 144), v11, 1);
    goto LABEL_10;
  }
  v11 = 7;
  v12 = 6;
  if ( *(_QWORD *)(v4 + 24 * v5 + 160) < 7u )
    goto LABEL_12;
LABEL_10:
  v13 = *(_QWORD *)v7;
  *(_QWORD *)(v4 + 24 * v5 + 152) = v11;
  *(_BYTE *)(v13 + v12) = 0;
  v14 = *(_QWORD *)v7 + v10;
  *(_DWORD *)v14 = 1296845889;
  *(_WORD *)(v14 + 4) = 19781;
LABEL_5:
  result = s1;
  if ( *(_QWORD *)(v4 + 24 * v5 + 152) )
    return *(const char **)v7;
  return result;
}
