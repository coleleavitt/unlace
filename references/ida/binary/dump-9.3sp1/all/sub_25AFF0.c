__int64 __fastcall sub_25AFF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  _QWORD *v36; // r12
  __int64 v37; // rax
  size_t v38; // r13
  __m128i *v39; // rax
  const __m128i *v40; // roff
  void *v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // r15
  __int64 v46; // rbp
  __int64 v47; // rsi
  char v48; // al
  __int64 v49; // [rsp+8h] [rbp-40h]

  sub_255630(a1);
  v3 = a2 + 48;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  copy_tinfo_t();
  v5 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v5;
  v6 = *(_QWORD *)a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  switch ( v5 )
  {
    case 0LL:
    case 69LL:
      return a1;
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 15LL:
    case 17LL:
    case 18LL:
    case 19LL:
    case 20LL:
    case 21LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
    case 29LL:
    case 30LL:
    case 31LL:
    case 32LL:
    case 33LL:
    case 34LL:
    case 35LL:
    case 36LL:
    case 37LL:
    case 38LL:
    case 39LL:
    case 40LL:
    case 41LL:
    case 42LL:
    case 43LL:
    case 44LL:
    case 45LL:
    case 58LL:
      goto LABEL_3;
    case 16LL:
      v7 = j__qalloc_or_throw(64, v3, v6, v4);
      v3 = *(_QWORD *)(a2 + 40);
      v8 = v7;
      sub_25B480(v7, v3);
      *(_QWORD *)(a1 + 40) = v8;
LABEL_3:
      v9 = j__qalloc_or_throw(64, v3, v6, v4);
      v3 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v9 = -1;
      v10 = v9;
      *(_DWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 12) = -1;
      *(_QWORD *)(v9 + 48) = 0;
      *(_DWORD *)(v9 + 56) = 0;
      sub_25AFF0(v9, v3);
      *(_QWORD *)(a1 + 32) = v10;
      goto LABEL_4;
    case 46LL:
    case 47LL:
    case 48LL:
    case 49LL:
    case 50LL:
    case 52LL:
    case 53LL:
    case 54LL:
    case 55LL:
    case 56LL:
    case 67LL:
LABEL_4:
      v11 = j__qalloc_or_throw(64, v3, v6, v4);
      v12 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v11 = -1;
      v13 = v11;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 12) = -1;
      *(_QWORD *)(v11 + 48) = 0;
      *(_DWORD *)(v11 + 56) = 0;
      sub_25AFF0(v11, v12);
      goto LABEL_5;
    case 51LL:
      v18 = j__qalloc_or_throw(64, v3, v6, v4);
      sub_25B480(v18, *(_QWORD *)(a2 + 24));
      *(_QWORD *)(a1 + 24) = v18;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      return a1;
    case 57LL:
      v19 = j__qalloc_or_throw(64, v3, v6, v4);
      v20 = *(_QWORD *)(a2 + 24);
      v21 = v19;
      sub_25B480(v19, v20);
      *(_QWORD *)(a1 + 24) = v21;
      v24 = qalloc_or_throw(40, v20, v22, v23);
      v27 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v24 = 0;
      v28 = v24;
      *(_OWORD *)(v24 + 8) = 0;
      v29 = *(_QWORD *)(v27 + 8);
      v49 = v29;
      if ( v29 )
      {
        v42 = *(_QWORD *)(v27 + 8);
        v43 = qalloc_or_throw(72 * v29, v20, v25, v26);
        *(_QWORD *)(v28 + 16) = v42;
        v44 = v43;
        v45 = 0;
        for ( *(_QWORD *)v28 = v43; ; v44 = *(_QWORD *)v28 )
        {
          v46 = 72 * v45 + v44;
          v47 = *(_QWORD *)v27 + 72 * v45;
          *(_QWORD *)v46 = -1;
          *(_DWORD *)(v46 + 8) = 0;
          *(_QWORD *)(v46 + 12) = -1;
          *(_QWORD *)(v46 + 48) = 0;
          *(_DWORD *)(v46 + 56) = 0;
          sub_25AFF0(v46, v47);
          v48 = *(_BYTE *)(v47 + 60);
          *(_QWORD *)(v46 + 64) = 0;
          *(_BYTE *)(v46 + 60) = v48;
          copy_tinfo_t();
          if ( v49 == ++v45 )
            break;
        }
        *(_QWORD *)(v28 + 8) = v49;
      }
      *(_QWORD *)(v28 + 24) = 0;
      copy_tinfo_t();
      *(_DWORD *)(v28 + 32) = *(_DWORD *)(v27 + 32);
      *(_QWORD *)(a1 + 32) = v28;
      return a1;
    case 59LL:
      goto LABEL_9;
    case 60LL:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
LABEL_9:
      v15 = j__qalloc_or_throw(64, v3, v6, v4);
      v16 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v15 = -1;
      v17 = v15;
      *(_DWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 12) = -1;
      *(_QWORD *)(v15 + 48) = 0;
      *(_DWORD *)(v15 + 56) = 0;
      sub_25AFF0(v15, v16);
      *(_QWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      break;
    case 61LL:
      v32 = (_QWORD *)j__qalloc_or_throw(48, v3, v6, v4);
      v35 = *(_QWORD *)(a2 + 24);
      v36 = v32;
      *v32 = *(_QWORD *)v35;
      v37 = *(_QWORD *)(v35 + 8);
      v36[2] = 0;
      v36[1] = v37;
      *(_OWORD *)(v36 + 3) = 0;
      v38 = *(_QWORD *)(v35 + 24);
      if ( v38 )
      {
        v41 = (void *)qalloc_or_throw(*(_QWORD *)(v35 + 24), v3, v33, v34);
        v36[2] = v41;
        v36[4] = v38;
        memcpy(v41, *(const void **)(v35 + 16), v38);
        v36[3] = v38;
      }
      v36[5] = *(_QWORD *)(v35 + 40);
      *(_QWORD *)(a1 + 24) = v36;
      break;
    case 62LL:
      v39 = (__m128i *)j__qalloc_or_throw(20, v3, v6, v4);
      v40 = *(const __m128i **)(a2 + 24);
      *v39 = _mm_loadu_si128(v40);
      v39[1].m128i_i32[0] = v40[1].m128i_i32[0];
      *(_QWORD *)(a1 + 24) = v39;
      break;
    case 63LL:
    case 68LL:
      *(_QWORD *)(a1 + 24) = qstrdup();
      break;
    case 64LL:
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      break;
    case 65LL:
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      break;
    case 66LL:
      v30 = j__qalloc_or_throw(32, v3, v6, v4);
      v31 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v30 = -1;
      v13 = v30;
      *(_DWORD *)(v30 + 8) = 70;
      *(_QWORD *)(v30 + 12) = -1;
      sub_25AA70(v30, v31);
LABEL_5:
      *(_QWORD *)(a1 + 24) = v13;
      break;
    default:
      if ( !under_debugger )
        sub_383060(50062);
      BUG();
  }
  return a1;
}
