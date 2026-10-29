__int64 __fastcall sub_16C3210(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // cl
  __int64 v19; // r9
  int v20; // ebp
  int v21; // r10d
  int v22; // ecx
  __int64 v23; // rdi
  int v24; // esi
  unsigned int v25; // edx
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r11
  __int64 v29; // r9
  __int64 v30; // rbp
  __int64 result; // rax
  unsigned int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // edi
  __int64 v35; // r8
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // rax
  unsigned int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // ebp
  int v45; // ebp
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // ebp
  unsigned __int64 v49; // rsi
  __int64 *v50; // rax
  char *v51; // rcx
  int v52; // edx
  const __m128i *v53; // r8
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __m128i *v56; // rcx
  __int64 *v57; // r11
  __int64 *v58; // rsi
  __int64 v59; // [rsp+8h] [rbp-E0h]
  __int64 v60; // [rsp+8h] [rbp-E0h]
  int v61; // [rsp+8h] [rbp-E0h]
  __int64 v62; // [rsp+8h] [rbp-E0h]
  __int64 *v63; // [rsp+8h] [rbp-E0h]
  int v64; // [rsp+10h] [rbp-D8h]
  int v65; // [rsp+10h] [rbp-D8h]
  __int64 *v66; // [rsp+10h] [rbp-D8h]
  __int64 v67; // [rsp+18h] [rbp-D0h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+18h] [rbp-D0h]
  __int64 v70; // [rsp+28h] [rbp-C0h] BYREF
  __int64 *v71; // [rsp+30h] [rbp-B8h] BYREF
  char *v72; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+40h] [rbp-A8h]
  char v74; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 1096);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x40) == 0 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v9 = sub_16B5F60(a1, v5, 1);
    if ( !v9 )
    {
      v49 = v5;
      v11 = v4;
      v10 = v4;
      sub_16C1900(a1, v49);
      goto LABEL_43;
    }
    v10 = v4;
    v11 = v4;
    goto LABEL_4;
  }
  v43 = *(unsigned int *)(a1 + 24);
  v44 = v4 & 0x7FFFFFFF;
  if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 28) )
  {
    sub_2237220(a1 + 16, a1 + 32, v43 + 1, 4);
    v43 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v43) = v44;
  v10 = *(unsigned int *)(a1 + 24);
  v45 = *(_DWORD *)(a1 + 1096);
  v46 = *(unsigned int *)(a1 + 28);
  v47 = (unsigned int)(v10 + 1);
  *(_DWORD *)(a1 + 24) = v47;
  v48 = v45 & 0x7FFFFFFF;
  if ( v47 + 1 > v46 )
  {
    sub_2237220(a1 + 16, a1 + 32, v47 + 1, 4);
    v47 = *(unsigned int *)(a1 + 24);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v47) = v48;
  v11 = *(unsigned int *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 1096);
  *(_DWORD *)(a1 + 24) = v11 + 1;
  v9 = sub_16B5F60(a1, *(_QWORD *)(a2 + 16), 1);
  if ( v9 )
LABEL_4:
    sub_16BFA80(a1, v9, a2, v6, v7, v8);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1096) = v10;
    v72 = &v74;
    v12 = *(_QWORD *)(a1 + 1104);
    v73 = 0x400000000LL;
    v75 = v12;
    *(_QWORD *)(a1 + 1104) = &v72;
    v13 = *(_QWORD *)(a2 + 24);
    v71 = (__int64 *)a1;
    sub_16C1900(a1, v13);
    sub_16BB4C0((__int64 *)&v71);
    *(_DWORD *)(a1 + 1096) = v11;
    sub_16C1900(a1, *(_QWORD *)(a2 + 16));
    if ( v9 )
    {
      if ( (*(_WORD *)a2 & 0x1FF) == 0x77 )
        sub_16C0390(a1, v9, a2, v14, v15, v16);
      goto LABEL_9;
    }
LABEL_44:
    *(_DWORD *)(a1 + 1096) = v4;
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 1096) = v11;
  sub_16C1900(a1, *(_QWORD *)(a2 + 16));
  if ( !v9 )
  {
LABEL_43:
    *(_DWORD *)(a1 + 1096) = v10;
    sub_16C1900(a1, *(_QWORD *)(a2 + 24));
    goto LABEL_44;
  }
  if ( (*(_WORD *)a2 & 0x1FF) == 0x77 )
    sub_16C0390(a1, v9, a2, v40, v41, v42);
  *(_DWORD *)(a1 + 1096) = v10;
  sub_16C1900(a1, *(_QWORD *)(a2 + 24));
LABEL_9:
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_BYTE *)(a1 + 64);
  *(_DWORD *)(a1 + 1096) = v4;
  LOBYTE(v17) = *(_BYTE *)(*(_QWORD *)(v17 + 232) + 1LL);
  v70 = v9;
  LOBYTE(v17) = v17 & 8;
  v19 = (_BYTE)v17 == 0 ? 32LL : 16LL;
  v20 = 2 - ((_BYTE)v17 != 0);
  v21 = v20;
  v22 = v18 & 1;
  if ( v22 )
  {
    v23 = a1 + 72;
    v24 = 15;
  }
  else
  {
    v39 = *(_DWORD *)(a1 + 80);
    v23 = *(_QWORD *)(a1 + 72);
    if ( !v39 )
    {
      v71 = nullptr;
      v32 = *(_DWORD *)(a1 + 64);
      v33 = (v32 >> 1) + 1;
      goto LABEL_22;
    }
    v24 = v39 - 1;
  }
  v25 = v24 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v26 = (__int64 *)(v23 + ((unsigned __int64)v25 << 6));
  v27 = *v26;
  if ( *v26 == v9 )
    goto LABEL_12;
  if ( v27 == -4096 )
  {
LABEL_49:
    v71 = v26;
    v32 = *(_DWORD *)(a1 + 64);
    v34 = 48;
    v39 = 16;
    v33 = (v32 >> 1) + 1;
    if ( (_BYTE)v22 )
      goto LABEL_23;
    v39 = *(_DWORD *)(a1 + 80);
LABEL_22:
    v34 = 3 * v39;
LABEL_23:
    v35 = (unsigned int)(4 * v33);
    v36 = (_QWORD *)(a1 + 64);
    if ( (unsigned int)v35 >= v34 )
    {
      v68 = v19;
      sub_16B9B50(a1 + 64, 2 * v39, v33, v36, v35, v19);
      sub_16B5A70(a1 + 64, &v70, &v71);
      v9 = v70;
      v32 = *(_DWORD *)(a1 + 64);
      v21 = v20;
      v19 = v68;
    }
    else
    {
      v37 = v39 - *(_DWORD *)(a1 + 68) - (unsigned int)v33;
      if ( (unsigned int)v37 <= v39 >> 3 )
      {
        v69 = v19;
        sub_16B9B50(a1 + 64, v39, v37, v36, v35, v19);
        sub_16B5A70(a1 + 64, &v70, &v71);
        v9 = v70;
        v32 = *(_DWORD *)(a1 + 64);
        v19 = v69;
        v21 = v20;
      }
    }
    *(_DWORD *)(a1 + 64) = (2 * (v32 >> 1) + 2) | v32 & 1;
    v38 = v71;
    if ( *v71 != -4096 )
      --*(_DWORD *)(a1 + 68);
    v38[1] = 0;
    v28 = (__int64)(v38 + 1);
    *((_DWORD *)v38 + 4) = 0;
    v38[3] = 0;
    *((_DWORD *)v38 + 8) = 0;
    v38[5] = 0;
    *((_DWORD *)v38 + 12) = 0;
    *((_BYTE *)v38 + 56) = 0;
    *v38 = v9;
    v9 = v70;
    goto LABEL_29;
  }
  v61 = 1;
  v57 = nullptr;
  while ( 1 )
  {
    if ( v27 == -8192 && !v57 )
      v57 = v26;
    v25 = v24 & (v61 + v25);
    v26 = (__int64 *)(v23 + ((unsigned __int64)v25 << 6));
    v27 = *v26;
    if ( *v26 == v9 )
      break;
    if ( v27 == -4096 )
    {
      if ( v57 )
        v26 = v57;
      goto LABEL_49;
    }
    ++v61;
  }
LABEL_12:
  v28 = (__int64)(v26 + 1);
  if ( !*((_BYTE *)v26 + 56) )
  {
LABEL_29:
    v67 = v19;
    v65 = v21;
    v60 = v28;
    sub_16BF690(a1, v9, v28, a2, 1);
    v9 = v70;
    v19 = v67;
    v21 = v65;
    v28 = v60;
  }
  v29 = v28 + v19;
  v30 = v28 + 16LL * v20;
  if ( *(_QWORD *)v30 )
  {
    v64 = v21;
    v59 = v29;
    if ( (unsigned __int8)sub_16BB1E0((__int64 *)(a1 + 16), *(_DWORD *)(a1 + 1096), *(_DWORD *)(v29 + 8)) )
      goto LABEL_15;
    v29 = v59;
    v21 = v64;
  }
  if ( v21 == 2 )
  {
    v50 = *(__int64 **)(a1 + 1104);
    if ( v50 )
    {
      v51 = *(char **)v29;
      v52 = *(_DWORD *)(v29 + 8);
      v71 = (__int64 *)v9;
      v53 = (const __m128i *)&v71;
      LODWORD(v73) = v52;
      v72 = v51;
      v54 = *((unsigned int *)v50 + 2);
      v55 = v54 + 1;
      v56 = (__m128i *)(*v50 + 24 * v54);
      if ( v55 > *((unsigned int *)v50 + 3) )
      {
        v58 = v50 + 2;
        v62 = *v50;
        if ( *v50 > (unsigned __int64)&v71 || v56 <= (__m128i *)&v71 )
        {
          v63 = v50;
          sub_2237220(v50, v58, v55, 24);
          v50 = v63;
          v53 = (const __m128i *)&v71;
          v56 = (__m128i *)(*v63 + 24LL * *((unsigned int *)v63 + 2));
        }
        else
        {
          v66 = v50;
          sub_2237220(v50, v58, v55, 24);
          v50 = v66;
          v53 = (const __m128i *)((char *)&v71 + *v66 - v62);
          v56 = (__m128i *)(*v66 + 24LL * *((unsigned int *)v66 + 2));
        }
      }
      *v56 = _mm_loadu_si128(v53);
      v56[1].m128i_i64[0] = v53[1].m128i_i64[0];
      ++*((_DWORD *)v50 + 2);
    }
  }
  *(_QWORD *)v30 = a2;
  *(_DWORD *)(v30 + 8) = *(_DWORD *)(a1 + 1096);
LABEL_15:
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
  if ( (*(_BYTE *)(result + 1) & 0x40) != 0 )
  {
    result = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(result + 4 * v10 + 3) |= 0x80u;
    *(_BYTE *)(result + 4 * v11 + 3) |= 0x80u;
  }
  return result;
}
