__int64 __fastcall sub_3ADFA0(_QWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  int v5; // ebp
  _QWORD *v6; // r14
  _QWORD *v7; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  char v14; // di
  _QWORD *v15; // rax
  _QWORD *v16; // r11
  __int64 v17; // r8
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  int v20; // edx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // eax
  __int64 *v32; // rdi
  __int64 v33; // rsi
  char *v34; // rdi
  __int64 v35; // r14
  __int64 v36; // r13
  __int64 v37; // r12
  char *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  __int64 *v42; // rax
  int v43; // edi
  __int64 *v44; // rsi
  __int64 v45; // rdx
  int v46; // ecx
  void *v47; // rdi
  __int64 *v48; // rax
  int v49; // edi
  __int64 *i; // rsi
  __int64 v51; // rdx
  int v52; // ecx
  size_t v53; // rdx
  void *v54; // rdi
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdi
  void *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r13
  _QWORD *v64; // [rsp+8h] [rbp-E0h]
  _QWORD *v65; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+18h] [rbp-D0h]
  size_t nb; // [rsp+18h] [rbp-D0h]
  size_t n; // [rsp+18h] [rbp-D0h]
  size_t nd; // [rsp+18h] [rbp-D0h]
  size_t nc; // [rsp+18h] [rbp-D0h]
  __m128i v71; // [rsp+20h] [rbp-C8h] BYREF
  char v72; // [rsp+33h] [rbp-B5h]
  unsigned int v73; // [rsp+34h] [rbp-B4h]
  _QWORD *v74; // [rsp+38h] [rbp-B0h]
  unsigned __int64 *v75; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 *v76; // [rsp+48h] [rbp-A0h] BYREF
  void *v77; // [rsp+50h] [rbp-98h] BYREF
  __int128 v78; // [rsp+58h] [rbp-90h]
  void *v79; // [rsp+70h] [rbp-78h] BYREF
  __int128 v80; // [rsp+78h] [rbp-70h]
  void *v81; // [rsp+90h] [rbp-58h] BYREF
  __int128 v82; // [rsp+98h] [rbp-50h]
  unsigned __int64 v83; // [rsp+A8h] [rbp-40h]

  v73 = a3;
  v83 = __readfsqword(0x28u);
  if ( !a1[1] )
    return 0;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)qword_2C819A8 + 24LL))(
         qword_2C819A8,
         *a1,
         a2,
         a3);
  v72 = a4 | (v5 < 0) | (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_2C819A8 + 56LL))(qword_2C819A8) ^ 1;
  if ( dbg
    && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_2C819A8 + 64LL))(qword_2C819A8) & 0x400) != 0
    && (*(_BYTE *)(dbg + 32LL) & 0x10) == 0 )
  {
    v61 = a1[1];
    if ( 56 * v61 )
    {
      v62 = *a1;
      v63 = *a1;
      do
      {
        if ( !*(_BYTE *)(v63 + 40) )
        {
          invalidate_dbgmem_contents(*(_QWORD *)v63, *(_QWORD *)(v63 + 16));
          v62 = *a1;
          v61 = a1[1];
        }
        v63 += 56;
      }
      while ( v63 != v62 + 56 * v61 );
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_2C819A8 + 40LL))(qword_2C819A8);
  }
  v6 = (_QWORD *)*a1;
  v77 = nullptr;
  v78 = 0;
  v7 = &v6[7 * (int)a2];
  v79 = nullptr;
  v81 = nullptr;
  v80 = 0;
  v82 = 0;
  v8 = *(_QWORD **)(qword_2CCB598 + 1576);
  if ( v7 == v6 )
  {
    v33 = 0;
    v32 = nullptr;
    n = (size_t)&v7[7 * (int)v73];
    if ( v7 != (_QWORD *)n )
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
          v9 = (_QWORD *)v8[17];
          v10 = *v6;
          v11 = v8 + 16;
          if ( !v9 )
            goto LABEL_29;
          do
          {
            while ( 1 )
            {
              v12 = v9[2];
              v13 = v9[3];
              if ( v9[4] < v10 )
                break;
              v11 = v9;
              v9 = (_QWORD *)v9[2];
              if ( !v12 )
                goto LABEL_11;
            }
            v9 = (_QWORD *)v9[3];
          }
          while ( v13 );
LABEL_11:
          if ( v8 + 16 == v11 || v10 < v11[4] )
            goto LABEL_29;
          if ( v5 < 0 )
            break;
          v14 = *((_BYTE *)v6 + 40);
          if ( (unsigned __int8)(v14 - 9) > 1u )
          {
            if ( v14 )
              break;
          }
          v15 = (_QWORD *)v8[11];
          v16 = v8 + 10;
          if ( !v15 )
            goto LABEL_23;
          do
          {
            while ( 1 )
            {
              v17 = v15[2];
              v18 = (_QWORD *)v15[3];
              if ( v15[4] < v10 )
                break;
              v16 = v15;
              v15 = (_QWORD *)v15[2];
              if ( !v17 )
                goto LABEL_21;
            }
            v15 = (_QWORD *)v15[3];
          }
          while ( v18 );
LABEL_21:
          if ( v8 + 10 == v16 || v10 < v16[4] )
          {
LABEL_23:
            v18 = v16;
            na = (size_t)v9;
            v75 = v6;
            v19 = sub_3A9D80(v8 + 9, v16, &v75);
            v14 = *((_BYTE *)v6 + 40);
            v9 = (_QWORD *)na;
            v16 = v19;
          }
          if ( v14 != 9 )
          {
            v20 = *((_DWORD *)v6 + 8);
            if ( v20 == 4 )
            {
              if ( v16[9] )
              {
                if ( !under_debugger )
                  interr(40031);
LABEL_115:
                BUG();
              }
              v53 = v6[2];
              if ( v53 )
              {
                v58 = v6[2];
                v71.m128i_i64[0] = (__int64)v16;
                nc = v53;
                v59 = (void *)qalloc_or_throw(v58);
                v60 = memcpy(v59, (const void *)v6[1], nc);
                v16 = (_QWORD *)v71.m128i_i64[0];
                v53 = nc;
                v9 = v60;
              }
              v54 = (void *)v16[8];
              v55 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
              if ( v54 )
              {
                v16[9] = 0;
                v74 = v9;
                nd = (size_t)v16;
                v71 = v55;
                qfree(v54);
                v9 = v74;
                v55 = _mm_load_si128(&v71);
                v16 = (_QWORD *)nd;
              }
              v16[8] = v9;
              *(__m128i *)(v16 + 9) = v55;
            }
            else
            {
              if ( v14 == 10 )
              {
                v56 = v11[5];
                v57 = v56 + 8LL * v11[6];
                if ( v56 != v57 )
                {
                  do
                  {
                    if ( v20 == *(_DWORD *)(*(_QWORD *)v56 + 64LL) )
                      *(_DWORD *)(*(_QWORD *)v56 + 76LL) |= 0x80u;
                    v56 += 8;
                  }
                  while ( v56 != v57 );
                  v20 = *((_DWORD *)v6 + 8);
                }
                sub_391C60(
                  (int)"AUTOHIDE REGISTRY\n"
                       "IDA will emulate a hardware breakpoint by modifying the page permissions\n"
                       "because it is not possible otherwise (ea=%a perm=%c%c%c len=%d)",
                  *v6,
                  (v20 & 2) == 0 ? 46 : 114,
                  (v20 & 1) == 0 ? 46 : 119,
                  (v20 & 8) == 0 ? 46 : 120,
                  *((unsigned int *)v6 + 9));
              }
              nb = (size_t)v16;
              (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)qword_2C819A8 + 88LL))(qword_2C819A8, v18);
              v16 = (_QWORD *)nb;
            }
          }
          if ( !(unsigned __int8)sub_3AC700(
                                   v16 + 5,
                                   (__int64)(v8 + 15),
                                   (__int64)v11,
                                   *((_DWORD *)v6 + 8),
                                   (__int64 *)&v81,
                                   (__int64 *)&v77) )
            goto LABEL_29;
          sub_3AC140((__int64)v6, (__int64)&v79, &v77);
          v6 += 7;
          if ( v7 == v6 )
            goto LABEL_30;
        }
        v42 = (__int64 *)v11[5];
        v43 = *((_DWORD *)v6 + 8);
        v44 = &v42[v11[6]];
        if ( v42 != v44 )
          break;
LABEL_29:
        v6 += 7;
        if ( v7 == v6 )
          goto LABEL_30;
      }
      do
      {
        v45 = *v42;
        if ( v43 == *(_DWORD *)(*v42 + 64) )
        {
          v46 = *(_DWORD *)(v45 + 76);
          LOBYTE(v46) = v46 & 0x7F;
          *(_DWORD *)(v45 + 76) = v46 | 1;
        }
        ++v42;
      }
      while ( v42 != v44 );
      v6 += 7;
    }
    while ( v7 != v6 );
LABEL_30:
    n = (size_t)&v6[7 * (int)v73];
    if ( (_QWORD *)n != v6 )
    {
      while ( 1 )
      {
LABEL_31:
        v21 = (_QWORD *)v8[11];
        v22 = *v6;
        if ( !v21 )
          goto LABEL_38;
        v23 = v8 + 10;
        do
        {
          while ( 1 )
          {
            v24 = v21[2];
            v25 = v21[3];
            if ( v21[4] < v22 )
              break;
            v23 = v21;
            v21 = (_QWORD *)v21[2];
            if ( !v24 )
              goto LABEL_36;
          }
          v21 = (_QWORD *)v21[3];
        }
        while ( v25 );
LABEL_36:
        if ( v8 + 10 == v23 || v22 < v23[4] )
        {
LABEL_38:
          if ( !under_debugger )
            interr(40032);
          goto LABEL_115;
        }
        if ( !*((_BYTE *)v6 + 40) )
          goto LABEL_43;
        if ( v72 )
          break;
        v48 = (__int64 *)v23[5];
        v49 = *((_DWORD *)v6 + 8);
        for ( i = &v48[v23[6]]; i != v48; ++v48 )
        {
          v51 = *v48;
          if ( v49 == *(_DWORD *)(*v48 + 64) )
          {
            v52 = *(_DWORD *)(v51 + 76);
            LOBYTE(v52) = v52 & 0x7F;
            *(_DWORD *)(v51 + 76) = v52 | 1;
          }
        }
LABEL_55:
        v6 += 7;
        if ( v6 == (_QWORD *)n )
          goto LABEL_56;
      }
      v5 += (unsigned int)v5 < 0x80000000;
LABEL_43:
      v26 = (_QWORD *)v8[17];
      v27 = v8 + 16;
      if ( !v26 )
        goto LABEL_50;
      do
      {
        while ( 1 )
        {
          v28 = v26[2];
          v29 = v26[3];
          if ( v26[4] < v22 )
            break;
          v27 = v26;
          v26 = (_QWORD *)v26[2];
          if ( !v28 )
            goto LABEL_48;
        }
        v26 = (_QWORD *)v26[3];
      }
      while ( v29 );
LABEL_48:
      if ( v27 == v8 + 16 || v22 < v27[4] )
      {
LABEL_50:
        v76 = v6;
        v27 = sub_3A9D80(v8 + 15, v27, &v76);
      }
      v30 = *((_DWORD *)v6 + 8);
      if ( v30 == 4 )
      {
        v47 = (void *)v23[8];
        if ( v47 )
        {
          v23[9] = 0;
          v65 = v27;
          qfree(v47);
          v23[8] = 0;
          v27 = v65;
          v23[10] = 0;
          v30 = *((_DWORD *)v6 + 8);
        }
      }
      else
      {
        v64 = v27;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_2C819A8 + 88LL))(qword_2C819A8);
        v30 = *((_DWORD *)v6 + 8);
        v27 = v64;
      }
      if ( (unsigned __int8)sub_3AC700(v27 + 5, (__int64)(v8 + 9), (__int64)v23, v30, (__int64 *)&v81, (__int64 *)&v77) )
        sub_3AC140((__int64)v6, (__int64)&v79, &v77);
      goto LABEL_55;
    }
LABEL_56:
    if ( (_QWORD)v80 )
    {
      v31 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)qword_2C819A8 + 32LL))(qword_2C819A8, v79);
      if ( v31 < 0 )
      {
        v5 = v31;
        goto LABEL_61;
      }
      if ( v31 != (_QWORD)v80 )
        sub_368890();
    }
    v32 = (__int64 *)v81;
    v33 = v82;
  }
  sub_3AB720(v32, v33);
LABEL_61:
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  v34 = (char *)v79;
  if ( v79 )
  {
    v35 = v80;
    if ( (_QWORD)v80 )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = &v34[v36];
        v39 = *(void **)&v34[v36 + 40];
        if ( v39 )
        {
          *((_QWORD *)v38 + 6) = 0;
          qfree(v39);
        }
        v40 = *((void **)v38 + 1);
        if ( v40 )
        {
          *((_QWORD *)v38 + 2) = 0;
          qfree(v40);
        }
        ++v37;
        v34 = (char *)v79;
        v36 += 432;
      }
      while ( v35 != v37 );
    }
    *(_QWORD *)&v80 = 0;
    qfree(v34);
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  return (unsigned int)v5;
}
