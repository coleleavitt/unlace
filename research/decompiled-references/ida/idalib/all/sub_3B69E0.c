unsigned __int64 __fastcall sub_3B69E0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  int *v6; // rdi
  int v8[4]; // [rsp+0h] [rbp-108h] BYREF
  __int64 v9[2]; // [rsp+10h] [rbp-F8h] BYREF
  int v10[2]; // [rsp+20h] [rbp-E8h] BYREF
  void *v11; // [rsp+28h] [rbp-E0h]
  __int64 v12[2]; // [rsp+30h] [rbp-D8h]
  int v13[2]; // [rsp+40h] [rbp-C8h]
  int v14[2]; // [rsp+48h] [rbp-C0h]
  void *v15; // [rsp+50h] [rbp-B8h]
  __int64 v16; // [rsp+58h] [rbp-B0h]
  int v17[2]; // [rsp+60h] [rbp-A8h]
  int v18[2]; // [rsp+68h] [rbp-A0h]
  int v19[2]; // [rsp+70h] [rbp-98h]
  int v20[2]; // [rsp+78h] [rbp-90h]
  int v21[2]; // [rsp+80h] [rbp-88h] BYREF
  void *ptr; // [rsp+88h] [rbp-80h]
  int v23[4]; // [rsp+90h] [rbp-78h]
  int v24[2]; // [rsp+A0h] [rbp-68h]
  int v25[2]; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 v31; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v32; // [rsp+E8h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v32 = __readfsqword(0x28u);
  *(_OWORD *)v12 = 0;
  v15 = (void *)0xFFFFFFFFLL;
  *(_QWORD *)v17 = 4;
  *(_QWORD *)v18 = 9;
  *(_QWORD *)v19 = 0xFFFFFFFF00000000LL;
  v26 = 0xFFFFFFFFLL;
  *(_OWORD *)v23 = 0;
  *(_QWORD *)v10 = 96;
  v11 = nullptr;
  *(_QWORD *)v13 = -1;
  *(_QWORD *)v14 = 0;
  v16 = -1;
  *(_QWORD *)v20 = 0;
  *(_QWORD *)v21 = 96;
  ptr = nullptr;
  *(_QWORD *)v24 = -1;
  *(_QWORD *)v25 = 0;
  v27 = -1;
  v30 = 0xFFFFFFFF00000000LL;
  v5 = *(unsigned int *)(a2 + 4);
  v28 = 4;
  v29 = 9;
  v31 = 0;
  *(__m128i *)v8 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v5));
  sub_3AEC10((__int64)v10, (unsigned __int8 **)v8, 0, 5);
  *(__m128i *)v9 = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)v8),
                     (__m128i)(*(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 4)));
  sub_3AEC10((__int64)v21, (unsigned __int8 **)v9, 0, 5);
  v6 = v10;
  if ( a3 )
    v6 = v21;
  sub_3B63F0((__int64)v6, 1u);
  if ( ptr )
  {
    *(_QWORD *)v23 = 0;
    qfree(ptr);
  }
  if ( v11 )
  {
    v12[0] = 0;
    qfree(v11);
  }
  return v32 - __readfsqword(0x28u);
}
