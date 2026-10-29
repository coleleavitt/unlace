__int64 __fastcall sub_14075F0(const __m128i *a1, _BYTE *a2, signed __int64 a3)
{
  unsigned int v5; // eax
  int v6; // eax
  __int64 *v7; // rsi
  __int64 v8; // r14
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r14
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 *v15; // r14
  int v16; // esi
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 *v20; // [rsp+8h] [rbp-A0h]
  __m128i v21; // [rsp+10h] [rbp-98h] BYREF
  const __m128i *v22; // [rsp+20h] [rbp-88h]
  int v23; // [rsp+28h] [rbp-80h]
  int v24; // [rsp+2Ch] [rbp-7Ch]
  __int64 v25; // [rsp+30h] [rbp-78h]
  char v26; // [rsp+38h] [rbp-70h]
  char v27; // [rsp+39h] [rbp-6Fh]
  __int64 v28; // [rsp+40h] [rbp-68h]
  void *ptr; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+58h] [rbp-50h]
  char v32; // [rsp+5Ch] [rbp-4Ch]
  __int64 v33; // [rsp+60h] [rbp-48h] BYREF

  v5 = sub_2244B30(a2, a3);
  v6 = sub_2244E60(&a1[16], a2, a3, v5);
  if ( v6 == -1 )
    v7 = (__int64 *)(a1[16].m128i_i64[0] + 8LL * a1[16].m128i_u32[2]);
  else
    v7 = (__int64 *)(a1[16].m128i_i64[0] + 8LL * v6);
  sub_13FA370((__int64 **)&v21, v7, 1);
  sub_12EEE10((__int64 **)&v21, (__int64 *)v21.m128i_i64[0], 1);
  v8 = v21.m128i_i64[0];
  sub_13FA370((__int64 **)&v21, (__int64 *)(a1[16].m128i_i64[0] + 8LL * a1[16].m128i_u32[2]), 1);
  sub_12EEE10((__int64 **)&v21, (__int64 *)v21.m128i_i64[0], 1);
  if ( v8 != v21.m128i_i64[0] )
    return *(_QWORD *)(*(_QWORD *)v8 + 8LL);
  v10 = sub_2244B30(a2, a3);
  v11 = sub_2244E60(&a1[40], a2, a3, v10);
  if ( v11 == -1 )
    sub_13FAD80((__int64 **)&v21, (__int64 *)(a1[40].m128i_i64[0] + 8LL * a1[40].m128i_u32[2]), 1);
  else
    sub_13FAD80((__int64 **)&v21, (__int64 *)(a1[40].m128i_i64[0] + 8LL * v11), 1);
  v12 = v21.m128i_i64[0];
  sub_13FAD80((__int64 **)&v21, (__int64 *)(a1[40].m128i_i64[0] + 8LL * a1[40].m128i_u32[2]), 1);
  if ( v12 != v21.m128i_i64[0] )
  {
    sub_FC70B0((__int64)&v21, a1->m128i_i64[1], 0, 1300);
    sub_AEC220((unsigned __int8 **)&v21, a2, a3);
    sub_AEA040((__int64)&v21);
    v13 = *(__int64 **)(*(_QWORD *)v12 + 8LL);
    v14 = 2LL * *(unsigned int *)(*(_QWORD *)v12 + 16LL);
    v20 = &v13[v14];
    if ( v13 == &v13[v14] )
      return sub_13F8CB0((__int64)a1, (__int64)a2, a3);
    v15 = v13;
    while ( 1 )
    {
      v16 = *(_DWORD *)*v15;
      v17 = *(_BYTE *)(*v15 + 20);
      v18 = *(_QWORD *)(*v15 + 8);
      v21 = _mm_loadu_si128(a1);
      v23 = v16;
      ptr = &v33;
      v19 = v15[1];
      v22 = a1;
      v24 = 0;
      v25 = v18;
      v26 = v17;
      v27 = 0;
      v28 = 0;
      v30 = 2;
      v31 = 0;
      v32 = 1;
      sub_1406A60((__int64)&v21, v19);
      if ( v27 )
        break;
      if ( v32 )
      {
        v15 += 2;
        if ( v20 == v15 )
          return sub_13F8CB0((__int64)a1, (__int64)a2, a3);
      }
      else
      {
        v15 += 2;
        free(ptr);
        if ( v20 == v15 )
          return sub_13F8CB0((__int64)a1, (__int64)a2, a3);
      }
    }
    if ( !v32 )
      free(ptr);
  }
  return 0;
}
