__int64 __fastcall sub_3A98C0(unsigned int **a1, unsigned int a2, unsigned int a3, char a4)
{
  int v5; // ebp
  __int64 v6; // r9
  unsigned int *v7; // r14
  unsigned int *v8; // r13
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // di
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 *v37; // rdi
  __int64 v38; // rsi
  char *v39; // rdi
  __int64 v40; // r13
  __int64 v41; // r12
  char *v42; // rbx
  void *v43; // rdi
  void *v44; // rdi
  __int64 *v46; // rax
  unsigned int v47; // edi
  __int64 *v48; // rsi
  __int64 v49; // rdx
  int v50; // ecx
  void *v51; // rdi
  __int64 *v52; // rax
  unsigned int v53; // edi
  __int64 *i; // rsi
  __int64 v55; // rdx
  int v56; // ecx
  size_t v57; // rdx
  void *v58; // rdi
  __m128i v59; // xmm0
  __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rdi
  void *v63; // rax
  _QWORD *v64; // rax
  unsigned int *v65; // rdx
  unsigned int *v66; // rcx
  unsigned int *v67; // r13
  __int64 v68; // [rsp+8h] [rbp-E0h]
  __int64 v69; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+18h] [rbp-D0h]
  size_t nb; // [rsp+18h] [rbp-D0h]
  size_t n; // [rsp+18h] [rbp-D0h]
  size_t nd; // [rsp+18h] [rbp-D0h]
  size_t nc; // [rsp+18h] [rbp-D0h]
  __m128i v75; // [rsp+20h] [rbp-C8h] BYREF
  char v76; // [rsp+33h] [rbp-B5h]
  unsigned int v77; // [rsp+34h] [rbp-B4h]
  _QWORD *v78; // [rsp+38h] [rbp-B0h]
  unsigned int *v79; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int *v80; // [rsp+48h] [rbp-A0h] BYREF
  void *v81; // [rsp+50h] [rbp-98h] BYREF
  __int128 v82; // [rsp+58h] [rbp-90h]
  void *v83; // [rsp+70h] [rbp-78h] BYREF
  __int128 v84; // [rsp+78h] [rbp-70h]
  void *v85; // [rsp+90h] [rbp-58h] BYREF
  __int128 v86; // [rsp+98h] [rbp-50h]
  unsigned __int64 v87; // [rsp+A8h] [rbp-40h]

  v77 = a3;
  v87 = __readfsqword(0x28u);
  if ( !a1[1] )
    return 0;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD))(*(_QWORD *)qword_2C57988 + 24LL))(
         qword_2C57988,
         *a1,
         a2,
         a3);
  v76 = a4 | (v5 < 0) | (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_2C57988 + 56LL))(qword_2C57988) ^ 1;
  if ( dbg
    && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_2C57988 + 64LL))(qword_2C57988) & 0x400) != 0
    && (*(_BYTE *)(dbg + 32LL) & 0x10) == 0 )
  {
    v65 = a1[1];
    if ( 56LL * (_QWORD)v65 )
    {
      v66 = *a1;
      v67 = *a1;
      do
      {
        if ( !*((_BYTE *)v67 + 40) )
        {
          invalidate_dbgmem_contents(*v67, v67[4]);
          v66 = *a1;
          v65 = a1[1];
        }
        v67 += 14;
      }
      while ( v67 != &v66[14 * (_QWORD)v65] );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_2C57988 + 40LL))(qword_2C57988);
  }
  v7 = *a1;
  v81 = nullptr;
  v82 = 0;
  v8 = &v7[14 * a2];
  v83 = nullptr;
  v85 = nullptr;
  v84 = 0;
  v86 = 0;
  v9 = *(_QWORD **)(qword_2CA1698 + 1384);
  if ( v8 == v7 )
  {
    v38 = 0;
    v37 = nullptr;
    n = (size_t)&v8[14 * v77];
    if ( v8 != (unsigned int *)n )
      goto LABEL_31;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (_QWORD *)v9[17];
          v11 = *v7;
          v12 = (__int64)(v9 + 16);
          if ( !v10 )
            goto LABEL_29;
          do
          {
            while ( 1 )
            {
              v13 = v10[2];
              v14 = v10[3];
              if ( *((_DWORD *)v10 + 8) < v11 )
                break;
              v12 = (__int64)v10;
              v10 = (_QWORD *)v10[2];
              if ( !v13 )
                goto LABEL_11;
            }
            v10 = (_QWORD *)v10[3];
          }
          while ( v14 );
LABEL_11:
          if ( v9 + 16 == (_QWORD *)v12 || v11 < *(_DWORD *)(v12 + 32) )
            goto LABEL_29;
          if ( v5 < 0 )
            break;
          v15 = *((_BYTE *)v7 + 40);
          if ( (unsigned __int8)(v15 - 9) > 1u )
          {
            if ( v15 )
              break;
          }
          v16 = v9[11];
          v17 = (__int64)(v9 + 10);
          if ( !v16 )
            goto LABEL_23;
          do
          {
            while ( 1 )
            {
              v18 = *(_QWORD *)(v16 + 16);
              v19 = *(_QWORD *)(v16 + 24);
              if ( *(_DWORD *)(v16 + 32) < v11 )
                break;
              v17 = v16;
              v16 = *(_QWORD *)(v16 + 16);
              if ( !v18 )
                goto LABEL_21;
            }
            v16 = *(_QWORD *)(v16 + 24);
          }
          while ( v19 );
LABEL_21:
          if ( v9 + 10 == (_QWORD *)v17 || v11 < *(_DWORD *)(v17 + 32) )
          {
LABEL_23:
            v19 = v17;
            na = (size_t)v10;
            v79 = v7;
            v20 = sub_3A56C0(v9 + 9, v17, &v79);
            v15 = *((_BYTE *)v7 + 40);
            v10 = (_QWORD *)na;
            v17 = v20;
          }
          if ( v15 != 9 )
          {
            v21 = v7[8];
            if ( v21 == 4 )
            {
              if ( *(_QWORD *)(v17 + 72) )
              {
                if ( !under_debugger )
                  interr(40031);
LABEL_115:
                BUG();
              }
              v57 = *((_QWORD *)v7 + 2);
              if ( v57 )
              {
                v62 = *((_QWORD *)v7 + 2);
                v75.m128i_i64[0] = v17;
                nc = v57;
                v63 = (void *)qalloc_or_throw(v62, v19, v57, v10, v18, v6);
                v64 = memcpy(v63, *((const void **)v7 + 1), nc);
                v17 = v75.m128i_i64[0];
                v57 = nc;
                v10 = v64;
              }
              v58 = *(void **)(v17 + 64);
              v59 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
              if ( v58 )
              {
                *(_QWORD *)(v17 + 72) = 0;
                v78 = v10;
                nd = v17;
                v75 = v59;
                qfree(v58);
                v10 = v78;
                v59 = _mm_load_si128(&v75);
                v17 = nd;
              }
              *(_QWORD *)(v17 + 64) = v10;
              *(__m128i *)(v17 + 72) = v59;
            }
            else
            {
              if ( v15 == 10 )
              {
                v60 = *(_QWORD *)(v12 + 40);
                v61 = v60 + 8LL * *(_QWORD *)(v12 + 48);
                if ( v60 != v61 )
                {
                  do
                  {
                    if ( v21 == *(_DWORD *)(*(_QWORD *)v60 + 56LL) )
                      *(_DWORD *)(*(_QWORD *)v60 + 68LL) |= 0x80u;
                    v60 += 8;
                  }
                  while ( v60 != v61 );
                  v21 = v7[8];
                }
                sub_38CF20(
                  (int)"AUTOHIDE REGISTRY\n"
                       "IDA will emulate a hardware breakpoint by modifying the page permissions\n"
                       "because it is not possible otherwise (ea=%a perm=%c%c%c len=%d)",
                  *v7,
                  (v21 & 2) == 0 ? 46 : 114,
                  (v21 & 1) == 0 ? 46 : 119,
                  (v21 & 8) == 0 ? 46 : 120,
                  v7[9]);
              }
              nb = v17;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_2C57988 + 88LL))(qword_2C57988, v19);
              v17 = nb;
            }
          }
          if ( !(unsigned __int8)sub_3A8020(
                                   (__int64 *)(v17 + 40),
                                   (__int64)(v9 + 15),
                                   v12,
                                   v7[8],
                                   (__int64 *)&v85,
                                   (__int64 *)&v81) )
            goto LABEL_29;
          sub_3A7900(v7, (__int64 *)&v83, (__int64 *)&v81, v22, v23);
          v7 += 14;
          if ( v8 == v7 )
            goto LABEL_30;
        }
        v46 = *(__int64 **)(v12 + 40);
        v47 = v7[8];
        v48 = &v46[*(_QWORD *)(v12 + 48)];
        if ( v46 != v48 )
          break;
LABEL_29:
        v7 += 14;
        if ( v8 == v7 )
          goto LABEL_30;
      }
      do
      {
        v49 = *v46;
        if ( v47 == *(_DWORD *)(*v46 + 56) )
        {
          v50 = *(_DWORD *)(v49 + 68);
          LOBYTE(v50) = v50 & 0x7F;
          *(_DWORD *)(v49 + 68) = v50 | 1;
        }
        ++v46;
      }
      while ( v46 != v48 );
      v7 += 14;
    }
    while ( v8 != v7 );
LABEL_30:
    n = (size_t)&v7[14 * v77];
    if ( (unsigned int *)n != v7 )
    {
      while ( 1 )
      {
LABEL_31:
        v24 = v9[11];
        v25 = *v7;
        if ( !v24 )
          goto LABEL_38;
        v26 = (__int64)(v9 + 10);
        do
        {
          while ( 1 )
          {
            v27 = *(_QWORD *)(v24 + 16);
            v28 = *(_QWORD *)(v24 + 24);
            if ( *(_DWORD *)(v24 + 32) < v25 )
              break;
            v26 = v24;
            v24 = *(_QWORD *)(v24 + 16);
            if ( !v27 )
              goto LABEL_36;
          }
          v24 = *(_QWORD *)(v24 + 24);
        }
        while ( v28 );
LABEL_36:
        if ( v9 + 10 == (_QWORD *)v26 || v25 < *(_DWORD *)(v26 + 32) )
        {
LABEL_38:
          if ( !under_debugger )
            interr(40032);
          goto LABEL_115;
        }
        if ( !*((_BYTE *)v7 + 40) )
          goto LABEL_43;
        if ( v76 )
          break;
        v52 = *(__int64 **)(v26 + 40);
        v53 = v7[8];
        for ( i = &v52[*(_QWORD *)(v26 + 48)]; v52 != i; ++v52 )
        {
          v55 = *v52;
          if ( v53 == *(_DWORD *)(*v52 + 56) )
          {
            v56 = *(_DWORD *)(v55 + 68);
            LOBYTE(v56) = v56 & 0x7F;
            *(_DWORD *)(v55 + 68) = v56 | 1;
          }
        }
LABEL_55:
        v7 += 14;
        if ( v7 == (unsigned int *)n )
          goto LABEL_56;
      }
      v5 += (unsigned int)v5 < 0x80000000;
LABEL_43:
      v29 = v9[17];
      v30 = (__int64)(v9 + 16);
      if ( !v29 )
        goto LABEL_50;
      do
      {
        while ( 1 )
        {
          v31 = *(_QWORD *)(v29 + 16);
          v32 = *(_QWORD *)(v29 + 24);
          if ( *(_DWORD *)(v29 + 32) < v25 )
            break;
          v30 = v29;
          v29 = *(_QWORD *)(v29 + 16);
          if ( !v31 )
            goto LABEL_48;
        }
        v29 = *(_QWORD *)(v29 + 24);
      }
      while ( v32 );
LABEL_48:
      if ( (_QWORD *)v30 == v9 + 16 || v25 < *(_DWORD *)(v30 + 32) )
      {
LABEL_50:
        v80 = v7;
        v30 = sub_3A56C0(v9 + 15, v30, &v80);
      }
      v33 = v7[8];
      if ( v33 == 4 )
      {
        v51 = *(void **)(v26 + 64);
        if ( v51 )
        {
          *(_QWORD *)(v26 + 72) = 0;
          v69 = v30;
          qfree(v51);
          *(_QWORD *)(v26 + 64) = 0;
          v30 = v69;
          *(_QWORD *)(v26 + 80) = 0;
          v33 = v7[8];
        }
      }
      else
      {
        v68 = v30;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_2C57988 + 88LL))(qword_2C57988);
        v33 = v7[8];
        v30 = v68;
      }
      if ( (unsigned __int8)sub_3A8020(
                              (__int64 *)(v30 + 40),
                              (__int64)(v9 + 9),
                              v26,
                              v33,
                              (__int64 *)&v85,
                              (__int64 *)&v81) )
        sub_3A7900(v7, (__int64 *)&v83, (__int64 *)&v81, v34, v35);
      goto LABEL_55;
    }
LABEL_56:
    if ( (_QWORD)v84 )
    {
      v36 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)qword_2C57988 + 32LL))(qword_2C57988, v83);
      if ( v36 < 0 )
      {
        v5 = v36;
        goto LABEL_61;
      }
      if ( v36 != (_QWORD)v84 )
        sub_365330();
    }
    v37 = (__int64 *)v85;
    v38 = v86;
  }
  sub_3A6F00(v37, v38);
LABEL_61:
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  v39 = (char *)v83;
  if ( v83 )
  {
    v40 = v84;
    if ( (_QWORD)v84 )
    {
      v41 = 0;
      do
      {
        v42 = &v39[288 * v41];
        v43 = *((void **)v42 + 5);
        if ( v43 )
        {
          *((_QWORD *)v42 + 6) = 0;
          qfree(v43);
        }
        v44 = *((void **)v42 + 1);
        if ( v44 )
        {
          *((_QWORD *)v42 + 2) = 0;
          qfree(v44);
        }
        ++v41;
        v39 = (char *)v83;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v39);
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  return (unsigned int)v5;
}

