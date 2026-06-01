__int64 __fastcall sub_1CE6A30(
        _QWORD *a1,
        __m128i *a2,
        unsigned int a3,
        const __m128i *a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  __m128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v28; // [rsp+0h] [rbp-190h]
  __int64 v29; // [rsp+8h] [rbp-188h] BYREF
  __int64 v30; // [rsp+10h] [rbp-180h] BYREF
  _BYTE v31[144]; // [rsp+18h] [rbp-178h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-E8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-E0h]
  __int64 v34; // [rsp+B8h] [rbp-D8h]
  _BYTE v35[64]; // [rsp+C0h] [rbp-D0h] BYREF
  void *v36[2]; // [rsp+100h] [rbp-90h]
  __int64 v37; // [rsp+110h] [rbp-80h]
  _QWORD *v38; // [rsp+118h] [rbp-78h]
  __m128 v39; // [rsp+120h] [rbp-70h]
  __int64 v40; // [rsp+130h] [rbp-60h]
  __int64 v41; // [rsp+138h] [rbp-58h]
  __int64 v42; // [rsp+140h] [rbp-50h]
  __int64 v43; // [rsp+148h] [rbp-48h]

  v9 = (__m128)_mm_loadu_si128(a4);
  v38 = a1;
  ptr = v35;
  v34 = 0x800000000LL;
  v10 = a4[1].m128i_i64[0];
  v32 = 0;
  v40 = v10;
  v43 = 0x101010000LL;
  *(_OWORD *)v36 = 0;
  v37 = 0;
  v39 = v9;
  v41 = 0;
  v42 = 0;
  sub_1A395A0((__int64)&v32);
  if ( (unsigned __int8)sub_1CE41F0(
                          (__int64)a1,
                          (__int64)&v32,
                          nullptr,
                          a2,
                          0,
                          0,
                          0.0,
                          *(double *)v9.m128_u64,
                          a3 | 0x100000000LL,
                          nullptr,
                          1u)
    || (_DWORD)v32 == 5 )
  {
LABEL_11:
    v19 = 1;
    goto LABEL_12;
  }
  if ( (_DWORD)v32 == 1 || (v15 = a2->m128i_u32[0], (_DWORD)v15) && a2->m128i_i32[1] && !a2->m128i_i64[1] )
  {
    v19 = sub_1CB4410((__int64)a1, (__int64)a2, a3, a4, a5, v14);
  }
  else
  {
    if ( !(_DWORD)v34 )
    {
      v16 = sub_16A2930((__int64)a1, (__int64)a2, 0, v15, v13, v14);
      sub_168B9F0((__int64)v31, a1 + 1, a4->m128i_u32[2], 0x10B2u, 0);
      v29 = a4->m128i_i64[0];
      v17 = sub_15894B0((__int64)v31, &v29);
      v18 = v17;
      if ( *(_BYTE *)(v17 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v17 + 32), v16, 0xCu);
      }
      else if ( *(_BYTE *)(v17 + 132) )
      {
        v21 = sub_168B9E0((_QWORD *)v17);
        v25 = *(_QWORD *)(v18 + 16);
        if ( v25 )
        {
          v28 = v21;
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
          v21 = v28;
        }
        v30 = v25;
        v26 = sub_1587BC0(v21, &v30, v21, v22, v23, v24);
        sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v18 + 128) + 8), v16, 0xCu);
      }
      v30 = a2->m128i_i64[0];
      sub_1587DB0(v18, &v30);
      sub_15F7200(v31);
      goto LABEL_11;
    }
    if ( (unsigned __int8)sub_19C4B30((__int64)a1, (__int64)a2, (__int64)&v32, a6) )
      v19 = (__int64)sub_19CC8A0((__int64)a1, a2, a3, (__int64)&v32, a5, 0, (__m128)0LL, v9);
    else
      v19 = (__int64)sub_1CD7830((unsigned __int64)a1, a2->m128i_i64, a3, (__int64)&v32, 0, a5, (__m128i)0LL, v9);
  }
LABEL_12:
  if ( !BYTE3(v43) )
  {
LABEL_22:
    if ( !BYTE4(v43) || (_DWORD)v32 != 5 )
      goto LABEL_16;
LABEL_24:
    sub_1A445B0((__int64)v38, (__int64)&v32, v11, v12, v13);
    goto LABEL_16;
  }
  if ( (_DWORD)v32 == 5 )
  {
    if ( !BYTE4(v43) )
      goto LABEL_16;
    goto LABEL_24;
  }
  if ( v36[1] && (*(_BYTE *)(v38[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v38, (__int64)&v32);
    goto LABEL_22;
  }
LABEL_16:
  if ( v36[0] )
    sub_1A39780((char *)v36[0]);
  if ( ptr != v35 )
    free(ptr);
  return v19;
}
