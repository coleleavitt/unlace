/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4295E0
// Address: 0x00000000004295E0

//----- (00000000004295E0) ----------------------------------------------------
__int64 __fastcall sub_4295E0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // r12
  _BYTE *v23; // rsi
  __int64 v24; // rsi
  bool v25; // cf
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r12
  int v31; // r13d
  __int64 v32; // r14
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // r12
  int v41; // r13d
  bool v42; // cc
  unsigned int v43; // eax
  const char *v44; // r15
  char *v45; // rsi
  __int64 v46; // rsi
  void *v47; // rdi
  int v48; // eax
  const char *v49; // r15
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __int64 v54; // r8
  __int64 v55; // r9
  __m128 v56; // xmm4
  __m128 v57; // xmm5
  int v58; // eax
  _QWORD *v59; // rax
  char *v60; // rax
  int v61; // eax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+8h] [rbp-50h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  unsigned __int64 v65; // [rsp+18h] [rbp-40h]

  v9 = 0;
  v65 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 544) )
  {
    v12 = sub_47F740(*(_QWORD *)(a1 + 472), 0, 1);
    v13 = *(_QWORD *)(a1 + 480);
    v14 = v12 - v13;
    if ( sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 544) + v13, 0) != -1 )
    {
      v19 = *(unsigned int *)(a1 + 568);
      v20 = *(_QWORD *)(a1 + 120);
      v21 = *(_DWORD *)(a1 + 568);
      if ( v20 < v19 )
      {
        v45 = *(char **)(a1 + 112);
        if ( *(_QWORD *)(a1 + 128) < v19 )
        {
          v60 = (char *)sub_481540(a1 + 112, v45, *(unsigned int *)(a1 + 568), 0x40u);
          *(_QWORD *)(a1 + 112) = v60;
          v20 = *(_QWORD *)(a1 + 120);
          v45 = v60;
        }
        memset(&v45[64 * v20], 0, (v19 - v20) << 6);
        *(_QWORD *)(a1 + 120) = v19;
        v21 = *(_DWORD *)(a1 + 568);
      }
      else if ( v19 != v20 )
      {
        *(_QWORD *)(a1 + 120) = v19;
      }
      *(_BYTE *)(a1 + 248) = 1;
      v22 = 0;
      if ( !v21 )
      {
LABEL_19:
        v30 = *(_QWORD *)(a1 + 112);
        v31 = 0;
        v32 = v30 + (*(_QWORD *)(a1 + 120) << 6);
        if ( v30 == v32 )
        {
LABEL_35:
          v39 = *(unsigned int *)(a1 + 572);
          if ( (_DWORD)v39 )
          {
            if ( !*(_BYTE *)(a1 + 248) )
              sub_4236E0();
            v40 = *(_QWORD *)(a1 + 112);
            if ( v39 < *(_QWORD *)(a1 + 120) )
            {
              v59 = (_QWORD *)(v40 + (v39 << 6));
              *(_QWORD *)(a1 + 256) = v59[3];
              *(_QWORD *)(a1 + 264) = v59[2];
              *(_QWORD *)(a1 + 272) = v59[4];
            }
          }
          else
          {
            v40 = *(_QWORD *)(a1 + 112);
          }
          ptr = nullptr;
          v41 = 0;
          v64 = 0;
          if ( v32 != v40 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                do
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        do
                        {
                          v40 += 64;
                          ++v41;
                          if ( v32 == v40 )
                          {
                            v47 = ptr;
                            v48 = *(_DWORD *)(a1 + 164);
                            if ( *(_DWORD *)(a1 + 168) )
                            {
                              if ( !v48 )
                                *(_DWORD *)(a1 + 168) = 0;
                            }
                            else
                            {
                              *(_DWORD *)(a1 + 168) = v48;
                            }
                            if ( v47 )
                            {
                              v63 = 0;
                              j__free(v47);
                            }
                            goto LABEL_75;
                          }
                        }
                        while ( !v41 || !*(_QWORD *)(v40 + 32) );
                        v42 = *(_QWORD *)(a1 + 256) <= 0LL;
                        v63 = 0;
                        if ( !v42 && *(_QWORD *)(a1 + 272) )
                          sub_428E80(*(_QWORD *)(a1 + 240), (__int64)&ptr, (__int64 *)(a1 + 256), *(_DWORD *)v40);
                        v43 = *(_DWORD *)(v40 + 4);
                        if ( v43 != 18 )
                          break;
                        v58 = *(_DWORD *)(v40 + 40);
                        if ( v58 )
                        {
                          if ( v58 == *(_DWORD *)(a1 + 192) )
                          {
                            *(_DWORD *)(a1 + 204) = v41;
                            v58 = *(_DWORD *)(v40 + 40);
                          }
                          if ( *(_DWORD *)(a1 + 160) == v58 )
                            *(_DWORD *)(a1 + 208) = v41;
                        }
                      }
                      if ( v43 <= 0x12 )
                        break;
                      switch ( v43 )
                      {
                        case 0x6FFFFFFEu:
                          *(_DWORD *)(a1 + 220) = v41;
                          break;
                        case 0x6FFFFFFFu:
                          *(_DWORD *)(a1 + 224) = v41;
                          break;
                        case 0x6FFFFFFDu:
                          *(_DWORD *)(a1 + 216) = v41;
                          break;
                      }
                    }
                    if ( v43 != 3 )
                      break;
                    if ( v63 )
                    {
                      v49 = (const char *)ptr;
                      if ( !strcmp((const char *)ptr, ".strtab") )
                      {
                        *(double *)a2.m128_u64 = sub_429400(
                                                   a1,
                                                   (__int64 *)(a1 + 320),
                                                   v40,
                                                   0,
                                                   v50,
                                                   v51,
                                                   a2,
                                                   a3,
                                                   a4,
                                                   a5,
                                                   v52,
                                                   v53,
                                                   a8,
                                                   a9,
                                                   (char)ptr);
                      }
                      else if ( !strcmp(v49, ".dynstr") )
                      {
                        *(double *)a2.m128_u64 = sub_429400(
                                                   a1,
                                                   (__int64 *)(a1 + 352),
                                                   v40,
                                                   0,
                                                   v54,
                                                   v55,
                                                   a2,
                                                   a3,
                                                   a4,
                                                   a5,
                                                   v56,
                                                   v57,
                                                   a8,
                                                   a9,
                                                   (char)ptr);
                      }
                    }
                  }
                  if ( v43 == 8 )
                    goto LABEL_77;
                }
                while ( v43 != 1 );
                if ( v63 )
                  break;
LABEL_77:
                if ( v63 )
                {
                  v44 = (const char *)ptr;
LABEL_79:
                  if ( !strcmp(v44, ".plt") )
                    *(_DWORD *)(a1 + 184) = v41;
                }
              }
              v44 = (const char *)ptr;
              if ( !strcmp((const char *)ptr, ".interp") )
              {
                *(_DWORD *)(a1 + 176) = v41;
              }
              else if ( !strcmp(v44, ".got") )
              {
                *(_DWORD *)(a1 + 164) = v41;
                *(_BYTE *)(a1 + 249) = 1;
              }
              else if ( !strcmp(v44, ".got.plt") )
              {
                *(_DWORD *)(a1 + 168) = v41;
              }
              else if ( !strcmp(v44, ".plt.got") )
              {
                *(_DWORD *)(a1 + 212) = v41;
              }
              else if ( !strcmp(v44, ".plt.sec") )
              {
                *(_DWORD *)(a1 + 228) = v41;
              }
              else if ( !strcmp(v44, ".gnu_debugdata") )
              {
                *(_DWORD *)(a1 + 232) = v41;
              }
              else if ( !strcmp(v44, ".eh_frame") )
              {
                *(_DWORD *)(a1 + 236) = v41;
              }
              else
              {
                if ( !*(_BYTE *)(a1 + 617) )
                  goto LABEL_79;
                if ( strcmp(v44, ".opd") )
                  goto LABEL_77;
                *(_DWORD *)(a1 + 200) = v41;
              }
            }
          }
          v61 = *(_DWORD *)(a1 + 164);
          if ( *(_DWORD *)(a1 + 168) )
          {
            if ( !v61 )
              *(_DWORD *)(a1 + 168) = 0;
          }
          else
          {
            *(_DWORD *)(a1 + 168) = v61;
          }
LABEL_75:
          v9 = 1;
LABEL_18:
          sub_47F740(*(_QWORD *)(a1 + 472), v14 + *(_QWORD *)(a1 + 480), 0);
          return v9;
        }
        while ( 1 )
        {
          if ( !v31 || !*(_QWORD *)(v30 + 32) )
            goto LABEL_26;
          v36 = *(_DWORD *)(v30 + 4);
          if ( v36 == 6 )
          {
            v46 = *(unsigned int *)(v30 + 40);
            if ( !*(_BYTE *)(a1 + 248) )
              sub_4236E0();
            v38 = (unsigned int)v46;
            if ( (unsigned __int64)(unsigned int)v46 >= *(_QWORD *)(a1 + 120)
              || (v38 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v46 << 6)) == 0 )
            {
              *(double *)a2.m128_u64 = sub_410EA0(
                                         (int)"Illegal link section %d of the dynamic linking information section\n",
                                         v46,
                                         v38,
                                         v20,
                                         v15,
                                         v16,
                                         a2,
                                         a3,
                                         a4,
                                         a5,
                                         v17,
                                         v18,
                                         a8,
                                         a9,
                                         (char)ptr);
              goto LABEL_26;
            }
            if ( *(_DWORD *)(v38 + 4) == 11 )
            {
              *(_DWORD *)(v38 + 40) = 0;
              goto LABEL_26;
            }
          }
          else
          {
            if ( v36 != 11 )
            {
              if ( v36 == 2 )
              {
                v33 = *(_BYTE *)(a1 + 248) == 0;
                *(_DWORD *)(a1 + 192) = v31;
                v34 = *(unsigned int *)(v30 + 40);
                if ( v33 )
                  sub_4236E0();
                v35 = (unsigned int)v34;
                if ( (unsigned __int64)(unsigned int)v34 < *(_QWORD *)(a1 + 120)
                  && (v35 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v34 << 6)) != 0 )
                {
                  *(double *)a2.m128_u64 = sub_429400(
                                             a1,
                                             (__int64 *)(a1 + 320),
                                             v35,
                                             1,
                                             v15,
                                             v16,
                                             a2,
                                             a3,
                                             a4,
                                             a5,
                                             v17,
                                             v18,
                                             a8,
                                             a9,
                                             (char)ptr);
                }
                else
                {
                  *(double *)a2.m128_u64 = sub_410EA0(
                                             (int)"Illegal link section %d of the string table for symbols\n",
                                             v34,
                                             v35,
                                             v20,
                                             v15,
                                             v16,
                                             a2,
                                             a3,
                                             a4,
                                             a5,
                                             v17,
                                             v18,
                                             a8,
                                             a9,
                                             (char)ptr);
                }
              }
              goto LABEL_26;
            }
            v33 = *(_BYTE *)(a1 + 248) == 0;
            *(_DWORD *)(a1 + 160) = v31;
            v37 = *(unsigned int *)(v30 + 40);
            if ( v33 )
              sub_4236E0();
            v38 = (unsigned int)v37;
            if ( (unsigned __int64)(unsigned int)v37 >= *(_QWORD *)(a1 + 120)
              || (v38 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)(unsigned int)v37 << 6)) == 0 )
            {
              *(double *)a2.m128_u64 = sub_410EA0(
                                         (int)"Illegal link section %d of the string table for dynamic linking symbols\n",
                                         v37,
                                         v38,
                                         v20,
                                         v15,
                                         v16,
                                         a2,
                                         a3,
                                         a4,
                                         a5,
                                         v17,
                                         v18,
                                         a8,
                                         a9,
                                         (char)ptr);
              goto LABEL_26;
            }
          }
          *(double *)a2.m128_u64 = sub_429400(
                                     a1,
                                     (__int64 *)(a1 + 352),
                                     v38,
                                     1,
                                     v15,
                                     v16,
                                     a2,
                                     a3,
                                     a4,
                                     a5,
                                     v17,
                                     v18,
                                     a8,
                                     a9,
                                     (char)ptr);
LABEL_26:
          v30 += 64;
          ++v31;
          if ( v32 == v30 )
            goto LABEL_35;
        }
      }
      while ( 1 )
      {
        v24 = v22 * *(unsigned __int16 *)(a1 + 562);
        v25 = __CFADD__(*(_QWORD *)(a1 + 544), v24);
        v26 = *(_QWORD *)(a1 + 544) + v24;
        if ( v25 || sub_47F740(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v26, 0) == -1 )
          break;
        if ( !*(_BYTE *)(a1 + 248) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(20099);
          BUG();
        }
        v23 = v22 < *(_QWORD *)(a1 + 120) ? (_BYTE *)(*(_QWORD *)(a1 + 112) + (v22 << 6)) : nullptr;
        if ( !sub_425070((int *)a1, v23, v27, v28, v29) )
          break;
        if ( (unsigned int)++v22 >= *(_DWORD *)(a1 + 568) )
          goto LABEL_19;
      }
    }
    v9 = 0;
    goto LABEL_18;
  }
  return v9;
}
// 4296BE: variable 'v27' is possibly undefined
// 4296BE: variable 'v28' is possibly undefined
// 4296BE: variable 'v29' is possibly undefined
// 4297A7: variable 'v15' is possibly undefined
// 4297A7: variable 'v16' is possibly undefined
// 4297A7: variable 'v17' is possibly undefined
// 4297A7: variable 'v18' is possibly undefined
// 429B75: variable 'v54' is possibly undefined
// 429B75: variable 'v55' is possibly undefined
// 429B75: variable 'v56' is possibly undefined
// 429B75: variable 'v57' is possibly undefined
// 429C3A: variable 'v20' is possibly undefined
// 429C85: variable 'v50' is possibly undefined
// 429C85: variable 'v51' is possibly undefined
// 429C85: variable 'v52' is possibly undefined
// 429C85: variable 'v53' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
