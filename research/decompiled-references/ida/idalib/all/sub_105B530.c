__int64 __fastcall sub_105B530(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  int v4; // eax
  bool v5; // dl
  int v6; // eax
  bool v7; // dl
  int v8; // eax
  void **v9; // rbp
  void **v10; // rdx
  __int64 v11; // r15
  size_t v12; // rax
  const char *v13; // rdx
  bool v14; // zf
  char *v15; // rcx
  __m128i *v17; // rsi
  int v18; // eax
  int v19; // eax
  char v20; // [rsp+Dh] [rbp-8Bh]
  char v21; // [rsp+Eh] [rbp-8Ah]
  char v22; // [rsp+Fh] [rbp-89h]
  void *v23[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v24; // [rsp+20h] [rbp-78h] BYREF
  __m128i v25; // [rsp+30h] [rbp-68h] BYREF
  __m128i v26; // [rsp+40h] [rbp-58h] BYREF
  __int16 v27; // [rsp+50h] [rbp-48h]

  v3 = a1 + 512;
  *(_WORD *)(a1 + 544) = 0;
  v4 = sub_9B4AA0(a1 + 512, "mips32r6");
  v5 = 1;
  if ( v4 )
    v5 = sub_9B4AA0(v3, "mips64r6") == 0;
  *(_BYTE *)(a1 + 546) = v5;
  v6 = sub_9B4AA0(v3, "mips32r6");
  v7 = 1;
  if ( v6 )
    v7 = sub_9B4AA0(v3, "mips64r6") == 0;
  *(_BYTE *)(a1 + 547) = v7;
  *(_BYTE *)(a1 + 548) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 563) = 0;
  if ( sub_9B4AA0(v3, "mips32r6") )
  {
    if ( !sub_9B4AA0(a1 + 568, "n32") || !sub_9B4AA0(a1 + 568, "n64") )
    {
      v10 = *(void ***)a2;
      v9 = *(void ***)(a2 + 8);
      *(_DWORD *)(a1 + 564) = 2;
      if ( v9 == v10 )
        goto LABEL_34;
      goto LABEL_13;
    }
    if ( sub_9B4AA0(a1 + 568, "64") )
    {
      v8 = sub_9B4AA0(v3, "mips1");
      v9 = *(void ***)(a2 + 8);
      *(_DWORD *)(a1 + 564) = v8 == 0;
      v10 = *(void ***)a2;
      if ( *(void ***)a2 == v9 )
      {
        if ( v8 )
        {
          *(_BYTE *)(a1 + 563) = 1;
          v21 = 0;
          goto LABEL_24;
        }
LABEL_34:
        v21 = 0;
        goto LABEL_24;
      }
      goto LABEL_13;
    }
  }
  v10 = *(void ***)a2;
  v9 = *(void ***)(a2 + 8);
  *(_DWORD *)(a1 + 564) = 2;
  if ( v10 == v9 )
    goto LABEL_34;
LABEL_13:
  v11 = (__int64)v10;
  v21 = 0;
  v20 = 0;
  v22 = 0;
  do
  {
    while ( !sub_9B4AA0(v11, "+single-float") )
    {
      *(_BYTE *)(a1 + 548) = 1;
LABEL_15:
      v11 += 32;
      if ( v9 == (void **)v11 )
        goto LABEL_19;
    }
    if ( sub_9B4AA0(v11, "+soft-float") )
    {
      if ( sub_9B4AA0(v11, "+mips16") )
      {
        if ( sub_9B4AA0(v11, "+micromips") )
        {
          if ( sub_9B4AA0(v11, "+mips32r6") && sub_9B4AA0(v11, "+mips64r6") )
          {
            if ( sub_9B4AA0(v11, "+strict-align") )
            {
              if ( sub_9B4AA0(v11, "+dsp") )
              {
                if ( sub_9B4AA0(v11, "+dspr2") )
                {
                  if ( sub_9B4AA0(v11, "+msa") )
                  {
                    if ( sub_9B4AA0(v11, "+nomadd4") )
                    {
                      if ( sub_9B4AA0(v11, "+fp64") )
                      {
                        if ( sub_9B4AA0(v11, "-fp64") )
                        {
                          if ( sub_9B4AA0(v11, "+fpxx") )
                          {
                            if ( sub_9B4AA0(v11, "+nan2008") )
                            {
                              if ( sub_9B4AA0(v11, "-nan2008") )
                              {
                                if ( sub_9B4AA0(v11, "+abs2008") )
                                {
                                  if ( sub_9B4AA0(v11, "-abs2008") )
                                  {
                                    if ( sub_9B4AA0(v11, "+noabicalls") )
                                    {
                                      if ( sub_9B4AA0(v11, "+use-indirect-jump-hazard") )
                                      {
                                        if ( sub_9B4AA0(v11, "+nooddspreg") )
                                        {
                                          if ( !sub_9B4AA0(v11, "-nooddspreg") )
                                          {
                                            *(_BYTE *)(a1 + 563) = 0;
                                            v22 = 1;
                                          }
                                        }
                                        else
                                        {
                                          *(_BYTE *)(a1 + 563) = 1;
                                          v22 = 0;
                                        }
                                      }
                                      else
                                      {
                                        *(_BYTE *)(a1 + 562) = 1;
                                      }
                                    }
                                    else
                                    {
                                      *(_BYTE *)(a1 + 549) = 1;
                                    }
                                  }
                                  else
                                  {
                                    *(_BYTE *)(a1 + 547) = 0;
                                  }
                                }
                                else
                                {
                                  *(_BYTE *)(a1 + 547) = 1;
                                }
                              }
                              else
                              {
                                *(_BYTE *)(a1 + 546) = 0;
                              }
                            }
                            else
                            {
                              *(_BYTE *)(a1 + 546) = 1;
                            }
                          }
                          else
                          {
                            *(_DWORD *)(a1 + 564) = 0;
                            v21 = 1;
                          }
                        }
                        else
                        {
                          *(_DWORD *)(a1 + 564) = 1;
                          v21 = 1;
                        }
                      }
                      else
                      {
                        *(_DWORD *)(a1 + 564) = 2;
                        v21 = 1;
                      }
                    }
                    else
                    {
                      *(_BYTE *)(a1 + 561) = 1;
                    }
                  }
                  else
                  {
                    *(_BYTE *)(a1 + 560) = 1;
                  }
                }
                else
                {
                  v19 = *(_DWORD *)(a1 + 556);
                  if ( v19 <= 1 )
                    v19 = 2;
                  *(_DWORD *)(a1 + 556) = v19;
                }
              }
              else
              {
                v18 = *(_DWORD *)(a1 + 556);
                if ( v18 <= 0 )
                  v18 = 1;
                *(_DWORD *)(a1 + 556) = v18;
              }
            }
            else
            {
              v20 = 1;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 393) |= 0x10u;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 545) = 1;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 544) = 1;
      }
      goto LABEL_15;
    }
    *(_DWORD *)(a1 + 552) = 1;
    v11 += 32;
  }
  while ( v9 != (void **)v11 );
LABEL_19:
  if ( !*(_DWORD *)(a1 + 564) && !v22 )
    *(_BYTE *)(a1 + 563) = 1;
  if ( v20 )
    *(_BYTE *)(a1 + 393) &= ~0x10u;
LABEL_24:
  if ( *(_BYTE *)(a1 + 560) == 1 && !v21 )
  {
    *(_DWORD *)(a1 + 564) = 2;
    v25.m128i_i64[0] = (__int64)&v26;
    sub_10388C0(&v25, "+fp64", (__int64)"");
    v17 = *(__m128i **)(a2 + 8);
    if ( v17 == *(__m128i **)(a2 + 16) )
    {
      sub_A82970((void ***)a2, v17, &v25);
      if ( (__m128i *)v25.m128i_i64[0] != &v26 )
        operator delete((void *)v25.m128i_i64[0]);
    }
    else
    {
      v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
      if ( (__m128i *)v25.m128i_i64[0] == &v26 )
      {
        v17[1] = _mm_load_si128(&v26);
      }
      else
      {
        v17->m128i_i64[0] = v25.m128i_i64[0];
        v17[1].m128i_i64[0] = v26.m128i_i64[0];
      }
      v17->m128i_i64[1] = v25.m128i_i64[1];
      *(_QWORD *)(a2 + 8) += 32LL;
    }
  }
  if ( sub_9B4AA0(a1 + 568, "o32") )
  {
    if ( sub_9B4AA0(a1 + 568, "n32") )
    {
      v12 = j__strlen("m:e-i8:8:32-i16:16:32-i64:64-i128:128-n32:64-S128");
      v13 = "m:e-i8:8:32-i16:16:32-i64:64-i128:128-n32:64-S128";
    }
    else
    {
      v12 = j__strlen("m:e-p:32:32-i8:8:32-i16:16:32-i64:64-i128:128-n32:64-S128");
      v13 = "m:e-p:32:32-i8:8:32-i16:16:32-i64:64-i128:128-n32:64-S128";
    }
  }
  else
  {
    v12 = j__strlen("m:m-p:32:32-i8:8:32-i16:16:32-i64:64-n32-S64");
    v13 = "m:m-p:32:32-i8:8:32-i16:16:32-i64:64-n32-S64";
  }
  v14 = *(_BYTE *)(a1 + 272) == 0;
  v27 = 1283;
  if ( v14 )
    v15 = "e-";
  else
    v15 = "E-";
  v25.m128i_i64[0] = (__int64)v15;
  v26.m128i_i64[0] = (__int64)v13;
  v26.m128i_i64[1] = v12;
  sub_2253560(v23, &v25);
  sub_102D780((_QWORD *)a1, (_BYTE *)v23[0], (signed __int64)v23[1], (__int64)&byte_22F0C30);
  if ( v23[0] != &v24 )
    operator delete(v23[0]);
  return 1;
}
