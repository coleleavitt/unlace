__m128i *__fastcall sub_1BEC140(
        __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        char a11,
        unsigned __int8 a12)
{
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  bool v18; // al
  unsigned int v19; // eax
  __int64 v20; // r9
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v30; // [rsp+10h] [rbp-E8h]
  __int64 v31; // [rsp+10h] [rbp-E8h]
  __m128i v32; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-B8h]
  __int64 v36; // [rsp+48h] [rbp-B0h]
  __int64 v37; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A0h]

  v32.m128i_i32[0] = 6;
  v32.m128i_i64[1] = 0;
  v33 = v33 & 0xFFFFF80400000000LL | 0x2000000000LL;
  v38 = 0;
  if ( !(unsigned __int8)sub_1BEABF0(a2, a3, a4, a9, (__int64)&v33, a10, a7, a8, a11) )
  {
    v15 = *(_QWORD *)(a2 + 232);
    if ( (*(_BYTE *)(v15 + 1) & 8) == 0 )
    {
      sub_1BCD210((__int64)&v32, 0, a3, a4);
      sub_1A0B340(a1, &v32);
      goto LABEL_3;
    }
    v16 = *(_QWORD *)(a3 + 8);
    v17 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v30 = *(_QWORD *)(a3 + 8);
      v18 = sub_1BC70C0(v30, a4);
      v16 = v30;
      if ( v18
        || (v19 = sub_EEB7E0(a3, a4, *(double *)a7.m128_u64),
            v21 = sub_183BD10(a2, v19, v30, a4, v30, v20),
            v16 = v30,
            v21) )
      {
        v32.m128i_i32[0] = 0;
        v33 = v33 & 0xFFFFF80400000000LL | 0x2000000000LL;
        v38 = 0;
        v34 = v16;
        ptr = (void *)a4;
        v36 = a4;
        v37 = a4;
        if ( !sub_1BC70C0(v16, a4) )
          BYTE1(v33) = 17;
LABEL_11:
        sub_1A0B340(a1, &v32);
        goto LABEL_3;
      }
      v15 = *(_QWORD *)(a2 + 232);
      v17 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    }
    if ( (*(_BYTE *)(v15 + 89) & 1) == 0
      || (v22 = *(_QWORD *)v17, *(_BYTE *)(*(_QWORD *)v17 + 16LL) != 27)
      || (v23 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v23 + 16) != 27)
      || (v31 = v16, !sub_1BC70C0(*(_QWORD *)(v22 + 32), *(_QWORD *)(v23 + 32)))
      || !sub_1BC70C0(*(_QWORD *)(v24 + 40), *(_QWORD *)(v25 + 40))
      || *(_BYTE *)(v26 + 48) != *(_BYTE *)(v27 + 48)
      || (*(_BYTE *)(v27 + 49) & 1) != (*(_BYTE *)(v26 + 49) & 1)
      || ((*(_BYTE *)(v27 + 49) & 2) != 0) != ((*(_BYTE *)(v26 + 49) & 2) != 0) )
    {
      sub_1BF6010((_DWORD)a1, a2, a3, a4, a5, a6, a12);
      return a1;
    }
    v34 = v31;
    v32.m128i_i32[0] &= 0x80000000;
    v33 = v33 & 0xFFFFF80400000000LL | 0x2000000000LL;
    v38 = 0;
    ptr = (void *)a4;
    v36 = a4;
    v37 = a4;
    goto LABEL_11;
  }
  v32.m128i_i32[0] = 0;
  sub_1A0B340(a1, &v32);
LABEL_3:
  if ( (v32.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v37 )
    free(ptr);
  return a1;
}
