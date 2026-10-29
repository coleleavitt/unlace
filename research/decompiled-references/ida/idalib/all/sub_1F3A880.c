void __fastcall sub_1F3A880(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbp
  bool v13; // r12
  unsigned int v14; // esi
  __int64 v15; // rdi
  unsigned int v16; // edx
  __int64 *v17; // rax
  __int64 v18; // rcx
  bool *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // r12
  char v36; // r8
  __int64 v37; // rdx
  int v38; // r10d
  __int64 v39; // rax
  unsigned int v40; // edi
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdi
  unsigned int v50; // edx
  __int64 *v51; // rsi
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned int v54; // esi
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdi
  unsigned __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // r15
  __int64 *v63; // rax
  int v64; // eax
  __int64 *v65; // r11
  int v66; // r11d
  __int64 *v67; // r10
  int v68; // edx
  bool v69; // zf
  int v70; // esi
  __int64 *v71; // r10
  int v72; // ecx
  __int64 v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // r8
  unsigned int v76; // esi
  __int64 v77; // [rsp+8h] [rbp-60h]
  __int64 v78; // [rsp+18h] [rbp-50h] BYREF
  __m128 v79[4]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a1[2];
  v9 = *(unsigned int *)(v8 + 24);
  v10 = (unsigned int)(v9 + 1);
  *(_DWORD *)(v8 + 24) = v10;
  v11 = *(_QWORD *)(v8 + 32);
  if ( *(_QWORD *)(v11 + 8 * v9) )
  {
    v12 = *a1;
    v13 = 1;
    if ( *(_DWORD *)(a1[3] + 4) != 4 )
      v13 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 144) + 2320LL) + 21LL) & 0x40) != 0;
    v14 = *(_DWORD *)(v12 + 13264);
    v78 = a2;
    if ( v14 )
    {
      a5 = v14 - 1;
      v15 = *(_QWORD *)(v12 + 13248);
      v16 = a5 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v17 = (__int64 *)(v15 + 16LL * v16);
      v18 = *v17;
      if ( a2 == *v17 )
      {
LABEL_6:
        v19 = (bool *)(v17 + 1);
LABEL_7:
        *v19 = v13;
        goto LABEL_8;
      }
      a6 = 1;
      v71 = nullptr;
      if ( v18 != -4096 )
      {
        while ( 1 )
        {
          if ( v18 == -8192 && !v71 )
            v71 = v17;
          v16 = a5 & (a6 + v16);
          v17 = (__int64 *)(v15 + 16LL * v16);
          v18 = *v17;
          if ( a2 == *v17 )
            goto LABEL_6;
          if ( v18 == -4096 )
          {
            if ( v71 )
              v17 = v71;
            break;
          }
          a6 = (unsigned int)(a6 + 1);
        }
      }
      v72 = *(_DWORD *)(v12 + 13256);
      v79[0].m128_u64[0] = (unsigned __int64)v17;
      v11 = (unsigned int)(v72 + 1);
      v10 = 3 * v14;
      if ( 4 * (int)v11 < (unsigned int)v10 )
      {
        v73 = a2;
        v74 = v14 - *(_DWORD *)(v12 + 13260) - (unsigned int)v11;
        v75 = v14 >> 3;
        if ( (unsigned int)v74 > (unsigned int)v75 )
        {
LABEL_60:
          v69 = *v17 == -4096;
          *(_DWORD *)(v12 + 13256) = v11;
          if ( !v69 )
            --*(_DWORD *)(v12 + 13260);
          *v17 = v73;
          v19 = (bool *)(v17 + 1);
          *v19 = 0;
          goto LABEL_7;
        }
        sub_1F36030((__int64 *)(v12 + 13248), v14, v11, v74, v75, a6);
LABEL_69:
        sub_1F20B50((__int64 *)(v12 + 13248), &v78, v79);
        v73 = v78;
        LODWORD(v11) = *(_DWORD *)(v12 + 13256) + 1;
        v17 = (__int64 *)v79[0].m128_u64[0];
        goto LABEL_60;
      }
    }
    else
    {
      v79[0].m128_u64[0] = 0;
    }
    sub_1F36030((__int64 *)(v12 + 13248), 2 * v14, v11, v10, a5, a6);
    goto LABEL_69;
  }
LABEL_8:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
  {
    v20 = a1[2];
    v21 = *(unsigned int *)(v20 + 24);
    *(_DWORD *)(v20 + 24) = v21 + 1;
    v22 = *(_QWORD *)(*(_QWORD *)(v20 + 32) + 8 * v21);
    *(_DWORD *)(a2 + 84) = ((unsigned __int16)v22 << 13) | *(_DWORD *)(a2 + 84) & 0xE0001FFF;
    if ( (_WORD)v22 )
    {
      v23 = a1[2];
      v24 = *(unsigned int *)(v23 + 24);
      *(_DWORD *)(v23 + 24) = v24 + 1;
      v25 = *(_QWORD *)(*(_QWORD *)(v23 + 32) + 8 * v24);
      if ( v25 && (v26 = a1[4] - v25) != 0 && (v27 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 432LL) + v26) != 0 )
        *(_QWORD *)(a2 + 168) = 2 * v27 + 1;
      else
        *(_QWORD *)(a2 + 168) = 0;
    }
  }
  v28 = a1[3];
  v29 = *a1;
  v30 = *(_QWORD *)(v28 + 2720);
  v31 = *(_QWORD *)(v28 + 432);
  v32 = *(unsigned int *)(v28 + 2736);
  v78 = a2;
  v33 = v31 + 8 * v30;
  v34 = v29 + 4064;
  v35 = v33 - v32;
  v36 = *(_BYTE *)(v29 + 4064) & 1;
  if ( v36 )
  {
    v37 = v29 + 4072;
    v38 = 3;
    v39 = 64;
    v40 = ((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3;
    v41 = (__int64 *)(v29
                    + 4072
                    + 16LL * (((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 3));
    a6 = *v41;
    if ( a2 == *v41 )
    {
LABEL_16:
      sub_1F35DD0(v79, v41, (_QWORD *)(v39 + v37), v34, 1);
      v45 = *(unsigned int *)(v79[0].m128_u64[0] + 8);
      goto LABEL_17;
    }
  }
  else
  {
    v53 = *(unsigned int *)(v29 + 4080);
    if ( !(_DWORD)v53 )
    {
      v79[0].m128_u64[0] = 0;
      v54 = *(_DWORD *)(v29 + 4064);
      v55 = (v54 >> 1) + 1;
LABEL_26:
      v56 = (unsigned int)(3 * v53);
      goto LABEL_27;
    }
    v38 = v53 - 1;
    v37 = *(_QWORD *)(v29 + 4072);
    v40 = (v53 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v41 = (__int64 *)(v37 + 16LL * v40);
    a6 = *v41;
    if ( a2 == *v41 )
    {
LABEL_24:
      v39 = 16 * v53;
      goto LABEL_16;
    }
  }
  v64 = 1;
  v65 = nullptr;
  if ( a6 != -4096 )
  {
    while ( 1 )
    {
      if ( !v65 && a6 == -8192 )
        v65 = v41;
      v40 = v38 & (v64 + v40);
      v41 = (__int64 *)(v37 + 16LL * v40);
      a6 = *v41;
      if ( a2 == *v41 )
        break;
      if ( a6 == -4096 )
      {
        if ( v65 )
          v41 = v65;
        goto LABEL_38;
      }
      ++v64;
    }
    if ( !v36 )
    {
      v53 = *(unsigned int *)(v29 + 4080);
      goto LABEL_24;
    }
    v39 = 64;
    goto LABEL_16;
  }
LABEL_38:
  v79[0].m128_u64[0] = (unsigned __int64)v41;
  v54 = *(_DWORD *)(v29 + 4064);
  v55 = (v54 >> 1) + 1;
  if ( !v36 )
  {
    LODWORD(v53) = *(_DWORD *)(v29 + 4080);
    goto LABEL_26;
  }
  v56 = 12;
  LODWORD(v53) = 4;
LABEL_27:
  if ( 4 * (int)v55 >= (unsigned int)v56 )
  {
    v76 = 2 * v53;
LABEL_64:
    sub_1F3A3A0(v29 + 4064, v76, v55, v34, v56, a6);
    sub_1F21BF0(v29 + 4064, &v78, v79);
    v57 = v78;
    v54 = *(_DWORD *)(v29 + 4064);
    v34 = v29 + 4064;
    goto LABEL_29;
  }
  v56 = (unsigned int)v53 >> 3;
  v55 = (unsigned int)(v53 - *(_DWORD *)(v29 + 4068) - v55);
  v57 = a2;
  if ( (unsigned int)v55 <= (unsigned int)v56 )
  {
    v76 = v53;
    goto LABEL_64;
  }
LABEL_29:
  *(_DWORD *)(v29 + 4064) = (2 * (v54 >> 1) + 2) | v54 & 1;
  v58 = v79[0].m128_u64[0];
  if ( *(_QWORD *)v79[0].m128_u64[0] != -4096 )
    --*(_DWORD *)(v29 + 4068);
  *(_QWORD *)v58 = v57;
  *(_DWORD *)(v58 + 8) = 0;
  if ( (*(_BYTE *)(v29 + 4064) & 1) != 0 )
  {
    v59 = v29 + 4072;
    v60 = 64;
  }
  else
  {
    v59 = *(_QWORD *)(v29 + 4072);
    v60 = 16LL * *(unsigned int *)(v29 + 4080);
  }
  sub_1F35DD0(v79, (_QWORD *)v58, (_QWORD *)(v60 + v59), v34, 1);
  v61 = *(unsigned int *)(v29 + 4144);
  v62 = v79[0].m128_u64[0];
  v43 = v78;
  if ( v61 + 1 > (unsigned __int64)*(unsigned int *)(v29 + 4148) )
  {
    v77 = v78;
    sub_2237220(v29 + 4136, v29 + 4152, v61 + 1, 16);
    v61 = *(unsigned int *)(v29 + 4144);
    v43 = v77;
  }
  v63 = (__int64 *)(*(_QWORD *)(v29 + 4136) + 16 * v61);
  *v63 = v43;
  v63[1] = 0;
  v45 = *(unsigned int *)(v29 + 4144);
  v42 = (unsigned int)(v45 + 1);
  *(_DWORD *)(v29 + 4144) = v42;
  *(_DWORD *)(v62 + 8) = v45;
LABEL_17:
  *(_QWORD *)(*(_QWORD *)(v29 + 4136) + 16 * v45 + 8) = v35;
  if ( (*(_WORD *)(a2 + 30) & 0x180) == 0 )
    return;
  v46 = *a1;
  v78 = a2;
  v47 = *(unsigned int *)(v46 + 13288);
  v48 = v46 + 13272;
  if ( !(_DWORD)v47 )
  {
    v79[0].m128_u64[0] = 0;
    goto LABEL_55;
  }
  v49 = *(_QWORD *)(v46 + 13272);
  v50 = (v47 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v51 = (__int64 *)(v49 + 8LL * v50);
  v52 = *v51;
  if ( a2 != *v51 )
  {
    v66 = 1;
    v67 = nullptr;
    if ( v52 != -4096 )
    {
      while ( 1 )
      {
        if ( !v67 && v52 == -8192 )
          v67 = v51;
        v50 = (v47 - 1) & (v66 + v50);
        v51 = (__int64 *)(v49 + 8LL * v50);
        v52 = *v51;
        if ( a2 == *v51 )
          goto LABEL_20;
        if ( v52 == -4096 )
        {
          if ( v67 )
            v51 = v67;
          break;
        }
        ++v66;
      }
    }
    v68 = *(_DWORD *)(v46 + 13280);
    v43 = (unsigned int)(3 * v47);
    v79[0].m128_u64[0] = (unsigned __int64)v51;
    v42 = (unsigned int)(v68 + 1);
    v44 = (unsigned int)(4 * v42);
    if ( (unsigned int)v44 < (unsigned int)v43 )
    {
      v43 = (unsigned int)(v47 - *(_DWORD *)(v46 + 13284) - v42);
      v44 = (unsigned int)v47 >> 3;
      if ( (unsigned int)v43 > (unsigned int)v44 )
      {
LABEL_51:
        v69 = *v51 == -4096;
        *(_DWORD *)(v46 + 13280) = v42;
        if ( !v69 )
          --*(_DWORD *)(v46 + 13284);
        *v51 = a2;
        goto LABEL_20;
      }
      v70 = v47;
LABEL_56:
      sub_AB95C0(v46 + 13272, v70, v42, v48, v43, v44);
      sub_A86590((__int64 *)(v46 + 13272), &v78, v79);
      a2 = v78;
      v49 = *(_QWORD *)(v46 + 13272);
      v47 = *(unsigned int *)(v46 + 13288);
      LODWORD(v42) = *(_DWORD *)(v46 + 13280) + 1;
      v51 = (__int64 *)v79[0].m128_u64[0];
      v48 = v46 + 13272;
      goto LABEL_51;
    }
LABEL_55:
    v70 = 2 * v47;
    goto LABEL_56;
  }
LABEL_20:
  sub_A8BC20(v79, v51, (_QWORD *)(v49 + 8 * v47), v48, 1);
}
