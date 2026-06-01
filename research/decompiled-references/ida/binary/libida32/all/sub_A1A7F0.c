__int64 __fastcall sub_A1A7F0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __m128i *v5; // rbp
  unsigned int *v6; // r12
  unsigned int *v7; // rsi
  __m128i v8; // xmm0
  unsigned __int64 v9; // r14
  __int32 v10; // r9d
  int v11; // r8d
  unsigned int *v12; // r15
  unsigned int v13; // ebp
  unsigned int v14; // r12d
  char v15; // al
  unsigned int v16; // eax
  __int64 v17; // rcx
  __m128i v18; // xmm0
  char v19; // al
  char v20; // al
  char v21; // al
  unsigned int *v22; // rdi
  char v23; // al
  unsigned int *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  char v33; // al
  __m128i v34; // xmm0
  char v35; // al
  __m128i v36; // xmm6
  __int64 v37; // [rsp+8h] [rbp-120h]
  __int64 v38; // [rsp+10h] [rbp-118h]
  unsigned int *v39; // [rsp+18h] [rbp-110h]
  unsigned int v40; // [rsp+20h] [rbp-108h]
  unsigned __int32 v41; // [rsp+30h] [rbp-F8h]
  __int64 v42; // [rsp+38h] [rbp-F0h]
  __int64 m128i_i64; // [rsp+40h] [rbp-E8h]
  __int64 v44; // [rsp+48h] [rbp-E0h]
  _QWORD v45[4]; // [rsp+50h] [rbp-D8h] BYREF
  char v46; // [rsp+70h] [rbp-B8h]
  __int64 v47[4]; // [rsp+78h] [rbp-B0h] BYREF
  __m128i v48; // [rsp+98h] [rbp-90h] BYREF
  __m128i v49; // [rsp+A8h] [rbp-80h] BYREF
  char v50; // [rsp+B8h] [rbp-70h]
  __m128i v51; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v52; // [rsp+D0h] [rbp-58h] BYREF
  char v53; // [rsp+E0h] [rbp-48h]
  __int64 v54; // [rsp+E8h] [rbp-40h]

  result = a2 - (_QWORD)a1;
  v37 = a2;
  v38 = a3;
  if ( a2 - (__int64)a1 > 2816 )
  {
    if ( !a3 )
    {
      v42 = a2;
      goto LABEL_48;
    }
    v39 = (unsigned int *)&a1[11];
    m128i_i64 = (__int64)a1[1].m128i_i64;
    v44 = (__int64)a1[12].m128i_i64;
    while ( 1 )
    {
      --v38;
      v5 = &a1[11 * ((0x2E8BA2E8BA2E8BA3LL * (result >> 4)) >> 1)];
      v6 = (unsigned int *)(v37 - 176);
      v7 = (unsigned int *)(v37 - 176);
      if ( (unsigned __int8)sub_9E60E0(v39, (unsigned int *)v5) )
      {
        if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v5, v7) )
        {
          v33 = sub_9E60E0(v39, v6);
          v34 = _mm_loadu_si128(a1);
          if ( !v33 )
          {
            v36 = _mm_loadu_si128(a1 + 11);
            a1[11] = v34;
            *a1 = v36;
            sub_A1A770(m128i_i64, v44);
            goto LABEL_7;
          }
LABEL_67:
          *a1 = _mm_loadu_si128((const __m128i *)(v37 - 176));
          *(__m128i *)(v37 - 176) = v34;
          sub_A1A770(m128i_i64, (__int64)(v6 + 4));
          goto LABEL_7;
        }
        v8 = _mm_loadu_si128(a1);
        *a1 = _mm_loadu_si128(v5);
        *v5 = v8;
        sub_A1A770(m128i_i64, (__int64)v5[1].m128i_i64);
      }
      else
      {
        if ( !(unsigned __int8)sub_9E60E0(v39, v7) )
        {
          v35 = sub_9E60E0((unsigned int *)v5, v6);
          v34 = _mm_loadu_si128(a1);
          if ( !v35 )
          {
            *a1 = _mm_loadu_si128(v5);
            *v5 = v34;
            sub_A1A770(m128i_i64, (__int64)v5[1].m128i_i64);
            goto LABEL_7;
          }
          goto LABEL_67;
        }
        v32 = _mm_loadu_si128(a1);
        *a1 = _mm_loadu_si128(a1 + 11);
        a1[11] = v32;
        sub_A1A770(m128i_i64, v44);
      }
LABEL_7:
      v9 = v37;
      v10 = a1->m128i_i32[0];
      v11 = a1->m128i_i32[1] & 0x7FFFFFFF;
      v12 = v39;
      v13 = a1->m128i_i32[3] & 0x7FFFFFFF;
      v14 = a1->m128i_i32[2] & 0x7FFFFFFF;
      while ( 1 )
      {
        v41 = v10;
        v40 = v11;
        v42 = (__int64)v12;
        v15 = sub_9E60E0(v12, (unsigned int *)a1);
        v11 = v40;
        v10 = v41;
        if ( v15 )
          goto LABEL_8;
        do
        {
          do
            v9 -= 176LL;
          while ( *(_DWORD *)v9 > v41 );
          v16 = *(_DWORD *)(v9 + 8) & 0x7FFFFFFF;
          v17 = *(_DWORD *)(v9 + 4) & 0x7FFFFFFF;
        }
        while ( *(_DWORD *)v9 == v41
             && ((unsigned int)v17 > v40
              || (_DWORD)v17 == v40 && (v16 > v14 || (*(_DWORD *)(v9 + 12) & 0x7FFFFFFFu) > v13 && v16 == v14)) );
        if ( (unsigned __int64)v12 >= v9 )
          break;
        v18 = _mm_loadu_si128((const __m128i *)v12);
        *(__m128i *)v12 = _mm_loadu_si128((const __m128i *)v9);
        *(__m128i *)v9 = v18;
        sub_9E61E0((__int64)v45, (__int64)(v12 + 4));
        sub_9FD150(&v48, (__m128i *)(v12 + 22));
        sub_9FD150(&v51, (__m128i *)v12 + 8);
        v54 = *((_QWORD *)v12 + 21);
        sub_9E6D90((__int64)(v12 + 4), (_QWORD *)(v9 + 16));
        v19 = *(_BYTE *)(v9 + 48) & 1 | v12[12] & 0xFE;
        *((_BYTE *)v12 + 48) = v19;
        v20 = *(_BYTE *)(v9 + 48) & 2 | v19 & 0xFD;
        *((_BYTE *)v12 + 48) = v20;
        v21 = *(_BYTE *)(v9 + 48) & 4 | v20 & 0xFB;
        *((_BYTE *)v12 + 48) = v21;
        *((_BYTE *)v12 + 48) = *(_BYTE *)(v9 + 48) & 8 | v21 & 0xF7;
        sub_9E6D90((__int64)(v12 + 14), (_QWORD *)(v9 + 56));
        if ( *((_BYTE *)v12 + 120) )
        {
          if ( *(_BYTE *)(v9 + 120) )
          {
            sub_9E6D90((__int64)(v12 + 22), (_QWORD *)(v9 + 88));
          }
          else
          {
            v22 = *((unsigned int **)v12 + 11);
            *((_BYTE *)v12 + 120) = 0;
            if ( v22 != v12 + 26 )
              operator delete(v22);
          }
        }
        else if ( *(_BYTE *)(v9 + 120) )
        {
          *((_QWORD *)v12 + 11) = v12 + 26;
          v30 = *(_QWORD *)(v9 + 88);
          if ( v30 == v9 + 104 )
          {
            *(__m128i *)(v12 + 26) = _mm_loadu_si128((const __m128i *)(v9 + 104));
          }
          else
          {
            *((_QWORD *)v12 + 11) = v30;
            *((_QWORD *)v12 + 13) = *(_QWORD *)(v9 + 104);
          }
          *((_QWORD *)v12 + 12) = *(_QWORD *)(v9 + 96);
          *(_QWORD *)(v9 + 88) = v9 + 104;
          *(_QWORD *)(v9 + 96) = 0;
          *(_BYTE *)(v9 + 104) = 0;
          *((_BYTE *)v12 + 120) = 1;
        }
        v23 = *(_BYTE *)(v9 + 160);
        if ( *((_BYTE *)v12 + 160) )
        {
          if ( v23 )
          {
            sub_9E6D90((__int64)(v12 + 32), (_QWORD *)(v9 + 128));
          }
          else
          {
            v24 = *((unsigned int **)v12 + 16);
            *((_BYTE *)v12 + 160) = 0;
            if ( v24 != v12 + 36 )
              operator delete(v24);
          }
        }
        else if ( v23 )
        {
          *((_QWORD *)v12 + 16) = v12 + 36;
          v31 = *(_QWORD *)(v9 + 128);
          if ( v31 == v9 + 144 )
          {
            *((__m128i *)v12 + 9) = _mm_loadu_si128((const __m128i *)(v9 + 144));
          }
          else
          {
            *((_QWORD *)v12 + 16) = v31;
            *((_QWORD *)v12 + 18) = *(_QWORD *)(v9 + 144);
          }
          *((_QWORD *)v12 + 17) = *(_QWORD *)(v9 + 136);
          *(_QWORD *)(v9 + 128) = v9 + 144;
          *(_QWORD *)(v9 + 136) = 0;
          *(_BYTE *)(v9 + 144) = 0;
          *((_BYTE *)v12 + 160) = 1;
        }
        *((_QWORD *)v12 + 21) = *(_QWORD *)(v9 + 168);
        sub_9E6D90(v9 + 16, v45);
        *(_BYTE *)(v9 + 48) = v46 & 0xF | *(_BYTE *)(v9 + 48) & 0xF0;
        sub_9E6D90(v9 + 56, v47);
        if ( *(_BYTE *)(v9 + 120) )
        {
          if ( v50 )
          {
            sub_9E6D90(v9 + 88, &v48);
          }
          else
          {
            v25 = *(void **)(v9 + 88);
            *(_BYTE *)(v9 + 120) = 0;
            if ( v25 != (void *)(v9 + 104) )
              operator delete(v25);
          }
        }
        else if ( v50 )
        {
          *(_QWORD *)(v9 + 88) = v9 + 104;
          if ( (__m128i *)v48.m128i_i64[0] == &v49 )
          {
            *(__m128i *)(v9 + 104) = _mm_loadu_si128(&v49);
          }
          else
          {
            *(_QWORD *)(v9 + 88) = v48.m128i_i64[0];
            *(_QWORD *)(v9 + 104) = v49.m128i_i64[0];
          }
          v28 = v48.m128i_i64[1];
          v49.m128i_i8[0] = 0;
          v48.m128i_i64[1] = 0;
          *(_QWORD *)(v9 + 96) = v28;
          v48.m128i_i64[0] = (__int64)&v49;
          *(_BYTE *)(v9 + 120) = 1;
        }
        if ( *(_BYTE *)(v9 + 160) )
        {
          if ( v53 )
          {
            sub_9E6D90(v9 + 128, &v51);
          }
          else
          {
            v26 = *(void **)(v9 + 128);
            *(_BYTE *)(v9 + 160) = 0;
            if ( v26 != (void *)(v9 + 144) )
              operator delete(v26);
          }
        }
        else if ( v53 )
        {
          *(_QWORD *)(v9 + 128) = v9 + 144;
          if ( (__m128i *)v51.m128i_i64[0] == &v52 )
          {
            *(__m128i *)(v9 + 144) = _mm_load_si128(&v52);
          }
          else
          {
            *(_QWORD *)(v9 + 128) = v51.m128i_i64[0];
            *(_QWORD *)(v9 + 144) = v52.m128i_i64[0];
          }
          v27 = v51.m128i_i64[1];
          v52.m128i_i8[0] = 0;
          v51.m128i_i64[1] = 0;
          *(_QWORD *)(v9 + 136) = v27;
          v51.m128i_i64[0] = (__int64)&v52;
          *(_BYTE *)(v9 + 160) = 1;
        }
        *(_QWORD *)(v9 + 168) = v54;
        sub_9E5F30((__int64)v45);
        v10 = a1->m128i_i32[0];
        v13 = a1->m128i_i32[3] & 0x7FFFFFFF;
        v14 = a1->m128i_i32[2] & 0x7FFFFFFF;
        v11 = a1->m128i_i32[1] & 0x7FFFFFFF;
LABEL_8:
        v12 += 44;
      }
      sub_A1A7F0(v12, v37, v38, v17, v40);
      result = (char *)v12 - (char *)a1;
      if ( (char *)v12 - (char *)a1 <= 2816 )
        return result;
      v37 = (__int64)v12;
      if ( !v38 )
      {
LABEL_48:
        v29 = (__m128i *)v42;
        sub_A05060((__int64)a1, v42);
        do
        {
          v29 -= 11;
          sub_A05180(a1, (__int64)v29, v29);
          result = (char *)v29 - (char *)a1;
        }
        while ( (char *)v29 - (char *)a1 > 176 );
        return result;
      }
    }
  }
  return result;
}

