__m128 *__fastcall sub_1A3DBF0(
        __int64 **a1,
        double a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 *result; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9

  v8 = **a1;
  sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), a5, a6, a7, a8);
  if ( (**(_BYTE **)(v8 + 128) & 1) == 0
    && (sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v9, v10, v11, v12),
        v13 = *(_QWORD *)(v8 + 128),
        (*(_BYTE *)(v13 + 9) & 1) == 0)
    && ((*(_BYTE *)(v13 + 10) & 0x20) == 0 || (unsigned __int8)sub_B96D80(v8))
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v9, v10, v11, v12),
        (*(_BYTE *)(*(_QWORD *)(v8 + 128) + 3LL) & 8) != 0)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v14, v15, v16, v17),
        (*(_BYTE *)(*(_QWORD *)(v8 + 128) + 9LL) & 1) == 0) )
  {
    sub_1889700((__int64)a1[1], **a1, a2, a3);
  }
  v18 = **a1;
  sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), v14, v15, v16, v17);
  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 128) + 9LL) & 2) == 0 )
    sub_188B1F0((__int64)a1[1], (__m128i *)**a1, a2, a3);
  result = (__m128 *)a1[1][29];
  if ( (result->m128_i8[1] & 0x10) != 0 )
  {
    v24 = **a1;
    sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v19, v20, v21, v22);
    result = *(__m128 **)(v24 + 128);
    if ( (result->m128_i8[9] & 4) == 0 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v25, v26, v27, v28);
      result = *(__m128 **)(v24 + 128);
      if ( (result->m128_i8[0] & 4) == 0 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v29, v30, v31, v32);
        result = *(__m128 **)(v24 + 128);
        if ( (result->m128_i8[0] & 0x10) == 0 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v33, v34, v35, v36);
          result = *(__m128 **)(v24 + 128);
          if ( (result->m128_i8[0] & 0x20) == 0 )
          {
            sub_7052B0((__int64 *)(*(_QWORD *)(v24 + 104) + 96LL), *(_QWORD *)(v24 + 104), v37, v38, v39, v40);
            result = *(__m128 **)(v24 + 128);
            if ( (result->m128_i8[0] & 0x40) == 0 )
              return sub_188ABF0((__int64)a1[1], (__m128i *)**a1, a2, a3);
          }
        }
      }
    }
  }
  return result;
}
