const char *__fastcall sub_1AA2E0(__int64 a1)
{
  __int64 module_data; // rax
  __int64 v2; // rbx
  __int64 v3; // r13
  int v4; // edx
  _QWORD *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r14
  __m128i v10; // xmm1
  __int64 v11; // rdi
  __m128i v12; // xmm1
  const char *result; // rax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4C1BB8);
  v2 = *(_QWORD *)(module_data + 1024);
  v3 = *(int *)(v2 + 384);
  v4 = *(_DWORD *)(v2 + 384) + 1;
  v5 = (_QWORD *)(v2 + 24 * v3 + 144);
  *(_DWORD *)(v2 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v2 + 24 * v3 + 152) = 0;
  v6 = 24 * v3;
  v7 = v2 + 24 * v3;
  sub_25B8A0(&v15, *(_QWORD *)(module_data + 1344), a1, 1);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = v15;
  v15 = 0;
  v10 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v8 )
  {
    *(_QWORD *)(v7 + 152) = 0;
    v14 = v10;
    qfree(v8);
    v11 = v15;
    v12 = _mm_load_si128(&v14);
    *(_QWORD *)(v7 + 144) = v9;
    *(__m128i *)(v2 + v6 + 152) = v12;
    if ( v11 )
    {
      v16.m128i_i64[0] = 0;
      qfree(v11);
    }
  }
  else
  {
    *(_QWORD *)(v7 + 144) = v9;
    *(__m128i *)(v2 + v6 + 152) = v10;
  }
  result = s1;
  if ( v5[1] )
    return (const char *)*v5;
  return result;
}
