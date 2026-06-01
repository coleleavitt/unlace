unsigned __int64 __fastcall sub_3B2180(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  int *v6; // rdi
  int v8[4]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v9[2]; // [rsp+10h] [rbp-E8h] BYREF
  int v10[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *v11; // [rsp+28h] [rbp-D0h]
  __int64 v12[2]; // [rsp+30h] [rbp-C8h]
  int v13[2]; // [rsp+40h] [rbp-B8h]
  int v14[2]; // [rsp+48h] [rbp-B0h]
  void *v15; // [rsp+50h] [rbp-A8h]
  __int64 v16; // [rsp+58h] [rbp-A0h]
  int v17[2]; // [rsp+60h] [rbp-98h]
  int v18[2]; // [rsp+68h] [rbp-90h]
  int v19; // [rsp+70h] [rbp-88h]
  int v20[2]; // [rsp+80h] [rbp-78h] BYREF
  void *ptr; // [rsp+88h] [rbp-70h]
  int v22[4]; // [rsp+90h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+B0h] [rbp-48h]
  __int64 v26; // [rsp+B8h] [rbp-40h]
  __int64 v27; // [rsp+C0h] [rbp-38h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-30h]
  int v29; // [rsp+D0h] [rbp-28h]
  unsigned __int64 v30; // [rsp+D8h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v30 = __readfsqword(0x28u);
  *(_OWORD *)v12 = 0;
  v16 = 4;
  *(_QWORD *)v14 = 0xFFFFFFFF00000000LL;
  v15 = (void *)0xFFFFFFFF00000000LL;
  *(_QWORD *)v17 = 9;
  *(_QWORD *)v18 = 0xFFFFFFFF00000000LL;
  v24 = 0xFFFFFFFF00000000LL;
  v25 = 0xFFFFFFFF00000000LL;
  v26 = 4;
  v27 = 9;
  *(_OWORD *)v22 = 0;
  *(_QWORD *)v10 = 88;
  v11 = nullptr;
  *(_QWORD *)v13 = 0xFFFFFFFFLL;
  v19 = 0;
  *(_QWORD *)v20 = 88;
  ptr = nullptr;
  v23 = 0xFFFFFFFFLL;
  v28 = 0xFFFFFFFF00000000LL;
  v5 = *(unsigned int *)(a2 + 4);
  v29 = 0;
  *(__m128i *)v8 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v5));
  sub_3AA4F0((__int64)v10, (unsigned __int8 **)v8, 0, 5);
  *(__m128i *)v9 = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)v8),
                     (__m128i)(*(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 4)));
  sub_3AA4F0((__int64)v20, (unsigned __int8 **)v9, 0, 5);
  v6 = v10;
  if ( a3 )
    v6 = v20;
  sub_3B1BA0((__int64)v6, 1);
  if ( ptr )
  {
    *(_QWORD *)v22 = 0;
    qfree(ptr);
  }
  if ( v11 )
  {
    v12[0] = 0;
    qfree(v11);
  }
  return v30 - __readfsqword(0x28u);
}

