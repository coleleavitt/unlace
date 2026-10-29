__int64 __fastcall dwarf_find_all_offsets_via_fission(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **v4; // r13
  char *v6; // rdx
  int debugfission_for_key; // eax
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  __m128 v11; // xmm0
  int str_offsets_header; // eax
  __int16 v13; // ax
  __m128 v14; // xmm0
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __m128 v18; // xmm0
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm0
  int loclists_header; // eax
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // [rsp+18h] [rbp-1E0h] BYREF
  __int16 v26; // [rsp+20h] [rbp-1D8h] BYREF
  __int16 v27; // [rsp+22h] [rbp-1D6h] BYREF
  __int16 v28; // [rsp+24h] [rbp-1D4h] BYREF
  __int16 v29; // [rsp+26h] [rbp-1D2h] BYREF
  __int64 v30; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-1C0h] BYREF
  _OWORD v33[9]; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v34[37]; // [rsp+D0h] [rbp-128h] BYREF

  v4 = &off_B71D0;
  v34[29] = __readfsqword(0x28u);
  do
  {
    v6 = *v4;
    memset(v34, 0, 0xE8u);
    debugfission_for_key = dwarf_get_debugfission_for_key(a1, a2 + 82, v6, v34, a3);
    if ( debugfission_for_key != -1 )
    {
      v8 = 1;
      if ( debugfission_for_key != 1 )
      {
        while ( !v34[v8 + 15] )
        {
LABEL_14:
          if ( ++v8 == 12 )
            goto LABEL_15;
        }
        while ( v8 != 7 )
        {
          if ( v8 > 7 )
          {
            if ( v8 != 8 )
              goto LABEL_14;
            v32 = 0;
            v33[0] = _mm_loadu_si128((const __m128i *)builddata_zero);
            v33[1] = _mm_loadu_si128((const __m128i *)&builddata_zero[2]);
            v33[2] = _mm_loadu_si128((const __m128i *)&builddata_zero[4]);
            v33[3] = _mm_loadu_si128((const __m128i *)&builddata_zero[6]);
            v33[4] = _mm_loadu_si128((const __m128i *)&builddata_zero[8]);
            v33[5] = _mm_loadu_si128((const __m128i *)&builddata_zero[10]);
            v33[6] = _mm_loadu_si128((const __m128i *)&builddata_zero[12]);
            v15 = builddata_zero[16];
            v33[7] = _mm_loadu_si128((const __m128i *)&builddata_zero[14]);
            *(_QWORD *)&v33[8] = v15;
            result = _dwarf_load_section(a1, a1 + 3608, a3);
            if ( !(_DWORD)result )
            {
              v16 = *(_QWORD *)(a1 + 3616);
              v25 = v34[23];
              if ( !v16 || v34[11] >= v16 )
                goto LABEL_13;
              v17 = *(_QWORD *)(a1 + 3608);
              memset(v33, 0, 0x88u);
              result = _dwarf_internal_read_rnglists_header(
                         a1,
                         1,
                         0,
                         v16,
                         v17,
                         (int)v17 + (int)v16,
                         v34[11],
                         (__int64)v33,
                         (__int64)&v32,
                         (__int64)a3);
              if ( !(_DWORD)result )
              {
                *(_QWORD *)(a2 + 560) = *(_QWORD *)&v33[5];
                __printf_chk();
                v24 = v25;
                *(_DWORD *)(a2 + 576) = 1;
                *(_QWORD *)(a2 + 568) = v24;
                goto LABEL_13;
              }
            }
            goto LABEL_22;
          }
          if ( v8 != 5 )
          {
            if ( v8 != 6 )
              goto LABEL_13;
            result = _dwarf_load_section(a1, a1 + 6160, a3);
            if ( !(_DWORD)result )
            {
              v10 = *(_QWORD *)(a1 + 6168);
              v11 = _mm_loadh_ps((const double *)(a1 + 6160));
              if ( v34[9] < v10 )
              {
                v26 = 0;
                v27 = 0;
                v29 = 0;
                memset(v33, 0, 0x68u);
                v28 = 0;
                *(_QWORD *)&v33[2] = v10;
                v30 = 0;
                v31 = 0;
                v32 = 0;
                *((_QWORD *)&v33[3] + 1) = v34[9];
                v25 = v34[9];
                *(__m128 *)((char *)v33 + 8) = v11;
                str_offsets_header = _dwarf_read_str_offsets_header(
                                       (int)v33,
                                       a2,
                                       (int)&v30,
                                       (int)&v26,
                                       (int)&v27,
                                       (int)&v28,
                                       (__int64)&v29,
                                       (__int64)&v31,
                                       (__int64)&v32,
                                       (__int64)a3);
                if ( str_offsets_header )
                {
                  if ( str_offsets_header == 1 )
                  {
                    if ( a3 )
                    {
                      dwarf_dealloc_error(a1, *a3);
                      *a3 = 0;
                    }
                  }
                }
                else
                {
                  v13 = v28;
                  *(_DWORD *)(a2 + 464) = 1;
                  v14 = _mm_loadh_ps((const double *)&v31);
                  *(_WORD *)(a2 + 504) = v13;
                  *(__m128 *)(a2 + 472) = v14;
                  *(__m128 *)(a2 + 488) = _mm_loadh_ps((const double *)&v32);
                }
              }
              goto LABEL_13;
            }
            goto LABEL_22;
          }
          v19 = *(_QWORD *)(a1 + 3376) == 0;
          v31 = 0;
          v32 = 0;
          if ( v19 )
          {
            result = dwarf_load_loclists(a1, &v32, a3);
            if ( (_DWORD)result )
              goto LABEL_22;
          }
          v20 = *(_QWORD *)(a1 + 3384);
          v33[0] = _mm_loadu_si128((const __m128i *)localcontxt_zero);
          v33[1] = _mm_loadu_si128((const __m128i *)&localcontxt_zero[2]);
          v33[2] = _mm_loadu_si128((const __m128i *)&localcontxt_zero[4]);
          v33[3] = _mm_loadu_si128((const __m128i *)&localcontxt_zero[6]);
          v33[4] = _mm_loadu_si128((const __m128i *)&localcontxt_zero[8]);
          v33[5] = _mm_loadu_si128((const __m128i *)&localcontxt_zero[10]);
          v21 = _mm_loadu_si128((const __m128i *)&localcontxt_zero[12]);
          *(_QWORD *)&v33[7] = localcontxt_zero[14];
          v33[6] = v21;
          v25 = v34[20];
          if ( v20 && v34[8] < v20 )
          {
            loclists_header = _dwarf_internal_read_loclists_header(
                                a1,
                                0,
                                0,
                                v20,
                                *(_QWORD *)(a1 + 3376),
                                (unsigned int)*(_QWORD *)(a1 + 3376) + (unsigned int)v20,
                                v34[8],
                                (__int64)v33,
                                (__int64)&v31,
                                (__int64)a3);
            v23 = *((void **)&v33[3] + 1);
            if ( loclists_header )
            {
              LODWORD(v25) = loclists_header;
              free(*((void **)&v33[3] + 1));
              result = (unsigned int)v25;
              if ( (_DWORD)v25 == 1 )
                return result;
            }
            else
            {
              *(_DWORD *)(a2 + 440) = 1;
              *(__m128 *)(a2 + 424) = _mm_loadh_ps((const double *)&v25);
              free(v23);
            }
          }
LABEL_13:
          if ( !v34[++v8 + 15] )
            goto LABEL_14;
        }
        result = _dwarf_load_section(a1, a1 + 2216, a3);
        if ( !(_DWORD)result )
        {
          v18 = _mm_loadh_ps((const double *)&v34[22]);
          if ( v34[10] < *(_QWORD *)(a1 + 2224) )
          {
            *(_DWORD *)(a2 + 528) = 1;
            *(__m128 *)(a2 + 512) = v18;
          }
          goto LABEL_13;
        }
LABEL_22:
        if ( (_DWORD)result == 1 )
          return result;
        goto LABEL_13;
      }
      if ( a3 )
      {
        dwarf_dealloc_error(a1, *a3);
        *a3 = 0;
      }
    }
LABEL_15:
    ++v4;
  }
  while ( off_B71E0 != v4 );
  return 0;
}

