__int64 __fastcall sub_18BE2C0(_QWORD *a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __m128i *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // [rsp+0h] [rbp-68h]
  __int64 v20; // [rsp+0h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  int v23; // [rsp+18h] [rbp-50h]
  int v24; // [rsp+1Ch] [rbp-4Ch]
  __int64 v25; // [rsp+20h] [rbp-48h]
  char v26; // [rsp+28h] [rbp-40h]

  result = a2;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    v8 = *(unsigned __int8 *)(v7 + 16);
    switch ( *(_BYTE *)(v7 + 16) )
    {
      case 0:
      case 2:
      case 3:
      case 5:
      case 7:
      case 0xB:
      case 0x21:
      case 0x2A:
        goto LABEL_9;
      case 1:
        v22 = *(_QWORD *)(v7 + 40);
        sub_F5E9A0(&v22);
        result = *(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 4:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x1D:
      case 0x20:
      case 0x26:
      case 0x2D:
      case 0x32:
      case 0x37:
        return result;
      case 6:
        v19 = *(_QWORD *)(v7 + 40);
        if ( v19 )
        {
          a2 = v7;
          if ( !(unsigned __int8)sub_15EEA40(a3, v7) && (unsigned __int8)((*(_BYTE *)(a3 + 8) & 7) - 2) <= 1u )
          {
            v21 = sub_A63CE0(a1);
            v11 = sub_C00A40(v19, v7, v19, v9, v10);
            v22 = v7;
            v23 = v11;
            v25 = v21;
            v12 = *(unsigned int *)(a3 + 1332);
            v24 = 0;
            v26 = v26 & 0x80 | 3;
            v13 = *(unsigned int *)(a3 + 1328);
            v14 = v13 + 1;
            if ( v13 + 1 > v12 )
            {
              v18 = *(_QWORD *)(a3 + 1320);
              a2 = a3 + 1336;
              if ( v18 > (unsigned __int64)&v22 || (unsigned __int64)&v22 >= v18 + 32 * v13 )
              {
                sub_2237220(a3 + 1320, a2, v14, 32);
                v15 = *(_QWORD *)(a3 + 1320);
                v13 = *(unsigned int *)(a3 + 1328);
                a4 = (const __m128i *)&v22;
              }
              else
              {
                v20 = *(_QWORD *)(a3 + 1320);
                sub_2237220(a3 + 1320, a2, v14, 32);
                a5 = v20;
                v15 = *(_QWORD *)(a3 + 1320);
                v13 = *(unsigned int *)(a3 + 1328);
                a4 = (const __m128i *)((char *)&v22 + v15 - v20);
              }
            }
            else
            {
              v15 = *(_QWORD *)(a3 + 1320);
              a4 = (const __m128i *)&v22;
            }
            v16 = (__m128i *)(v15 + 32 * v13);
            *v16 = _mm_loadu_si128(a4);
            v16[1] = _mm_loadu_si128(a4 + 1);
            ++*(_DWORD *)(a3 + 1328);
          }
        }
LABEL_9:
        result = *(_QWORD *)(v7 + 32);
        goto LABEL_10;
      case 8:
      case 9:
      case 0xC:
      case 0x1B:
      case 0x1E:
      case 0x28:
      case 0x2E:
      case 0x34:
      case 0x36:
        a2 = (__int64)a1;
        result = sub_F6B250(result, (__int64)a1, v8, (__int64)a4, a5);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 0xF:
        result = sub_F5DDD0(v7);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 0x10:
      case 0x11:
      case 0x19:
      case 0x1A:
        result = *(_QWORD *)(v7 + 24);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 0x18:
        result = *(_QWORD *)(v7 + 40);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 0x27:
        if ( (unsigned int)sub_F5E0F0(v7) )
        {
          result = *(_QWORD *)(v7 + 8LL * ((unsigned int)sub_F5E0F0(v7) - 1) + 64);
          v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          result = v7 & 0xFFFFFFFFFFFFFFF0LL;
          v17 = v7 & 0xFFFFFFFFFFFFFFF0LL;
        }
        goto LABEL_11;
      case 0x2B:
      case 0x2C:
        while ( 1 )
        {
          result = *(_QWORD *)(v7 + 32);
          if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
            break;
          v7 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 > 1 )
            v7 = sub_F63050(v7, a2, v8, a4);
        }
        goto LABEL_10;
      case 0x33:
        result = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 0x35:
        result = sub_F5DAC0(v7);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      case 0x38:
        result = sub_F5DBF0(v7);
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_11;
      default:
LABEL_10:
        v17 = result & 0xFFFFFFFFFFFFFFF0LL;
LABEL_11:
        if ( v17 )
        {
          v7 = *(_QWORD *)v17;
          if ( (*(_BYTE *)(*(_QWORD *)v17 + 17LL) & 8) != 0 )
            continue;
        }
        return result;
    }
  }
}
