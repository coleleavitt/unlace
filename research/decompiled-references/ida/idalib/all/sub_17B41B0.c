__int64 __fastcall sub_17B41B0(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int32 v9; // eax
  __int64 v10; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  int v15; // edx
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // r15
  __m128i v19; // xmm0
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm3
  __int64 v24; // rax
  __m128i v25; // xmm2
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm7
  __int64 v35; // rax
  __m128i v36; // xmm5
  __int64 v37; // rax
  __m128i v38; // xmm4
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __m128i v45; // xmm6
  __int64 v46; // [rsp+8h] [rbp-110h]
  int v47; // [rsp+1Ch] [rbp-FCh] BYREF
  __int64 v48; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-F0h] BYREF
  __m128i v50; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v51; // [rsp+40h] [rbp-D8h]
  __int64 v52; // [rsp+50h] [rbp-C8h] BYREF
  int v53; // [rsp+58h] [rbp-C0h]

  v9 = a3[6];
  v50.m128i_i64[0] = 0;
  v50.m128i_i32[2] = v9;
  v10 = *a3;
  v51 = 0;
  switch ( v10 )
  {
    case 0LL:
    case 8LL:
      v50.m128i_i64[0] = *((_QWORD *)a3 + 1);
      v19 = _mm_load_si128(&v50);
      *(_QWORD *)(a1 + 16) = v51;
      *(__m128i *)a1 = v19;
      break;
    case 1LL:
      v20 = a3[3];
      v50.m128i_i64[0] = (a2[31] + 16LL * (int)a3[2] + 17592) | 6;
      v51 = __PAIR64__(a3[7], v20);
      v21 = v51;
      *(__m128i *)a1 = _mm_load_si128(&v50);
      *(_QWORD *)(a1 + 16) = v21;
      break;
    case 2LL:
      v22 = sub_1E5F010(*((_QWORD *)a3 + 1), &v52);
      if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_17;
      v50.m128i_i64[0] = sub_B87AA0(
                           a2[31] + 17536,
                           *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v22) & 7);
      v23 = _mm_load_si128(&v50);
      *(_QWORD *)(a1 + 16) = v52;
      *(__m128i *)a1 = v23;
      break;
    case 3LL:
      v24 = sub_B87830(a2[31] + 17536, *((_QWORD *)a3 + 1));
      HIDWORD(v52) = 0;
      v50.m128i_i64[0] = v24;
      v25 = _mm_load_si128(&v50);
      LODWORD(v52) = a3[7];
      v26 = (unsigned int)v52;
      *(__m128i *)a1 = v25;
      *(_QWORD *)(a1 + 16) = v26;
      break;
    case 4LL:
      v37 = sub_1E5F010(*((_QWORD *)a3 + 1), &v52);
      if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_17;
      v50.m128i_i64[0] = sub_B87BD0(
                           a2[31] + 17536,
                           *(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v37) & 7);
      v38 = _mm_load_si128(&v50);
      *(_QWORD *)(a1 + 16) = v52;
      *(__m128i *)a1 = v38;
      break;
    case 5LL:
      v27 = a2[68];
      if ( (*(_BYTE *)(v27 + 8) & 0x7Fu) - 59 > 2 || v27 == 64 )
        goto LABEL_17;
      v28 = *(_QWORD *)(v27 - 24) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v27 - 24) & 7) != 0 )
        v28 = 0;
      v29 = *((_QWORD *)a3 + 1);
      if ( *(_QWORD *)(v29 + 8) != v28 )
        goto LABEL_17;
      v30 = *(_QWORD *)(v27 - 16);
      v31 = a2[31];
      if ( v30 )
      {
        v32 = v30 & 0xFFFFFFFFFFFFFFF0LL;
        v33 = v32;
      }
      else
      {
        v32 = sub_A7AA70(v31, v27 - 64, v27, v29, a6, a7);
        v31 = a2[31];
        v33 = v32 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v50.m128i_i64[0] = sub_B87BD0(
                           v31 + 17536,
                           *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)(v33 + 8) | (unsigned __int8)v32) & 7);
      v34 = _mm_load_si128(&v50);
      *(_QWORD *)(a1 + 16) = v51;
      *(__m128i *)a1 = v34;
      break;
    case 6LL:
      v35 = sub_1E5F010(*((_QWORD *)a3 + 1), &v52);
      if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_17;
      v50.m128i_i64[0] = sub_B87700(
                           a2[31] + 17536,
                           *(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v35) & 7);
      v36 = _mm_load_si128(&v50);
      *(_QWORD *)(a1 + 16) = v52;
      *(__m128i *)a1 = v36;
      break;
    case 7LL:
      sub_F22A90(&v52, *(_QWORD *)(*((_QWORD *)a3 + 1) + 24LL));
      sub_A635F0(a1, a2[31], v52, *(_DWORD *)(*((_QWORD *)a3 + 1) + 4LL), a4);
      break;
    case 9LL:
      sub_F22A90(&v52, *((_QWORD *)a3 + 1));
      v48 = v52;
      v12 = sub_F22BD0(&v48, 0);
      v13 = v12;
      if ( v12 && (*(_BYTE *)(v12 + 28) & 0x7F) == 0x48 )
      {
        v50.m128i_i64[0] = sub_B87960(a2[31] + 17536, v12);
        v45 = _mm_load_si128(&v50);
        *(_QWORD *)(a1 + 16) = v51;
        *(__m128i *)a1 = v45;
      }
      else
      {
        sub_168B9F0((__int64)&v52, a2 + 1, a3[6], 0xE22u, 0);
        v49 = v48;
        v14 = sub_F22BD0(&v49, 0);
        if ( v14 )
        {
          v15 = 0;
          v16 = *(_BYTE *)(v14 + 28) & 0x7F;
          if ( v16 != 72 )
          {
            v15 = 1;
            if ( v16 != 71 )
            {
              switch ( v16 )
              {
                case 'E':
                  v15 = 2;
                  break;
                case 'F':
                  v15 = 3;
                  break;
                case 'D':
                  v15 = 4;
                  break;
                default:
                  v15 = (v16 != 73) + 5;
                  break;
              }
            }
          }
        }
        else
        {
          v15 = 6;
        }
        v47 = v15;
        v17 = sub_1587D10((__int64)&v52, &v47);
        v18 = v17;
        if ( *(_BYTE *)(v17 + 120) )
        {
          sub_F23A70((unsigned __int8 **)(v17 + 32), v48);
        }
        else if ( *(_BYTE *)(v17 + 132) )
        {
          v39 = sub_168B9E0((_QWORD *)v17);
          v43 = *(_QWORD *)(v18 + 16);
          if ( v43 )
          {
            v46 = v39;
            v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
            v39 = v46;
          }
          v49 = v43;
          v44 = sub_1587BC0(v39, &v49, v39, v40, v41, v42);
          sub_F23A70((unsigned __int8 **)(*v44 + 32LL * *(unsigned int *)(v18 + 128) + 8), v48);
        }
        sub_15F7200(&v52);
        if ( v13 )
        {
          v53 = 0;
          sub_1CCCAD0(a2, v13, v52, 0);
        }
LABEL_17:
        *(_DWORD *)(a1 + 8) = 0;
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
      break;
  }
  return a1;
}
