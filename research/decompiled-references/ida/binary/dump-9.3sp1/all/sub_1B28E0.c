const char *__fastcall sub_1B28E0(unsigned __int64 a1)
{
  __int64 module_data; // rax
  __int64 v3; // r13
  __int64 v4; // r14
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  const char *v12; // rdx
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __m128 v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  module_data = get_module_data();
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(int *)(v3 + 384);
  v5 = *(_DWORD *)(v3 + 384) + 1;
  v6 = v3 + 24 * v4 + 144;
  *(_DWORD *)(v3 + 384) = v5;
  if ( v5 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v3 + 24 * v4 + 152) = 0;
  v20 = 0;
  v19 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
  sub_1AE7F0((__int64 *)(v3 + 24 * v4 + 144), (__int64)&v19, a1 + 24, (__int64 *)(a1 + 32));
  v7 = *(_QWORD *)(v3 + 24 * v4 + 152);
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = *(_QWORD *)(v3 + 24 * v4 + 152);
    --v7;
    if ( *(_QWORD *)(v3 + 24 * v4 + 160) >= v8 )
      goto LABEL_5;
  }
  else
  {
    v9 = 1;
    v8 = 2;
    if ( *(_QWORD *)(v3 + 24 * v4 + 160) >= 2u )
      goto LABEL_5;
  }
  v14 = v3 + 24 * v4 + 144;
  v17 = v8;
  v15 = v3 + 24 * v4;
  v18 = v9;
  v16 = qvector_reserve(v14, *(_QWORD *)(v15 + 144), v8, 1);
  v9 = v18;
  v8 = v17;
  *(_QWORD *)(v15 + 144) = v16;
LABEL_5:
  v10 = *(_QWORD *)v6;
  *(_QWORD *)(v6 + 8) = v8;
  *(_BYTE *)(v10 + v7) = 32;
  *(_BYTE *)(*(_QWORD *)v6 + v9) = 0;
  sub_1B0D60(a1, (char *)v6, (__int64)&v19, 6u);
  v11 = *(_QWORD *)(v6 + 8);
  if ( v11 > 1 )
  {
    tag_remove();
    v11 = *(_QWORD *)(v6 + 8);
  }
  v12 = s1;
  if ( v11 )
    return *(const char **)v6;
  return v12;
}
