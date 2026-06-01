void *__fastcall sub_F6C7F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  const __m128i *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  const __m128i *v8; // rdx
  void *result; // rax
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // edx
  __int8 *v18; // rcx
  __int8 *v19; // rsi
  __int64 v20; // rax
  char v21; // al
  int v22; // eax
  size_t v23; // rdx

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)a1;
  if ( v6 != 8 * ((v6 != 0) + ((v6 - (unsigned __int64)(v6 != 0)) >> 3))
    || a3 != (const __m128i *)(8 * ((a3 != nullptr) + (((unsigned __int64)a3 - (a3 != nullptr)) >> 3))) )
  {
    while ( 1 )
    {
      if ( (v7 & 0xF) == 0 )
      {
        switch ( *(_BYTE *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
        {
          case 0:
          case 1:
          case 0xC:
          case 0x3B:
            break;
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 0x10:
          case 0x1B:
          case 0x21:
            goto LABEL_12;
          case 7:
          case 0x33:
            *(_QWORD *)v6 = v5->m128i_i64[0];
            *(_DWORD *)(v6 + 8) = v5->m128i_i32[2];
            break;
          case 8:
          case 0xF:
          case 0x24:
          case 0x28:
            *(_QWORD *)v6 = v5->m128i_i64[0];
            break;
          case 9:
            *(_BYTE *)v6 = v5->m128i_i8[0];
            break;
          case 0xA:
          case 0xB:
          case 0xE:
          case 0x11:
          case 0x13:
          case 0x15:
          case 0x17:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x22:
          case 0x26:
          case 0x27:
          case 0x29:
          case 0x2A:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x32:
          case 0x35:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
            *(_DWORD *)v6 = v5->m128i_i32[0];
            break;
          case 0xD:
            *(_QWORD *)v6 = v5->m128i_i64[0];
            v12 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
            if ( (unsigned int)(v12 - 443) <= 4 || (unsigned int)(v12 - 451) <= 0x24 || v12 == 438 || v12 == 449 )
              v13 = 4;
            else
              v13 = 0;
            v14 = v13;
            if ( v13 )
            {
              v15 = 0;
              do
              {
                v16 = v15++;
                *(_BYTE *)(v6 + 8 + v16) = v5->m128i_i8[v16 + 8];
              }
              while ( v15 < v14 );
            }
            break;
          case 0x12:
          case 0x14:
          case 0x34:
          case 0x36:
            *(__m128i *)v6 = _mm_loadu_si128(v5);
            *(_QWORD *)(v6 + 16) = v5[1].m128i_i64[0];
            break;
          case 0x16:
            if ( 8 * *(_DWORD *)(v7 + 20) != -32 )
            {
              *(__m128i *)v6 = _mm_loadu_si128(v5);
              *(__m128i *)(v6 + 16) = _mm_loadu_si128(v5 + 1);
              memcpy((void *)(v6 + 32), &v5[2], (unsigned int)(8 * *(_DWORD *)(v7 + 20)));
            }
            break;
          case 0x18:
            if ( (unsigned __int8)(*(_WORD *)(v7 + 18) >> 3) != 6 || *(_QWORD *)(v7 + 32) )
LABEL_12:
              *(__m128i *)v6 = _mm_loadu_si128(v5);
            break;
          case 0x19:
            *(__m128i *)v6 = _mm_loadu_si128(v5);
            v21 = *(_BYTE *)(v7 + 16);
            if ( v21 != 26 )
              goto LABEL_46;
            goto LABEL_39;
          case 0x1A:
            *(__m128i *)v6 = _mm_loadu_si128(v5);
            v21 = *(_BYTE *)(v7 + 16);
            if ( v21 == 26 )
            {
LABEL_39:
              v22 = 8 * ((*(_BYTE *)(v7 + 19) & 0x1E) != 0);
LABEL_40:
              v23 = v22 + 8 * (unsigned int)*(unsigned __int16 *)(v7 + 22);
              goto LABEL_41;
            }
LABEL_46:
            v23 = 0;
            if ( v21 != 25 )
            {
              v22 = 0;
              goto LABEL_40;
            }
LABEL_41:
            memcpy((void *)(v6 + 16), &v5[1], v23);
            break;
          case 0x1F:
          case 0x20:
            *(__m128i *)v6 = _mm_loadu_si128(v5);
            *(__m128i *)(v6 + 16) = _mm_loadu_si128(v5 + 1);
            break;
          case 0x23:
            v18 = (__int8 *)(v6 + 24);
            v19 = &v5[1].m128i_i8[8];
            *(__m128i *)v6 = _mm_loadu_si128(v5);
            *(_DWORD *)(v6 + 16) = v5[1].m128i_i32[0];
            v20 = 4 * ((*(_BYTE *)(v7 + 19) >> 2) + 2 * ((*(_WORD *)(v7 + 18) >> 3) & 0x7Fu));
            if ( (unsigned int)v20 >= 8 )
            {
              *(_QWORD *)(v6 + 24) = v5[1].m128i_i64[1];
              *(_QWORD *)&v18[(unsigned int)v20 - 8] = *(_QWORD *)&v19[(unsigned int)v20 - 8];
              qmemcpy(
                (void *)((v6 + 32) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v19 - &v18[-((v6 + 32) & 0xFFFFFFFFFFFFFFF8LL)]),
                8LL * (((unsigned int)v20 + (_DWORD)v18 - (((_DWORD)v6 + 32) & 0xFFFFFFF8)) >> 3));
            }
            else
            {
              if ( ((4 * ((*(_BYTE *)(v7 + 19) >> 2) + 2 * ((*(_WORD *)(v7 + 18) >> 3) & 0x7F))) & 4) != 0 )
                goto LABEL_51;
              if ( (_DWORD)v20 )
                *v18 = *v19;
            }
            break;
          case 0x25:
            v17 = 0;
            *(_DWORD *)v6 = v5->m128i_i32[0];
            if ( (*(_BYTE *)(v7 + 32) & 0x3F) != 0 )
              v17 = 4 * (*(_BYTE *)(v7 + 32) & 0x3F) + 8;
            v18 = (__int8 *)(v6 + 4);
            v19 = &v5->m128i_i8[4];
            v20 = v17;
            if ( v17 >= 8 )
            {
              *(_QWORD *)(v6 + 4) = *(__int64 *)((char *)v5->m128i_i64 + 4);
              *(_QWORD *)&v18[v17 - 8] = *(_QWORD *)&v19[v17 - 8];
              qmemcpy(
                (void *)((v6 + 12) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v19 - &v18[-((v6 + 12) & 0xFFFFFFFFFFFFFFF8LL)]),
                8LL * ((v17 + (_DWORD)v18 - (((_DWORD)v6 + 12) & 0xFFFFFFF8)) >> 3));
            }
            else if ( (v17 & 4) != 0 )
            {
LABEL_51:
              *(_DWORD *)v18 = *(_DWORD *)v19;
              *(_DWORD *)&v18[v20 - 4] = *(_DWORD *)&v19[v20 - 4];
            }
            else if ( v17 )
            {
              *v18 = *v19;
              if ( (v17 & 2) != 0 )
                *(_WORD *)&v18[v17 - 2] = *(_WORD *)&v19[v17 - 2];
            }
            break;
          case 0x31:
            if ( 8 * *(_DWORD *)(v7 + 20) != -16 )
            {
              *(__m128i *)v6 = _mm_loadu_si128(v5);
              memcpy((void *)(v6 + 16), &v5[1], (unsigned int)(8 * *(_DWORD *)(v7 + 20)));
            }
            break;
        }
      }
      a2 = sub_F6B390(a2);
      v5 = v8;
      result = (void *)sub_F6B390(v7);
      v7 = (__int64)result;
      v6 = v10;
      if ( !result )
        return result;
    }
  }
  v11 = sub_F6C560(*(_QWORD *)a1);
  return memcpy(*(void **)(a1 + 8), a3, v11);
}
