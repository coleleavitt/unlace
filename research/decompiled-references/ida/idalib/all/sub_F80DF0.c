__m128 *__fastcall sub_F80DF0(__m128 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 *v13; // rax
  unsigned __int64 v14; // r12
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // r14
  char *v18; // rsi
  _QWORD *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // r15
  unsigned int v31; // esi
  bool v32; // zf
  __m128 v34; // xmm0
  int v35; // r14d
  _QWORD *v36; // r11
  int v37; // ecx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  int v44; // edi
  _QWORD *v47; // [rsp+18h] [rbp-70h]
  _QWORD *v48; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v49; // [rsp+30h] [rbp-58h]
  __int64 *v50; // [rsp+38h] [rbp-50h]
  _QWORD *v51; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v52; // [rsp+48h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a4 + 8);
  if ( !v6 )
  {
    v48 = nullptr;
    v14 = 0;
    goto LABEL_25;
  }
  v7 = v6 - 1;
  v8 = *(_QWORD *)a4;
  v10 = 24LL * (int)v7;
  v11 = *(_QWORD *)(*(_QWORD *)a4 + v10);
  if ( (*(_BYTE *)(v11 + 12) & 1) != 0 )
  {
    v12 = v6;
  }
  else
  {
    if ( v6 == 1 )
    {
      v48 = nullptr;
      v6 = 1;
      v12 = 0;
      goto LABEL_12;
    }
    v11 = *(_QWORD *)(v8 + v10 - 24);
    v12 = v6 - 2;
    if ( (*(_BYTE *)(v11 + 12) & 1) == 0 )
    {
      v13 = (__int64 *)(v8 + 24LL * (int)v6 - 72);
      while ( v12 )
      {
        v11 = *v13;
        v8 = v12 - 1;
        v13 -= 3;
        if ( (*(_BYTE *)(v11 + 12) & 1) != 0 )
          goto LABEL_33;
        --v12;
      }
      v48 = nullptr;
      v12 = 0;
      goto LABEL_10;
    }
    v12 = v6 - 1;
  }
LABEL_33:
  v38 = sub_F79C60(*(__int64 **)(v11 + 16), v7, v8, v11, a5);
  v43 = sub_F63270(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL), v7, v39, v40, v41, v42);
  v6 = *(_DWORD *)(a4 + 8);
  v48 = v43;
LABEL_10:
  if ( v12 != v6 )
  {
    v8 = *(_QWORD *)a4;
LABEL_12:
    v14 = 0;
    v49 = &v52;
    v50 = (__int64 *)&v51;
    while ( 1 )
    {
      v17 = (_QWORD *)(v8 + 24LL * v12);
      v18 = (char *)v17[1];
      v19 = sub_EDE580(a2, v18, v8, v11, a5, a6);
      v23 = sub_F79C60(*(__int64 **)(*v17 + 16LL), (__int64)v18, v20, v21, v22);
      v15 = sub_F63270(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v18, v24, v25, v26, v27);
      v51 = v15;
      v29 = (_QWORD *)v15[16];
      if ( v29
        || (v47 = v15,
            sub_7052B0((__int64 *)(v15[13] + 96LL), v15[13], (__int64)v15, v11, v28, a6),
            v15 = v47,
            (v29 = (_QWORD *)v47[16]) != nullptr) )
      {
        v29 = (_QWORD *)v29[11];
      }
      v30 = v19[9];
      v51 = v29;
      v31 = *(_DWORD *)(v30 + 80);
      a5 = v30 + 64;
      if ( !v31 )
        break;
      a6 = *(_QWORD *)(v30 + 64);
      v11 = (v31 - 1) & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
      v15 = (_QWORD *)(a6 + 16 * v11);
      v16 = *v15;
      if ( v29 == (_QWORD *)*v15 )
        goto LABEL_14;
      v35 = 1;
      v36 = nullptr;
      if ( v16 != -4096 )
      {
        while ( 1 )
        {
          if ( v16 == -8192 && !v36 )
            v36 = v15;
          v44 = v35++;
          v11 = (v31 - 1) & (v44 + (_DWORD)v11);
          v15 = (_QWORD *)(a6 + 16LL * (unsigned int)v11);
          v16 = *v15;
          if ( v29 == (_QWORD *)*v15 )
            break;
          if ( v16 == -4096 )
          {
            if ( v36 )
              v15 = v36;
            goto LABEL_29;
          }
        }
LABEL_14:
        ++v12;
        v14 += v15[1];
        if ( v12 == v6 )
          goto LABEL_25;
        goto LABEL_15;
      }
LABEL_29:
      v37 = *(_DWORD *)(v30 + 72);
      v52 = v15;
      v11 = (unsigned int)(v37 + 1);
      a6 = (unsigned int)(4 * v11);
      if ( (unsigned int)a6 >= 3 * v31 )
        goto LABEL_20;
      a6 = v31 >> 3;
      if ( v31 - *(_DWORD *)(v30 + 76) - (unsigned int)v11 <= (unsigned int)a6 )
        goto LABEL_21;
LABEL_22:
      v32 = *v15 == -4096;
      *(_DWORD *)(v30 + 72) = v11;
      if ( !v32 )
        --*(_DWORD *)(v30 + 76);
      ++v12;
      *v15 = v29;
      v15[1] = 0;
      if ( v12 == v6 )
        goto LABEL_25;
LABEL_15:
      v8 = *(_QWORD *)a4;
    }
    v52 = nullptr;
LABEL_20:
    v31 *= 2;
LABEL_21:
    sub_7055A0(v30 + 64, v31, (__int64)v15, v11, a5, a6);
    sub_A6DD20((__int64 *)(v30 + 64), v50, v49);
    v29 = v51;
    v15 = v52;
    v11 = (unsigned int)(*(_DWORD *)(v30 + 72) + 1);
    goto LABEL_22;
  }
  v14 = 0;
LABEL_25:
  v34 = _mm_loadh_ps((const double *)&v48);
  a1[1].m128_u64[0] = v14;
  *a1 = v34;
  return a1;
}
