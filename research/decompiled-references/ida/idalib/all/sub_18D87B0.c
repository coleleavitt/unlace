__int64 __fastcall sub_18D87B0(_QWORD *a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  __m128 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 *v12; // rsi
  __int64 v13; // r9
  __int64 v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  void *v17; // rdi
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // r8
  char v30; // dl
  __int64 v31; // rdx
  __m128i *v32; // r9
  __int64 *v33; // r11
  __m128i *v34; // rbp
  __int64 *v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rcx
  __m128 *v38; // r12
  unsigned __int64 v39; // r14
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // r13
  int v43; // eax
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // esi
  int v48; // eax
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-158h]
  __int64 v52; // [rsp+18h] [rbp-140h]
  __int64 v53; // [rsp+20h] [rbp-138h]
  _QWORD *v54; // [rsp+28h] [rbp-130h]
  _QWORD *v55; // [rsp+30h] [rbp-128h]
  _QWORD *v56; // [rsp+38h] [rbp-120h]
  char v58; // [rsp+53h] [rbp-105h]
  __int64 v60; // [rsp+58h] [rbp-100h]
  bool v61; // [rsp+6Bh] [rbp-EDh] BYREF
  int v62; // [rsp+6Ch] [rbp-ECh] BYREF
  __int64 v63; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v64; // [rsp+78h] [rbp-E0h] BYREF
  __m128i v65; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v66[25]; // [rsp+90h] [rbp-C8h] BYREF

  v4 = a4;
  v5 = a1;
  v6 = (_QWORD *)(a2 + 80);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
    v6 = (_QWORD *)(a2 + 64);
  v54 = &v6[*(unsigned int *)(a2 + 4)];
  if ( v54 != v6 )
  {
    v58 = 1;
    v7 = (__m128 *)v66;
    v51 = (__int64)(a1 + 1);
    v52 = a4 + 24;
    v53 = a4 + 8;
    while ( 1 )
    {
      v8 = *((unsigned int *)v5 + 6);
      v9 = v5[1];
      v10 = *v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_DWORD)v8 )
      {
        v11 = (v8 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v12 = (__int64 *)(v9 + 16LL * v11);
        v13 = *v12;
        if ( v10 == *v12 )
          goto LABEL_7;
        v47 = 1;
        if ( v13 != -4096 )
          break;
      }
LABEL_46:
      sub_AEAAD0(v7, (_QWORD *)(v9 + 16 * v8), (_QWORD *)(v9 + 16 * v8), v51, 1);
      v14 = v66[0];
LABEL_8:
      v15 = (_QWORD *)(v5[1] + 16LL * *((unsigned int *)v5 + 6));
      sub_AEAAD0(v7, v15, v15, v51, 1);
      v16 = v10;
      if ( v14 != v66[0] )
        v16 = *(_QWORD *)(v14 + 8);
      if ( v16 )
      {
        v65.m128i_i64[0] = v16;
        v30 = *(_BYTE *)(v16 + 28) & 0x7F;
        if ( v30 != 55 )
        {
          v32 = &v65;
          v58 = 0;
          v33 = &v65.m128i_i64[1];
          goto LABEL_31;
        }
        v31 = *(unsigned int *)(v16 + 56);
        v32 = (__m128i *)(v16 + 64);
        v33 = (__int64 *)(v16 + 64 + 8 * v31);
        v58 &= v31 == 0;
        if ( (__int64 *)(v16 + 64) != v33 )
        {
          v30 = *(_BYTE *)(*(_QWORD *)(v16 + 64) + 28LL) & 0x7F;
LABEL_31:
          v55 = v6;
          v34 = v32;
          v35 = v33;
          v36 = v4;
          v56 = v5;
          v37 = v32->m128i_i64[0];
          v38 = v7;
          if ( v30 == 81 )
          {
LABEL_32:
            v39 = *(_QWORD *)(v37 + 48) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v39 )
            {
              v40 = *(unsigned int *)(v36 + 16);
              do
              {
                v41 = *(unsigned int *)(v36 + 20);
                v38->m128_u64[0] = v39 | (*(_BYTE *)(v39 + 29) >> 5) & 3;
                v42 = v66[0];
                if ( v40 + 1 > v41 )
                {
                  sub_2237220(v53, v52, v40 + 1, 8);
                  v40 = *(unsigned int *)(v36 + 16);
                }
                *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8 * v40) = v42;
                v43 = *(_DWORD *)(v36 + 16);
                *(_DWORD *)v36 = 2;
                v40 = (unsigned int)(v43 + 1);
                *(_DWORD *)(v36 + 16) = v40;
                v39 = *(_QWORD *)(v39 + 72);
              }
              while ( v39 && (*(_BYTE *)(v39 + 28) & 0x7Fu) - 53 <= 1 );
            }
            goto LABEL_38;
          }
          while ( 1 )
          {
            v44 = *(unsigned int *)(v36 + 20);
            v45 = v37 | (*(_BYTE *)(v37 + 29) >> 5) & 3;
            v46 = *(unsigned int *)(v36 + 16);
            v66[0] = v45;
            if ( v46 + 1 > v44 )
            {
              v60 = v45;
              sub_2237220(v53, v52, v46 + 1, 8);
              v46 = *(unsigned int *)(v36 + 16);
              v45 = v60;
            }
            *(_QWORD *)(*(_QWORD *)(v36 + 8) + 8 * v46) = v45;
            *(_DWORD *)v36 = 2;
            ++*(_DWORD *)(v36 + 16);
LABEL_38:
            v34 = (__m128i *)((char *)v34 + 8);
            if ( v35 == (__int64 *)v34 )
              break;
            v37 = v34->m128i_i64[0];
            if ( (*(_BYTE *)(v34->m128i_i64[0] + 28) & 0x7F) == 0x51 )
              goto LABEL_32;
          }
          v7 = v38;
          v6 = v55;
          v5 = v56;
          v4 = v36;
        }
      }
      else if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 53 > 1 )
      {
        v17 = *(void **)(v4 + 88);
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 16) = 0;
        if ( v17 )
          sub_1A39780(v17);
        *(_BYTE *)(v4 + 166) = 0;
        v18 = 1;
        *(_OWORD *)(v4 + 88) = 0;
        return v18;
      }
      if ( v54 == ++v6 )
        goto LABEL_18;
    }
    while ( 1 )
    {
      v48 = v47 + 1;
      v11 = (v8 - 1) & (v47 + v11);
      v12 = (__int64 *)(v9 + 16LL * v11);
      v49 = *v12;
      if ( v10 == *v12 )
        break;
      v47 = v48;
      if ( v49 == -4096 )
        goto LABEL_46;
    }
LABEL_7:
    sub_AEAAD0(v7, v12, (_QWORD *)(16 * v8 + v9), v51, 1);
    v14 = v66[0];
    goto LABEL_8;
  }
  v58 = 1;
LABEL_18:
  v18 = a3 ^ 1;
  LOBYTE(v18) = v58 & (a3 ^ 1);
  if ( (_BYTE)v18 )
  {
    sub_168B9F0((__int64)v66, (__int64 *)(*v5 + 8LL), *(_DWORD *)(a2 + 24), 0x1527u, 0);
    LOBYTE(v64) = (*(_WORD *)a2 & 0x1FF) == 23;
    v50 = sub_1588420((__int64)v66, (unsigned __int8 *)&v64);
    v65.m128i_i64[0] = *(_QWORD *)(a2 + 16);
    sub_15894B0(v50, v65.m128i_i64);
    sub_15F7200(v66);
  }
  else
  {
    sub_1A43500(v4);
    if ( (*(_QWORD *)a2 & 0x80000) != 0 )
    {
      v20 = 8LL * *(unsigned int *)(a2 + 4);
      v21 = a2 + v20 + 64;
      v22 = a2 + v20 + 80;
      v23 = v21;
      if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
        v23 = v22;
      if ( *(_DWORD *)(v23 + 8) )
      {
        if ( *(_DWORD *)(v4 + 16) )
        {
          v24 = sub_16C47B0(**(_QWORD **)(v4 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          sub_1CB3F20(*v5, v4, 1, 1);
          if ( !*(_DWORD *)(v4 + 16) )
          {
            sub_168B9F0((__int64)v66, (__int64 *)(*v5 + 8LL), *(_DWORD *)(v4 + 128), 0x1406u, 0);
            v63 = *(_QWORD *)(v4 + 120);
            v25 = sub_15894B0((__int64)v66, &v63);
            v65 = _mm_loadu_si128((const __m128i *)(a2 + 40));
            v64 = sub_183A570(&v65);
            v26 = sub_1587DB0(v25, (__int64 *)&v64);
            v61 = sub_18C0AA0(a2);
            v27 = sub_1588420(v26, (unsigned __int8 *)&v61);
            v28 = 0;
            v29 = v27;
            if ( (*(_QWORD *)a2 & 0x80000) != 0 )
              v28 = sub_18BBD60(a2);
            v62 = v28;
            sub_180D980(v29, &v62);
            sub_15F7200(v66);
            sub_168B9F0((__int64)v66, (__int64 *)(*v5 + 8LL), *(_DWORD *)(v24 + 24), 0x18FAu, 0);
            v18 = 1;
            v65.m128i_i64[0] = *(_QWORD *)(v4 + 120);
            sub_15894B0((__int64)v66, v65.m128i_i64);
            sub_15F7200(v66);
          }
        }
      }
    }
  }
  return v18;
}
