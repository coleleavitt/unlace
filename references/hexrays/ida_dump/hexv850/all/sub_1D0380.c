void __fastcall sub_1D0380(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebp
  int v15; // eax
  int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r13
  void *v22; // r12
  unsigned __int64 v23; // rdx
  __m128i si128; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  size_t v30; // rbp
  __int64 v31; // rax
  __m128i v32[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = sub_1D0330(*(_QWORD *)(a1 + 64));
  v4 = *(_QWORD *)(a1 + 368);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  if ( (*(_BYTE *)(a1 + 25) & 0x20) != 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 76) = 2;
    return;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    while ( 2 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      switch ( *(_DWORD *)v5 )
      {
        case '*':
        case '+':
        case ',':
        case '-':
        case '.':
        case '/':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
          v6 = sub_1CE8B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v5 + 24), v5 + 64, 2);
          v7 = *(_QWORD *)(a1 + 368);
          v8 = v6;
          v9 = *(_DWORD *)(a1 + 72) + 1;
          v10 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v10 + 1) )
          {
            v29 = qvector_reserve(a1 + 368, v7, v10 + 1, 4);
            *(_QWORD *)(a1 + 368) = v29;
            v7 = v29;
            v10 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v7 + 4 * v10) = v9;
          v11 = *(_QWORD *)(a1 + 376);
          v12 = *(_DWORD *)(a1 + 72);
          v13 = v11 + 1;
          *(_QWORD *)(a1 + 376) = v11 + 1;
          v14 = *(_DWORD *)(v8 + 72);
          if ( v12 + 1 == v14 )
          {
            *(_DWORD *)(a1 + 76) = 3;
          }
          else
          {
            v27 = *(_QWORD *)(a1 + 368);
            v28 = v11 + 2;
            if ( *(_QWORD *)(a1 + 384) < v28 )
            {
              v31 = qvector_reserve(a1 + 368, v27, v28, 4);
              v13 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 368) = v31;
              v27 = v31;
            }
            *(_DWORD *)(v27 + 4 * v13) = v14;
            *(_DWORD *)(a1 + 76) = 4;
            ++*(_QWORD *)(a1 + 376);
          }
          return;
        case '5':
          v21 = *(_QWORD *)(v5 + 56);
          v22 = nullptr;
          v23 = *(_QWORD *)(v21 + 32);
          si128 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
          if ( v23 )
          {
            v30 = 4 * v23;
            v32[0] = si128;
            v22 = (void *)qalloc_or_throw(4 * v23);
            memcpy(v22, *(const void **)(v21 + 24), v30);
            si128 = _mm_load_si128(v32);
          }
          v25 = *(_QWORD *)(a1 + 368);
          if ( v25 )
          {
            *(_QWORD *)(a1 + 376) = 0;
            v32[0] = si128;
            qfree(v25);
            si128 = _mm_load_si128(v32);
          }
          *(_QWORD *)(a1 + 368) = v22;
          *(_DWORD *)(a1 + 76) = 5;
          *(__m128i *)(a1 + 376) = si128;
          return;
        case '6':
          if ( (unsigned __int8)sub_FB580(a1) || (unsigned __int8)sub_66BA0(a1) )
            continue;
          goto LABEL_9;
        case '7':
          v19 = sub_1CE8B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v5 + 24), v5 + 32, 0);
          if ( v19 )
            goto LABEL_27;
          if ( *(_DWORD *)(a1 + 76) == 2 )
            return;
          if ( (unsigned __int8)sub_FB580(a1) )
            continue;
          v19 = sub_1CE8B0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v5 + 24), v5 + 32, 1);
          if ( !v19 )
            return;
LABEL_27:
          *(_DWORD *)(a1 + 76) = 3;
          v16 = *(_DWORD *)(v19 + 72);
          break;
        case '8':
        case '9':
          if ( (unsigned __int8)sub_117B90(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_9;
          goto LABEL_17;
        case ':':
          *(_DWORD *)v5 = 55;
          v20 = *(_DWORD *)(v2 + 72);
          *(_BYTE *)(v5 + 32) = 7;
          *(_DWORD *)(v5 + 40) = v20;
          *(_DWORD *)(v5 + 36) = -1;
          *(_DWORD *)(a1 + 76) = 3;
          v16 = *(_DWORD *)(v5 + 40);
          goto LABEL_18;
        case '>':
          *(_DWORD *)(a1 + 76) = sub_1CFFE0(a1, (__int64 *)(a1 + 368));
          return;
        default:
          if ( *(_QWORD *)(a1 + 8) )
            goto LABEL_17;
          return;
      }
      break;
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8) || *(_DWORD *)(a1 + 76) == 6 )
      return;
LABEL_17:
    v15 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 76) = 3;
    v16 = v15 + 1;
  }
LABEL_18:
  v17 = *(_QWORD *)(a1 + 376);
  v18 = *(_QWORD *)(a1 + 368);
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v17 + 1) )
  {
    v26 = qvector_reserve(a1 + 368, v18, v17 + 1, 4);
    *(_QWORD *)(a1 + 368) = v26;
    v18 = v26;
    v17 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v18 + 4 * v17) = v16;
  ++*(_QWORD *)(a1 + 376);
}
