void __fastcall sub_1D51C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // ebp
  int v17; // eax
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r13
  void *v24; // r12
  __int64 v25; // rdx
  __m128i si128; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  size_t v32; // rbp
  __int64 v33; // rax
  __m128i v34[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a2;
  if ( !a2 )
    v4 = sub_1D5170(*(_QWORD *)(a1 + 64), 0, a3, a4);
  v6 = *(_QWORD *)(a1 + 368);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v6);
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
      v7 = *(_QWORD *)(a1 + 56);
      switch ( *(_DWORD *)v7 )
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
          v8 = sub_1D36F0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v7 + 24), v7 + 64, 2);
          v9 = *(_QWORD *)(a1 + 368);
          v10 = v8;
          v11 = *(_DWORD *)(a1 + 72) + 1;
          v12 = *(_QWORD *)(a1 + 376);
          if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v12 + 1) )
          {
            v31 = qvector_reserve(a1 + 368, v9, v12 + 1, 4);
            *(_QWORD *)(a1 + 368) = v31;
            v9 = v31;
            v12 = *(_QWORD *)(a1 + 376);
          }
          *(_DWORD *)(v9 + 4 * v12) = v11;
          v13 = *(_QWORD *)(a1 + 376);
          v14 = *(_DWORD *)(a1 + 72);
          v15 = v13 + 1;
          *(_QWORD *)(a1 + 376) = v13 + 1;
          v16 = *(_DWORD *)(v10 + 72);
          if ( v14 + 1 == v16 )
          {
            *(_DWORD *)(a1 + 76) = 3;
          }
          else
          {
            v29 = *(_QWORD *)(a1 + 368);
            v30 = v13 + 2;
            if ( *(_QWORD *)(a1 + 384) < v30 )
            {
              v33 = qvector_reserve(a1 + 368, v29, v30, 4);
              v15 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 368) = v33;
              v29 = v33;
            }
            *(_DWORD *)(v29 + 4 * v15) = v16;
            *(_DWORD *)(a1 + 76) = 4;
            ++*(_QWORD *)(a1 + 376);
          }
          return;
        case '5':
          v23 = *(_QWORD *)(v7 + 56);
          v24 = nullptr;
          v25 = *(_QWORD *)(v23 + 32);
          si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
          if ( v25 )
          {
            v32 = 4 * v25;
            v34[0] = si128;
            v24 = (void *)qalloc_or_throw(4 * v25, a2, v25, a4);
            memcpy(v24, *(const void **)(v23 + 24), v32);
            si128 = _mm_load_si128(v34);
          }
          v27 = *(_QWORD *)(a1 + 368);
          if ( v27 )
          {
            *(_QWORD *)(a1 + 376) = 0;
            v34[0] = si128;
            qfree(v27);
            si128 = _mm_load_si128(v34);
          }
          *(_QWORD *)(a1 + 368) = v24;
          *(_DWORD *)(a1 + 76) = 5;
          *(__m128i *)(a1 + 376) = si128;
          return;
        case '6':
          if ( (unsigned __int8)sub_100140(a1) || (unsigned __int8)sub_6B620(a1) )
            continue;
          goto LABEL_9;
        case '7':
          a2 = *(_QWORD *)(v7 + 24);
          v21 = sub_1D36F0(*(_QWORD *)(a1 + 64), a2, v7 + 32, 0);
          if ( v21 )
            goto LABEL_27;
          if ( *(_DWORD *)(a1 + 76) == 2 )
            return;
          if ( (unsigned __int8)sub_100140(a1) )
            continue;
          v21 = sub_1D36F0(*(_QWORD *)(a1 + 64), *(_QWORD *)(v7 + 24), v7 + 32, 1);
          if ( !v21 )
            return;
LABEL_27:
          *(_DWORD *)(a1 + 76) = 3;
          v18 = *(_DWORD *)(v21 + 72);
          break;
        case '8':
        case '9':
          if ( (unsigned __int8)sub_11C750(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0) )
            goto LABEL_9;
          goto LABEL_17;
        case ':':
          *(_DWORD *)v7 = 55;
          v22 = *(_DWORD *)(v4 + 72);
          *(_BYTE *)(v7 + 32) = 7;
          *(_DWORD *)(v7 + 40) = v22;
          *(_DWORD *)(v7 + 36) = -1;
          *(_DWORD *)(a1 + 76) = 3;
          v18 = *(_DWORD *)(v7 + 40);
          goto LABEL_18;
        case '>':
          *(_DWORD *)(a1 + 76) = sub_1D4E20(a1, (__int64 *)(a1 + 368));
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
    v17 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 76) = 3;
    v18 = v17 + 1;
  }
LABEL_18:
  v19 = *(_QWORD *)(a1 + 376);
  v20 = *(_QWORD *)(a1 + 368);
  if ( *(_QWORD *)(a1 + 384) < (unsigned __int64)(v19 + 1) )
  {
    v28 = qvector_reserve(a1 + 368, v20, v19 + 1, 4);
    *(_QWORD *)(a1 + 368) = v28;
    v20 = v28;
    v19 = *(_QWORD *)(a1 + 376);
  }
  *(_DWORD *)(v20 + 4 * v19) = v18;
  ++*(_QWORD *)(a1 + 376);
}
