__int64 __fastcall sub_25B3B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rbp
  _QWORD *v25; // r12
  __int64 v26; // rax
  size_t v27; // r13
  __m128i *v28; // rax
  const __m128i *v29; // roff
  void *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r15
  __int64 v35; // rbp
  __int64 v36; // rsi
  char v37; // al
  __int64 v38; // [rsp+8h] [rbp-40h]

  sub_2559F0(a1);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  copy_tinfo_t(a1 + 48, a2 + 48);
  v3 = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  switch ( v3 )
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
      v4 = j__qalloc_or_throw(64);
      sub_25B840(v4, *(_QWORD *)(a2 + 40));
      *(_QWORD *)(a1 + 40) = v4;
LABEL_3:
      v5 = j__qalloc_or_throw(64);
      v6 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v5 = -1;
      v7 = v5;
      *(_DWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 12) = -1;
      *(_QWORD *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      sub_25B3B0(v5, v6);
      *(_QWORD *)(a1 + 32) = v7;
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
      v8 = j__qalloc_or_throw(64);
      v9 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v8 = -1;
      v10 = v8;
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 12) = -1;
      *(_QWORD *)(v8 + 48) = 0;
      *(_DWORD *)(v8 + 56) = 0;
      sub_25B3B0(v8, v9);
      goto LABEL_5;
    case 51LL:
      v15 = j__qalloc_or_throw(64);
      sub_25B840(v15, *(_QWORD *)(a2 + 24));
      *(_QWORD *)(a1 + 24) = v15;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
      return a1;
    case 57LL:
      v16 = j__qalloc_or_throw(64);
      sub_25B840(v16, *(_QWORD *)(a2 + 24));
      *(_QWORD *)(a1 + 24) = v16;
      v17 = qalloc_or_throw(40);
      v18 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)v17 = 0;
      v19 = v17;
      *(_OWORD *)(v17 + 8) = 0;
      v20 = *(_QWORD *)(v18 + 8);
      v38 = v20;
      if ( v20 )
      {
        v31 = *(_QWORD *)(v18 + 8);
        v32 = qalloc_or_throw(72 * v20);
        *(_QWORD *)(v19 + 16) = v31;
        v33 = v32;
        v34 = 0;
        for ( *(_QWORD *)v19 = v32; ; v33 = *(_QWORD *)v19 )
        {
          v35 = 72 * v34 + v33;
          v36 = *(_QWORD *)v18 + 72 * v34;
          *(_QWORD *)v35 = -1;
          *(_DWORD *)(v35 + 8) = 0;
          *(_QWORD *)(v35 + 12) = -1;
          *(_QWORD *)(v35 + 48) = 0;
          *(_DWORD *)(v35 + 56) = 0;
          sub_25B3B0(v35, v36);
          v37 = *(_BYTE *)(v36 + 60);
          *(_QWORD *)(v35 + 64) = 0;
          *(_BYTE *)(v35 + 60) = v37;
          copy_tinfo_t(v35 + 64, v36 + 64);
          if ( v38 == ++v34 )
            break;
        }
        *(_QWORD *)(v19 + 8) = v38;
      }
      *(_QWORD *)(v19 + 24) = 0;
      copy_tinfo_t(v19 + 24, v18 + 24);
      *(_DWORD *)(v19 + 32) = *(_DWORD *)(v18 + 32);
      *(_QWORD *)(a1 + 32) = v19;
      return a1;
    case 59LL:
      goto LABEL_9;
    case 60LL:
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
LABEL_9:
      v12 = j__qalloc_or_throw(64);
      v13 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v12 = -1;
      v14 = v12;
      *(_DWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 12) = -1;
      *(_QWORD *)(v12 + 48) = 0;
      *(_DWORD *)(v12 + 56) = 0;
      sub_25B3B0(v12, v13);
      *(_QWORD *)(a1 + 24) = v14;
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
      break;
    case 61LL:
      v23 = (_QWORD *)j__qalloc_or_throw(48);
      v24 = *(_QWORD *)(a2 + 24);
      v25 = v23;
      *v23 = *(_QWORD *)v24;
      v26 = *(_QWORD *)(v24 + 8);
      v25[2] = 0;
      v25[1] = v26;
      *(_OWORD *)(v25 + 3) = 0;
      v27 = *(_QWORD *)(v24 + 24);
      if ( v27 )
      {
        v30 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 24));
        v25[2] = v30;
        v25[4] = v27;
        memcpy(v30, *(const void **)(v24 + 16), v27);
        v25[3] = v27;
      }
      v25[5] = *(_QWORD *)(v24 + 40);
      *(_QWORD *)(a1 + 24) = v25;
      break;
    case 62LL:
      v28 = (__m128i *)j__qalloc_or_throw(20);
      v29 = *(const __m128i **)(a2 + 24);
      *v28 = _mm_loadu_si128(v29);
      v28[1].m128i_i32[0] = v29[1].m128i_i32[0];
      *(_QWORD *)(a1 + 24) = v28;
      break;
    case 63LL:
    case 68LL:
      *(_QWORD *)(a1 + 24) = qstrdup(*(_QWORD *)(a2 + 24));
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
      v21 = j__qalloc_or_throw(32);
      v22 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v21 = -1;
      v10 = v21;
      *(_DWORD *)(v21 + 8) = 70;
      *(_QWORD *)(v21 + 12) = -1;
      sub_25AE30(v21, v22);
LABEL_5:
      *(_QWORD *)(a1 + 24) = v10;
      break;
    default:
      if ( !under_debugger )
        sub_3835A0(50062);
      BUG();
  }
  return a1;
}
