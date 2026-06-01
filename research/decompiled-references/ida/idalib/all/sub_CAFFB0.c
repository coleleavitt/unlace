__int64 __fastcall sub_CAFFB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128 *v5; // rbp
  __m128 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // al
  __m128 *v10; // r13
  __int64 v11; // rax
  __int64 v12; // r12
  char v13; // al
  char v14; // r12
  __m128 *v15; // r14
  __m128 v16; // xmm0
  unsigned __int64 v17; // rbp
  __int64 result; // rax
  __int64 v19; // rax
  int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __m128 *v25; // [rsp+0h] [rbp-88h] BYREF
  __m128 *v26; // [rsp+8h] [rbp-80h]
  __m128 *v27; // [rsp+10h] [rbp-78h]
  __m128 *v28; // [rsp+18h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-68h]
  __int64 *v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  __m128 v32; // [rsp+40h] [rbp-48h] BYREF
  char v33; // [rsp+50h] [rbp-38h] BYREF

  v5 = *(__m128 **)(a2 + 24);
  v6 = *(__m128 **)(a2 + 16);
  v7 = v5->m128_i64[1];
  v26 = v6;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  switch ( v9 )
  {
    case 13:
      v10 = v5;
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      {
        v27 = v6;
        break;
      }
      goto LABEL_8;
    case 47:
      v11 = sub_F60F10(v8, a2, a3, v6, a5);
      if ( ((*(_BYTE *)(v11 + 74) & 1) != 0 || (*(_QWORD *)(v11 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *(char *)(sub_F60F10(v8, a2, a3, v6, a5) + 76) >= 0 )
      {
        v10 = *(__m128 **)(a2 + 24);
LABEL_8:
        v27 = v10;
        break;
      }
      v10 = *(__m128 **)(a2 + 24);
      v27 = *(__m128 **)(a2 + 16);
      break;
    case 10:
      v10 = v5;
      goto LABEL_8;
    default:
      v10 = v5;
      v27 = v6;
      break;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10->m128_u64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_BYTE *)(v12 + 16);
  if ( v13 == 13 )
  {
    if ( (((*(_WORD *)(v12 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_11;
    goto LABEL_19;
  }
  if ( v13 != 47 )
  {
    if ( v13 != 10 )
      goto LABEL_11;
    goto LABEL_19;
  }
  v21 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10->m128_u64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          v6,
          a5);
  if ( ((*(_BYTE *)(v21 + 74) & 1) != 0 || (*(_QWORD *)(v21 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F60F10(v12, a2, v22, v23, v24) + 76) >= 0 )
  {
LABEL_19:
    v10 = *(__m128 **)(a2 + 16);
    goto LABEL_11;
  }
  v10 = *(__m128 **)(a2 + 24);
LABEL_11:
  v25 = v5;
  v14 = 1;
  v28 = &v32;
  v15 = &v32;
  v16 = _mm_loadh_ps((const double *)&v25);
  v25 = (__m128 *)&v33;
  v32 = v16;
  v29 = a2 | 4;
  v30 = &v31;
  do
  {
    v17 = v15->m128_u64[0];
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v15->m128_u64[0])
      || v10 == (__m128 *)v17
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10->m128_u64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 42
      && (v31 = v29, !(unsigned __int8)sub_CABEE0(a1, v30)) )
    {
      v14 = 0;
    }
    v15 = (__m128 *)((char *)v15 + 8);
  }
  while ( v25 != v15 );
  if ( !v14 )
    return 0;
  v19 = sub_CE6180(*(_QWORD *)(a1 + 488), v27->m128_u64[1]);
  v20 = v19;
  if ( !BYTE4(v19) )
  {
    v32.m128_u64[0] = a2 | 4;
    return sub_CAB9E0(a1, (__int64 *)v28);
  }
  if ( v26 == v27 )
  {
    v32.m128_u64[0] = a2 | 4;
    if ( !(unsigned __int8)sub_CA11C0(a1, 13, (unsigned int)v19, (__int64 *)v28) )
      return 0;
  }
  v32.m128_u64[0] = a2 | 4;
  result = sub_CA01B0(a1, v20, (__int64 *)v28);
  if ( !(_BYTE)result )
    return 0;
  if ( *(_BYTE *)(a1 + 584) )
  {
    v32.m128_u64[0] = a2 | 4;
    return sub_CA2800(a1, (__int64 *)v28);
  }
  return result;
}
