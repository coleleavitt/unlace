__int64 __fastcall sub_1562FA0(const __m128i *a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  __int32 v10; // r13d
  __int16 v11; // r15
  __int64 *v12; // rdi
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __int32 v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rdi
  char *v20; // rax
  int v22; // ebx
  __m128i v23; // xmm5
  __int32 v24; // eax
  __int64 v25; // rdi
  unsigned __int16 v26; // cx
  __int64 *v27; // rdi
  __int16 v28; // ax
  unsigned __int16 v29; // cx
  unsigned __int32 v30; // eax
  _WORD *v31; // rdx
  unsigned __int16 v32; // cx
  unsigned __int32 v33; // eax
  unsigned __int16 v34; // si
  _WORD *v35; // rdx
  unsigned __int32 v36; // eax
  unsigned __int16 v37; // si
  _WORD *v38; // rdx
  char v39; // al
  __int32 v40; // eax
  __int64 *v41; // rdi
  __int16 v42; // [rsp+Ch] [rbp-ACh]
  __int16 v43; // [rsp+Eh] [rbp-AAh]
  bool v44; // [rsp+19h] [rbp-9Fh] BYREF
  int v45; // [rsp+1Ah] [rbp-9Eh] BYREF
  __int16 v46; // [rsp+1Eh] [rbp-9Ah]
  __m128i v47; // [rsp+28h] [rbp-90h] BYREF
  __m128i v48; // [rsp+38h] [rbp-80h] BYREF
  __int64 v49; // [rsp+48h] [rbp-70h]
  __m128i v50; // [rsp+50h] [rbp-68h] BYREF
  __int32 v51; // [rsp+60h] [rbp-58h]

  if ( a2 )
  {
    v22 = a2;
    v23 = _mm_loadu_si128(a1 + 1);
    v49 = a1[5].m128i_i64[0];
    v24 = a1[2].m128i_i32[0];
    v8 = a1[169].m128i_u32[2];
    v11 = a1[5].m128i_i16[4];
    v47 = _mm_loadu_si128(a1 + 3);
    v51 = v24;
    LOWORD(v24) = a1[5].m128i_i16[5];
    v48 = _mm_loadu_si128(a1 + 4);
    v10 = v8;
    v43 = v24;
    LOWORD(v24) = a1[5].m128i_i16[6];
    v25 = a1->m128i_i64[1];
    v50 = v23;
    v42 = v24;
    sub_1418D30(v25, 0);
    while ( 1 )
    {
      v28 = a1[2].m128i_i16[0];
      if ( v28 == 22 )
      {
        ++a1[5].m128i_i16[4];
      }
      else if ( v28 == 23 )
      {
        v29 = a1[5].m128i_u16[4];
        if ( v29 )
        {
          v30 = a1[174].m128i_u32[2];
          if ( !v30 )
          {
LABEL_35:
            a1[5].m128i_i16[4] = v29 - 1;
            goto LABEL_22;
          }
          v31 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v30 - 24);
          while ( 2 )
          {
            if ( v29 == v31[7] )
            {
              if ( *((_DWORD *)v31 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              {
LABEL_33:
                if ( a1[5].m128i_i16[5] <= v31[8] && a1[5].m128i_i16[6] <= v31[9] )
                  goto LABEL_35;
              }
            }
            else if ( v29 <= v31[7] )
            {
              goto LABEL_33;
            }
            --v30;
            v31 -= 12;
            a1[174].m128i_i32[2] = v30;
            if ( !v30 )
              goto LABEL_35;
            continue;
          }
        }
      }
      else if ( (unsigned __int16)(v28 - 20) > 1u )
      {
        if ( (unsigned __int16)(v28 - 24) > 1u )
        {
          if ( (unsigned __int16)(v28 - 14) > 1u && (unsigned __int16)(v28 - 17) > 2u )
          {
            if ( v28 == 3 )
            {
              sub_1566D30(a1);
              goto LABEL_23;
            }
            if ( sub_10CCDE0(v28) )
            {
              v40 = a1[1].m128i_i32[1];
              v41 = (__int64 *)a1->m128i_i64[1];
              if ( !v40 )
                v40 = a1[1].m128i_i32[0];
              a1[2].m128i_i32[2] = v40;
              sub_14634E0(v41, a1[1].m128i_i32);
              goto LABEL_23;
            }
          }
        }
        else
        {
          v32 = a1[5].m128i_u16[6];
          if ( v28 == 24 )
          {
            a1[5].m128i_i16[6] = v32 + 1;
            goto LABEL_22;
          }
          if ( v32 )
          {
            v33 = a1[174].m128i_u32[2];
            if ( !v33 )
            {
LABEL_47:
              a1[5].m128i_i16[6] = v32 - 1;
              goto LABEL_22;
            }
            v34 = a1[5].m128i_u16[4];
            v35 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v33 - 24);
            while ( 2 )
            {
              if ( v34 == v35[7] )
              {
                if ( *((_DWORD *)v35 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
                {
LABEL_45:
                  if ( a1[5].m128i_i16[5] <= v35[8] && v35[9] >= v32 )
                    goto LABEL_47;
                }
              }
              else if ( v34 <= v35[7] )
              {
                goto LABEL_45;
              }
              --v33;
              v35 -= 12;
              a1[174].m128i_i32[2] = v33;
              if ( !v33 )
                goto LABEL_47;
              continue;
            }
          }
        }
      }
      else
      {
        v26 = a1[5].m128i_u16[5];
        if ( v28 == 20 )
        {
          a1[5].m128i_i16[5] = v26 + 1;
          goto LABEL_22;
        }
        if ( v26 )
        {
          v36 = a1[174].m128i_u32[2];
          if ( !v36 )
          {
LABEL_61:
            a1[5].m128i_i16[5] = v26 - 1;
            goto LABEL_22;
          }
          v37 = a1[5].m128i_u16[4];
          v38 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v36 - 24);
          while ( 2 )
          {
            if ( v37 == v38[7] )
            {
              if ( *((_DWORD *)v38 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              {
LABEL_59:
                if ( v38[8] >= v26 && a1[5].m128i_i16[6] <= v38[9] )
                  goto LABEL_61;
              }
            }
            else if ( v37 <= v38[7] )
            {
              goto LABEL_59;
            }
            --v36;
            v38 -= 12;
            a1[174].m128i_i32[2] = v36;
            if ( !v36 )
              goto LABEL_61;
            continue;
          }
        }
      }
LABEL_22:
      v27 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v27, a1[1].m128i_i32);
LABEL_23:
      if ( !--v22 )
        goto LABEL_7;
    }
  }
  v3 = 1;
  if ( a1[2].m128i_i16[0] == 47 )
  {
    v4 = a1->m128i_i64[1];
    v5 = *(_QWORD *)(v4 + 2944);
    v6 = v5 >= *(unsigned int *)(v4 + 2912) ? sub_14180A0(v4, 1u) : *(_QWORD *)(v4 + 2904) + 24 * v5;
    v3 = 0;
    if ( *(_WORD *)(v6 + 16) != 52 )
    {
      v7 = a1[5].m128i_i64[0];
      v8 = a1[169].m128i_u32[2];
      v47 = _mm_loadu_si128(a1 + 3);
      v9 = a1->m128i_i64[1];
      v49 = v7;
      LODWORD(v7) = a1[2].m128i_i32[0];
      v10 = v8;
      v48 = _mm_loadu_si128(a1 + 4);
      v11 = a1[5].m128i_i16[4];
      v51 = v7;
      LOWORD(v7) = a1[5].m128i_i16[5];
      v50 = _mm_loadu_si128(a1 + 1);
      v43 = v7;
      v42 = a1[5].m128i_i16[6];
      sub_1418D30(v9, 0);
LABEL_7:
      v12 = (__int64 *)a1->m128i_i64[1];
      v3 = 1;
      if ( a1[2].m128i_i16[0] == 47 )
      {
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v12, a1[1].m128i_i32);
        v44 = 0;
        v3 = sub_155DB90((__int64)a1, 0, 1u, &v44);
        if ( v3 )
        {
          if ( v44 )
          {
            v12 = (__int64 *)a1->m128i_i64[1];
            v3 = 1;
          }
          else
          {
            v46 = 75;
            v3 = 1;
            v45 = 3473460;
            v39 = sub_15680D0(a1, &v45, 3, 3);
            v12 = (__int64 *)a1->m128i_i64[1];
            if ( v39 )
              v3 = 2;
          }
        }
        else
        {
          v12 = (__int64 *)a1->m128i_i64[1];
        }
      }
      sub_1417BC0((__int64)v12);
      v13 = _mm_loadu_si128(&v47);
      v14 = _mm_loadu_si128(&v48);
      v15 = _mm_load_si128(&v50);
      a1[5].m128i_i64[0] = v49;
      v16 = v51;
      a1[3] = v13;
      a1[2].m128i_i32[0] = v16;
      v17 = a1[169].m128i_u32[2];
      a1[4] = v14;
      a1[1] = v15;
      if ( v8 != v17 )
      {
        if ( v8 >= v17 )
        {
          if ( v8 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v8, 8);
            v17 = a1[169].m128i_u32[2];
          }
          v18 = a1[169].m128i_i64[0];
          v19 = (char *)(v18 + 8 * v17);
          v20 = (char *)(v18 + 8 * v8);
          if ( v19 != v20 )
            memset(v19, 0, 8 * ((unsigned __int64)(v20 - 8 - v19) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v10;
      }
      a1[5].m128i_i16[4] = v11;
      a1[5].m128i_i16[5] = v43;
      a1[5].m128i_i16[6] = v42;
    }
  }
  return v3;
}
