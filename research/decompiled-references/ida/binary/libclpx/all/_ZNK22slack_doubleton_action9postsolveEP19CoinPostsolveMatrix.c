__int64 __fastcall slack_doubleton_action::postsolve(slack_doubleton_action *this, CoinPostsolveMatrix *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r15
  double v6; // xmm4_8
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  __m128i v10; // xmm5
  double v11; // xmm2_8
  _BYTE *v12; // rdx
  __int64 v13; // rdx
  double v14; // xmm0_8
  double v15; // xmm2_8
  double v16; // xmm3_8
  int v17; // esi
  __int64 v18; // rdi
  double *v19; // r11
  __int64 v20; // rcx
  int *v21; // r10
  int v22; // r9d
  int v23; // r8d
  int *v24; // r8
  _QWORD *v25; // rcx
  char *v26; // rax
  char v27; // r9
  double v28; // xmm1_8
  double *v29; // r8
  __int64 v30; // [rsp+0h] [rbp-C8h]
  __int64 v31; // [rsp+8h] [rbp-C0h]
  __int64 v32; // [rsp+10h] [rbp-B8h]
  __int64 v33; // [rsp+18h] [rbp-B0h]
  __int64 v34; // [rsp+20h] [rbp-A8h]
  __int64 v35; // [rsp+28h] [rbp-A0h]
  __int64 v36; // [rsp+30h] [rbp-98h]
  __int64 v37; // [rsp+38h] [rbp-90h]
  __int64 v38; // [rsp+40h] [rbp-88h]
  __int64 v39; // [rsp+48h] [rbp-80h]
  __int64 v40; // [rsp+58h] [rbp-70h]
  double v41; // [rsp+60h] [rbp-68h]
  double v42; // [rsp+60h] [rbp-68h]
  double *v43; // [rsp+70h] [rbp-58h]
  double *v44; // [rsp+70h] [rbp-58h]
  __m128i v45; // [rsp+80h] [rbp-48h]
  __m128i v46; // [rsp+80h] [rbp-48h]

  v2 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)a2 + 22);
  v30 = *((_QWORD *)a2 + 8);
  v31 = *((_QWORD *)a2 + 7);
  v32 = *((_QWORD *)a2 + 5);
  v33 = *((_QWORD *)a2 + 33);
  v34 = *((_QWORD *)a2 + 11);
  v35 = *((_QWORD *)a2 + 12);
  v36 = *((_QWORD *)a2 + 20);
  v40 = *((_QWORD *)a2 + 23);
  v37 = *((_QWORD *)a2 + 24);
  v38 = *((_QWORD *)a2 + 13);
  v39 = *((_QWORD *)a2 + 14);
  v5 = *((_QWORD *)a2 + 21);
  v6 = *((double *)a2 + 17);
  result = 48LL * *((int *)this + 4);
  v8 = v2 + result - 48;
  if ( v2 <= v8 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    v3 = *((_QWORD *)a2 + 6);
    while ( 1 )
    {
      v13 = *(int *)(v8 + 44);
      result = *(int *)(v8 + 40);
      v14 = *(double *)(v8 + 32);
      v15 = *(double *)v8;
      v16 = *(double *)(v8 + 8);
      v17 = *(_DWORD *)(v8 + 44);
      *(_QWORD *)(v38 + 8 * v13) = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v39 + 8 * v13) = *(_QWORD *)(v8 + 24);
      v18 = 8 * result;
      *(double *)(v34 + 8 * result) = v15;
      *(double *)(v35 + 8 * result) = v16;
      v19 = (double *)(v36 + 8 * result);
      v20 = *((int *)a2 + 64);
      v21 = (int *)(v33 + 4 * v20);
      v22 = *((_DWORD *)a2 + 64);
      v23 = *v21;
      *(double *)(v4 + 8 * v13) = *v19 * v14;
      *((_DWORD *)a2 + 64) = v23;
      *(_DWORD *)(v31 + 4 * v20) = v13;
      *(double *)(v30 + 8 * v20) = v14;
      v24 = (int *)(4 * result + v32);
      *v21 = *v24;
      *v24 = v22;
      ++*(_DWORD *)(v3 + 4 * result);
      v25 = (_QWORD *)(v5 + 8 * v13);
      if ( !v37 )
        goto LABEL_5;
      v26 = (char *)(*((_QWORD *)a2 + 24) + result);
      v27 = *v26;
      if ( (*v26 & 7) == 1 )
        goto LABEL_4;
      v28 = *v19;
      v29 = (double *)(v40 + v18);
      if ( v6 >= COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v19 - v15) & v10.m128i_i64[0]) )
      {
        v11 = *v29;
        if ( *v29 < 0.0 )
        {
          if ( v6 < COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28 - v16) & v10.m128i_i64[0]) )
            goto LABEL_13;
          goto LABEL_12;
        }
LABEL_4:
        v12 = (_BYTE *)(*((_QWORD *)a2 + 25) + v13);
        result = *v12 & 0xF8 | 1u;
        *v12 = *v12 & 0xF8 | 1;
LABEL_5:
        *v25 = 0;
LABEL_6:
        v8 -= 48LL;
        if ( v2 > v8 )
          return result;
      }
      else
      {
        if ( v6 < COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28 - v16) & v10.m128i_i64[0]) )
        {
          v44 = (double *)(v5 + 8 * v13);
          *v26 = v27 & 0xF8 | 1;
          v42 = v6;
          v46 = v10;
          result = CoinPrePostsolveMatrix::setRowStatusUsingValue(a2, v17);
          v6 = v42;
          v10 = v46;
          *v44 = *(double *)(v40 + v18) / v14;
          *(_QWORD *)(v40 + v18) = 0;
          goto LABEL_6;
        }
        v11 = *v29;
LABEL_12:
        if ( v11 <= 0.0 )
          goto LABEL_4;
LABEL_13:
        v43 = (double *)(v5 + 8 * v13);
        *v26 = v27 & 0xF8 | 1;
        v41 = v6;
        v8 -= 48LL;
        v45 = v10;
        result = CoinPrePostsolveMatrix::setRowStatusUsingValue(a2, v17);
        v6 = v41;
        v10 = v45;
        *v43 = *(double *)(v40 + v18) / v14;
        *(_QWORD *)(v40 + v18) = 0;
        if ( v2 > v8 )
          return result;
      }
    }
  }
  return result;
}

