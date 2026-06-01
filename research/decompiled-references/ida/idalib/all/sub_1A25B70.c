void __fastcall sub_1A25B70(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  _QWORD *i; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  void **v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // r14
  _WORD *v27; // rdi
  __int16 v28; // ax
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // r12d
  __int64 v40; // r14
  unsigned __int8 **v41; // r15
  char v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int8 *v46; // rax
  __int64 v47; // rdx
  int v48; // esi
  unsigned __int8 *v49; // r13
  unsigned __int8 *v50; // rax
  _WORD **v51; // r14
  _QWORD *v52; // rax
  _WORD *v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rcx
  unsigned __int64 v56; // rdi
  __int64 v57; // [rsp+8h] [rbp-150h]
  __int64 v58; // [rsp+18h] [rbp-140h]
  int v59; // [rsp+20h] [rbp-138h]
  unsigned __int64 v60; // [rsp+38h] [rbp-120h] BYREF
  __m128i si128; // [rsp+40h] [rbp-118h] BYREF
  __int64 v62; // [rsp+50h] [rbp-108h]
  __m128 v63; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+70h] [rbp-E8h]
  _BYTE v65[64]; // [rsp+90h] [rbp-C8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-80h]
  _BYTE v68[120]; // [rsp+E0h] [rbp-78h] BYREF

  for ( i = **(_QWORD ***)a1;
        (*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)sub_BC3640(i) & 4) == 0;
        i = (_QWORD *)(*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) )
  {
    ;
  }
  v11 = i[6];
  v12 = *(_QWORD *)(v11 + 128);
  if ( v12
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104), v7, v8, v9, v10),
        (v12 = *(_QWORD *)(v11 + 128)) != 0) )
  {
    if ( *(_QWORD *)(v12 + 88) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104), v7, v8, v9, v10);
      if ( **(char **)(v11 + 128) < 0 )
      {
        v17 = sub_A7A9D0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), v11, v13, v14, v15, v16);
        v18 = *(void ***)(a1 + 16);
        v19 = *(_QWORD *)(a1 + 8);
        v60 = v17;
        ptr = v68;
        v67 = 0x800000000LL;
        sub_1A1D150((__int64)v65, v19, v18, a2, (__int64 *)&v60, 1, a3, a4, 0, 0, (__int64)&ptr);
        if ( !v65[8] )
        {
          v20 = (__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 3;
          v21 = *(_QWORD *)(a1 + 8);
          if ( (int)v20 > 0 )
          {
            v22 = (__int64 *)ptr;
            v23 = *(_QWORD *)ptr;
            v24 = *(_QWORD *)(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v24 + 16) != 38 )
            {
              v25 = 0;
              v26 = 8LL * (unsigned int)(v20 - 1);
              do
              {
                if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
                {
                  v27 = *(_WORD **)(*(_QWORD *)(a2 + 16) + v25);
                  v28 = *v27 & 0x1FF;
                  if ( v28 == 53 || v28 == 68 )
                  {
                    v29 = sub_A72DD0(*(_QWORD *)(v21 + 248), *v22);
                    *(_QWORD *)((char *)ptr + v25) = v29;
                    v21 = *(_QWORD *)(a1 + 8);
                  }
                  else if ( (*(_WORD *)sub_BFBAE0((unsigned __int64)v27) & 0x1FF) == 9 )
                  {
                    v45 = sub_A73030(*(_QWORD *)(v21 + 248), v23 | 1, 1u);
                    *(_QWORD *)((char *)ptr + v25) = v45;
                    v21 = *(_QWORD *)(a1 + 8);
                  }
                }
                if ( v25 == v26 )
                  break;
                v25 += 8;
                v22 = (__int64 *)((char *)ptr + v25);
                v23 = *(_QWORD *)((char *)ptr + v25);
                v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
              }
              while ( *(_BYTE *)(v24 + 16) != 38 );
            }
          }
          v30 = **(unsigned __int64 ***)(a1 + 32);
          v31 = *v30;
          v63.m128_u64[1] = (unsigned __int64)(v30 + 1);
          v63.m128_u64[0] = v31;
          v32 = sub_F6CE20((__int64 *)&v63);
          v33 = **(_QWORD **)(a1 + 24);
          v34 = sub_1D9A030(v21, v33, ptr, (unsigned int)v67, v32);
          v39 = v34;
          if ( v34 )
          {
            v40 = *(_QWORD *)(v34 + 48);
            v41 = *(unsigned __int8 ***)(a1 + 40);
            v63.m128_u64[0] = v34;
            v42 = **(_BYTE **)(a1 + 48);
            if ( (**v41
               || (unsigned int)sub_B770E0(v40, v33) <= 1
               && ((unsigned int)sub_B76070(v40, v33, v43, v44) || sub_B748A0(v40, v33, v35, v36)))
              && (!v42 || sub_1844E80((__int64)v41[1], v40, v35, v36)) )
            {
              v46 = v41[2];
              v47 = *((_QWORD *)v41[3] + 1);
              v48 = *((_DWORD *)v46 + 747);
              v59 = v47;
              if ( 8 * (int)v47 > (unsigned int)(4864 - v48) )
              {
                v54 = 8LL * (unsigned int)v47;
                v55 = *((_QWORD *)v46 + 359);
                *((_QWORD *)v46 + 369) += v54;
                v56 = (v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( *((_QWORD *)v46 + 360) >= v54 + v56 && v55 )
                {
                  *((_QWORD *)v46 + 359) = v54 + v56;
                  v49 = (unsigned __int8 *)((v55 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                  LODWORD(v58) = (v55 + 7) & 0xFFFFFFF8;
                }
                else
                {
                  v58 = sub_986170((__int64)(v46 + 2872), v54, v54, 3, v37, v38);
                  v49 = (unsigned __int8 *)v58;
                }
              }
              else
              {
                *((_DWORD *)v46 + 747) = v48 + 8 * v47;
                LODWORD(v58) = (_DWORD)v46 + v48 + 2992;
                v49 = &v46[v48 + 2992];
              }
              v50 = v41[3];
              v51 = *(_WORD ***)v50;
              v57 = *(_QWORD *)v50 + 8LL * *((_QWORD *)v50 + 1);
              if ( *(_QWORD *)v50 != v57 )
              {
                do
                {
                  v53 = *v51;
                  if ( (**v51 & 0x1FF) == 0x44 )
                  {
                    sub_EE9E50(&v63, (__int64)v53);
                    si128 = _mm_load_si128((const __m128i *)&v63);
                    v62 = v64;
                    if ( (si128.m128i_i8[8] & 3) != 0 )
                      v52 = (_QWORD *)sub_EF2B30((__int64)&si128);
                    else
                      v52 = (_QWORD *)si128.m128i_i64[0];
                    *(_QWORD *)v49 = *v52;
                  }
                  else
                  {
                    *(_QWORD *)v49 = v53;
                  }
                  ++v51;
                  v49 += 8;
                }
                while ( (_WORD **)v57 != v51 );
              }
              sub_1BF2330((unsigned int)v41[1], v39, v39, 0, v58, v59, (__int64)v41[2], 0, 0, **v41, 0, 0, 1);
            }
            **(_BYTE **)(a1 + 56) = 1;
          }
        }
        if ( ptr != v68 )
          free(ptr);
      }
    }
  }
}
