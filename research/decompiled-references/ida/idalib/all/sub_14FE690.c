__int64 __fastcall sub_14FE690(const __m128i *a1, __m128i a2, __m128 a3)
{
  unsigned __int16 v4; // cx
  __int64 *v5; // rdi
  __int16 v6; // ax
  int v7; // r13d
  __int64 v8; // rdi
  __int8 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 result; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r14d
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // eax
  __int64 *v22; // rdi
  unsigned __int32 v23; // edx
  unsigned __int16 v24; // si
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rsi
  __int64 v31; // rax
  char v32; // dl
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int16 v34; // [rsp+12h] [rbp-46h] BYREF
  int v35; // [rsp+14h] [rbp-44h] BYREF
  __int64 v36[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a1[5].m128i_u16[5];
  if ( a1[2].m128i_i16[0] == 20 )
  {
    a1[5].m128i_i16[5] = v4 + 1;
  }
  else
  {
    if ( !v4 )
      goto LABEL_3;
    v23 = a1[174].m128i_u32[2];
    if ( v23 )
    {
      v24 = a1[5].m128i_u16[4];
      v25 = a1[174].m128i_i64[0] + 24LL * v23 - 24;
      do
      {
        if ( v24 == *(_WORD *)(v25 + 14) )
        {
          if ( *(_DWORD *)(v25 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
            goto LABEL_26;
        }
        else if ( v24 > *(_WORD *)(v25 + 14) )
        {
          goto LABEL_26;
        }
        if ( *(_WORD *)(v25 + 16) >= v4 && a1[5].m128i_i16[6] <= *(_WORD *)(v25 + 18) )
          break;
LABEL_26:
        --v23;
        v25 -= 24;
        a1[174].m128i_i32[2] = v23;
      }
      while ( v23 );
    }
    a1[5].m128i_i16[5] = v4 - 1;
  }
LABEL_3:
  v5 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v5, a1[1].m128i_i32);
  v6 = a1[2].m128i_i16[0];
  v7 = a1[2].m128i_i32[2];
  if ( v6 != 3 )
  {
    v8 = a1->m128i_i64[1];
    v9 = a1[129].m128i_i8[0];
    a1[129].m128i_i8[0] = 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v8 + 56) + 1LL) & 8) != 0 )
    {
      if ( v6 != 5
        || a1[128].m128i_i64[1] != a1[1].m128i_i64[1]
        || ((v10 = *(_QWORD *)(v8 + 2944), v10 >= *(unsigned int *)(v8 + 2912))
          ? (v11 = sub_14180A0(v8, 1u))
          : (v11 = *(_QWORD *)(v8 + 2904) + 24 * v10),
            *(_WORD *)(v11 + 16) == 26 || (v12 = *(__int64 **)(a1[6].m128i_i64[0] + 608)) == nullptr) )
      {
LABEL_32:
        v36[0] = 0;
        if ( !(unsigned __int8)sub_14F7310(a1, &v34, v36, a2) )
        {
          v26 = v36[0];
          if ( !(_BYTE)v34 )
          {
            result = sub_14FDCA0((__int64)a1, v7, 0, v36[0], 0, a2);
            goto LABEL_35;
          }
          goto LABEL_34;
        }
        goto LABEL_45;
      }
      while ( (*((_BYTE *)v12 + 9) & 8) == 0 )
      {
        v12 = (__int64 *)*v12;
        if ( !v12 )
          goto LABEL_32;
      }
      goto LABEL_14;
    }
    if ( v6 == 5 )
    {
      v36[0] = 0;
      v15 = a1[6].m128i_i64[0];
      v16 = *(_QWORD *)(v8 + 2944);
      v17 = a1[1].m128i_i64[1];
      v18 = a1[1].m128i_u32[0];
      v19 = *(_QWORD *)(v15 + 736);
      if ( v16 >= *(unsigned int *)(v8 + 2912) )
      {
        v33 = a1[1].m128i_i64[1];
        v20 = sub_14180A0(v8, 1u);
        v15 = a1[6].m128i_i64[0];
        v17 = v33;
      }
      else
      {
        v20 = *(_QWORD *)(v8 + 2904) + 24 * v16;
      }
      v21 = sub_19D0400(
              v19,
              *(_QWORD *)(v15 + 608),
              v17,
              v18,
              a1[128].m128i_i64[1] == v17,
              *(_WORD *)(v20 + 16) == 26,
              v36);
      if ( !v21 )
      {
LABEL_14:
        v13 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v13, a1[1].m128i_i32);
        result = sub_14FDCA0((__int64)a1, v7, a1[2].m128i_u32[2], 0, 0, a2);
        goto LABEL_35;
      }
      if ( v21 == 2 )
      {
        if ( !v36[0] )
        {
LABEL_45:
          v30 = (__int64 *)&v35;
          LOWORD(v35) = 21;
          goto LABEL_44;
        }
        v22 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v22, a1[1].m128i_i32);
        if ( a1[2].m128i_i16[0] == 47 )
        {
          v35 = 0;
          v31 = sub_14FA050((__int64)a1, v18, v36[0], 1u, &v35, a2, a3);
          if ( v32 || !v31 )
          {
            v30 = (__int64 *)&v34;
            v34 = 21;
            goto LABEL_44;
          }
          v36[0] = v31;
        }
        result = sub_14FDCA0((__int64)a1, v7, 0, v36[0], 0, a2);
LABEL_35:
        a1[129].m128i_i8[0] = v9;
        return result;
      }
    }
    v27 = sub_14BFC10(a1, 0, a2);
    if ( v27 != 1 )
    {
      v26 = v27 & 0xFFFFFFFE;
LABEL_34:
      result = sub_14FDCA0((__int64)a1, v7, 0, 0, v26, a2);
      goto LABEL_35;
    }
    v30 = v36;
    LOWORD(v36[0]) = 21;
LABEL_44:
    sub_15680D0(a1, v30, 1, 1);
    result = 1;
    goto LABEL_35;
  }
  v28 = a1->m128i_i64[1];
  if ( *(_QWORD *)(v28 + 760) )
  {
    *(_BYTE *)(v28 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v28 + 48) + 6LL) = 1;
  }
  v29 = a1[6].m128i_i64[0];
  a1[2].m128i_i16[0] = 1;
  sub_1722370(*(_QWORD *)(v29 + 656), *(_QWORD *)(v29 + 608));
  return 1;
}
