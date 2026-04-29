const char *__fastcall sub_1ADBE0(unsigned __int64 a1)
{
  __int64 module_data; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  int v5; // edx
  _QWORD *v6; // rbx
  __m128 v7; // xmm0
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  const char *v13; // rdx
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+0h] [rbp-68h]
  __int64 v19; // [rsp+8h] [rbp-60h]
  __m128 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_4C2AB8);
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(int *)(v3 + 384);
  v5 = *(_DWORD *)(v3 + 384) + 1;
  v6 = (_QWORD *)(v3 + 24 * v4 + 144);
  *(_DWORD *)(v3 + 384) = v5;
  if ( v5 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v3 + 24 * v4 + 152) = 0;
  v21 = 0;
  v7 = _mm_loadh_ps((const double *)(get_module_data((unsigned int)dword_4C2AB8) + 1344));
  v20 = v7;
  sub_1A9AF0((__int64 *)(v3 + 24 * v4 + 144), (__int64)&v20, a1 + 24, (__int64 *)(a1 + 32));
  v8 = *(_QWORD *)(v3 + 24 * v4 + 152);
  if ( v8 )
  {
    v9 = v8 + 1;
    v10 = *(_QWORD *)(v3 + 24 * v4 + 152);
    --v8;
    if ( *(_QWORD *)(v3 + 24 * v4 + 160) >= v9 )
      goto LABEL_5;
  }
  else
  {
    v10 = 1;
    v9 = 2;
    if ( *(_QWORD *)(v3 + 24 * v4 + 160) >= 2u )
      goto LABEL_5;
  }
  v15 = v3 + 24 * v4 + 144;
  v18 = v9;
  v16 = v3 + 24 * v4;
  v19 = v10;
  v17 = qvector_reserve(v15, *(_QWORD *)(v16 + 144), v9, 1);
  v10 = v19;
  v9 = v18;
  *(_QWORD *)(v16 + 144) = v17;
LABEL_5:
  v11 = *v6;
  v6[1] = v9;
  *(_BYTE *)(v11 + v8) = 32;
  *(_BYTE *)(*v6 + v10) = 0;
  sub_1AC060(a1, (__int64)v6, (__int64)&v20, 6u, *(double *)v7.m128_u64);
  v12 = v6[1];
  if ( v12 > 1 )
  {
    tag_remove(v6, *v6, 0);
    v12 = v6[1];
  }
  v13 = s1;
  if ( v12 )
    return (const char *)*v6;
  return v13;
}
