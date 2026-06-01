void __fastcall sub_67F660(__int64 a1, __int64 a2, __m128i *a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // r13
  unsigned __int8 v9; // al
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned int *v17; // r15
  const char *v18; // rcx
  size_t v19; // rbp
  char v20; // al
  _BYTE *v21; // rcx
  _BYTE *v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v28; // rdx
  _QWORD *v29; // rax
  signed __int64 v30; // r13
  _BYTE *v31; // r14
  __int64 v32; // rsi
  _QWORD *v33; // rax
  signed __int64 v34; // r15
  _BYTE *v35; // r8
  _BYTE *v36; // rcx
  __int64 v37; // rsi
  _BYTE *v38; // rdi
  void *v39; // rdi
  char *v40; // rbp
  __m128i **v41; // rdi
  void *v42; // rdi
  __m128i *v43; // rax
  __int64 v44; // rbp
  __int64 i; // r15
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // r15
  _QWORD *v50; // rbp
  _QWORD *v51; // rax
  _BYTE *v52; // rdi
  _BYTE *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  char *v56; // [rsp+8h] [rbp-2B0h]
  __m128i *v57; // [rsp+8h] [rbp-2B0h]
  __m128i *v58; // [rsp+8h] [rbp-2B0h]
  _BYTE *v59; // [rsp+8h] [rbp-2B0h]
  __int64 v60; // [rsp+18h] [rbp-2A0h] BYREF
  __int64 *v61; // [rsp+20h] [rbp-298h] BYREF
  int v62; // [rsp+28h] [rbp-290h]
  __int128 v63; // [rsp+30h] [rbp-288h]
  __int64 v64; // [rsp+40h] [rbp-278h]
  char v65; // [rsp+48h] [rbp-270h]
  int v66; // [rsp+4Ch] [rbp-26Ch]
  _BYTE **p_ptr; // [rsp+50h] [rbp-268h]
  _BYTE *ptr; // [rsp+60h] [rbp-258h] BYREF
  __m128i ptr_8; // [rsp+68h] [rbp-250h] BYREF
  _BYTE v70[576]; // [rsp+78h] [rbp-240h] BYREF

  v6 = a2;
  if ( a2 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
            v9 = *(_BYTE *)(v8 + 28) & 0x7F;
            if ( v9 != 19 )
              break;
            v6 = *(_QWORD *)(v8 + 88);
          }
          if ( v9 != 20 )
            break;
          v6 = sub_7BB6B0(v8);
        }
        if ( (unsigned int)v9 - 32 > 5 )
          break;
        v6 = sub_780E20(v8);
        if ( !v6 )
          goto LABEL_8;
      }
      if ( (unsigned int)v9 - 57 > 2 )
        break;
      v6 = sub_7A47A0(v8);
    }
    while ( v6 );
LABEL_8:
    sub_639160((__int64)&ptr, v8, *(_QWORD *)(a1 + 40), 0, 1u);
    si128 = _mm_load_si128((const __m128i *)&ptr);
    a3[5].m128i_i64[0] = v8;
    a3[5].m128i_i64[1] = a1;
    a3[2] = si128;
    a3[3] = _mm_load_si128((const __m128i *)&ptr_8.m128i_u64[1]);
    v11 = sub_1116920(v8);
    v14 = BYTE2(v11);
    switch ( (char)v11 )
    {
      case 0:
      case 1:
      case 4:
      case 20:
      case 26:
      case 27:
      case 28:
      case 29:
        LODWORD(v11) = 0;
        break;
      case 2:
        LODWORD(v11) = 17;
        break;
      case 3:
        LODWORD(v11) = 18;
        break;
      case 5:
        LODWORD(v11) = 13;
        break;
      case 6:
        LODWORD(v11) = 14;
        break;
      case 7:
        LODWORD(v11) = 16;
        if ( (_BYTE)v14 == 1 )
          LODWORD(v11) = 6;
        break;
      case 8:
        LODWORD(v11) = 26;
        if ( (_BYTE)v14 == 1 )
          LODWORD(v11) = 7;
        break;
      case 9:
        LODWORD(v11) = 8;
        break;
      case 10:
        LODWORD(v11) = 15;
        break;
      case 11:
        if ( BYTE2(v11) == 2 )
          LODWORD(v11) = 25;
        else
          LODWORD(v11) = 1;
        break;
      case 12:
        LODWORD(v11) = 2;
        break;
      case 13:
      case 25:
        LODWORD(v11) = 3;
        break;
      case 14:
        LODWORD(v11) = 4;
        if ( (_BYTE)v14 == 1 )
          LODWORD(v11) = 12;
        break;
      case 15:
        LODWORD(v11) = 5;
        break;
      case 16:
        LODWORD(v11) = 21;
        if ( (_BYTE)v14 == 1 )
          LODWORD(v11) = 9;
        break;
      case 17:
        LODWORD(v11) = 10;
        break;
      case 18:
        LODWORD(v11) = 20;
        break;
      case 19:
        LODWORD(v11) = 11;
        break;
      case 21:
        LODWORD(v11) = 19;
        break;
      case 22:
        LODWORD(v11) = 22;
        break;
      case 23:
        LODWORD(v11) = 23;
        break;
      case 24:
        LODWORD(v11) = 24;
        break;
      case 30:
        LODWORD(v11) = 27;
        break;
    }
    a3->m128i_i32[0] = v11;
    LODWORD(v11) = 2;
    if ( (v11 & 0x200000000LL) == 0 )
    {
      LODWORD(v11) = BYTE4(v11) & 1;
      if ( (v11 & 0x400000000LL) != 0 )
        LODWORD(v11) = 3;
    }
    a3->m128i_i32[1] = v11;
    a3->m128i_i32[2] = v14 + 1;
    if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
    {
      sub_6842D0(&v60, v8, a1);
      v25 = v60;
      v26 = a3[6].m128i_i64[0];
      a3[6].m128i_i64[0] = v60;
      if ( v26 )
      {
        if ( (*(_DWORD *)(v26 + 712))-- == 1 )
        {
          v39 = *(void **)(v26 + 680);
          if ( v39 != (void *)(v26 + 696) )
            free(v39);
          v56 = *(char **)(v26 + 168);
          v40 = &v56[248 * *(unsigned int *)(v26 + 176)];
          if ( v56 != v40 )
          {
            do
            {
              v41 = *((__m128i ***)v40 - 10);
              v40 -= 248;
              sub_67AA40(v41);
            }
            while ( v56 != v40 );
            v40 = *(char **)(v26 + 168);
          }
          if ( v40 != (char *)(v26 + 184) )
            free(v40);
          v42 = *(void **)(v26 + 8);
          if ( v42 != (void *)(v26 + 24) )
            free(v42);
          --*(_DWORD *)(*(_QWORD *)v26 + 240LL);
          v43 = *(__m128i **)v26;
          if ( !*(_DWORD *)(*(_QWORD *)v26 + 240LL) )
          {
            v44 = v43[13].m128i_i64[0];
            for ( i = v44 + 16LL * v43[13].m128i_u32[2]; i != v44; v43 = v57 )
            {
              v44 += 16;
              v57 = v43;
              operator delete();
            }
            v43[13].m128i_i32[2] = 0;
            v46 = v43[10].m128i_u32[2];
            if ( (_DWORD)v46 )
            {
              v47 = (_QWORD *)v43[10].m128i_i64[0];
              v48 = v46;
              v43[14].m128i_i64[0] = 0;
              v49 = &v47[v48];
              v50 = v47 + 1;
              v43[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v47, (__m128i)(unsigned __int64)(*v47 + 4096LL));
              if ( v48 != 1 )
              {
                do
                {
                  v58 = v43;
                  ++v50;
                  operator delete();
                  v43 = v58;
                }
                while ( v49 != v50 );
              }
              v43[10].m128i_i32[2] = 1;
            }
          }
        }
        v25 = a3[6].m128i_i64[0];
      }
      if ( *(_DWORD *)(v25 + 688) )
        v28 = *(_QWORD *)(v25 + 680);
      else
        v28 = 0;
      a3[4].m128i_i64[0] = v28;
      a3[4].m128i_i32[2] = *(_DWORD *)(v25 + 688);
    }
    if ( a3->m128i_i32[0] )
    {
      v15 = *(_QWORD *)(v8 + 40);
      if ( (v15 & 7) != 0 || (v16 = v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v23 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( (unsigned __int8)v23 <= 0x3Cu && (v24 = 0x1F03800000400000LL, _bittest64(&v24, v23)) )
        {
          a3[1].m128i_i64[0] = 0;
        }
        else
        {
          v62 = 2;
          ptr_8 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
          v63 = 0;
          v61 = (__int64 *)&off_49DA340;
          ptr = v70;
          v65 = 0;
          v66 = 1;
          v64 = 0;
          p_ptr = &ptr;
          sub_2623850(&v61, 0, 0, 0, v12, v13);
          sub_77A870(v8, &v61);
          v61 = &qword_4A6EA70[2];
          sub_2623770(&v61);
          v33 = *(_QWORD **)a4;
          v34 = ptr_8.m128i_i64[0];
          v35 = ptr;
          v36 = *(_BYTE **)(*(_QWORD *)a4 + 144LL);
          v37 = ptr_8.m128i_i64[0] + 1;
          v33[28] += ptr_8.m128i_i64[0] + 1;
          if ( v33[19] >= (unsigned __int64)&v36[v37] && v36 )
          {
            v33[18] = &v36[v37];
          }
          else
          {
            v59 = v35;
            v54 = sub_67A630((__int64)(v33 + 18), v37, 0);
            v35 = v59;
            v36 = (_BYTE *)v54;
          }
          if ( v34 <= 1 )
          {
            if ( v34 == 1 )
              *v36 = *v35;
          }
          else
          {
            v36 = memmove(v36, v35, v34);
          }
          v36[v34] = 0;
          v38 = ptr;
          a3[1].m128i_i64[0] = (__int64)v36;
          if ( v38 != v70 )
            free(v38);
        }
      }
      else
      {
        v17 = *(unsigned int **)(v16 + 16);
        v18 = &byte_3B9466E;
        v19 = *v17;
        if ( *v17 )
        {
          v18 = (const char *)(v17 + 4);
          if ( *((_BYTE *)v17 + v19 + 16) )
          {
            v51 = *(_QWORD **)a4;
            v52 = *(_BYTE **)(*(_QWORD *)a4 + 144LL);
            v51[28] += v19 + 1;
            v53 = &v52[v19 + 1];
            if ( v51[19] >= (unsigned __int64)v53 && v52 )
            {
              v51[18] = v53;
            }
            else
            {
              v55 = sub_67A630((__int64)(v51 + 18), v19 + 1, 0);
              v18 = (const char *)(v17 + 4);
              v52 = (_BYTE *)v55;
            }
            if ( v19 == 1 )
              *v52 = *((_BYTE *)v17 + 16);
            else
              v52 = memmove(v52, v18, v19);
            v52[v19] = 0;
            v18 = v52;
          }
        }
        a3[1].m128i_i64[0] = (__int64)v18;
      }
      ptr = v70;
      ptr_8 = _mm_load_si128((const __m128i *)&xmmword_3C7E580);
      v20 = sub_635D80(v8, &ptr);
      v21 = nullptr;
      if ( !v20 )
      {
        v29 = *(_QWORD **)a4;
        v30 = ptr_8.m128i_i64[0];
        v31 = ptr;
        v21 = *(_BYTE **)(*(_QWORD *)a4 + 144LL);
        v32 = ptr_8.m128i_i64[0] + 1;
        v29[28] += ptr_8.m128i_i64[0] + 1;
        if ( v29[19] >= (unsigned __int64)&v21[v32] && v21 )
          v29[18] = &v21[v32];
        else
          v21 = (_BYTE *)sub_67A630((__int64)(v29 + 18), v32, 0);
        if ( v30 <= 1 )
        {
          if ( v30 == 1 )
            *v21 = *v31;
        }
        else
        {
          v21 = memmove(v21, v31, v30);
        }
        v21[v30] = 0;
      }
      v22 = ptr;
      a3[1].m128i_i64[1] = (__int64)v21;
      if ( v22 != v70 )
        free(v22);
    }
  }
}

