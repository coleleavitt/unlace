void __fastcall sub_1517C50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // r12d
  __int32 v17; // r13d
  unsigned int v18; // edi
  unsigned int v19; // ebp
  unsigned int v20; // r8d
  __int64 v21; // rsi
  __int64 v22; // rdx
  unsigned __int8 *v23; // rbx
  __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // edx
  int v28; // r10d
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // r11d
  __int64 v33; // r14
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // edx
  int v38; // edi
  unsigned int v39; // ebp
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // r12
  void *v44; // rdi
  __int64 *v45; // r11
  int v46; // ebx
  __int64 *v47; // r10
  int v48; // r11d
  __int64 v49; // [rsp+0h] [rbp-B8h]
  __int64 v50; // [rsp+0h] [rbp-B8h]
  __int64 v51; // [rsp+8h] [rbp-B0h]
  __int64 v52; // [rsp+8h] [rbp-B0h]
  __m128i v53; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+20h] [rbp-98h]
  __m128 v55[8]; // [rsp+30h] [rbp-88h] BYREF

  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v54 = a8;
  v10 = *a1;
  v53 = v9;
  v11 = sub_1B21D80(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 760LL), *(_QWORD *)(*(_QWORD *)(v10 + 96) + 608LL), a2, &v53);
  if ( !v11 )
    return;
  v15 = a1[2];
  v16 = *((_DWORD *)a1 + 2);
  v17 = v53.m128i_i32[2];
  v18 = *(_DWORD *)(v15 + 16);
  if ( !v18 )
    goto LABEL_7;
  v14 = *(_QWORD *)v15;
  v19 = ((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4);
  v20 = (v18 - 1) & v19;
  v21 = *(_QWORD *)v15 + 16LL * v20;
  v22 = *(_QWORD *)v21;
  if ( v11 != *(_QWORD *)v21 )
  {
    v32 = 1;
    v33 = 0;
    if ( v22 != -4096 )
    {
      while ( 1 )
      {
        if ( !v33 && v22 == -8192 )
          v33 = v21;
        v20 = (v18 - 1) & (v32 + v20);
        v21 = v14 + 16LL * v20;
        v22 = *(_QWORD *)v21;
        if ( v11 == *(_QWORD *)v21 )
          goto LABEL_4;
        if ( v22 == -4096 )
          break;
        ++v32;
      }
      if ( v33 )
        v21 = v33;
    }
    v12 = 3 * v18;
    v13 = (unsigned int)(*(_DWORD *)(v15 + 8) + 1);
    if ( 4 * (int)v13 < (unsigned int)v12 )
    {
      v34 = v18 - *(_DWORD *)(v15 + 12) - (unsigned int)v13;
      if ( (unsigned int)v34 > v18 >> 3 )
      {
LABEL_15:
        v30 = *(_QWORD *)v21;
        goto LABEL_9;
      }
      v50 = v15;
      v52 = v11;
      sub_1517A40(v15, v18, v34, v15, v13, v14);
      v15 = v50;
      v37 = *(_DWORD *)(v50 + 16);
      if ( v37 )
      {
        v38 = v37 - 1;
        v14 = *(_QWORD *)v50;
        v39 = (v37 - 1) & v19;
        LODWORD(v13) = *(_DWORD *)(v50 + 8) + 1;
        v11 = v52;
        v21 = *(_QWORD *)v50 + 16LL * v39;
        v30 = *(_QWORD *)v21;
        if ( v52 == *(_QWORD *)v21 )
        {
LABEL_9:
          *(_DWORD *)(v15 + 8) = v13;
          if ( v30 != -4096 )
            --*(_DWORD *)(v15 + 12);
          goto LABEL_11;
        }
        if ( v30 != -4096 )
        {
          v47 = (__int64 *)(*(_QWORD *)v50 + 16LL * v39);
          v48 = 1;
          v21 = 0;
          while ( 1 )
          {
            if ( v30 == -8192 && !v21 )
              v21 = (__int64)v47;
            v39 = v38 & (v48 + v39);
            v47 = (__int64 *)(v14 + 16LL * v39);
            v30 = *v47;
            if ( v52 == *v47 )
            {
              v21 = v14 + 16LL * v39;
              goto LABEL_9;
            }
            if ( v30 == -4096 )
              break;
            ++v48;
          }
          if ( v21 )
            goto LABEL_15;
          v21 = v14 + 16LL * v39;
        }
LABEL_22:
        *(_DWORD *)(v15 + 8) = v13;
LABEL_11:
        *(_DWORD *)(v21 + 8) = v16;
        *(_DWORD *)(v21 + 12) = v17;
        v31 = *(unsigned int *)(v15 + 16);
        *(_QWORD *)v21 = v11;
        sub_15071F0(v55, (_QWORD *)v21, (_QWORD *)(v14 + 16 * v31), v15, 1);
        return;
      }
      goto LABEL_58;
    }
LABEL_7:
    v49 = v15;
    v51 = v11;
    sub_1517A40(v15, 2 * v18, v12, v15, v13, v14);
    v15 = v49;
    v27 = *(_DWORD *)(v49 + 16);
    if ( v27 )
    {
      v11 = v51;
      v28 = v27 - 1;
      v14 = *(_QWORD *)v49;
      LODWORD(v13) = *(_DWORD *)(v49 + 8) + 1;
      v29 = (v27 - 1) & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
      v21 = *(_QWORD *)v49 + 16LL * v29;
      v30 = *(_QWORD *)v21;
      if ( v51 == *(_QWORD *)v21 )
        goto LABEL_9;
      if ( v30 != -4096 )
      {
        v45 = (__int64 *)(*(_QWORD *)v49 + 16LL * (v28 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4))));
        v46 = 1;
        v21 = 0;
        while ( 1 )
        {
          if ( !v21 && v30 == -8192 )
            v21 = (__int64)v45;
          v29 = v28 & (v46 + v29);
          v45 = (__int64 *)(v14 + 16LL * v29);
          v30 = *v45;
          if ( v51 == *v45 )
          {
            v21 = v14 + 16LL * v29;
            goto LABEL_9;
          }
          if ( v30 == -4096 )
            break;
          ++v46;
        }
        if ( v21 )
          goto LABEL_15;
        v21 = v14 + 16LL * v29;
      }
      goto LABEL_22;
    }
LABEL_58:
    ++*(_DWORD *)(v15 + 8);
    BUG();
  }
LABEL_4:
  sub_15071F0(v55, (_QWORD *)v21, (_QWORD *)(v14 + 16LL * v18), v15, 1);
  sub_1564820(v55, *a1, v53.m128i_u32[2], 1783);
  v23 = (unsigned __int8 *)v55[0].m128_u64[0];
  v24 = v53.m128i_i64[0];
  if ( !v55[0].m128_u64[0] )
  {
    v35 = v55[0].m128_u64[1];
    v36 = *(_DWORD *)(v55[0].m128_u64[1] + 14976);
    if ( v36 )
    {
      v40 = (unsigned int)(v36 - 1);
      *(_DWORD *)(v55[0].m128_u64[1] + 14976) = v40;
      v23 = *(unsigned __int8 **)(v35 + 8 * v40 + 14848);
      v41 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v42 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v43 = v42 + (v41 << 6);
      while ( v42 != v43 )
      {
        while ( 1 )
        {
          v43 -= 64;
          v44 = *(void **)(v43 + 24);
          if ( v44 == (void *)(v43 + 40) )
            break;
          operator delete(v44);
          if ( v42 == v43 )
            goto LABEL_27;
        }
      }
LABEL_27:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)operator new(0x3A0u);
      *v23 = 0;
      *((_QWORD *)v23 + 12) = v23 + 112;
      *((_QWORD *)v23 + 16) = v23 + 144;
      *((_QWORD *)v23 + 20) = v23 + 176;
      *((_QWORD *)v23 + 24) = v23 + 208;
      *((_QWORD *)v23 + 28) = v23 + 240;
      *((_QWORD *)v23 + 32) = v23 + 272;
      *((_QWORD *)v23 + 36) = v23 + 304;
      *((_QWORD *)v23 + 40) = v23 + 336;
      *((_QWORD *)v23 + 44) = v23 + 368;
      *((_QWORD *)v23 + 48) = v23 + 400;
      *((_QWORD *)v23 + 52) = v23 + 432;
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
      *((_QWORD *)v23 + 17) = 0;
      v23[144] = 0;
      *((_QWORD *)v23 + 21) = 0;
      v23[176] = 0;
      *((_QWORD *)v23 + 25) = 0;
      v23[208] = 0;
      *((_QWORD *)v23 + 29) = 0;
      v23[240] = 0;
      *((_QWORD *)v23 + 33) = 0;
      v23[272] = 0;
      *((_QWORD *)v23 + 37) = 0;
      v23[304] = 0;
      *((_QWORD *)v23 + 41) = 0;
      v23[336] = 0;
      *((_QWORD *)v23 + 45) = 0;
      v23[368] = 0;
      *((_QWORD *)v23 + 49) = 0;
      v23[400] = 0;
      *((_QWORD *)v23 + 53) = 0x800000000LL;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    v55[0].m128_u64[0] = (unsigned __int64)v23;
  }
  v23[*v23 + 1] = 9;
  v25 = v55[0].m128_u64[0];
  v26 = *(unsigned __int8 *)v55[0].m128_u64[0];
  *(_BYTE *)v55[0].m128_u64[0] = v26 + 1;
  *(_QWORD *)(v25 + 8 * v26 + 16) = v24;
  sub_AEA040((__int64)v55);
}
