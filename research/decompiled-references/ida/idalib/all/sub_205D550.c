__int64 __fastcall sub_205D550(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  void **p_ptr; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // rbp
  void **v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // r11
  __m128 *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // rax
  _QWORD *v27; // r10
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // r11
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // r14
  __int64 i; // r13
  _QWORD *v38; // rdi
  void **v40; // [rsp+10h] [rbp-128h]
  __int64 v41; // [rsp+10h] [rbp-128h]
  __int64 v42; // [rsp+10h] [rbp-128h]
  __int64 v43; // [rsp+10h] [rbp-128h]
  __int64 v44; // [rsp+10h] [rbp-128h]
  __int64 v45; // [rsp+18h] [rbp-120h]
  __int64 v46; // [rsp+18h] [rbp-120h]
  __int64 *v47; // [rsp+20h] [rbp-118h] BYREF
  __m128 *v48; // [rsp+28h] [rbp-110h]
  __int64 v49; // [rsp+30h] [rbp-108h]
  int *v50; // [rsp+38h] [rbp-100h]
  __int64 v51; // [rsp+40h] [rbp-F8h]
  int v52; // [rsp+48h] [rbp-F0h]
  int v53; // [rsp+4Ch] [rbp-ECh]
  __m128 *v54; // [rsp+50h] [rbp-E8h]
  _QWORD *v55; // [rsp+58h] [rbp-E0h]
  __int64 v56; // [rsp+60h] [rbp-D8h] BYREF
  __m128 v57[2]; // [rsp+70h] [rbp-C8h] BYREF
  int v58; // [rsp+90h] [rbp-A8h] BYREF
  __m128 v59; // [rsp+98h] [rbp-A0h]
  __m128 *v60; // [rsp+A8h] [rbp-90h]
  void *ptr; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-80h]
  _BYTE v63[120]; // [rsp+C0h] [rbp-78h] BYREF

  v4 = 0;
  p_ptr = &ptr;
  v7 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
  v62 = 0x800000000LL;
  v8 = 0;
  ptr = v63;
  if ( (unsigned int)v7 > 8uLL )
  {
    sub_2237220(&ptr, v63, (unsigned int)v7, 8);
    v4 = (unsigned int)v62;
    v7 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
    v8 = (unsigned int)v62;
    v9 = v7;
    if ( (_DWORD)v7 )
      goto LABEL_3;
  }
  else
  {
    v9 = v7;
    if ( (_DWORD)v7 )
    {
LABEL_3:
      v10 = 0;
      v11 = a2;
      v12 = 0;
      v13 = (unsigned int)(v7 - 1);
      v9 = 0;
      v14 = &ptr;
      while ( 1 )
      {
        v16 = *(_QWORD *)(a1 + 32 * (v10 - v7));
        if ( v11 == v16 )
        {
          v15 = v8 + 1;
          ++v9;
          v16 = a3;
          v12 = v10;
          if ( v8 + 1 <= (unsigned __int64)HIDWORD(v62) )
          {
LABEL_5:
            *((_QWORD *)ptr + v8) = v16;
            v8 = (unsigned int)(v62 + 1);
            LODWORD(v62) = v62 + 1;
            if ( v13 == v10 )
              goto LABEL_10;
            goto LABEL_6;
          }
        }
        else
        {
          v15 = v8 + 1;
          if ( v8 + 1 <= (unsigned __int64)HIDWORD(v62) )
            goto LABEL_5;
        }
        v45 = v16;
        v40 = v14;
        sub_2237220(v14, v14 + 2, v15, 8);
        v14 = v40;
        *((_QWORD *)ptr + (unsigned int)v62) = v45;
        v8 = (unsigned int)(v62 + 1);
        LODWORD(v62) = v62 + 1;
        if ( v13 == v10 )
        {
LABEL_10:
          a2 = v11;
          v4 = (unsigned int)v8;
          p_ptr = v14;
          goto LABEL_11;
        }
LABEL_6:
        ++v10;
        v7 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
      }
    }
  }
  v12 = 0;
LABEL_11:
  v17 = sub_2058460((char **)ptr, v4);
  if ( !v17 )
  {
    v19 = (__int64 *)sub_20CB0D0(a1);
    v41 = *(_QWORD *)(a1 + 8);
    v49 = *v19;
    v46 = v49 + 1464;
    v52 = v62;
    v48 = (__m128 *)(unsigned int)v62;
    v47 = (__int64 *)ptr;
    v50 = &v58;
    v58 = sub_2053D00(ptr, (__int64)ptr + 8 * (unsigned int)v62);
    v20 = sub_2050F10(v41, &v58);
    v21 = v49;
    v22 = v48;
    v58 = v20;
    v23 = *(unsigned int *)(v49 + 1480);
    v60 = v48;
    v24 = *(_QWORD *)(v49 + 1464);
    v59 = _mm_loadh_ps((const double *)&v47);
    if ( (_DWORD)v23 )
    {
      v25 = v23 - 1;
      v26 = ((_DWORD)v23 - 1) & (unsigned int)v20;
      LODWORD(v48) = v26;
      v27 = (_QWORD *)(v24 + 8 * v26);
      v28 = *v27;
      if ( *v27 != -4096 )
      {
        v53 = 1;
        v51 = 8LL * (unsigned int)(v52 - 1);
        v49 = -32LL * (_QWORD)v22;
        while ( 1 )
        {
          if ( v28 != -8192 && v41 == *(_QWORD *)(v28 + 8) && v22 == (__m128 *)(*(_DWORD *)(v28 + 4) & 0x7FFFFFF) )
          {
            if ( !v52 )
            {
LABEL_34:
              v44 = v21;
              v48 = v57;
              sub_2056B00(v57, v27, (_QWORD *)(v24 + 8 * v23), v46, 1);
              v29 = v57[0].m128_u64[0];
              v30 = v44;
              goto LABEL_25;
            }
            if ( *v47 == *(_QWORD *)(v28 + v49) )
            {
              v55 = v27;
              v32 = v49 + v28;
              v33 = 0;
              v54 = v22;
              do
              {
                if ( v51 == v33 )
                {
                  v27 = v55;
                  goto LABEL_34;
                }
                v34 = v47[v33 / 8 + 1];
                v33 += 8LL;
              }
              while ( v34 == *(_QWORD *)(v32 + 4 * v33) );
              v22 = v54;
            }
          }
          v27 = (_QWORD *)(v24 + 8LL * (v25 & (unsigned int)(v53 + (_DWORD)v48)));
          LODWORD(v48) = v25 & (v53 + (_DWORD)v48);
          v28 = *v27;
          if ( *v27 == -4096 )
            break;
          ++v53;
        }
      }
    }
    v42 = v21;
    v48 = v57;
    sub_2056B00(v57, (_QWORD *)(v24 + 8 * v23), (_QWORD *)(v24 + 8 * v23), v46, 1);
    v29 = v57[0].m128_u64[0];
    v30 = v42;
LABEL_25:
    v31 = *(unsigned int *)(v30 + 1480);
    v47 = (__int64 *)v29;
    v43 = v30;
    sub_2056B00(
      v48,
      (_QWORD *)(*(_QWORD *)(v30 + 1464) + 8 * v31),
      (_QWORD *)(*(_QWORD *)(v30 + 1464) + 8 * v31),
      v46,
      1);
    if ( (__int64 *)v57[0].m128_u64[0] == v47 )
    {
      *(_QWORD *)sub_205A810(v46, a1) = -8192;
      --*(_DWORD *)(v43 + 1472);
      ++*(_DWORD *)(v43 + 1476);
      if ( v9 == 1 )
      {
        sub_20166C0((_QWORD *)(a1 + 32 * (v12 - (unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFF))), a3);
      }
      else
      {
        v35 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
        if ( v35 )
        {
          v36 = v35 - 1;
          for ( i = 0; ; ++i )
          {
            v38 = (_QWORD *)(a1 + 32 * (i - v35));
            if ( a2 == *v38 )
              sub_20166C0(v38, a3);
            if ( i == v36 )
              break;
            v35 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
          }
        }
      }
      v56 = a1;
      sub_205D180((__m128i *)v48, v46, &v56, (__int64)v50);
    }
    else
    {
      v17 = *v47;
    }
  }
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v17;
}
