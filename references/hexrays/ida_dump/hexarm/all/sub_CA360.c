__int64 __fastcall sub_CA360(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int32 a5, int a6)
{
  __int64 v6; // r11
  __int64 v8; // r10
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  int *v17; // r12
  __int64 v18; // r9
  int v19; // r13d
  int *v20; // rax
  int v21; // edx
  int v22; // r14d
  bool v23; // al
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rbx
  __m128i v31; // xmm0
  __int32 v32; // r13d
  int v33; // r14d
  __int64 v34; // rdi
  __m128i v35; // xmm1
  unsigned __int64 v36; // r10
  __int64 v37; // r8
  int *v38; // rax
  int v39; // edx
  __int64 v40; // r11
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  __int64 result; // rax
  __int64 v49; // r12
  __int64 v50; // r11
  signed __int64 v51; // r10
  unsigned __int64 v52; // rax
  __int64 v53; // r10
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  int v57; // [rsp+0h] [rbp-5Ch]
  int v58; // [rsp+0h] [rbp-5Ch]
  __int64 v59; // [rsp+4h] [rbp-58h]
  __int64 v60; // [rsp+Ch] [rbp-50h]
  __m128i v62; // [rsp+1Ch] [rbp-40h] BYREF

  v6 = a3;
  v60 = a2;
  v62.m128i_i64[0] = a4;
  v62.m128i_i32[2] = a5;
  v59 = (a3 - 1) / 2;
  if ( a2 < v59 )
  {
    v8 = a2;
    v57 = a6;
    while ( 1 )
    {
      v12 = *a1;
      v13 = 2 * v8 + 2;
      v14 = a1[3];
      a2 = 2 * v8 + 1;
      v15 = 0xAAAAAAAAAAAAAAABLL * ((*a1 - a1[1]) >> 2);
      v16 = v15 + a2;
      if ( (__int64)(v15 + a2) < 0 )
      {
        v27 = ~(~v16 / 0x2AuLL);
      }
      else
      {
        if ( v16 <= 41 )
        {
          v17 = (int *)(v12 + 12 * a2);
          v18 = v15 + v13;
          if ( (__int64)(v15 + v13) < 0 )
            goto LABEL_32;
          goto LABEL_12;
        }
        v27 = v16 / 42;
      }
      v17 = (int *)(*(_QWORD *)(v14 + 8 * v27) + 12 * (v16 - 42 * v27));
      v18 = v15 + v13;
      if ( (__int64)(v15 + v13) < 0 )
      {
LABEL_32:
        v26 = ~(~v18 / 0x2AuLL);
        goto LABEL_27;
      }
LABEL_12:
      if ( v18 <= 41 )
      {
        v19 = *v17;
        v20 = (int *)(v12 + 12 * v13);
        v21 = *v20;
        if ( *v20 != v57 )
        {
          if ( v19 == v57 )
          {
            v16 = v18;
            a2 = 2 * v8 + 2;
            goto LABEL_3;
          }
          goto LABEL_15;
        }
        goto LABEL_36;
      }
      v26 = v18 / 42;
LABEL_27:
      v19 = *v17;
      v20 = (int *)(*(_QWORD *)(v14 + 8 * v26) + 12 * (v18 - 42 * v26));
      v21 = *v20;
      if ( *v20 != v57 )
      {
        if ( v19 == v57 )
        {
LABEL_29:
          v16 = v18;
          a2 = 2 * v8 + 2;
          goto LABEL_22;
        }
LABEL_15:
        if ( !(v21 | v19) )
        {
          v23 = v20[1] < v17[1];
          goto LABEL_21;
        }
        v22 = v17[2];
        if ( v20[2] >= v22 )
        {
          if ( v20[2] > v22 )
            goto LABEL_22;
          if ( v19 <= v21 )
          {
            if ( v19 < v21 )
              goto LABEL_22;
            v23 = v20[1] >= v17[1];
            goto LABEL_21;
          }
        }
        goto LABEL_29;
      }
LABEL_36:
      if ( v19 == v57 )
      {
        v23 = v20[1] > v17[1];
LABEL_21:
        a2 = v13 - v23;
        v16 = v15 + a2;
      }
LABEL_22:
      if ( v16 < 0 )
      {
        v24 = ~(~v16 / 0x2AuLL);
        goto LABEL_24;
      }
LABEL_3:
      if ( v16 <= 41 )
      {
        v9 = v12 + 12 * a2;
        v10 = v8 - 0x5555555555555555LL * ((*a1 - a1[1]) >> 2);
        if ( v10 < 0 )
          goto LABEL_25;
        goto LABEL_5;
      }
      v24 = v16 / 0x2AuLL;
LABEL_24:
      v9 = *(_QWORD *)(v14 + 8 * v24) + 12 * (v16 - 42 * v24);
      v10 = v8 - 0x5555555555555555LL * ((*a1 - a1[1]) >> 2);
      if ( v10 < 0 )
      {
LABEL_25:
        v25 = ~(~v10 / 0x2AuLL);
        goto LABEL_34;
      }
LABEL_5:
      if ( v10 <= 41 )
      {
        v11 = v12 + 12 * v8;
        goto LABEL_7;
      }
      v25 = v10 / 42;
LABEL_34:
      v11 = *(_QWORD *)(v14 + 8 * v25) + 12 * (v10 - 42 * v25);
LABEL_7:
      *(_QWORD *)v11 = *(_QWORD *)v9;
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(v9 + 8);
      if ( v59 <= a2 )
      {
        v6 = a3;
        a6 = v57;
        break;
      }
      v8 = a2;
    }
  }
  if ( (v6 & 1) != 0 || (v6 - 2) / 2 != a2 )
  {
    v28 = a2 - 1;
    goto LABEL_43;
  }
  v49 = *a1;
  v50 = a1[3];
  v28 = 2 * a2;
  v51 = 0xAAAAAAAAAAAAAAABLL * ((*a1 - a1[1]) >> 2) + 2 * a2 + 1;
  if ( v51 < 0 )
  {
    v52 = ~(~v51 / 0x2AuLL);
    goto LABEL_91;
  }
  if ( v51 > 41 )
  {
    v52 = v51 / 42;
LABEL_91:
    v53 = *(_QWORD *)(v50 + 8 * v52) + 12 * (v51 - 42 * v52);
    goto LABEL_92;
  }
  v53 = v49 + 12 * (2 * a2 + 1);
LABEL_92:
  v54 = a2 - 0x5555555555555555LL * ((*a1 - a1[1]) >> 2);
  if ( v54 < 0 )
  {
    v56 = ~(~v54 / 0x2AuLL);
    goto LABEL_99;
  }
  if ( v54 > 41 )
  {
    v56 = v54 / 42;
LABEL_99:
    v55 = *(_QWORD *)(v50 + 8 * v56) + 12 * (v54 - 42 * v56);
    goto LABEL_95;
  }
  v55 = v49 + 12 * a2;
LABEL_95:
  a2 = 2 * a2 + 1;
  *(_QWORD *)v55 = *(_QWORD *)v53;
  *(_DWORD *)(v55 + 8) = *(_DWORD *)(v53 + 8);
LABEL_43:
  v29 = *a1;
  v30 = a1[3];
  v31 = _mm_loadl_epi64(&v62);
  v32 = v62.m128i_i32[2];
  v33 = _mm_cvtsi128_si32(v31);
  v34 = v28 / 2;
  v35 = _mm_shuffle_epi32(v31, 229);
  v36 = 0xAAAAAAAAAAAAAAABLL * ((*a1 - a1[1]) >> 2);
  if ( a2 > v60 )
  {
    v58 = _mm_cvtsi128_si32(v35);
    while ( 1 )
    {
      v43 = v36 + v34;
      if ( (__int64)(v36 + v34) < 0 )
        break;
      if ( v43 > 41 )
      {
        v44 = v43 / 42;
LABEL_64:
        v38 = (int *)(*(_QWORD *)(v30 + 8 * v44) + 12 * (v43 - 42 * v44));
        v39 = *v38;
        if ( *v38 == a6 )
        {
          if ( v33 != a6 )
          {
            if ( v43 >= 0 )
              goto LABEL_67;
            goto LABEL_81;
          }
          goto LABEL_74;
        }
        goto LABEL_47;
      }
      v37 = 2 * v34;
      v38 = (int *)(v29 + 12 * v34);
      v39 = *v38;
      if ( *v38 == a6 )
      {
        if ( v33 != a6 )
          goto LABEL_57;
LABEL_74:
        if ( v38[1] <= v58 )
          goto LABEL_75;
        goto LABEL_54;
      }
LABEL_47:
      if ( v33 == a6 )
        goto LABEL_75;
      if ( v33 | v39 )
      {
        if ( v32 > v38[2] || v32 >= v38[2] && (v39 < v33 || v39 <= v33 && v38[1] < v58) )
          goto LABEL_75;
      }
      else if ( v38[1] >= v58 )
      {
        goto LABEL_75;
      }
LABEL_54:
      if ( v43 >= 0 )
      {
        if ( v43 <= 41 )
        {
          v37 = 2 * v34;
LABEL_57:
          v40 = v29 + 4 * (v37 + v34);
          v41 = v36 + a2;
          if ( (__int64)(v36 + a2) < 0 )
            goto LABEL_69;
          goto LABEL_58;
        }
LABEL_67:
        v45 = v43 / 42;
        goto LABEL_68;
      }
LABEL_81:
      v45 = ~(~v43 / 0x2AuLL);
LABEL_68:
      v40 = *(_QWORD *)(v30 + 8 * v45) + 12 * (v43 - 42 * v45);
      v41 = v36 + a2;
      if ( (__int64)(v36 + a2) < 0 )
      {
LABEL_69:
        v46 = ~(~v41 / 0x2AuLL);
        goto LABEL_72;
      }
LABEL_58:
      if ( v41 <= 41 )
      {
        v42 = v29 + 12 * a2;
        goto LABEL_60;
      }
      v46 = v41 / 42;
LABEL_72:
      v42 = *(_QWORD *)(v30 + 8 * v46) + 12 * (v41 - 42 * v46);
LABEL_60:
      a2 = v34;
      *(_QWORD *)v42 = *(_QWORD *)v40;
      *(_DWORD *)(v42 + 8) = *(_DWORD *)(v40 + 8);
      if ( v60 >= v34 )
        goto LABEL_76;
      v34 = (v34 - 1) / 2;
    }
    v44 = ~(~v43 / 0x2AuLL);
    goto LABEL_64;
  }
LABEL_75:
  v43 = a2 + v36;
LABEL_76:
  if ( v43 < 0 )
  {
    v47 = ~(~v43 / 0x2AuLL);
  }
  else
  {
    if ( v43 <= 41 )
    {
      result = v29 + 12 * a2;
      goto LABEL_80;
    }
    v47 = v43 / 42;
  }
  result = *(_QWORD *)(v30 + 8 * v47) + 12 * (v43 - 42 * v47);
LABEL_80:
  *(_DWORD *)(result + 8) = v32;
  *(_QWORD *)result = v31.m128i_i64[0];
  return result;
}
