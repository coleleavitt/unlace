void __fastcall sub_1F9A420(__int64 *a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  unsigned int v7; // eax
  void **v8; // rdi
  const __m128i *v9; // rdx
  __int64 v10; // rdi
  __m128i v11; // xmm1
  unsigned __int32 v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rbx
  int *v24; // rdx
  int *i; // r15
  int *v26; // rdx
  int v27; // rax^4
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  _QWORD *v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __m128i v36; // [rsp+0h] [rbp-108h] BYREF
  void **p_ptr; // [rsp+18h] [rbp-F0h]
  __m128i v38; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v39; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h]
  _BYTE v42[184]; // [rsp+50h] [rbp-B8h] BYREF

  v38.m128i_i64[1] = a3;
  v4 = v42;
  p_ptr = &ptr;
  v38.m128i_i64[0] = a2;
  ptr = v42;
  v41 = 0x800000000LL;
  if ( a2 )
  {
    v5 = _mm_loadu_si128(&v38);
    v6 = 0;
    while ( 1 )
    {
      *(__m128i *)&v4[16 * v6] = v5;
      v6 = (unsigned int)(v41 + 1);
      LODWORD(v41) = v41 + 1;
      if ( !v38.m128i_i64[0] )
        break;
      a2 = v6;
      v38.m128i_i64[0] = *(_QWORD *)(v38.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v38.m128i_i64[0] )
        goto LABEL_9;
      v5 = _mm_loadu_si128(&v38);
      if ( v6 + 1 > (unsigned __int64)HIDWORD(v41) )
      {
        v36 = v5;
        sub_2237220(p_ptr, v42, v6 + 1, 16);
        v6 = (unsigned int)v41;
        v5 = _mm_load_si128(&v36);
      }
      v4 = ptr;
    }
    a2 = (unsigned int)v6;
  }
LABEL_9:
  sub_9B9C90(a1[2], a2);
LABEL_10:
  v7 = v41;
  v8 = (void **)ptr;
  if ( (_DWORD)v41 )
  {
    while ( 2 )
    {
      v9 = (const __m128i *)&v8[2 * v7 - 2];
      v10 = v9->m128i_i64[0];
      v11 = _mm_loadu_si128(v9);
      LODWORD(v41) = v7 - 1;
      v38 = v11;
      v12 = sub_E90000(v10);
      v15 = a1[2];
      v16 = v12;
      v17 = *(unsigned int *)(v15 + 8);
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
      {
        v35 = a1[2];
        v36.m128i_i32[0] = v12;
        sub_2237220(v35, v15 + 16, v17 + 1, 8);
        v17 = *(unsigned int *)(v15 + 8);
      }
      v18 = *(_QWORD *)v15;
      *(_QWORD *)(*(_QWORD *)v15 + 8 * v17) = v16;
      ++*(_DWORD *)(v15 + 8);
      switch ( v16 )
      {
        case 0LL:
          v34 = 0;
          if ( (*(_BYTE *)(v38.m128i_i64[0] + 8) & 6) == 0 )
            v34 = *(_QWORD *)(v38.m128i_i64[0] + 16);
          v29 = a1[2];
          v30 = sub_1F80CA0(a1[1], v34, v18, v17, v13, v14);
          goto LABEL_22;
        case 1LL:
          v28 = sub_E90060(v38.m128i_i64[0]);
          goto LABEL_21;
        case 2LL:
          v28 = sub_E90090(v38.m128i_i64[0]);
          goto LABEL_21;
        case 3LL:
          v19 = sub_E90670(&v38);
          sub_1F85840(a1[1], *a1, v19, (_QWORD *)a1[2], v20, v21);
          v22 = sub_E90670(&v38);
          v39 = a1;
          v23 = v22;
          for ( i = v24; v23; i = v26 )
          {
            sub_1F99BE0((__int64 *)&v39, v23, i);
            v23 = sub_F6C7E0(v23, i);
          }
          goto LABEL_16;
        case 4LL:
LABEL_16:
          v27 = sub_E90530(v38.m128i_i64) >> 32;
          sub_1F6F570((_QWORD *)a1[1], v27, a1[2]);
          v7 = v41;
          v8 = (void **)ptr;
          if ( !(_DWORD)v41 )
            break;
          continue;
        case 5LL:
          v28 = sub_E900C0(v38.m128i_i64[0]);
LABEL_21:
          v29 = a1[2];
          v30 = sub_1F92240(a1[1], v28);
LABEL_22:
          sub_9B9C90(v29, v30);
          v31 = sub_E90530(v38.m128i_i64);
          v32 = (_QWORD *)a1[1];
          v33 = a1[2];
          v36.m128i_i64[0] = HIDWORD(v31);
          sub_1F6F570(v32, v31, v33);
          sub_1F6F570(v32, v36.m128i_i32[0], v33);
          goto LABEL_10;
        default:
          goto LABEL_10;
      }
      break;
    }
  }
  if ( v8 != p_ptr + 2 )
    free(v8);
}
