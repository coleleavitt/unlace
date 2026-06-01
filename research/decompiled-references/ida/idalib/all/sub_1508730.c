__int64 __fastcall sub_1508730(const __m128i *a1, unsigned int a2, __int64 a3, char a4, double a5, __m128 a6)
{
  int v6; // ebx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  __int64 *v14; // rbp
  int *v15; // r13
  __int16 v16; // ax
  unsigned __int32 v17; // r14d
  __int16 v18; // ax
  __int64 v19; // rdi
  __int64 *m128i_i64; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rdi
  unsigned __int8 *v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int32 v33; // ecx
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  const __m128i *v51; // r15
  __int32 v52; // r12d
  unsigned __int64 v53; // r13
  __int64 v54; // rbx
  void *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rbp
  const __m128i *v61; // r13
  unsigned __int8 *v62; // r12
  __int64 v63; // rbx
  void *v64; // rdi
  __int32 v66; // [rsp+18h] [rbp-160h]
  __int64 v67; // [rsp+18h] [rbp-160h]
  __int64 *v68; // [rsp+18h] [rbp-160h]
  int *v69; // [rsp+20h] [rbp-158h]
  int *v70; // [rsp+28h] [rbp-150h]
  unsigned __int64 v71; // [rsp+34h] [rbp-144h]
  int v72; // [rsp+3Ch] [rbp-13Ch]
  __m128i v73; // [rsp+40h] [rbp-138h] BYREF
  __int64 v74; // [rsp+50h] [rbp-128h]
  int v75; // [rsp+60h] [rbp-118h] BYREF
  __int64 v76; // [rsp+68h] [rbp-110h]
  __int64 v77; // [rsp+78h] [rbp-100h]
  __int128 v78; // [rsp+80h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-E8h]
  __int128 v80; // [rsp+A0h] [rbp-D8h]
  __m128i *v81; // [rsp+B0h] [rbp-C8h] BYREF
  __int8 v82; // [rsp+B8h] [rbp-C0h]
  const __m128i *v83; // [rsp+C0h] [rbp-B8h]
  int v84; // [rsp+C8h] [rbp-B0h]
  __int16 v85; // [rsp+CCh] [rbp-ACh]
  __int64 (__fastcall *v86)(__int64); // [rsp+D0h] [rbp-A8h]
  __int64 v87; // [rsp+D8h] [rbp-A0h]
  __int64 v88; // [rsp+E0h] [rbp-98h]
  __m128 v89; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v90; // [rsp+100h] [rbp-78h]

  v9 = a2;
  v10 = *(_QWORD *)(a1[6].m128i_i64[0] + 232);
  v83 = a1;
  v84 = 1507350;
  v85 = 449;
  v11 = *(unsigned int *)(v10 + 64);
  v81 = (__m128i *)&a1[122];
  LOBYTE(v10) = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v82 = v10;
  v86 = sub_146A990;
  v87 = 0;
  v88 = 0;
  v12 = sub_20EAB70(v9, v11);
  result = sub_156A040(&v81, 1625, v12, 0);
  if ( !(_BYTE)result )
  {
    v14 = (__int64 *)&v78;
    LOBYTE(v6) = a1[2].m128i_i16[0] != 23 && a1[2].m128i_i16[0] != 449;
    if ( !(_BYTE)v6 )
    {
      sub_1564840(&v89, a1, &a1[1], 14);
      sub_AE9DF0((unsigned __int8 **)&v89, 5, 4u);
      sub_AEA040((__int64)&v89);
      sub_14808E0((__int64)&v81, (__int64 *)&byte_5, v38, v39, v40, v41);
      result = 1;
      goto LABEL_16;
    }
    v15 = &v75;
    while ( 1 )
    {
      v75 = 0;
      v78 = 0;
      v17 = a1[1].m128i_u32[0];
      *(_OWORD *)ptr = 0;
      v80 = 0;
      v76 = 0;
      v77 = 0;
      if ( a4 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0
          && (unsigned __int8)sub_14D0170(a1, (__int64)v14, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0) )
        {
          break;
        }
      }
      if ( (unsigned __int8)sub_14D1670(a1, (__int64)v14, 0, 0, 0, 0, (__m128i)0LL, a6, 0, 0, nullptr, (__int64)v15) )
        break;
      v18 = a1[2].m128i_i16[0];
      if ( v18 != 66 && v18 != 23 && v18 != 449 )
      {
        v89.m128_i16[2] = 449;
        v89.m128_i32[0] = 1507394;
        sub_15680D0(a1, &v89, 3, 2);
        sub_1564820(&v89, a1, v17, 14);
        v30 = (unsigned __int8 *)v89.m128_u64[0];
        if ( !v89.m128_u64[0] )
        {
          v45 = v89.m128_u64[1];
          v46 = *(_DWORD *)(v89.m128_u64[1] + 14976);
          if ( v46 )
          {
            v56 = (unsigned int)(v46 - 1);
            *(_DWORD *)(v89.m128_u64[1] + 14976) = v56;
            v30 = *(unsigned __int8 **)(v45 + 8 * v56 + 14848);
            v57 = *((unsigned int *)v30 + 134);
            *v30 = 0;
            v58 = *((_QWORD *)v30 + 66);
            *((_DWORD *)v30 + 106) = 0;
            v59 = v58 + (v57 << 6);
            if ( v58 != v59 )
            {
              v68 = v14;
              v60 = v58;
              v69 = v15;
              v61 = a1;
              v62 = v30;
              v63 = v59;
              do
              {
                while ( 1 )
                {
                  v63 -= 64;
                  v64 = *(void **)(v63 + 24);
                  if ( v64 == (void *)(v63 + 40) )
                    break;
                  operator delete(v64);
                  if ( v60 == v63 )
                    goto LABEL_45;
                }
              }
              while ( v60 != v63 );
LABEL_45:
              v30 = v62;
              v14 = v68;
              a1 = v61;
              v15 = v69;
            }
            *((_DWORD *)v30 + 134) = 0;
          }
          else
          {
            v30 = (unsigned __int8 *)operator new(0x3A0u);
            *v30 = 0;
            *((_QWORD *)v30 + 12) = v30 + 112;
            *((_QWORD *)v30 + 16) = v30 + 144;
            *((_QWORD *)v30 + 20) = v30 + 176;
            *((_QWORD *)v30 + 24) = v30 + 208;
            *((_QWORD *)v30 + 28) = v30 + 240;
            *((_QWORD *)v30 + 32) = v30 + 272;
            *((_QWORD *)v30 + 36) = v30 + 304;
            *((_QWORD *)v30 + 40) = v30 + 336;
            *((_QWORD *)v30 + 44) = v30 + 368;
            *((_QWORD *)v30 + 48) = v30 + 400;
            *((_QWORD *)v30 + 52) = v30 + 432;
            *((_QWORD *)v30 + 13) = 0;
            v30[112] = 0;
            *((_QWORD *)v30 + 17) = 0;
            v30[144] = 0;
            *((_QWORD *)v30 + 21) = 0;
            v30[176] = 0;
            *((_QWORD *)v30 + 25) = 0;
            v30[208] = 0;
            *((_QWORD *)v30 + 29) = 0;
            v30[240] = 0;
            *((_QWORD *)v30 + 33) = 0;
            v30[272] = 0;
            *((_QWORD *)v30 + 37) = 0;
            v30[304] = 0;
            *((_QWORD *)v30 + 41) = 0;
            v30[336] = 0;
            *((_QWORD *)v30 + 45) = 0;
            v30[368] = 0;
            *((_QWORD *)v30 + 49) = 0;
            v30[400] = 0;
            *((_QWORD *)v30 + 53) = 0x800000000LL;
            *((_QWORD *)v30 + 66) = v30 + 544;
            *((_QWORD *)v30 + 67) = 0x600000000LL;
          }
          v89.m128_u64[0] = (unsigned __int64)v30;
        }
        v30[*v30 + 1] = 4;
        v31 = v89.m128_u64[0];
        v32 = *(unsigned __int8 *)v89.m128_u64[0];
        *(_BYTE *)v89.m128_u64[0] = v32 + 1;
        *(_QWORD *)(v31 + 8 * v32 + 16) = 5;
        v33 = a1[2].m128i_i32[2];
        v34 = v89.m128_u64[0];
        if ( v89.m128_u64[0] )
        {
          v35 = *(unsigned int *)(v89.m128_u64[0] + 424);
          m128i_i64 = (__int64 *)*(unsigned int *)(v89.m128_u64[0] + 428);
          v36 = v35 + 1;
        }
        else
        {
          v42 = v89.m128_u64[1];
          v43 = *(_DWORD *)(v89.m128_u64[1] + 14976);
          if ( v43 )
          {
            v47 = (unsigned int)(v43 - 1);
            *(_DWORD *)(v89.m128_u64[1] + 14976) = v47;
            v34 = *(_QWORD *)(v42 + 8 * v47 + 14848);
            v48 = *(unsigned int *)(v34 + 536);
            *(_BYTE *)v34 = 0;
            v49 = *(_QWORD *)(v34 + 528);
            *(_DWORD *)(v34 + 424) = 0;
            v50 = v49 + (v48 << 6);
            if ( v49 == v50 )
            {
              v36 = 1;
              v35 = 0;
            }
            else
            {
              v67 = a3;
              v51 = a1;
              v52 = v33;
              v70 = v15;
              v53 = v34;
              v54 = v50;
              do
              {
                while ( 1 )
                {
                  v54 -= 64;
                  v55 = *(void **)(v54 + 24);
                  if ( v55 == (void *)(v54 + 40) )
                    break;
                  operator delete(v55);
                  if ( v49 == v54 )
                    goto LABEL_37;
                }
              }
              while ( v49 != v54 );
LABEL_37:
              v34 = v53;
              v33 = v52;
              a1 = v51;
              v35 = *(unsigned int *)(v53 + 424);
              a3 = v67;
              v15 = v70;
              v36 = v35 + 1;
            }
            *(_DWORD *)(v34 + 536) = 0;
            m128i_i64 = (__int64 *)*(unsigned int *)(v34 + 428);
          }
          else
          {
            v66 = a1[2].m128i_i32[2];
            v44 = operator new(0x3A0u);
            m128i_i64 = (_QWORD *)byte_8;
            v36 = 1;
            v34 = v44;
            *(_BYTE *)v44 = 0;
            *(_QWORD *)(v44 + 96) = v44 + 112;
            *(_QWORD *)(v44 + 128) = v44 + 144;
            *(_QWORD *)(v44 + 160) = v44 + 176;
            *(_QWORD *)(v44 + 192) = v44 + 208;
            *(_QWORD *)(v44 + 224) = v44 + 240;
            *(_QWORD *)(v44 + 256) = v44 + 272;
            *(_QWORD *)(v44 + 288) = v44 + 304;
            *(_QWORD *)(v44 + 320) = v44 + 336;
            *(_QWORD *)(v44 + 352) = v44 + 368;
            *(_QWORD *)(v44 + 384) = v44 + 400;
            *(_QWORD *)(v44 + 416) = v44 + 432;
            *(_QWORD *)(v44 + 104) = 0;
            *(_BYTE *)(v44 + 112) = 0;
            *(_QWORD *)(v44 + 136) = 0;
            *(_BYTE *)(v44 + 144) = 0;
            *(_QWORD *)(v44 + 168) = 0;
            *(_BYTE *)(v44 + 176) = 0;
            *(_QWORD *)(v44 + 200) = 0;
            *(_BYTE *)(v44 + 208) = 0;
            *(_QWORD *)(v44 + 232) = 0;
            *(_BYTE *)(v44 + 240) = 0;
            *(_QWORD *)(v44 + 264) = 0;
            *(_BYTE *)(v44 + 272) = 0;
            *(_QWORD *)(v44 + 296) = 0;
            *(_BYTE *)(v44 + 304) = 0;
            *(_QWORD *)(v44 + 328) = 0;
            *(_BYTE *)(v44 + 336) = 0;
            *(_QWORD *)(v44 + 360) = 0;
            *(_BYTE *)(v44 + 368) = 0;
            *(_QWORD *)(v44 + 392) = 0;
            *(_BYTE *)(v44 + 400) = 0;
            *(_QWORD *)(v44 + 424) = 0x800000000LL;
            v33 = v66;
            *(_QWORD *)(v44 + 528) = v44 + 544;
            *(_QWORD *)(v44 + 536) = 0x600000000LL;
            v35 = 0;
          }
          v89.m128_u64[0] = v34;
        }
        v71 = __PAIR64__(v33, v17);
        LOBYTE(v72) = 1;
        if ( v36 > (unsigned __int64)m128i_i64 )
        {
          m128i_i64 = (__int64 *)(v34 + 432);
          sub_2237220(v34 + 416, v34 + 432, v36, 12);
          v35 = *(unsigned int *)(v34 + 424);
        }
        v37 = *(_QWORD *)(v34 + 416) + 12 * v35;
        *(_QWORD *)v37 = v71;
        *(_DWORD *)(v37 + 8) = v72;
        ++*(_DWORD *)(v34 + 424);
        v6 = 0;
        sub_AEA040((__int64)&v89);
      }
      else
      {
        sub_17B41B0(&v73, a1[6].m128i_i64[0], v15);
        v19 = *(_QWORD *)(a3 + 8);
        m128i_i64 = v14;
        a6 = (__m128)_mm_load_si128(&v73);
        v89 = a6;
        v90 = v74;
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int64))a3)(
          v19,
          v14,
          v21,
          v22,
          v23,
          v24,
          a6.m128_u64[0],
          a6.m128_u64[1],
          v74);
      }
      if ( a1[2].m128i_i16[0] == 66 )
        goto LABEL_19;
LABEL_13:
      if ( HIDWORD(ptr[1]) )
      {
        free(ptr[0]);
        v16 = a1[2].m128i_i16[0];
        if ( v16 == 23 )
        {
LABEL_15:
          result = v6 ^ 1 | (unsigned int)sub_14808E0((__int64)&v81, m128i_i64, v25, v26, v27, v28);
          goto LABEL_16;
        }
      }
      else
      {
        v16 = a1[2].m128i_i16[0];
        if ( v16 == 23 )
          goto LABEL_15;
      }
      if ( v16 == 449 )
        goto LABEL_15;
    }
    m128i_i64 = (__int64 *)&v89;
    v6 = 0;
    v89.m128_i16[2] = 449;
    v89.m128_i32[0] = 1507394;
    sub_15680D0(a1, &v89, 3, 2);
    if ( a1[2].m128i_i16[0] != 66 )
      goto LABEL_13;
LABEL_19:
    v29 = (__int64 *)a1->m128i_i64[1];
    m128i_i64 = a1[1].m128i_i64;
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v29, a1[1].m128i_i32);
    goto LABEL_13;
  }
LABEL_16:
  v81->m128i_i8[0] = v82;
  return result;
}
