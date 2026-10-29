__int64 __fastcall sub_1EBFAB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned __int8 a9)
{
  unsigned int v10; // ebp
  void *v12; // rax
  __int64 v13; // rdi
  char *v14; // rcx
  __int64 v15; // rax
  const __m128i *v16; // rax
  void **v17; // rdx
  char *v18; // rsi
  __m128i v19; // xmm1
  void **v20; // rdx
  __m128i si128; // xmm3
  _DWORD *v22; // rdi
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rdi
  char *v26; // rcx
  __int64 v27; // rax
  const __m128i *v28; // rax
  void **v29; // rdx
  char *v30; // rsi
  __m128i v31; // xmm2
  void **v32; // rdx
  __m128i v33; // xmm4
  unsigned int v37; // [rsp+2Ch] [rbp-44Ch]
  void *v38; // [rsp+30h] [rbp-448h] BYREF
  char v39; // [rsp+38h] [rbp-440h]
  __m128i *v40; // [rsp+40h] [rbp-438h] BYREF
  __int64 v41; // [rsp+48h] [rbp-430h]
  __int64 v42; // [rsp+50h] [rbp-428h] BYREF
  char v43; // [rsp+58h] [rbp-420h]
  __int128 v44; // [rsp+60h] [rbp-418h]
  int v45; // [rsp+70h] [rbp-408h]
  void *v46[2]; // [rsp+80h] [rbp-3F8h] BYREF
  _DWORD v47[12]; // [rsp+90h] [rbp-3E8h] BYREF
  int v48; // [rsp+C0h] [rbp-3B8h]
  _QWORD v49[5]; // [rsp+D0h] [rbp-3A8h] BYREF
  __int128 v50; // [rsp+F8h] [rbp-380h] BYREF
  __int64 v51; // [rsp+108h] [rbp-370h]
  _QWORD v52[2]; // [rsp+110h] [rbp-368h] BYREF
  _QWORD v53[34]; // [rsp+120h] [rbp-358h] BYREF
  void *ptr; // [rsp+230h] [rbp-248h] BYREF
  __int64 v55; // [rsp+238h] [rbp-240h]
  _BYTE v56[568]; // [rsp+240h] [rbp-238h] BYREF

  v49[4] = 0x200000000LL;
  v49[0] = a2;
  v52[0] = v53;
  v52[1] = 0x800000000LL;
  v49[1] = a3;
  v49[2] = 0;
  v49[3] = 0;
  v50 = 0;
  v51 = 0;
  v53[32] = 0;
  sub_1EB0230((std::_V2 *)v46, (__int64)v49);
  if ( v46[0] )
  {
    ptr = v46[0];
    v46[0] = nullptr;
    sub_A0E8E0((_QWORD **)&ptr);
    if ( ptr )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    if ( v46[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v46[0] + 8LL))(v46[0]);
    v10 = 1;
    goto LABEL_7;
  }
  v10 = 1;
  if ( (unsigned __int8)sub_1EBF490((__int64)v49, 0x13u) )
    goto LABEL_7;
  ptr = v56;
  v55 = 0x4000000000LL;
  v10 = 0;
  while ( 2 )
  {
    sub_1EAFE10((__int64)&v38, (__int64)v49);
    if ( (v39 & 1) == 0 )
    {
      if ( (_DWORD)v38 == 1 )
        goto LABEL_17;
      if ( !(_DWORD)v38 || (_DWORD)v38 == 2 )
        goto LABEL_21;
      LODWORD(v55) = 0;
      v40 = nullptr;
      v41 = 0;
      sub_2027F10(&v42, v49, HIDWORD(v38), &ptr, &v40);
      if ( (v43 & 1) != 0 )
      {
        v10 = 1;
        sub_A0AE90(&v42);
        goto LABEL_17;
      }
      switch ( (int)v42 )
      {
        case 1:
          if ( !a1 )
            goto LABEL_44;
          v13 = v41;
          v14 = (char *)v40;
          v45 = 0;
          v44 = 0;
          *(_OWORD *)v46 = 0;
          v15 = v41;
          v47[0] = 0;
          if ( v41 <= 0 )
            goto LABEL_43;
          if ( v41 <= 15 )
          {
            v20 = v46;
          }
          else
          {
            v16 = v40;
            v17 = v46;
            v18 = &v40->m128i_i8[v41 & 0xFFFFFFFFFFFFFFF0LL];
            do
            {
              v19 = _mm_loadu_si128(v16++);
              v17 += 2;
              *((__m128i *)v17 - 1) = v19;
            }
            while ( v16 != (const __m128i *)v18 );
            v15 = v13 - (v13 & 0xFFFFFFFFFFFFFFF0LL);
            v14 += v13 & 0xFFFFFFFFFFFFFFF0LL;
            v20 = (void **)((char *)v46 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
            if ( v13 == (v13 & 0xFFFFFFFFFFFFFFF0LL) )
            {
LABEL_43:
              si128 = _mm_load_si128((const __m128i *)v46);
              *(_DWORD *)(a1 + 240) = v47[0];
              *(__m128i *)(a1 + 224) = si128;
              goto LABEL_44;
            }
          }
          *(_BYTE *)v20 = *v14;
          if ( v15 != 1 )
          {
            *((_BYTE *)v20 + 1) = v14[1];
            if ( v15 != 2 )
            {
              *((_BYTE *)v20 + 2) = v14[2];
              if ( v15 != 3 )
              {
                *((_BYTE *)v20 + 3) = v14[3];
                if ( v15 != 4 )
                {
                  *((_BYTE *)v20 + 4) = v14[4];
                  if ( v15 != 5 )
                  {
                    *((_BYTE *)v20 + 5) = v14[5];
                    if ( v15 != 6 )
                    {
                      *((_BYTE *)v20 + 6) = v14[6];
                      if ( v15 != 7 )
                      {
                        *((_BYTE *)v20 + 7) = v14[7];
                        if ( v15 != 8 )
                        {
                          *((_BYTE *)v20 + 8) = v14[8];
                          if ( v15 != 9 )
                          {
                            *((_BYTE *)v20 + 9) = v14[9];
                            if ( v15 != 10 )
                            {
                              *((_BYTE *)v20 + 10) = v14[10];
                              if ( v15 != 11 )
                              {
                                *((_BYTE *)v20 + 11) = v14[11];
                                if ( v15 != 12 )
                                {
                                  *((_BYTE *)v20 + 12) = v14[12];
                                  if ( v15 != 13 )
                                  {
                                    *((_BYTE *)v20 + 13) = v14[13];
                                    if ( v15 != 14 )
                                      *((_BYTE *)v20 + 14) = v14[14];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_43;
        case 2:
          if ( !a1 )
            goto LABEL_44;
          v25 = v41;
          v26 = (char *)v40;
          v45 = 0;
          v44 = 0;
          *(_OWORD *)v46 = 0;
          v27 = v41;
          v47[0] = 0;
          if ( v41 <= 0 )
            goto LABEL_83;
          if ( v41 <= 15 )
          {
            v32 = v46;
          }
          else
          {
            v28 = v40;
            v29 = v46;
            v30 = &v40->m128i_i8[v41 & 0xFFFFFFFFFFFFFFF0LL];
            do
            {
              v31 = _mm_loadu_si128(v28++);
              v29 += 2;
              *((__m128i *)v29 - 1) = v31;
            }
            while ( v28 != (const __m128i *)v30 );
            v27 = v25 - (v25 & 0xFFFFFFFFFFFFFFF0LL);
            v26 += v25 & 0xFFFFFFFFFFFFFFF0LL;
            v32 = (void **)((char *)v46 + (v25 & 0xFFFFFFFFFFFFFFF0LL));
            if ( v25 == (v25 & 0xFFFFFFFFFFFFFFF0LL) )
              goto LABEL_83;
          }
          *(_BYTE *)v32 = *v26;
          if ( v27 != 1 )
          {
            *((_BYTE *)v32 + 1) = v26[1];
            if ( v27 != 2 )
            {
              *((_BYTE *)v32 + 2) = v26[2];
              if ( v27 != 3 )
              {
                *((_BYTE *)v32 + 3) = v26[3];
                if ( v27 != 4 )
                {
                  *((_BYTE *)v32 + 4) = v26[4];
                  if ( v27 != 5 )
                  {
                    *((_BYTE *)v32 + 5) = v26[5];
                    if ( v27 != 6 )
                    {
                      *((_BYTE *)v32 + 6) = v26[6];
                      if ( v27 != 7 )
                      {
                        *((_BYTE *)v32 + 7) = v26[7];
                        if ( v27 != 8 )
                        {
                          *((_BYTE *)v32 + 8) = v26[8];
                          if ( v27 != 9 )
                          {
                            *((_BYTE *)v32 + 9) = v26[9];
                            if ( v27 != 10 )
                            {
                              *((_BYTE *)v32 + 10) = v26[10];
                              if ( v27 != 11 )
                              {
                                *((_BYTE *)v32 + 11) = v26[11];
                                if ( v27 != 12 )
                                {
                                  *((_BYTE *)v32 + 12) = v26[12];
                                  if ( v27 != 13 )
                                  {
                                    *((_BYTE *)v32 + 13) = v26[13];
                                    if ( v27 != 14 )
                                      *((_BYTE *)v32 + 14) = v26[14];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_83:
          v33 = _mm_load_si128((const __m128i *)v46);
          *(_DWORD *)(a1 + 260) = v47[0];
          *(__m128i *)(a1 + 244) = v33;
LABEL_44:
          sub_A0AE90(&v42);
          sub_A0B030((__int64 *)&v38);
          continue;
        case 3:
          if ( !(a7 | !((a8 != 0) & a9)) )
          {
            v37 = v42;
            if ( (unsigned __int8)sub_1EB20B0((__int64 *)&ptr, a4, a5, ((a6 >> 1) ^ 1) & 1, a8) )
              v10 = v37;
          }
          goto LABEL_44;
        case 4:
          if ( ((a8 != 0) & (a7 ^ 1)) != 0
            && (unsigned __int8)sub_1EB2610((__int64 *)&ptr, ((unsigned __int8)(a6 >> 3) ^ 1) & 1, a8) )
          {
            v10 = 5;
          }
          goto LABEL_44;
        case 5:
          if ( a1 )
          {
            v23 = *(unsigned int *)(a1 + 3168);
            v24 = (__int64 *)(a1 + 3160);
            if ( (_DWORD)v23 )
              sub_1EAE640(
                v24,
                (char *)(*(_QWORD *)(a1 + 3160) + 8 * v23),
                (char *)ptr,
                (char *)ptr + 8 * (unsigned int)v55);
            else
              sub_1EAE400(v24, (__int64 *)&ptr);
          }
          goto LABEL_44;
        case 6:
          if ( a1 )
          {
            sub_1EAC410((__int64)v46, (__int64 **)&ptr, v40->m128i_i8);
            sub_9B8670((char ***)(a1 + 264), (char ***)v46);
            v22 = v46[0];
            *(_DWORD *)(a1 + 328) = v48;
            if ( v22 != v47 )
              goto LABEL_47;
          }
          goto LABEL_44;
        case 7:
          if ( a1 )
          {
            sub_1EAC410((__int64)v46, (__int64 **)&ptr, v40->m128i_i8);
            sub_9B8670((char ***)(a1 + 336), (char ***)v46);
            v22 = v46[0];
            *(_DWORD *)(a1 + 400) = v48;
            if ( v22 != v47 )
LABEL_47:
              free(v22);
          }
          goto LABEL_44;
        default:
          goto LABEL_44;
      }
    }
    break;
  }
  v12 = v38;
  v38 = nullptr;
  v46[0] = v12;
  sub_A0E8E0((_QWORD **)v46);
  if ( v46[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v46[0] + 8LL))(v46[0]);
LABEL_21:
  v10 = 1;
LABEL_17:
  sub_A0B030((__int64 *)&v38);
  if ( ptr != v56 )
    free(ptr);
LABEL_7:
  sub_A0AEB0((__int64)v52);
  sub_A0AD20((__int64)&v50);
  return v10;
}
