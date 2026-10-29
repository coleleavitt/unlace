__int64 __fastcall sub_1CBB1D0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rbx
  __int16 v7; // ax
  bool v8; // zf
  __int64 v9; // rax
  __m128 *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned int v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r15
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rcx
  char *v20; // rdi
  unsigned int v21; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // r12d
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  char v31; // dl
  __int64 v32; // rdx
  unsigned __int64 *v33; // r9
  __int64 v34; // r11
  unsigned __int64 *v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // r15
  unsigned __int64 v38; // rcx
  __m128 *v39; // r12
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // r13
  int v44; // eax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  int v48; // esi
  int v49; // eax
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // [rsp+8h] [rbp-150h]
  __int64 v54; // [rsp+8h] [rbp-150h]
  __int64 v55; // [rsp+8h] [rbp-150h]
  __int64 v56; // [rsp+10h] [rbp-148h]
  unsigned __int64 v57; // [rsp+10h] [rbp-148h]
  unsigned __int64 v58; // [rsp+20h] [rbp-138h] BYREF
  _QWORD *v59; // [rsp+28h] [rbp-130h]
  _QWORD *v60; // [rsp+30h] [rbp-128h]
  __int64 v61; // [rsp+38h] [rbp-120h]
  __m128 *v62; // [rsp+40h] [rbp-118h]
  __int64 v63; // [rsp+48h] [rbp-110h]
  char v64; // [rsp+53h] [rbp-105h]
  int v65; // [rsp+54h] [rbp-104h]
  unsigned __int64 v66; // [rsp+58h] [rbp-100h]
  bool v67; // [rsp+63h] [rbp-F5h] BYREF
  int v68; // [rsp+64h] [rbp-F4h] BYREF
  __int64 v69; // [rsp+68h] [rbp-F0h] BYREF
  __m128i v70; // [rsp+70h] [rbp-E8h] BYREF
  __m128 v71; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v72[25]; // [rsp+90h] [rbp-C8h] BYREF

  v4 = a4;
  v5 = (_QWORD *)(a2 + 80);
  v6 = a1;
  v7 = *(_WORD *)a2;
  v65 = a3;
  v8 = (v7 & 0x1FF) == 24;
  v9 = *(unsigned int *)(a2 + 4);
  v63 = a2;
  if ( v8 )
    v5 = (_QWORD *)(a2 + 64);
  v59 = &v5[v9];
  if ( v59 != v5 )
  {
    v64 = 1;
    v10 = (__m128 *)v72;
    v53 = a1 + 8;
    v56 = a4 + 24;
    v58 = a4 + 8;
    v62 = &v71;
    while ( 1 )
    {
      v11 = *(unsigned int *)(v6 + 24);
      v12 = *(_QWORD *)(v6 + 8);
      v13 = *v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_DWORD)v11 )
      {
        v14 = (v11 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v15 = (__int64 *)(v12 + 16LL * v14);
        v16 = *v15;
        if ( v13 == *v15 )
          goto LABEL_7;
        v48 = 1;
        if ( v16 != -4096 )
          break;
      }
LABEL_51:
      sub_AEAAD0(v10, (_QWORD *)(v12 + 16 * v11), (_QWORD *)(v12 + 16 * v11), v53, 1);
      v17 = v72[0];
LABEL_8:
      v18 = (_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL * *(unsigned int *)(v6 + 24));
      sub_AEAAD0(v10, v18, v18, v53, 1);
      v19 = v13;
      if ( v72[0] != v17 )
        v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
      {
        v71.m128_u64[0] = v19;
        v31 = *(_BYTE *)(v19 + 28) & 0x7F;
        if ( v31 != 55 )
        {
          v33 = (unsigned __int64 *)v62;
          v64 = 0;
          v34 = (__int64)&v62->m128_i64[1];
          goto LABEL_36;
        }
        v32 = *(unsigned int *)(v19 + 56);
        v33 = (unsigned __int64 *)(v19 + 64);
        v34 = v19 + 64 + 8 * v32;
        v64 &= v32 == 0;
        if ( v19 + 64 != v34 )
        {
          v31 = *(_BYTE *)(*(_QWORD *)(v19 + 64) + 28LL) & 0x7F;
LABEL_36:
          v61 = v6;
          v35 = v33;
          v36 = v34;
          v37 = v4;
          v60 = v5;
          v38 = *v33;
          v39 = v10;
          if ( v31 == 81 )
          {
LABEL_37:
            v40 = *(_QWORD *)(v38 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v40 )
            {
              v41 = *(unsigned int *)(v37 + 16);
              do
              {
                v42 = *(unsigned int *)(v37 + 20);
                v39->m128_u64[0] = v40 | (*(_BYTE *)(v40 + 29) >> 5) & 3;
                v43 = v72[0];
                if ( v41 + 1 > v42 )
                {
                  sub_2237220(v58, v56, v41 + 1, 8);
                  v41 = *(unsigned int *)(v37 + 16);
                }
                *(_QWORD *)(*(_QWORD *)(v37 + 8) + 8 * v41) = v43;
                v44 = *(_DWORD *)(v37 + 16);
                *(_DWORD *)v37 = 2;
                v41 = (unsigned int)(v44 + 1);
                *(_DWORD *)(v37 + 16) = v41;
                v40 = *(_QWORD *)(v40 + 72);
              }
              while ( v40 && (*(_BYTE *)(v40 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_43;
          }
          while ( 1 )
          {
            v45 = *(unsigned int *)(v37 + 20);
            v46 = v38 | (*(_BYTE *)(v38 + 29) >> 5) & 3;
            v47 = *(unsigned int *)(v37 + 16);
            v72[0] = v46;
            if ( v47 + 1 > v45 )
            {
              v66 = v46;
              sub_2237220(v58, v56, v47 + 1, 8);
              v47 = *(unsigned int *)(v37 + 16);
              v46 = v66;
            }
            *(_QWORD *)(*(_QWORD *)(v37 + 8) + 8 * v47) = v46;
            *(_DWORD *)v37 = 2;
            ++*(_DWORD *)(v37 + 16);
LABEL_43:
            if ( ++v35 == (unsigned __int64 *)v36 )
              break;
            v38 = *v35;
            if ( (*(_BYTE *)(*v35 + 28) & 0x7F) == 0x51 )
              goto LABEL_37;
          }
          v10 = v39;
          v6 = v61;
          v5 = v60;
          v4 = v37;
        }
      }
      else if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 53 > 1 )
      {
        v20 = *(char **)(v4 + 88);
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 16) = 0;
        if ( v20 )
          sub_1A39780(v20);
        *(_BYTE *)(v4 + 166) = 0;
        v21 = 1;
        *(_OWORD *)(v4 + 88) = 0;
        return v21;
      }
      if ( v59 == ++v5 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      v49 = v48 + 1;
      v14 = (v11 - 1) & (v48 + v14);
      v15 = (__int64 *)(v12 + 16LL * v14);
      v50 = *v15;
      if ( v13 == *v15 )
        break;
      v48 = v49;
      if ( v50 == -4096 )
        goto LABEL_51;
    }
LABEL_7:
    sub_AEAAD0(v10, v15, (_QWORD *)(16 * v11 + v12), v53, 1);
    v17 = v72[0];
    goto LABEL_8;
  }
  v64 = 1;
LABEL_18:
  v21 = (unsigned __int8)v65 ^ 1;
  LOBYTE(v21) = v64 & (v65 ^ 1);
  if ( (_BYTE)v21 )
  {
    sub_168B9F0((__int64)v72, (__int64 *)(*(_QWORD *)v6 + 8LL), *(_DWORD *)(v63 + 24), 0x1527u, 0);
    v70.m128i_i8[0] = (*(_WORD *)v63 & 0x1FF) == 23;
    v51 = sub_1588420((__int64)v72, (unsigned __int8 *)&v70);
    v71.m128_u64[0] = *(_QWORD *)(v63 + 16);
    sub_15894B0(v51, (__int64 *)&v71);
    sub_15F7200(v72);
  }
  else
  {
    sub_1A43500(v4);
    if ( (*(_QWORD *)v63 & 0x80000) != 0 )
    {
      v23 = 8LL * *(unsigned int *)(v63 + 4);
      v24 = v63 + v23 + 64;
      v25 = v63 + v23 + 80;
      v26 = v24;
      if ( (*(_WORD *)v63 & 0x1FF) != 0x18 )
        v26 = v25;
      if ( *(_DWORD *)(v26 + 8) )
      {
        if ( *(_DWORD *)(v4 + 16) )
        {
          v27 = sub_16C47B0(**(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          sub_1CB13F0(v4, 1);
          v28 = *(_DWORD *)(v4 + 16);
          if ( !v28 )
          {
            sub_168B9F0((__int64)v72, (__int64 *)(*(_QWORD *)v6 + 8LL), *(_DWORD *)(v4 + 128), 0x1406u, 0);
            v69 = *(_QWORD *)(v4 + 120);
            v54 = sub_15894B0((__int64)v72, &v69);
            v70 = _mm_loadu_si128((const __m128i *)(v63 + 40));
            v57 = sub_E90530(v70.m128i_i64) >> 32;
            if ( v70.m128i_i64[0] )
            {
              v71 = (__m128)_mm_load_si128(&v70);
              v29 = *(_QWORD *)(v70.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v29 )
              {
                v58 = v71.m128_u64[1];
                v71 = _mm_loadh_ps((const double *)&v58);
                while ( (*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  LOBYTE(v21) = 1;
                  v29 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( (_BYTE)v21 )
                  v71.m128_u64[0] = v29;
              }
              v30 = sub_E90530((__int64 *)&v71);
            }
            else
            {
              v30 = 0;
            }
            v71.m128_u64[0] = __PAIR64__(v57, v30);
            v55 = sub_1587DB0(v54, (__int64 *)&v71);
            v67 = sub_18C0AA0(v63);
            v52 = sub_1588420(v55, (unsigned __int8 *)&v67);
            if ( (*(_QWORD *)v63 & 0x80000) != 0 )
              v28 = sub_1CB01F0(v63);
            v68 = v28;
            sub_180D980(v52, &v68);
            sub_15F7200(v72);
            sub_168B9F0((__int64)v72, (__int64 *)(*(_QWORD *)v6 + 8LL), *(_DWORD *)(v27 + 24), 0x18FAu, 0);
            v21 = 1;
            v71.m128_u64[0] = *(_QWORD *)(v4 + 120);
            sub_15894B0((__int64)v72, (__int64 *)&v71);
            sub_15F7200(v72);
          }
        }
      }
    }
  }
  return v21;
}
