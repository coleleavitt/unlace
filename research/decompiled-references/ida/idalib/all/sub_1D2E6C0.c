__int64 __fastcall sub_1D2E6C0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  __int64 *v8; // rbp
  __int64 v9; // rbx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int16 **v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int16 **v27; // r12
  unsigned __int16 *v28; // rax
  unsigned __int16 *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // r15
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  int v45; // eax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  _BYTE *v48; // rbx
  char *v49; // r13
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // [rsp+0h] [rbp-288h]
  unsigned __int16 **v60; // [rsp+20h] [rbp-268h]
  __int64 v61; // [rsp+30h] [rbp-258h]
  unsigned __int64 v62; // [rsp+48h] [rbp-240h]
  unsigned __int64 v63; // [rsp+48h] [rbp-240h]
  __m128i v64; // [rsp+50h] [rbp-238h] BYREF
  __int64 v65; // [rsp+60h] [rbp-228h]
  unsigned __int64 v66; // [rsp+78h] [rbp-210h]
  int v67[3]; // [rsp+84h] [rbp-204h] BYREF
  __m128i v68; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-1E8h]
  __int128 v70; // [rsp+B0h] [rbp-1D8h] BYREF
  void *v71[2]; // [rsp+C0h] [rbp-1C8h]
  __int128 v72; // [rsp+D0h] [rbp-1B8h]
  void *ptr; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-1A0h]
  _BYTE v75[64]; // [rsp+F0h] [rbp-198h] BYREF
  void *v76; // [rsp+130h] [rbp-158h] BYREF
  __int64 v77; // [rsp+138h] [rbp-150h]
  _BYTE v78[128]; // [rsp+140h] [rbp-148h] BYREF
  void *v79; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+1C8h] [rbp-C0h]
  _BYTE v81[184]; // [rsp+1D0h] [rbp-B8h] BYREF

  v8 = a1;
  v9 = a2;
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(_DWORD *)(a2 + 4);
  v12 = *(_DWORD *)a2;
  v70 = 0;
  v67[1] = v10;
  v79 = v81;
  v13 = *(unsigned int *)(a2 + 16);
  v67[0] = v12;
  v14 = (unsigned __int64)&v79;
  v67[2] = v11;
  v76 = v78;
  v77 = 0x1000000000LL;
  *(_OWORD *)v71 = 0;
  v72 = 0;
  v68.m128i_i64[0] = 0;
  v68.m128i_i32[2] = 0;
  v69 = 0;
  v80 = 0x1000000000LL;
  if ( v13 > 0x10 )
  {
    sub_2237220(&v76, v78, v13, 8);
    v13 = *(unsigned int *)(a2 + 16);
  }
  v15 = (unsigned __int16 **)(a2 + 104);
  if ( a2 + 8 * v13 + 104 != a2 + 104 )
  {
    v16 = a2 + 8 * v13 + 104;
    do
    {
      while ( 1 )
      {
        v17 = sub_1D11200(a1, *v15, (__m128)0LL, a4, v13, v14, a8);
        if ( v17 == 1 )
          goto LABEL_70;
        v14 = (unsigned int)v77;
        a8 = v17 & 0xFFFFFFFFFFFFFFFELL;
        v13 = (unsigned int)v77 + 1LL;
        if ( v13 > HIDWORD(v77) )
          break;
        ++v15;
        *((_QWORD *)v76 + (unsigned int)v77) = a8;
        LODWORD(v77) = v77 + 1;
        if ( (unsigned __int16 **)v16 == v15 )
          goto LABEL_9;
      }
      v59 = v17 & 0xFFFFFFFFFFFFFFFELL;
      sub_2237220(&v76, v78, v13, 8);
      v13 = (unsigned int)v77;
      a8 = v59;
      ++v15;
      *((_QWORD *)v76 + (unsigned int)v77) = v59;
      LODWORD(v77) = v77 + 1;
    }
    while ( (unsigned __int16 **)v16 != v15 );
LABEL_9:
    v8 = a1;
  }
  v18 = *(_QWORD *)(a2 + 40);
  v19 = 0;
  if ( v18 && (v18 = sub_1D23E30((__int64 **)v8, v18, *(void **)(v9 + 48), 0, 0)) == 0
    || (sub_15AB8B0((__int64)&v70, v18, v19),
        v23 = (__m128)_mm_loadu_si128((const __m128i *)(v9 + 56)),
        v24 = *(_QWORD *)(v9 + 72),
        v25 = *(_QWORD *)(v9 + 56),
        v68 = (__m128i)v23,
        v69 = v24,
        v25)
    && (sub_1D204A0(&v64, v8, &v68, (__m128)0LL, v23, v20, v21, v22),
        a5 = _mm_loadu_si128(&v64),
        v68 = a5,
        v69 = v65,
        !v64.m128i_i64[0]) )
  {
LABEL_70:
    v55 = 0;
  }
  else
  {
    v26 = 8LL * *(unsigned int *)(v9 + 16);
    v60 = (unsigned __int16 **)(v9 + v26 + 104 + v26);
    if ( v60 != (unsigned __int16 **)(v9 + v26 + 104) )
    {
      v61 = v9;
      v27 = (unsigned __int16 **)(v9 + v26 + 104);
      do
      {
        v28 = *v27;
        if ( *v27 )
        {
          v29 = v28 + 32;
          v30 = (__int64)(v28 + 40);
          v74 = 0x800000000LL;
          v32 = *v28;
          ptr = v75;
          v31 = *((unsigned int *)v28 + 1);
          LOWORD(v32) = v32 & 0x1FF;
          if ( (_WORD)v32 == 24 )
            v30 = (__int64)v29;
          v33 = v30 + 8 * v31;
          if ( v30 != v33 )
          {
            v34 = v30;
            v35 = 0;
            while ( 1 )
            {
              v39 = *(_QWORD *)v30 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v39 )
                break;
LABEL_25:
              v32 = HIDWORD(v74);
              v38 = (*(_BYTE *)(v39 + 29) >> 5) & 3 | v39;
              v66 = v38;
              if ( v35 + 1 > (unsigned __int64)HIDWORD(v74) )
              {
                sub_2237220(&ptr, v75, v35 + 1, 8);
                v30 = (unsigned int)v74;
                *((_QWORD *)ptr + (unsigned int)v74) = v38;
              }
              else
              {
                v30 = (__int64)ptr;
                *((_QWORD *)ptr + v35) = v38;
              }
              v34 += 8;
              v35 = (unsigned int)(v74 + 1);
              LODWORD(v74) = v74 + 1;
              if ( v33 == v34 )
              {
                v48 = ptr;
                v49 = (char *)ptr + 8 * v35;
                goto LABEL_51;
              }
              v30 = v34;
            }
            v40 = *(_BYTE *)(v39 + 28) & 0x7F;
            if ( (unsigned int)(unsigned __int8)v40 - 64 > 2 )
            {
              if ( (_BYTE)v40 == 47 )
              {
                if ( (*(_DWORD *)(v39 + 68) & 0xFFFFFu) < *((_DWORD *)v8 + 12) )
                  *((_BYTE *)v8 + 32) = 1;
LABEL_34:
                v37 = *(_QWORD *)(v39 + 48);
LABEL_23:
                sub_1D1AC70(v8, v37, (__m128)0LL, v23);
              }
              else
              {
                if ( (unsigned int)(unsigned __int8)v40 - 26 <= 0x1A )
                  goto LABEL_34;
                v41 = (unsigned int)(unsigned __int8)v40 - 68;
                if ( (unsigned int)v41 <= 6 || (unsigned int)(unsigned __int8)v40 - 59 > 2 )
                  goto LABEL_25;
                v42 = sub_7052B0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104), v41, v40, v21, v22);
                if ( (unsigned __int8)sub_B8E340((__int64)v42) )
                {
                  v44 = *(_QWORD *)(v8[5] + 16) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (*(_QWORD *)(v8[5] + 16) & 4) != 0 )
                    v44 = *(_QWORD *)(v44 + 8);
                  while ( v44 )
                  {
                    v45 = *(_BYTE *)(v44 + 8) & 0x7F;
                    if ( (*(_BYTE *)(v44 + 8) & 0x7F) == 0 || v45 == 24 )
                      break;
                    if ( (unsigned int)(v45 - 59) <= 2 && v44 != 64 )
                    {
                      v62 = v44;
                      v46 = sub_7052B0(
                              (__int64 *)(*(_QWORD *)(v44 + 40) + 96LL),
                              *(_QWORD *)(v44 + 40),
                              v44,
                              v43,
                              v21,
                              v22);
                      v44 = v62;
                      if ( v42 == v46 )
                        *((_BYTE *)v8 + 32) = 1;
                    }
                    v47 = *(_QWORD *)(sub_B8C1B0(v44) + 16);
                    if ( (v47 & 4) != 0 )
                      v44 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
                    else
                      v44 = v47 & 0xFFFFFFFFFFFFFFF8LL;
                  }
                }
              }
              v35 = (unsigned int)v74;
              goto LABEL_25;
            }
            v36 = (__int64 *)(*(_QWORD *)(v39 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v39 + 80) & 4) != 0 )
              v37 = v36[1];
            else
              v37 = *v36;
            goto LABEL_23;
          }
          v48 = v75;
          v49 = v75;
LABEL_51:
          v50 = sub_15AB9E0((__int64)&v70, *(_QWORD **)(*v8 + 248), v30, v32, v21, v22);
          v52 = sub_C98860(*(_QWORD **)(*v8 + 248), 0, v50, v51, &v68, 1, v48, (__int64)v49, 0, 0);
          v53 = (unsigned int)v80;
          v54 = (unsigned int)v80 + 1LL;
          if ( v54 > HIDWORD(v80) )
          {
            v63 = v52;
            sub_2237220(&v79, v81, v54, 8);
            v53 = (unsigned int)v80;
            v52 = v63;
          }
          *((_QWORD *)v79 + v53) = v52;
          LODWORD(v80) = v80 + 1;
          if ( ptr != v75 )
            free(ptr);
        }
        else
        {
          v57 = (unsigned int)v80;
          v58 = (unsigned int)v80 + 1LL;
          if ( v58 > HIDWORD(v80) )
          {
            sub_2237220(&v79, v81, v58, 8);
            v57 = (unsigned int)v80;
          }
          *((_QWORD *)v79 + v57) = 0;
          LODWORD(v80) = v80 + 1;
        }
        ++v27;
      }
      while ( v60 != v27 );
      v9 = v61;
    }
    v55 = sub_1B60AE0(
            *(__int64 **)(*v8 + 760),
            (int *)(v9 + 80),
            2,
            (unsigned int *)(v9 + 88),
            (__m128)0LL,
            v23,
            a5,
            2,
            (__int64)&v70,
            (__int64)&v68,
            *(_DWORD *)(v9 + 96),
            (__int64)v76,
            (unsigned int)v77,
            v67,
            (__int64)v79,
            (_DWORD *)(unsigned int)v80);
  }
  if ( v79 != v81 )
    free(v79);
  if ( HIDWORD(v71[1]) )
    free(v71[0]);
  if ( v76 != v78 )
    free(v76);
  return v55;
}
