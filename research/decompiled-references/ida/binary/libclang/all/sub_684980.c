__int64 __fastcall sub_684980(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  _DWORD *v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdx
  const __m128i *v24; // rbp
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __m128i *v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  const __m128i *v31; // rbp
  __int64 v32; // rsi
  __m128i *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rax
  _QWORD *v37; // rbp
  int v38; // r12d
  __int64 v39; // rax
  __int64 v40; // rax
  _DWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  _DWORD *v45; // rdx
  _QWORD *v46; // rdx
  __int64 v47; // r12
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  __int64 v50; // r13
  __int64 v51; // rcx
  __int64 result; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r12
  __int64 v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rbp
  char *v60; // rbp
  __int64 v61; // rdi
  char *v62; // rbp
  _QWORD *v63; // rax
  __int64 v64; // rdi
  int v65; // eax
  __int64 v66; // rdi
  int v67; // eax
  __int64 v68; // rdi
  int v69; // eax
  _QWORD *v70; // rdx
  __int64 v71; // r12
  __int64 v72; // rcx
  __int64 v73; // [rsp+8h] [rbp-D0h]
  __int64 v75; // [rsp+20h] [rbp-B8h]
  __int64 v76; // [rsp+28h] [rbp-B0h]
  __int128 v77; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v78; // [rsp+40h] [rbp-98h]
  __int128 v79; // [rsp+50h] [rbp-88h]
  __int128 v80; // [rsp+60h] [rbp-78h]
  __int64 v81; // [rsp+70h] [rbp-68h]
  int v82; // [rsp+78h] [rbp-60h]
  __int64 v83; // [rsp+90h] [rbp-48h]

  v4 = a1 + 16;
  v7 = a1 + 288;
  v8 = a1 + 720;
  v9 = a2;
  *(_QWORD *)(v8 - 720) = v4;
  v75 = v4;
  *(_QWORD *)(v8 - 448) = v7;
  *(_QWORD *)(v8 - 712) = 0x400000000LL;
  *(_QWORD *)(v8 - 440) = 0x400000000LL;
  *(_QWORD *)(a1 + 712) = 0x400000000LL;
  *(_QWORD *)(a1 + 704) = v8;
  v10 = *(_QWORD *)(a2 + 104);
  v11 = *(_QWORD *)(v10 + 96);
  v76 = v8;
  v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v11 & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_5;
  }
  else
  {
    if ( v12 <= 3 || (v11 & 2) == 0 )
      goto LABEL_5;
    v46 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    v47 = v46[2275];
    if ( !v47 )
    {
      *(_QWORD *)(v10 + 96) = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
      goto LABEL_5;
    }
    v48 = v46[274];
    v46[284] += 24LL;
    v12 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a2 = v12 + 24;
    if ( v46[275] >= v12 + 24 && v48 )
    {
      v46[274] = a2;
    }
    else
    {
      a2 = 24;
      v12 = sub_67A630((__int64)(v46 + 274), 24, 3);
    }
    *(_QWORD *)v12 = v47;
    *(_DWORD *)(v12 + 8) = 0;
    v11 = v12 | 5;
    *(_QWORD *)(v12 + 16) = v10;
    *(_QWORD *)(v10 + 96) = v12 | 5;
    LOBYTE(v12) = v12 & 0xFA | 4;
  }
  if ( (v12 & 4) != 0 )
  {
    v13 = (_DWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13 )
    {
      v64 = *(_QWORD *)v13;
      v65 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
      if ( v13[2] != v65 )
      {
        v13[2] = v65;
        a2 = v10;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 144LL))(v64, v10);
      }
    }
  }
LABEL_5:
  v14 = *(_QWORD *)(v9 + 128);
  if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
    v15 = sub_7A2E20(v14, a2);
  else
    v15 = *(_QWORD *)(v14 + 24);
  v16 = *(_QWORD *)(v9 + 104);
  v17 = *(_QWORD *)(v16 + 96);
  v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v17 & 1) != 0 )
  {
    if ( v18 )
      goto LABEL_30;
LABEL_52:
    v42 = *(_QWORD *)(v9 + 128);
    v73 = v15 + 24LL * *(unsigned int *)(v42 + 16);
    goto LABEL_53;
  }
  if ( v18 <= 3 )
  {
    if ( v18 )
      goto LABEL_33;
    goto LABEL_52;
  }
  if ( (v17 & 2) == 0 )
  {
    v19 = *(_QWORD *)(v9 + 128);
    v73 = v15 + 24LL * *(unsigned int *)(v19 + 16);
    goto LABEL_11;
  }
  v49 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
  v50 = v49[2275];
  if ( !v50 )
  {
    *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
    v16 = *(_QWORD *)(v9 + 104);
    goto LABEL_33;
  }
  v51 = v49[274];
  v49[284] += 24LL;
  v18 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  a2 = v18 + 24;
  if ( v49[275] >= v18 + 24 && v51 )
  {
    v49[274] = a2;
  }
  else
  {
    a2 = 24;
    v18 = sub_67A630((__int64)(v49 + 274), 24, 3);
  }
  *(_QWORD *)v18 = v50;
  *(_DWORD *)(v18 + 8) = 0;
  v17 = v18 | 5;
  *(_QWORD *)(v18 + 16) = v16;
  *(_QWORD *)(v16 + 96) = v18 | 5;
  LOBYTE(v18) = v18 & 0xFA | 4;
LABEL_30:
  if ( (v18 & 4) != 0 )
  {
    v41 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v41 )
    {
      v66 = *(_QWORD *)v41;
      v67 = *(_DWORD *)(*(_QWORD *)v41 + 12LL);
      if ( v41[2] != v67 )
      {
        v41[2] = v67;
        a2 = v16;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 144LL))(v66, v16);
      }
    }
  }
  v16 = *(_QWORD *)(v9 + 104);
LABEL_33:
  v42 = *(_QWORD *)(v9 + 128);
  v43 = *(_QWORD *)(v16 + 96);
  v19 = v42;
  v73 = v15 + 24LL * *(unsigned int *)(v42 + 16);
  v44 = v43 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v43 & 1) != 0 )
  {
    if ( v44 )
    {
LABEL_35:
      if ( (v44 & 4) != 0 )
      {
        v45 = (_DWORD *)(v43 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v45 )
        {
          v68 = *(_QWORD *)v45;
          v69 = *(_DWORD *)(*(_QWORD *)v45 + 12LL);
          if ( v45[2] != v69 )
          {
            v45[2] = v69;
            a2 = v16;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 144LL))(v68, v16);
          }
        }
        v19 = *(_QWORD *)(v9 + 128);
        if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
          goto LABEL_12;
        goto LABEL_38;
      }
      v42 = *(_QWORD *)(v9 + 128);
    }
LABEL_53:
    v19 = v42;
    goto LABEL_11;
  }
  if ( v44 <= 3 )
    goto LABEL_53;
  if ( (v43 & 2) != 0 )
  {
    v70 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
    v71 = v70[2275];
    if ( v71 )
    {
      v72 = v70[274];
      v70[284] += 24LL;
      v44 = (v72 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2 = v44 + 24;
      if ( v70[275] >= v44 + 24 && v72 )
      {
        v70[274] = a2;
      }
      else
      {
        a2 = 24;
        v44 = sub_67A630((__int64)(v70 + 274), 24, 3);
      }
      *(_QWORD *)v44 = v71;
      *(_DWORD *)(v44 + 8) = 0;
      v43 = v44 | 5;
      *(_QWORD *)(v44 + 16) = v16;
      *(_QWORD *)(v16 + 96) = v44 | 5;
      LOBYTE(v44) = v44 & 0xFA | 4;
      goto LABEL_35;
    }
    *(_QWORD *)(v16 + 96) = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
    v19 = *(_QWORD *)(v9 + 128);
  }
LABEL_11:
  if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
  {
LABEL_12:
    v20 = *(_QWORD *)(v19 + 24);
    goto LABEL_13;
  }
LABEL_38:
  v20 = sub_7A2E20(v19, a2);
LABEL_13:
  if ( v73 != v20 )
  {
    while ( 1 )
    {
      v28 = *(unsigned int *)(a1 + 280);
      v29 = *(unsigned int *)(a1 + 284);
      v83 = 0;
      v30 = *(_QWORD *)(a1 + 272);
      v82 = 0;
      v31 = (const __m128i *)&v77;
      v32 = v28 + 1;
      v78 = 0;
      v81 = 0;
      if ( v29 < v28 + 1 )
      {
        v61 = a1 + 272;
        if ( (unsigned __int64)&v77 < v30 || (unsigned __int64)&v77 >= v30 + 104 * v28 )
        {
          sub_6846A0(v61, v32);
          v30 = *(_QWORD *)(a1 + 272);
          v28 = *(unsigned int *)(a1 + 280);
        }
        else
        {
          v62 = (char *)&v77 - v30;
          sub_6846A0(v61, v32);
          v30 = *(_QWORD *)(a1 + 272);
          v28 = *(unsigned int *)(a1 + 280);
          v31 = (const __m128i *)&v62[v30];
        }
      }
      v33 = (__m128i *)(v30 + 104 * v28);
      *v33 = _mm_loadu_si128(v31);
      v33[1] = _mm_loadu_si128(v31 + 1);
      v33[2] = _mm_loadu_si128(v31 + 2);
      v33[3] = _mm_loadu_si128(v31 + 3);
      v33[4] = _mm_loadu_si128(v31 + 4);
      v33[5] = _mm_loadu_si128(v31 + 5);
      v34 = v31[6].m128i_i64[0];
      v31[6].m128i_i64[0] = 0;
      v33[6].m128i_i64[0] = v34;
      ++*(_DWORD *)(a1 + 280);
      v35 = *(_QWORD *)(**(_QWORD **)(v20 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v36 = *(_QWORD *)(v35 + 8);
      if ( (v36 & 7) != 0 || (v37 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL), (v36 & 8) != 0) )
        v37 = (_QWORD *)(sub_B0CF30(**(_QWORD **)(v20 + 16), v32) & 0xFFFFFFFFFFFFFFF0LL);
      v38 = sub_67B2B0(a1, (int *)v20);
      v39 = sub_B10DA0(*v37, v20);
      if ( v39 )
      {
        v21 = *(_QWORD *)(v39 + 32);
        goto LABEL_16;
      }
      v40 = sub_B10F70(*v37);
      if ( v40 )
        break;
      v63 = (_QWORD *)(*(_QWORD *)(*v37 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v63 + 16LL) == 47 )
      {
        v21 = sub_B14A40(*v63);
LABEL_16:
        if ( v21 )
          sub_67F660(a3, v21, (__m128i *)(*(_QWORD *)(a1 + 272) + 104LL * *(unsigned int *)(a1 + 280) - 104), a4);
      }
      v22 = *(_QWORD *)(a3 + 40);
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      sub_639E80((__int64)&v77 + 8, v20, v22);
      if ( v38 )
      {
        *((_QWORD *)&v79 + 1) = a3;
        DWORD2(v80) = v38;
      }
      v23 = *(unsigned int *)(a1 + 8);
      v24 = (const __m128i *)&v77;
      v25 = *(_QWORD *)a1;
      v26 = v23 + 1;
      if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v23 + 1) )
      {
        if ( (unsigned __int64)&v77 < v25 || (unsigned __int64)&v77 >= v25 + (v23 << 6) )
        {
          sub_25D6060(a1, v75, v26, 64);
          v25 = *(_QWORD *)a1;
          v23 = *(unsigned int *)(a1 + 8);
        }
        else
        {
          v60 = (char *)&v77 - v25;
          sub_25D6060(a1, v75, v26, 64);
          v25 = *(_QWORD *)a1;
          v23 = *(unsigned int *)(a1 + 8);
          v24 = (const __m128i *)&v60[*(_QWORD *)a1];
        }
      }
      v20 += 24;
      v27 = (__m128i *)((v23 << 6) + v25);
      *v27 = _mm_loadu_si128(v24);
      v27[1] = _mm_loadu_si128(v24 + 1);
      v27[2] = _mm_loadu_si128(v24 + 2);
      v27[3] = _mm_loadu_si128(v24 + 3);
      result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = result;
      if ( v73 == v20 )
        goto LABEL_54;
    }
    *(_QWORD *)&v77 = *(_QWORD *)(v40 + 32);
    v21 = sub_B03A00(&v77, 0);
    goto LABEL_16;
  }
  result = *(unsigned int *)(a1 + 8);
LABEL_54:
  if ( (_DWORD)result )
  {
    result <<= 6;
    v53 = 0;
    v54 = 0;
    do
    {
      v55 = v54 + *(_QWORD *)(a1 + 272);
      if ( *(_QWORD *)(v55 + 16) && *(_QWORD *)(v55 + 24) )
        *(_QWORD *)(*(_QWORD *)a1 + v53) = v55;
      v53 += 64;
      v54 += 104;
    }
    while ( result != v53 );
    v56 = *(unsigned int *)(a1 + 8);
    if ( (_DWORD)v56 )
    {
      result = *(unsigned int *)(a1 + 712);
      v57 = v56 << 6;
      v58 = 0;
      do
      {
        v59 = v58 + *(_QWORD *)a1;
        if ( *(unsigned int *)(a1 + 716) < (unsigned __int64)(result + 1) )
        {
          sub_25D6060(a1 + 704, v76, result + 1, 8);
          *(_QWORD *)(*(_QWORD *)(a1 + 704) + 8LL * *(unsigned int *)(a1 + 712)) = v59;
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 704) + 8 * result) = v59;
        }
        v58 += 64;
        result = (unsigned int)(*(_DWORD *)(a1 + 712) + 1);
        *(_DWORD *)(a1 + 712) = result;
      }
      while ( v58 != v57 );
    }
  }
  return result;
}

