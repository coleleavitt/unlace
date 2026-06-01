unsigned __int64 __fastcall sub_1C87520(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 result; // rax
  unsigned __int16 *v12; // r12
  unsigned __int16 *v13; // r14
  __m128 *v14; // r15
  __m128 v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  unsigned __int64 v28; // [rsp+0h] [rbp-C8h]
  __int64 v29; // [rsp+18h] [rbp-B0h]
  __int64 v30; // [rsp+18h] [rbp-B0h]
  __m128 v31; // [rsp+20h] [rbp-A8h] BYREF
  int v32; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-90h]
  unsigned __int64 v34; // [rsp+40h] [rbp-88h]
  __int64 v35; // [rsp+48h] [rbp-80h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int64 v37; // [rsp+58h] [rbp-70h]
  _BYTE v38[16]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v39[11]; // [rsp+70h] [rbp-58h] BYREF

  sub_C93B20((__int64)&v32, a2);
  v7 = sub_1C7CFE0(a1, v33, a3, a4, v4, v5, v6);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v12 = v7;
  v13 = sub_1C7CFE0(a1, v34, a3, a4, v8, v9, v10);
  if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = &v31;
  v37 = 0x200000000LL;
  v15 = _mm_loadh_ps((const double *)&v35);
  ptr = v38;
  v31 = v15;
  while ( 1 )
  {
    v16 = sub_BFB900(v14->m128_u64[0]);
    if ( (*(_WORD *)v16 & 0x1FF) == 0x5B )
    {
      v17 = sub_BFB900(*(_QWORD *)(v16 + 32));
      if ( (*(_WORD *)v17 & 0x1FF) == 0x47 )
      {
        v18 = *(_QWORD *)(v17 + 16);
        if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 35 > 3 )
          break;
      }
    }
LABEL_15:
    v14 = (__m128 *)((char *)v14 + 8);
    if ( v14 == (__m128 *)&v32 )
    {
      v23 = v32;
      sub_C93B20((__int64)v39, a2);
      v27 = sub_C00A40(v39[3], a2, v24, v25, v26);
      result = sub_1C07820(
                 (__m128 *)*a1,
                 v27,
                 v23,
                 (__int64)&ptr,
                 (__int64 *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL),
                 (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL,
                 *(double *)v15.m128_u64,
                 a4,
                 0,
                 1,
                 0);
      goto LABEL_17;
    }
  }
  if ( (*(_QWORD *)v17 & 0x200000LL) != 0 )
    v18 = *(_QWORD *)(v17 + 16LL * ((*(_QWORD *)v17 & 0x80000LL) != 0) + 32);
  v29 = v18;
  sub_C93B20((__int64)v39, a2);
  v19 = sub_1C7A830((__int64)a1, v29);
  if ( v19 )
  {
    v20 = (unsigned int)v37;
    v21 = v19 | 3;
    v39[0] = v21;
    v22 = (unsigned int)v37 + 1LL;
    if ( v22 > HIDWORD(v37) )
    {
      v30 = v21;
      sub_2237220(&ptr, v38, v22, 8);
      v20 = (unsigned int)v37;
      v21 = v30;
    }
    *((_QWORD *)ptr + v20) = v21;
    LODWORD(v37) = v37 + 1;
    goto LABEL_15;
  }
  result = 1;
LABEL_17:
  if ( ptr != v38 )
  {
    v28 = result;
    free(ptr);
    return v28;
  }
  return result;
}
