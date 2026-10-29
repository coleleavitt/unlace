__int64 __fastcall sub_1565E90(const __m128i *a1, unsigned int a2, double a3, __m128 a4)
{
  __int16 v5; // r12
  __int64 v6; // rdi
  _BYTE *v7; // rax
  unsigned int v8; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int32 v12; // r15d
  unsigned __int16 v13; // cx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r10d
  char v17; // r9
  __int64 v18; // r13
  char v19; // dl
  char v20; // r14
  __int32 v21; // eax
  _QWORD *v22; // rdi
  __int64 v23; // rsi
  int v24; // edx
  int v25; // ecx
  __int32 v26; // eax
  unsigned __int32 v27; // r14d
  char v28; // al
  __int64 v29; // r8
  char v30; // dl
  __int64 *v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int32 v35; // eax
  __int32 v36; // edx
  unsigned __int16 v37; // [rsp+4h] [rbp-D4h]
  __int64 v38; // [rsp+8h] [rbp-D0h]
  __int64 v39; // [rsp+14h] [rbp-C4h] BYREF
  char v40; // [rsp+1Ch] [rbp-BCh]
  __m128i v41; // [rsp+20h] [rbp-B8h] BYREF
  void *v42[2]; // [rsp+30h] [rbp-A8h]
  __int128 v43; // [rsp+40h] [rbp-98h]
  __int128 v44; // [rsp+50h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-78h]
  __int128 v46; // [rsp+70h] [rbp-68h]

  v5 = a1[2].m128i_i16[0];
  v6 = a1->m128i_i64[1];
  v7 = *(_BYTE **)(v6 + 56);
  if ( v5 == 151 )
  {
    if ( (*v7 & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(v6 + 2944);
      if ( *(unsigned int *)(v6 + 2912) <= v10 )
      {
        v11 = sub_14180A0(v6, 1u);
        v6 = a1->m128i_i64[1];
      }
      else
      {
        v11 = *(_QWORD *)(v6 + 2904) + 24 * v10;
      }
      if ( *(_WORD *)(v11 + 16) == 105 )
      {
        sub_14634E0((__int64 *)v6, v41.m128i_i32);
        v8 = sub_1565E90(a1, a2);
        sub_1479990(a1->m128i_i64[1], a1 + 1, 1u);
        v26 = (__int32)v42[0];
        a1[1] = _mm_load_si128(&v41);
        a1[2].m128i_i32[0] = v26;
        if ( !(_BYTE)v8 )
        {
          sub_FC70B0((__int64)&v44, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 2140);
          sub_AEA040((__int64)&v44);
        }
        return v8;
      }
    }
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0((__int64 *)v6, a1[1].m128i_i32);
    v41 = 0;
    v12 = a1[2].m128i_u32[2];
    *(_OWORD *)v42 = 0;
    v43 = 0;
    v8 = sub_14D0170(a1, (__int64)&v41, 0, 0, 0, nullptr, (__m128i)0LL, 1, nullptr, 0, 0, 0);
    if ( (_BYTE)v8 )
      goto LABEL_40;
    v13 = a1[2].m128i_u16[0];
    if ( v41.m128i_i32[0] && v41.m128i_i32[1] || v41.m128i_i64[1] )
    {
      if ( v13 != 146 )
      {
        if ( v13 != 5 )
        {
LABEL_17:
          if ( v13 == 418 )
          {
            v14 = a1[1].m128i_i64[1];
            v15 = *(_DWORD *)(v14 + 32);
            if ( (v15 & 0xFFFFFFFD) != 0 )
            {
              if ( (unsigned int)(v15 - 4) > 1 )
              {
                v8 = 1;
                sub_FC70B0((__int64)&v44, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 1907);
                v35 = a1[1].m128i_i32[1];
                v36 = a1[1].m128i_i32[0];
                v40 = 1;
                LODWORD(v39) = v36;
                if ( !v35 )
                  v35 = v36;
                HIDWORD(v39) = v35;
                sub_AEC610((__int64 *)&v44, &v39);
                sub_AEA040((__int64)&v44);
                goto LABEL_41;
              }
              v16 = *(_DWORD *)(v14 + 44);
              v17 = v14 + 56;
            }
            else
            {
              v17 = v14 + 56;
              v16 = *(_DWORD *)(v14 + 44);
              if ( !v15 )
                goto LABEL_44;
            }
            if ( !*(_BYTE *)(v14 + 48) )
            {
              v18 = sub_1CE0410(
                      a1[6].m128i_i64[0],
                      *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                      v12,
                      (unsigned int)&v41,
                      *(_DWORD *)v14,
                      *(_QWORD *)(v14 + 24),
                      *(_QWORD *)(v14 + 8),
                      *(_DWORD *)(v14 + 4),
                      *(_DWORD *)(v14 + 36),
                      v17,
                      v16,
                      *(_DWORD *)(v14 + 40));
              v20 = v19;
LABEL_23:
              if ( sub_10CCDE0(a1[2].m128i_i16[0]) )
              {
                v21 = a1[1].m128i_i32[1];
                if ( !v21 )
                  v21 = a1[1].m128i_i32[0];
              }
              else
              {
                v21 = a1[1].m128i_i32[0];
              }
              v22 = (_QWORD *)a1->m128i_i64[1];
              a1[1].m128i_i32[1] = v21;
              if ( v20 )
                v18 = 0;
              a1[1].m128i_i32[0] = v12;
              a1[2].m128i_i16[0] = 417;
              a1[1].m128i_i64[1] = v18;
              if ( v22[368] && v22[370] != v22[369] )
                sub_1417320((__int64)v22, a1 + 1);
              goto LABEL_41;
            }
LABEL_44:
            v20 = 1;
            v18 = 0;
            goto LABEL_23;
          }
          v8 = 1;
          sub_FC70B0((__int64)&v44, a1[6].m128i_i64[1], a1[1].m128i_i32[0], 1658);
          v40 = 1;
          v39 = v41.m128i_i64[0];
          sub_AEC610((__int64 *)&v44, &v39);
          sub_AEA040((__int64)&v44);
LABEL_41:
          if ( HIDWORD(v42[1]) )
            free(v42[0]);
          return v8;
        }
        v27 = a1[1].m128i_u32[0];
LABEL_49:
        v37 = v13;
        v38 = a1[6].m128i_i64[0];
        v28 = sub_141A630(v13);
        if ( v37 == 1 || v28 )
          v29 = 0;
        else
          v29 = a1[1].m128i_i64[1];
        v18 = sub_1CD6700(v38, *(_QWORD *)(v38 + 608), v12, &v41, v29, v27, 0);
        v20 = v30;
        goto LABEL_23;
      }
      v31 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v31, a1[1].m128i_i32);
      v13 = a1[2].m128i_u16[0];
      if ( v13 != 5 )
        goto LABEL_17;
      v32 = a1->m128i_i64[1];
      v33 = *(_QWORD *)(v32 + 2944);
      if ( v33 >= *(unsigned int *)(v32 + 2912) )
        v34 = sub_14180A0(v32, 1u);
      else
        v34 = *(_QWORD *)(v32 + 2904) + 24 * v33;
      v27 = a1[1].m128i_u32[0];
      if ( *(_WORD *)(v34 + 16) == 47 )
      {
        v13 = a1[2].m128i_u16[0];
        goto LABEL_49;
      }
      v23 = a1[6].m128i_i64[1];
      v25 = 2027;
      v24 = a1[1].m128i_i32[0];
      goto LABEL_39;
    }
    if ( v13 == 5 )
      goto LABEL_71;
    if ( v13 != 424 && v13 != 418 )
      goto LABEL_37;
    if ( v13 != 424 )
    {
LABEL_71:
      if ( (unsigned __int8)sub_1565E90(a1, a2) || !sub_10CCDE0(a1[2].m128i_i16[0]) )
      {
LABEL_37:
        if ( (a1[2].m128i_i8[3] & 4) != 0 )
        {
LABEL_40:
          v8 = 1;
          goto LABEL_41;
        }
        v23 = a1[6].m128i_i64[1];
        v24 = a1[1].m128i_i32[0];
        v25 = 1637;
LABEL_39:
        sub_FC70B0((__int64)&v44, v23, v24, v25);
        sub_AEA040((__int64)&v44);
        goto LABEL_40;
      }
    }
    sub_FC70B0(
      (__int64)&v44,
      a1[6].m128i_i64[1],
      a1[1].m128i_i32[0],
      ((**(char **)(a1->m128i_i64[1] + 56) >> 31) & 0x1F7) + 1637);
    sub_AEA040((__int64)&v44);
    goto LABEL_41;
  }
  v44 = 0;
  *(_OWORD *)ptr = 0;
  v46 = 0;
  if ( (v7[1] & 8) != 0
    && (v8 = sub_14D0170(a1, (__int64)&v44, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0), (_BYTE)v8) )
  {
    if ( HIDWORD(ptr[1]) )
      goto LABEL_7;
  }
  else
  {
    v8 = sub_1565A10((__int64)a1, (__int64)&v44, v5 != 416, a2, (__m128i)0LL, a4);
    if ( HIDWORD(ptr[1]) )
LABEL_7:
      free(ptr[0]);
  }
  return v8;
}
