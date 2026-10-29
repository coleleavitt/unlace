__int64 __fastcall sub_205CA10(__int64 a1, char *a2, char *a3)
{
  unsigned __int64 v6; // rdx
  char **v7; // r11
  __int64 v8; // rsi
  __int64 v9; // rdx
  char **v10; // rax
  unsigned int v11; // edx
  char **v12; // r14
  __int64 v13; // rbx
  char v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // r15
  __int64 *v18; // rax
  _QWORD *v19; // r15
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rdi
  __m128 v25; // xmm0
  int v26; // r11d
  __int64 v27; // rax
  __int64 *v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  __int64 *v36; // r15
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // r8
  unsigned int v40; // eax
  __int64 v41; // r14
  __int64 i; // rbx
  char **v43; // rdi
  int v44; // [rsp+0h] [rbp-118h]
  char **v45; // [rsp+0h] [rbp-118h]
  char **v46; // [rsp+10h] [rbp-108h]
  __int64 v47; // [rsp+10h] [rbp-108h]
  char **v48; // [rsp+18h] [rbp-100h]
  __int64 v49; // [rsp+18h] [rbp-100h]
  _QWORD *v50; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+28h] [rbp-F0h]
  int *v52; // [rsp+30h] [rbp-E8h]
  int v53; // [rsp+38h] [rbp-E0h]
  int v54; // [rsp+3Ch] [rbp-DCh]
  __int64 v55; // [rsp+40h] [rbp-D8h] BYREF
  __m128 v56[2]; // [rsp+50h] [rbp-C8h] BYREF
  int v57; // [rsp+70h] [rbp-A8h] BYREF
  __m128 v58; // [rsp+78h] [rbp-A0h]
  __int64 v59; // [rsp+88h] [rbp-90h]
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v61; // [rsp+98h] [rbp-80h]
  _BYTE v62[120]; // [rsp+A0h] [rbp-78h] BYREF

  v6 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
  if ( (*(_BYTE *)(a1 + 7) & 0x40) != 0 )
    v7 = *(char ***)(a1 - 8);
  else
    v7 = (char **)(a1 - 32 * v6);
  v8 = (__int64)v62;
  ptr = v62;
  v61 = 0x800000000LL;
  if ( v6 > 8 )
  {
    v45 = v7;
    sub_2237220(&ptr, v62, v6, 8);
    v7 = v45;
    v6 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
  }
  v9 = 4 * v6;
  v10 = &v7[v9];
  if ( &v7[v9] == v7 )
  {
    v44 = 0;
    LODWORD(v13) = 0;
  }
  else
  {
    v11 = v61;
    v12 = v7;
    LODWORD(v13) = 0;
    v14 = 1;
    v44 = 0;
    do
    {
      while ( 1 )
      {
        v17 = *v12;
        if ( a2 == *v12 )
        {
          ++v44;
          v17 = a3;
          v13 = ((char *)v12 - (char *)v7) >> 5;
        }
        else
        {
          v14 &= a3 == v17;
        }
        v15 = v11;
        v8 = HIDWORD(v61);
        v16 = v11 + 1LL;
        if ( v16 > HIDWORD(v61) )
          break;
        v12 += 4;
        *((_QWORD *)ptr + v15) = v17;
        v11 = v61 + 1;
        LODWORD(v61) = v61 + 1;
        if ( v10 == v12 )
          goto LABEL_13;
      }
      LOBYTE(v50) = v14;
      v12 += 4;
      v48 = v7;
      v8 = (__int64)v62;
      v46 = v10;
      sub_2237220(&ptr, v62, v16, 8);
      v7 = v48;
      v14 = (char)v50;
      *((_QWORD *)ptr + (unsigned int)v61) = v17;
      v11 = v61 + 1;
      v10 = v46;
      LODWORD(v61) = v61 + 1;
    }
    while ( v46 != v12 );
LABEL_13:
    if ( !v14 )
      goto LABEL_14;
  }
  if ( sub_20510E0(a3, v8) )
  {
    v34 = sub_2056DA0(*(_QWORD **)(a1 + 8), v8, v30, v31, v32, v33);
    goto LABEL_27;
  }
  if ( (unsigned __int8)*a3 <= 1u )
  {
    v34 = sub_2057E60(*(_QWORD **)(a1 + 8), v8, v30, v31, v32, v33);
    goto LABEL_27;
  }
LABEL_14:
  v18 = (__int64 *)sub_20CB0D0(a1);
  v19 = ptr;
  v20 = *v18;
  v53 = v61;
  v51 = (unsigned int)v61;
  v49 = v20 + 1440;
  v47 = *(_QWORD *)(a1 + 8);
  v57 = sub_2053D00(ptr, (__int64)ptr + 8 * (unsigned int)v61);
  v52 = &v57;
  v21 = sub_2050EA0(v47, &v57);
  v50 = v19;
  v22 = v51;
  v23 = *(_QWORD *)(v20 + 1440);
  v57 = v21;
  v24 = *(unsigned int *)(v20 + 1456);
  v25 = _mm_loadh_ps((const double *)&v50);
  v59 = v51;
  v58 = v25;
  if ( !(_DWORD)v24
    || (v26 = v24 - 1,
        v27 = ((_DWORD)v24 - 1) & (unsigned int)v21,
        LODWORD(v50) = v27,
        v28 = (__int64 *)(v23 + 8 * v27),
        v29 = *v28,
        *v28 == -4096) )
  {
LABEL_30:
    sub_2056A90(v56, (_QWORD *)(v23 + 8 * v24), (_QWORD *)(v23 + 8 * v24), v49, 1);
    v36 = (__int64 *)v56[0].m128_u64[0];
  }
  else
  {
    v54 = 1;
    v51 *= -32;
    while ( 1 )
    {
      if ( v29 != -8192 && v47 == *(_QWORD *)(v29 + 8) && v22 == (*(_DWORD *)(v29 + 4) & 0x7FFFFFF) )
      {
        if ( !v53 )
          goto LABEL_39;
        if ( *v19 == *(_QWORD *)(v29 + v51) )
          break;
      }
LABEL_20:
      v28 = (__int64 *)(v23 + 8LL * (v26 & (unsigned int)(v54 + (_DWORD)v50)));
      LODWORD(v50) = v26 & (v54 + (_DWORD)v50);
      v29 = *v28;
      if ( *v28 == -4096 )
        goto LABEL_30;
      ++v54;
    }
    v37 = v51 + v29;
    v38 = 0;
    while ( 8LL * (unsigned int)(v53 - 1) != v38 )
    {
      v39 = v19[v38 / 8 + 1];
      v38 += 8LL;
      if ( v39 != *(_QWORD *)(v37 + 4 * v38) )
        goto LABEL_20;
    }
LABEL_39:
    sub_2056A90(v56, v28, (_QWORD *)(v23 + 8 * v24), v49, 1);
    v36 = (__int64 *)v56[0].m128_u64[0];
  }
  sub_2056A90(
    v56,
    (_QWORD *)(*(_QWORD *)(v20 + 1440) + 8LL * *(unsigned int *)(v20 + 1456)),
    (_QWORD *)(*(_QWORD *)(v20 + 1440) + 8LL * *(unsigned int *)(v20 + 1456)),
    v49,
    1);
  if ( (__int64 *)v56[0].m128_u64[0] == v36 )
  {
    *(_QWORD *)sub_205A4E0(v49, a1) = -8192;
    --*(_DWORD *)(v20 + 1448);
    ++*(_DWORD *)(v20 + 1452);
    if ( v44 == 1 )
    {
      sub_20166C0(
        (_QWORD *)(a1 + 32 * ((unsigned int)v13 - (unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFF))),
        (__int64)a3);
    }
    else
    {
      v40 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
      if ( v40 )
      {
        v41 = v40 - 1;
        for ( i = 0; ; ++i )
        {
          v43 = (char **)(a1 + 32 * (i - v40));
          if ( a2 == *v43 )
            sub_20166C0(v43, (__int64)a3);
          if ( i == v41 )
            break;
          v40 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
        }
      }
    }
    v34 = 0;
    v55 = a1;
    sub_205C8A0((__m128i *)v56, v49, &v55, (__int64)v52);
  }
  else
  {
    v34 = *v36;
  }
LABEL_27:
  if ( ptr != v62 )
    free(ptr);
  return v34;
}
