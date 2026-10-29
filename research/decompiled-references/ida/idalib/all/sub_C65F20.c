__int64 __fastcall sub_C65F20(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r13d
  unsigned int v17; // eax
  __m128i *v18; // rsi
  __m128i v19; // xmm0
  unsigned int v20; // eax
  __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // r14
  unsigned __int8 v31; // al
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 *v34; // r12
  __int64 v35; // [rsp+0h] [rbp-88h]
  __int64 *v36; // [rsp+8h] [rbp-80h]
  __m128i si128; // [rsp+10h] [rbp-78h] BYREF
  __int8 v38; // [rsp+20h] [rbp-68h]

  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_BYTE *)(v7 + 28) & 0x7F;
  v9 = (unsigned int)(v8 - 40);
  if ( (unsigned int)v9 <= 6 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)sub_E32240(a1->m128i_i64[0]) & 0x20) == 0
      || (unsigned __int8)sub_C01160(v10, *(_QWORD *)(a1->m128i_i64[0] + 16), 1, v12, v13) )
    {
      sub_C3FAF0(a1->m128i_i64[0], v10, v11, v12, v13);
    }
    return (unsigned int)sub_C24D70(a1->m128i_i64, a2, v7, v12, v13, v14);
  }
  if ( (unsigned int)(v8 - 35) > 3 || (LOBYTE(v17) = sub_B979F0(*(_QWORD **)(a2 + 24)), v15 = v17, !(_BYTE)v17) )
  {
    v18 = *(__m128i **)(a2 + 16);
    if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    {
      v21 = a1[1].m128i_i8[0];
      si128 = _mm_load_si128(a1);
      v38 = v21;
      v15 = sub_C48CF0(&si128, (__int64)v18, v9, a4, a5, a6);
      v24 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v24 + 16LL) != 42 )
        sub_F63050(*v24, v18, v22, v23);
    }
    else if ( (v18->m128i_i8[1] & 6) != 0 )
    {
      v15 = sub_C5C820(a1, v18, v9, a4, a5, a6);
    }
    else
    {
      v19 = _mm_load_si128(a1);
      v38 = 0;
      si128 = v19;
      LOBYTE(v20) = sub_C5E260(&si128, (__int64)v18, v9, a4, a5, a6);
      v15 = v20;
    }
    if ( !(_BYTE)v15 )
    {
      v15 = a1[1].m128i_u8[0];
      if ( (_BYTE)v15 )
      {
        v33 = a1->m128i_i64[1];
        sub_A4F2D0((__int64)&si128, a2, 0, 0);
        sub_C24210(v33, si128.m128i_i64[0], (__int64 *)si128.m128i_i64[1], 1);
        return v15;
      }
      return 0;
    }
    v29 = *(_QWORD *)(a2 + 24);
    v30 = a1->m128i_i64[0];
    v31 = *(_BYTE *)(v29 + 28) & 0x7F;
    if ( (unsigned int)v31 - 49 > 2 )
    {
      if ( v31 != 32 )
        return (unsigned int)sub_C14310(a1->m128i_i64[0], a2);
      v34 = *(__int64 **)(v29 + 56);
      v35 = a1->m128i_i64[1];
      v36 = &v34[*(unsigned int *)(v29 + 64)];
      if ( v34 == v36 )
        goto LABEL_23;
      while ( (unsigned __int8)sub_C15060(v30, a2, v35, *v34) )
      {
        if ( v36 == ++v34 )
          goto LABEL_23;
      }
    }
    else if ( (unsigned __int8)sub_C15060(a1->m128i_i64[0], a2, a1->m128i_i64[1], *(_QWORD *)(a2 + 24)) )
    {
LABEL_23:
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
        si128.m128i_i8[4] &= ~1u;
        v32 = a1->m128i_i64[1];
        si128.m128i_i32[0] = 0;
        v15 = sub_C36570(a1->m128i_i64[0], (_DWORD *)a2, *(_QWORD *)(v29 + 48), v32, (__int64)&si128, 0);
        if ( (_BYTE)v15 )
          sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&si128);
        if ( si128.m128i_i32[0] > 1u )
          sub_A4F8E0(si128.m128i_i32);
      }
      return v15;
    }
    return 0;
  }
  v25 = *(_QWORD *)(a2 + 16);
  if ( (*(_BYTE *)sub_E32240(a1->m128i_i64[0]) & 0x20) == 0
    || (unsigned __int8)sub_C01160(v25, *(_QWORD *)(a1->m128i_i64[0] + 16), 1, v27, v28) )
  {
    sub_C3FAF0(a1->m128i_i64[0], v25, v26, v27, v28);
  }
  sub_A4F2A0((__int64)&si128, v7, 0, 0);
  sub_C24210(a1->m128i_i64[1], si128.m128i_i64[0], (__int64 *)si128.m128i_i64[1], 0);
  return v15;
}
