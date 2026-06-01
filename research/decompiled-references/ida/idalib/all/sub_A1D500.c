__int64 __fastcall sub_A1D500(__int64 a1, __int64 *a2, unsigned __int8 *a3, size_t a4, int a5, char a6)
{
  char *v7; // r13
  unsigned __int64 v9; // rax
  char v10; // dl
  int v12; // r12d
  __int64 v13; // r15
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rdx
  _WORD *v18; // rcx
  int v19; // edi
  __int64 v20; // r10
  _WORD *v21; // rsi
  unsigned __int16 *v22; // rsi
  int v23; // ebx
  int v24; // r12d
  __m128i v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  char *v28; // rax
  const __m128i *v29; // rsi
  __m128i *v30; // rdi
  __m128i v31; // xmm1
  char *v32; // r12
  char *v33; // rbx
  int v34; // eax
  int v35; // r12d
  __int64 v36; // rbx
  int v37; // r15d
  __m128i v38; // [rsp+0h] [rbp-2C8h]
  char *v39; // [rsp+0h] [rbp-2C8h]
  int v40; // [rsp+10h] [rbp-2B8h]
  __int64 v41; // [rsp+28h] [rbp-2A0h]
  unsigned __int16 *v44; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-278h] BYREF
  char v46; // [rsp+60h] [rbp-268h] BYREF
  char v47; // [rsp+70h] [rbp-258h]
  char *v48; // [rsp+78h] [rbp-250h]
  __int64 v49; // [rsp+80h] [rbp-248h]
  char v50; // [rsp+88h] [rbp-240h] BYREF
  __int16 v51; // [rsp+98h] [rbp-230h]
  __int64 v52; // [rsp+A0h] [rbp-228h]
  char *v53; // [rsp+A8h] [rbp-220h]
  __int64 v54; // [rsp+B0h] [rbp-218h]
  char v55; // [rsp+B8h] [rbp-210h] BYREF
  char *v56; // [rsp+C8h] [rbp-200h]
  __int64 v57; // [rsp+D0h] [rbp-1F8h]
  char v58; // [rsp+D8h] [rbp-1F0h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-1E0h]
  __int64 v60; // [rsp+F0h] [rbp-1D8h]
  __int64 v61; // [rsp+F8h] [rbp-1D0h]
  __m128i v62; // [rsp+100h] [rbp-1C8h] BYREF
  _BYTE v63[176]; // [rsp+110h] [rbp-1B8h] BYREF
  char *v64; // [rsp+1C0h] [rbp-108h] BYREF
  __int64 v65; // [rsp+1C8h] [rbp-100h]
  _BYTE v66[248]; // [rsp+1D0h] [rbp-F8h] BYREF

  v7 = (char *)(a1 + 16);
  if ( !*(_QWORD *)(*a2 + 152) )
    goto LABEL_3;
  v9 = sub_A0A820(*a2, a3, a4);
  if ( !v10 )
    goto LABEL_3;
  v12 = -1;
  if ( a6 )
    v12 = a5;
  v13 = *(_QWORD *)(*a2 + 152);
  v14 = v9 >> 33;
  v64 = (char *)__PAIR64__(v14, v12);
  v15 = sub_A0DEF0(v12, (int *)&v64 + 1);
  v16 = *(unsigned int *)(*(_QWORD *)(v13 + 8) + 4LL * ((unsigned int)v15 & (*(_DWORD *)v13 - 1)));
  if ( !(_DWORD)v16 )
    goto LABEL_3;
  v17 = (_WORD *)(*(_QWORD *)(v13 + 16) + v16);
  v18 = v17 + 1;
  if ( !*v17 )
    goto LABEL_3;
  v19 = 0;
  while ( 1 )
  {
    v20 = (unsigned __int16)v18[4];
    v21 = v18 + 6;
    if ( v15 == *(_QWORD *)v18 && *((_DWORD *)v18 + 3) == v12 && *((_DWORD *)v18 + 4) == v14 )
      break;
    ++v19;
    v18 = (_WORD *)((char *)v21 + (unsigned int)v20 + (unsigned __int16)v18[5]);
    if ( (unsigned __int16)*v17 == v19 )
      goto LABEL_3;
  }
  v41 = *a2;
  v22 = (_WORD *)((char *)v21 + v20);
  if ( !v22 )
  {
LABEL_3:
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    *(_BYTE *)(a1 + 212) = 0;
    return a1;
  }
  v44 = v22;
  v23 = *v22;
  v44 = v22 + 1;
  v64 = v66;
  v65 = 0x100000000LL;
  if ( (unsigned __int16)v23 > 1uLL )
    sub_A185A0((__int64 *)&v64, (unsigned __int16)v23);
  if ( v23 )
  {
    v24 = 0;
    do
    {
      v25.m128i_i64[0] = sub_A09840((__int64 *)&v44);
      v45[0] = &v46;
      v48 = &v50;
      v53 = &v55;
      v38 = v25;
      v56 = &v58;
      v45[1] = 0;
      v46 = 0;
      v47 &= 0xF0u;
      v49 = 0;
      v50 = 0;
      v51 &= 0xF000u;
      v52 = 0;
      v54 = 0;
      v55 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      sub_A122A0(&v44, (__int64)v45);
      v62 = v38;
      sub_A13DB0((__int64)v63, (__int64)v45);
      v26 = (unsigned int)v65;
      v27 = (unsigned int)v65 + 1LL;
      if ( v27 > HIDWORD(v65) )
      {
        if ( v64 > (char *)&v62 || &v62 >= (__m128i *)&v64[192 * (unsigned int)v65] )
        {
          sub_A185A0((__int64 *)&v64, v27);
          v28 = v64;
          v26 = (unsigned int)v65;
          v29 = &v62;
        }
        else
        {
          v39 = v64;
          sub_A185A0((__int64 *)&v64, v27);
          v28 = v64;
          v26 = (unsigned int)v65;
          v29 = (const __m128i *)&v64[(char *)&v62 - v39];
        }
      }
      else
      {
        v28 = v64;
        v29 = &v62;
      }
      ++v24;
      v30 = (__m128i *)&v28[192 * v26];
      *v30 = _mm_loadu_si128(v29);
      sub_A0A250((__int64)v30[1].m128i_i64, (__int64)v29[1].m128i_i64);
      LODWORD(v65) = v65 + 1;
      sub_A09D30((__int64)v63);
      sub_A09D30((__int64)v45);
    }
    while ( v23 != v24 );
  }
  v31 = _mm_loadu_si128((const __m128i *)(v41 + 8));
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = 0x100000000LL;
  v62 = v31;
  v40 = v65;
  if ( (_DWORD)v65 )
  {
    sub_A1D200((char **)a1, &v64);
    v34 = v65;
    v35 = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 212) = 0;
    v40 = v34;
    if ( v35 )
    {
      v7 = *(char **)a1;
      if ( (v62.m128i_i32[2] | v62.m128i_i32[1]) & 0x7FFFFFFF | v62.m128i_i32[0] | v62.m128i_i32[3] & 0x7FFFFFFF )
      {
        v36 = 0;
        v37 = 0;
        while ( (unsigned __int8)sub_A09E20((unsigned int *)&v7[v36], (unsigned int *)&v62) )
        {
          ++v37;
          v36 += 192;
          if ( v35 == v37 )
            goto LABEL_24;
        }
        *(_DWORD *)(a1 + 208) = v37;
        *(_BYTE *)(a1 + 212) = 1;
        goto LABEL_29;
      }
    }
    else
    {
      v7 = *(char **)a1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 212) = 0;
  }
LABEL_24:
  if ( !*(_DWORD *)v7
    && (*((_DWORD *)v7 + 1) & 0x7FFFFFFF) == 0
    && (*((_DWORD *)v7 + 2) & 0x7FFFFFFF) == 0
    && (*((_DWORD *)v7 + 3) & 0x7FFFFFFF) == 0 )
  {
    *(_DWORD *)(a1 + 208) = 0;
    *(_BYTE *)(a1 + 212) = 1;
  }
LABEL_29:
  v32 = v64;
  v33 = &v64[192 * v40];
  if ( v64 != v33 )
  {
    do
    {
      v33 -= 192;
      sub_A09D30((__int64)(v33 + 16));
    }
    while ( v32 != v33 );
    v33 = v64;
  }
  if ( v33 != v66 )
    free(v33);
  return a1;
}
