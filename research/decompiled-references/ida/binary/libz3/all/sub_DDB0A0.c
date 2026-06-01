__int64 __fastcall sub_DDB0A0(__int64 a1)
{
  _QWORD *v1; // rbx
  char **v2; // rbx
  char **exception; // rbx
  char *v4; // rax
  unsigned int v5; // edx
  bool v6; // zf
  __int64 v7; // rax
  char v9; // al
  __int64 v10; // rax
  __m128i si128; // xmm1
  char v12; // dl
  unsigned int v13; // eax
  char v14; // dl
  char v15; // cl
  __int64 v17; // rdi
  char v18; // al
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rax
  _BYTE *v23; // rdi
  __int64 v24; // rax
  char v25; // cl
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  _DWORD *v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-70h]
  __int64 (__fastcall **v33)(std::exception *); // [rsp+18h] [rbp-58h] BYREF
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  __m128i v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+40h] [rbp-30h]

  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_BYTE *)(a1 + 17) == 0;
  v7 = *(unsigned __int8 *)(a1 + 16);
  *(_DWORD *)(a1 + 24) = v5;
  if ( !v6 )
    return 9;
  while ( 2 )
  {
    v9 = *(_BYTE *)(a1 + v7 + 76);
    if ( v9 > 97 )
    {
      if ( v9 != 124 )
      {
LABEL_5:
        v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 20)), _mm_cvtsi32_si128(v5)).m128i_u64[0];
        v10 = operator new(0x15u);
        si128 = _mm_load_si128((const __m128i *)&xmmword_18B69F0);
        strcpy((char *)(v10 + 16), "cter");
        *(__m128i *)v10 = si128;
        v34 = v10;
        v33 = off_1C64218;
        v36 = v32;
        v35 = _mm_unpacklo_epi64((__m128i)0x14uLL, (__m128i)0x14uLL);
        sub_DD7C60(a1);
        exception = (char **)__cxa_allocate_exception(0x30u);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v34);
        v4 = (char *)v36;
        *exception = (char *)off_1C64218;
        exception[5] = v4;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      sub_DD9E90(a1);
      return 4;
    }
    if ( v9 <= 9 )
      goto LABEL_5;
    switch ( v9 )
    {
      case 10:
        sub_DD7C60(a1);
        ++*(_DWORD *)(a1 + 20);
        v15 = *(_BYTE *)(a1 + 17);
        v5 = 0;
        *(_DWORD *)(a1 + 12) = 0;
        v7 = *(unsigned __int8 *)(a1 + 16);
        goto LABEL_16;
      case 32:
        goto LABEL_14;
      case 34:
        sub_DD9B20(a1);
        return 5;
      case 35:
        if ( !(unsigned int)sub_DD8CA0(a1) )
          goto LABEL_15;
        return 7;
      case 40:
        sub_DD7C60(a1);
        return 1;
      case 41:
        sub_DD7C60(a1);
        return 2;
      case 45:
        v17 = a1;
        if ( *(_BYTE *)(*(_QWORD *)a1 + 193LL) )
          return sub_DDAC60(v17);
        return sub_DDAE50(a1);
      case 48:
        return sub_DD7E10(a1);
      case 58:
        sub_DDAC60(a1);
        return 3;
      case 59:
        sub_DD7C60(a1);
        v12 = *(_BYTE *)(a1 + 16);
        if ( !*(_BYTE *)(a1 + 17) )
        {
          while ( v12 != 10 )
          {
            while ( 1 )
            {
              if ( *(_BYTE *)(a1 + 1384) )
              {
                v21 = *(_QWORD *)(a1 + 1392);
                if ( v21 )
                {
                  v22 = *(unsigned int *)(v21 - 4);
                  if ( (_DWORD)v22 == *(_DWORD *)(v21 - 8) )
                  {
                    v26 = (unsigned int)(3 * v22 + 1) >> 1;
                    v27 = v26 + 8;
                    if ( (int)v22 + 8 >= (unsigned int)v27 || (unsigned int)v22 >= v26 )
                    {
                      v2 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)&v33, "Overflow encountered when expanding vector");
                      *v2 = (char *)off_1C63128;
                      sub_2333C0(v2 + 1, &v33);
                      sub_233E40((__int64)&v33);
                      __cxa_throw(
                        v2,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v28 = (unsigned int *)sub_186B300((void *)(v21 - 8), v27);
                    v29 = v28 + 2;
                    *v28 = v26;
                    v30 = v28[1];
                    *(_QWORD *)(a1 + 1392) = v29;
                    v23 = (char *)v29 + v30;
                  }
                  else
                  {
                    v23 = (_BYTE *)(v22 + v21);
                  }
                }
                else
                {
                  v31 = (_QWORD *)sub_186B270(0xAu);
                  *v31 = 2;
                  v23 = v31 + 1;
                  *(_QWORD *)(a1 + 1392) = v31 + 1;
                }
                *v23 = *(_BYTE *)(a1 + 16);
                ++*(_DWORD *)(*(_QWORD *)(a1 + 1392) - 4LL);
              }
              if ( *(_BYTE *)(a1 + 17) )
              {
                v1 = __cxa_allocate_exception(0x30u);
                sub_305660(v1, "unexpected end of file");
                __cxa_throw(v1, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
              }
              if ( *(_BYTE *)(a1 + 8) )
              {
                v18 = std::istream::get(*(std::istream **)(a1 + 1376));
                *(_BYTE *)(a1 + 16) = v18;
                v12 = v18;
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1376) + *(_QWORD *)(**(_QWORD **)(a1 + 1376) - 24LL) + 32LL) & 2) == 0 )
                  goto LABEL_39;
LABEL_31:
                v19 = *(_DWORD *)(a1 + 12);
                *(_BYTE *)(a1 + 17) = 1;
                v20 = v19 + 1;
                *(_DWORD *)(a1 + 12) = v20;
                goto LABEL_32;
              }
              v13 = *(_DWORD *)(a1 + 1356);
              if ( v13 >= *(_DWORD *)(a1 + 1360) )
                break;
              v14 = *(_BYTE *)(a1 + v13 + 332);
              ++*(_DWORD *)(a1 + 12);
              *(_DWORD *)(a1 + 1356) = v13 + 1;
              *(_BYTE *)(a1 + 16) = v14;
              if ( v14 == 10 )
                goto LABEL_13;
            }
            std::istream::read(*(std::istream **)(a1 + 1376), (char *)(a1 + 332), 1024);
            v24 = *(_QWORD *)(*(_QWORD *)(a1 + 1376) + 8LL);
            *(_DWORD *)(a1 + 1356) = 0;
            *(_DWORD *)(a1 + 1360) = v24;
            if ( !(_DWORD)v24 )
              goto LABEL_31;
            v12 = *(_BYTE *)(a1 + 332);
            *(_DWORD *)(a1 + 1356) = 1;
            *(_BYTE *)(a1 + 16) = v12;
LABEL_39:
            v25 = *(_BYTE *)(a1 + 17);
            v20 = *(_DWORD *)(a1 + 12) + 1;
            *(_DWORD *)(a1 + 12) = v20;
            if ( v25 )
            {
LABEL_32:
              *(_DWORD *)(a1 + 24) = v20;
              return 9;
            }
          }
LABEL_13:
          ++*(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 12) = 0;
LABEL_14:
          sub_DD7C60(a1);
LABEL_15:
          v5 = *(_DWORD *)(a1 + 12);
          v15 = *(_BYTE *)(a1 + 17);
          v7 = *(unsigned __int8 *)(a1 + 16);
LABEL_16:
          *(_DWORD *)(a1 + 24) = v5;
          if ( v15 )
            return 9;
          continue;
        }
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 12);
        return 9;
      case 97:
        v17 = a1;
        return sub_DDAC60(v17);
      default:
        goto LABEL_5;
    }
  }
}

