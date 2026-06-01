__int64 __fastcall sub_1075F00(__int64 a1, void ***a2, __int64 a3)
{
  int v3; // eax
  void **v4; // r8
  void **v5; // rbp
  void **v6; // r14
  int v7; // r15d
  char v8; // al
  unsigned int v9; // edx
  char v10; // al
  int v11; // edx
  __int64 result; // rax
  unsigned int v13; // edx
  unsigned __int8 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  void **v17; // rbp
  __int64 v18; // rax
  void **v19; // r12
  void **v20; // rbx
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rbx
  void **v24; // r12
  int v25; // r15d
  void ***v26; // rax
  __m128i *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r13
  __int64 v35; // rbp
  void *v36; // rdi
  size_t v37; // rax
  size_t v38; // rdx
  __m128i v41; // [rsp+10h] [rbp-88h] BYREF
  __m128i v42; // [rsp+20h] [rbp-78h] BYREF
  void *v43; // [rsp+30h] [rbp-68h]
  __int64 v44; // [rsp+40h] [rbp-58h] BYREF
  __int16 v45; // [rsp+50h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 392);
  v4 = *a2;
  *(_BYTE *)(a1 + 279) = 1;
  v5 = a2[1];
  v3 &= 0xFFE00FFF;
  BYTE1(v3) |= 0x10u;
  *(_WORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 392) = v3;
  *(_DWORD *)(a1 + 628) &= 0xFFC00880;
  if ( v4 != v5 )
  {
    v6 = v4;
    while ( sub_9B4AA0((__int64)v6, "+soft-float") )
    {
      if ( sub_9B4AA0((__int64)v6, "+vfp2sp") && sub_9B4AA0((__int64)v6, "+vfp2") )
      {
        if ( sub_9B4AA0((__int64)v6, "+vfp3sp")
          && sub_9B4AA0((__int64)v6, "+vfp3d16sp")
          && sub_9B4AA0((__int64)v6, "+vfp3")
          && sub_9B4AA0((__int64)v6, "+vfp3d16") )
        {
          if ( !sub_9B4AA0((__int64)v6, "+vfp4sp")
            || !sub_9B4AA0((__int64)v6, "+vfp4d16sp")
            || !sub_9B4AA0((__int64)v6, "+vfp4")
            || !sub_9B4AA0((__int64)v6, "+vfp4d16") )
          {
            v25 = *(_DWORD *)(a1 + 636);
            *(_BYTE *)(a1 + 628) |= 4u;
            *(_DWORD *)(a1 + 636) = v25 | 6;
            if ( sub_9B4AA0((__int64)v6, "+vfp4") && sub_9B4AA0((__int64)v6, "+vfp4d16") )
              goto LABEL_4;
LABEL_58:
            *(_DWORD *)(a1 + 636) = v25 | 0xE;
            goto LABEL_4;
          }
          if ( sub_9B4AA0((__int64)v6, "+fp-armv8sp")
            && sub_9B4AA0((__int64)v6, "+fp-armv8d16sp")
            && sub_9B4AA0((__int64)v6, "+fp-armv8")
            && sub_9B4AA0((__int64)v6, "+fp-armv8d16") )
          {
            if ( sub_9B4AA0((__int64)v6, "+neon") )
            {
              if ( sub_9B4AA0((__int64)v6, "+hwdiv") )
              {
                if ( sub_9B4AA0((__int64)v6, "+hwdiv-arm") )
                {
                  if ( sub_9B4AA0((__int64)v6, "+crc") )
                  {
                    if ( sub_9B4AA0((__int64)v6, "+crypto") )
                    {
                      if ( sub_9B4AA0((__int64)v6, "+sha2") )
                      {
                        if ( sub_9B4AA0((__int64)v6, "+aes") )
                        {
                          if ( sub_9B4AA0((__int64)v6, "+dsp") )
                          {
                            if ( sub_9B4AA0((__int64)v6, "+fp64") )
                            {
                              if ( sub_9B4AA0((__int64)v6, "+8msecext") )
                              {
                                if ( sub_9B4AA0((__int64)v6, "+strict-align") )
                                {
                                  if ( sub_9B4AA0((__int64)v6, "+fp16") )
                                  {
                                    if ( sub_9B4AA0((__int64)v6, "+fullfp16") )
                                    {
                                      if ( sub_9B4AA0((__int64)v6, "+dotprod") )
                                      {
                                        if ( sub_9B4AA0((__int64)v6, "+mve") )
                                        {
                                          if ( sub_9B4AA0((__int64)v6, "+mve.fp") )
                                          {
                                            if ( sub_9B4AA0((__int64)v6, "+i8mm") )
                                            {
                                              if ( v6[1] == &byte_7
                                                && sub_9B4AA0((__int64)v6, "+cdecp0") >= 0
                                                && sub_9B4AA0((__int64)v6, "+cdecp7") <= 0 )
                                              {
                                                *(_DWORD *)(a1 + 392) = *(_DWORD *)(a1 + 392) & 0xFFE01FFF
                                                                      | ((unsigned __int8)((1 << (*((_BYTE *)*v6 + 6)
                                                                                                - 48))
                                                                                         | (*(_DWORD *)(a1 + 392) >> 13)) << 13);
                                              }
                                              else if ( sub_9B4AA0((__int64)v6, "+bf16") )
                                              {
                                                if ( sub_9B4AA0((__int64)v6, "-fpregs") )
                                                {
                                                  if ( sub_9B4AA0((__int64)v6, "+pacbti") )
                                                  {
                                                    if ( sub_9B4AA0((__int64)v6, "+fullbf16") )
                                                    {
                                                      if ( !sub_9B4AA0((__int64)v6, "+execute-only") )
                                                        *(_BYTE *)(a1 + 273) = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_BYTE *)(a1 + 281) = 1;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    *(_BYTE *)(a1 + 630) |= 0x30u;
                                                  }
                                                }
                                                else
                                                {
                                                  *(_BYTE *)(a1 + 630) |= 8u;
                                                }
                                              }
                                              else
                                              {
                                                *(_BYTE *)(a1 + 280) = 1;
                                              }
                                            }
                                            else
                                            {
                                              *(_BYTE *)(a1 + 630) |= 4u;
                                            }
                                          }
                                          else
                                          {
                                            *(_BYTE *)(a1 + 628) |= 0x10u;
                                            *(_BYTE *)(a1 + 276) = 1;
                                            *(_BYTE *)(a1 + 628) |= 0x60u;
                                            *(_DWORD *)(a1 + 636) |= 6u;
                                          }
                                        }
                                        else
                                        {
                                          *(_BYTE *)(a1 + 628) |= 0x20u;
                                        }
                                      }
                                      else
                                      {
                                        *(_BYTE *)(a1 + 630) |= 2u;
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(a1 + 276) = 1;
                                    }
                                  }
                                  else
                                  {
                                    *(_DWORD *)(a1 + 636) |= 2u;
                                  }
                                }
                                else
                                {
                                  *(_BYTE *)(a1 + 393) &= ~0x10u;
                                }
                              }
                              else
                              {
                                v37 = j__strlen("M");
                                v38 = *(_QWORD *)(a1 + 584);
                                if ( v38 != v37
                                  || v38 && memcmp(*(const void **)(a1 + 576), "M", v38)
                                  || *(_DWORD *)(a1 + 624) != 8 )
                                {
                                  sub_FC70B0((__int64)&v41, a3, 0, 74);
                                  sub_AEC220((unsigned __int8 **)&v41, *(_BYTE **)(a1 + 544), *(_QWORD *)(a1 + 552));
                                  sub_AEA040((__int64)&v41);
                                  return 0;
                                }
                              }
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 636) |= 8u;
                            }
                          }
                          else
                          {
                            *(_BYTE *)(a1 + 630) |= 1u;
                          }
                        }
                        else
                        {
                          *(_BYTE *)(a1 + 629) |= 0x80u;
                        }
                      }
                      else
                      {
                        *(_BYTE *)(a1 + 629) |= 0x40u;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 629) |= 0x20u;
                    }
                  }
                  else
                  {
                    *(_BYTE *)(a1 + 629) |= 0x10u;
                  }
                }
                else
                {
                  *(_BYTE *)(a1 + 629) |= 2u;
                }
              }
              else
              {
                *(_BYTE *)(a1 + 629) |= 1u;
              }
            }
            else
            {
              *(_BYTE *)(a1 + 628) |= 8u;
              *(_DWORD *)(a1 + 636) |= 4u;
            }
            goto LABEL_4;
          }
          v25 = *(_DWORD *)(a1 + 636);
          *(_BYTE *)(a1 + 628) |= 0x10u;
          *(_DWORD *)(a1 + 636) = v25 | 6;
          if ( !sub_9B4AA0((__int64)v6, "+fp-armv8") || !sub_9B4AA0((__int64)v6, "+fp-armv8d16") )
            goto LABEL_58;
        }
        else
        {
          v7 = *(_DWORD *)(a1 + 636);
          *(_BYTE *)(a1 + 628) |= 2u;
          *(_DWORD *)(a1 + 636) = v7 | 4;
          if ( !sub_9B4AA0((__int64)v6, "+vfp3") || !sub_9B4AA0((__int64)v6, "+vfp3d16") )
            goto LABEL_9;
        }
LABEL_4:
        v6 += 4;
        if ( v5 == v6 )
          goto LABEL_10;
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 636);
        *(_BYTE *)(a1 + 628) |= 1u;
        *(_DWORD *)(a1 + 636) = v7 | 4;
        if ( sub_9B4AA0((__int64)v6, "+vfp2") )
          goto LABEL_4;
LABEL_9:
        v6 += 4;
        *(_DWORD *)(a1 + 636) = v7 | 0xC;
        if ( v5 == v6 )
        {
LABEL_10:
          v8 = *(_BYTE *)(a1 + 628);
          v9 = *(_DWORD *)(a1 + 624);
          *(_BYTE *)(a1 + 277) = 1;
          v10 = v8 & 8;
          if ( v9 == 7 )
            goto LABEL_60;
          if ( v9 > 7 )
          {
            if ( v9 > 9 )
              goto LABEL_14;
LABEL_13:
            *(_DWORD *)(a1 + 632) = 15;
            goto LABEL_14;
          }
          if ( v9 != 6 )
            goto LABEL_14;
LABEL_24:
          if ( *(_DWORD *)(a1 + 620) == 3 )
          {
            *(_DWORD *)(a1 + 632) = 0;
          }
          else
          {
            if ( ((*(_DWORD *)(a1 + 616) - 7) & 0xFFFFFFFD) == 0 )
              goto LABEL_13;
            *(_DWORD *)(a1 + 632) = 4;
          }
          goto LABEL_14;
        }
      }
    }
    *(_BYTE *)(a1 + 629) |= 4u;
    goto LABEL_4;
  }
  v13 = *(_DWORD *)(a1 + 624);
  *(_BYTE *)(a1 + 277) = 1;
  if ( v13 != 7 )
  {
    if ( v13 > 7 )
    {
      v10 = 0;
      if ( v13 <= 9 )
        goto LABEL_13;
    }
    else
    {
      v10 = 0;
      if ( v13 == 6 )
        goto LABEL_24;
    }
    v11 = *(_DWORD *)(a1 + 608);
LABEL_31:
    if ( v11 == 2 )
    {
      sub_FC70B0((__int64)&v41, a3, 0, 73);
      v14 = (unsigned __int8 *)v41.m128i_i64[0];
      if ( !v41.m128i_i64[0] )
      {
        v29 = v41.m128i_i64[1];
        v30 = *(_DWORD *)(v41.m128i_i64[1] + 14976);
        if ( v30 )
        {
          v32 = (unsigned int)(v30 - 1);
          *(_DWORD *)(v41.m128i_i64[1] + 14976) = v32;
          v14 = *(unsigned __int8 **)(v29 + 8 * v32 + 14848);
          v33 = *((unsigned int *)v14 + 134);
          *v14 = 0;
          v34 = *((_QWORD *)v14 + 66);
          *((_DWORD *)v14 + 106) = 0;
          v35 = v34 + (v33 << 6);
          while ( v34 != v35 )
          {
            while ( 1 )
            {
              v35 -= 64;
              v36 = *(void **)(v35 + 24);
              if ( v36 == (void *)(v35 + 40) )
                break;
              operator delete(v36);
              if ( v34 == v35 )
                goto LABEL_98;
            }
          }
LABEL_98:
          *((_DWORD *)v14 + 134) = 0;
        }
        else
        {
          v14 = (unsigned __int8 *)operator new(0x3A0u);
          *v14 = 0;
          *((_QWORD *)v14 + 12) = v14 + 112;
          *((_QWORD *)v14 + 16) = v14 + 144;
          *((_QWORD *)v14 + 20) = v14 + 176;
          *((_QWORD *)v14 + 24) = v14 + 208;
          *((_QWORD *)v14 + 28) = v14 + 240;
          *((_QWORD *)v14 + 32) = v14 + 272;
          *((_QWORD *)v14 + 36) = v14 + 304;
          *((_QWORD *)v14 + 40) = v14 + 336;
          *((_QWORD *)v14 + 44) = v14 + 368;
          *((_QWORD *)v14 + 48) = v14 + 400;
          *((_QWORD *)v14 + 52) = v14 + 432;
          *((_QWORD *)v14 + 13) = 0;
          v14[112] = 0;
          *((_QWORD *)v14 + 17) = 0;
          v14[144] = 0;
          *((_QWORD *)v14 + 21) = 0;
          v14[176] = 0;
          *((_QWORD *)v14 + 25) = 0;
          v14[208] = 0;
          *((_QWORD *)v14 + 29) = 0;
          v14[240] = 0;
          *((_QWORD *)v14 + 33) = 0;
          v14[272] = 0;
          *((_QWORD *)v14 + 37) = 0;
          v14[304] = 0;
          *((_QWORD *)v14 + 41) = 0;
          v14[336] = 0;
          *((_QWORD *)v14 + 45) = 0;
          v14[368] = 0;
          *((_QWORD *)v14 + 49) = 0;
          v14[400] = 0;
          *((_QWORD *)v14 + 53) = 0x800000000LL;
          *((_QWORD *)v14 + 66) = v14 + 544;
          *((_QWORD *)v14 + 67) = 0x600000000LL;
        }
        v41.m128i_i64[0] = (__int64)v14;
      }
      v14[*v14 + 1] = 1;
      v15 = v41.m128i_i64[0];
      v16 = *(unsigned __int8 *)v41.m128i_i64[0];
      *(_BYTE *)v41.m128i_i64[0] = v16 + 1;
      *(_QWORD *)(v15 + 8 * v16 + 16) = "neon";
      if ( (_BYTE)v45 )
      {
        sub_FC7790(v42.m128i_i64[0], v41.m128i_i64, SHIBYTE(v45));
        v42.m128i_i64[0] = 0;
        v45 = 0;
      }
      if ( v43 != &v44 )
        operator delete(v43);
      v17 = (void **)v41.m128i_i64[0];
      if ( v41.m128i_i64[0] )
      {
        v18 = v41.m128i_i64[1];
        if ( v41.m128i_i64[1] )
        {
          if ( v41.m128i_i64[0] >= (unsigned __int64)v41.m128i_i64[1]
            && v41.m128i_i64[0] <= (unsigned __int64)(v41.m128i_i64[1] + 14848) )
          {
            v31 = *(unsigned int *)(v41.m128i_i64[1] + 14976);
            *(_DWORD *)(v41.m128i_i64[1] + 14976) = v31 + 1;
            *(_QWORD *)(v18 + 8 * v31 + 14848) = v17;
            return 0;
          }
          v19 = *(void ***)(v41.m128i_i64[0] + 528);
          v20 = &v19[8 * (unsigned __int64)*(unsigned int *)(v41.m128i_i64[0] + 536)];
          if ( v19 != v20 )
          {
            do
            {
              while ( 1 )
              {
                v20 -= 8;
                v21 = (void **)v20[3];
                if ( v21 == v20 + 5 )
                  break;
                operator delete(v21);
                if ( v19 == v20 )
                  goto LABEL_43;
              }
            }
            while ( v19 != v20 );
LABEL_43:
            v20 = (void **)v17[66];
          }
          if ( v20 != v17 + 68 )
            free(v20);
          v22 = (void **)v17[52];
          if ( v22 != v17 + 54 )
            free(v22);
          v23 = v17 + 48;
          v24 = v17 + 8;
          do
          {
            while ( *v23 != v23 + 2 )
            {
              operator delete(*v23);
              v23 -= 4;
              if ( v23 == v24 )
                goto LABEL_51;
            }
            v23 -= 4;
          }
          while ( v24 != v23 );
LABEL_51:
          operator delete(v17, 0x3A0u);
        }
      }
      return 0;
    }
    goto LABEL_16;
  }
  v10 = 0;
LABEL_60:
  if ( *(_DWORD *)(a1 + 620) != 3 )
    goto LABEL_13;
  *(_DWORD *)(a1 + 632) = 7;
LABEL_14:
  v11 = *(_DWORD *)(a1 + 608);
  if ( !v10 )
    goto LABEL_31;
  if ( v11 == 2 )
  {
    sub_1070560(&v41, "+neonfp");
    v26 = a2;
    v27 = (__m128i *)a2[1];
    if ( v27 != (__m128i *)a2[2] )
    {
      v27->m128i_i64[0] = (__int64)v27[1].m128i_i64;
      v28 = v41.m128i_i64[0];
      if ( (__m128i *)v41.m128i_i64[0] == &v42 )
        goto LABEL_72;
      goto LABEL_64;
    }
LABEL_68:
    sub_A82970(v26, v27, &v41);
    if ( (__m128i *)v41.m128i_i64[0] != &v42 )
      operator delete((void *)v41.m128i_i64[0]);
    return 1;
  }
LABEL_16:
  result = 1;
  if ( v11 == 1 )
  {
    sub_1070560(&v41, "-neonfp");
    v26 = a2;
    v27 = (__m128i *)a2[1];
    if ( v27 != (__m128i *)a2[2] )
    {
      v27->m128i_i64[0] = (__int64)v27[1].m128i_i64;
      v28 = v41.m128i_i64[0];
      if ( (__m128i *)v41.m128i_i64[0] == &v42 )
      {
LABEL_72:
        v27[1] = _mm_load_si128(&v42);
        goto LABEL_65;
      }
LABEL_64:
      v27->m128i_i64[0] = v28;
      v27[1].m128i_i64[0] = v42.m128i_i64[0];
LABEL_65:
      v27->m128i_i64[1] = v41.m128i_i64[1];
      a2[1] += 4;
      return 1;
    }
    goto LABEL_68;
  }
  return result;
}
