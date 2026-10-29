void __fastcall sub_E4BC50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // r15
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  _BYTE *(__fastcall *v14)(__int64, const __m128i *, __int64); // rax
  __int64 v15; // rbp
  __int8 v16; // al
  _BYTE *v17; // rax
  __int64 v18; // rbp
  __int64 *v19; // rdx
  size_t v20; // r12
  _BYTE *v21; // r14
  _BYTE *v22; // r15
  unsigned __int64 v23; // r13
  const char *v24; // rdi
  void *v25; // rdi
  __int32 v26; // eax
  char v27; // al
  __int32 v28; // r8d
  char v29; // cl
  __int64 v30; // rax
  _BYTE *v31; // rax
  __int64 v32; // rax
  void *v33; // rdi
  unsigned int *v34; // rsi
  size_t v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rax
  bool v40; // zf
  unsigned __int64 v41; // rcx
  _BYTE *v42; // rax
  unsigned int v43; // r13d
  unsigned __int8 v44; // al
  _QWORD *v45; // r15
  unsigned __int64 v46; // rbp
  __int64 v47; // r14
  __int64 v48; // rax
  __int8 v49; // al
  _BYTE *v50; // rax
  _BYTE *v51; // rax
  __m128i *v52; // rdx
  _BYTE *v53; // rax
  void *v54; // rdx
  unsigned __int64 v55; // rax
  __m128 v56; // [rsp+0h] [rbp-88h] BYREF
  __int64 v57; // [rsp+10h] [rbp-78h]
  char v58; // [rsp+1Fh] [rbp-69h]
  __m128i v59; // [rsp+20h] [rbp-68h]
  __m128i si128; // [rsp+30h] [rbp-58h] BYREF
  __int16 v61; // [rsp+40h] [rbp-48h]
  __int16 v62; // [rsp+42h] [rbp-46h]
  __int32 v63; // [rsp+44h] [rbp-44h]

  v6 = (__m128i *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v9 = a1[1];
  if ( (*(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 29) & 1) == 0 )
    goto LABEL_6;
  v10 = sub_B68690(a2 & 0xFFFFFFFFFFFFFFF8LL, a2, a3, a4, a5, a6);
  v11 = (_QWORD *)*v10;
  v12 = *v10 + 8LL * *((unsigned int *)v10 + 2);
  if ( (unsigned __int64)v11 >= v12 )
  {
    if ( v11 != (_QWORD *)v12 )
    {
      while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 139 )
      {
        v12 += 8LL;
        if ( v11 == (_QWORD *)v12 )
          goto LABEL_6;
      }
      goto LABEL_17;
    }
LABEL_6:
    if ( (v6[1].m128i_i8[12] & 0x7F) == 0x1F )
    {
      v14 = *(_BYTE *(__fastcall **)(__int64, const __m128i *, __int64))(*a1 + 136LL);
      if ( v14 == sub_E4B060 )
      {
        v15 = 0;
        v59 = _mm_loadu_si128(v6 + 4);
        v56.m128_u64[0] = (unsigned __int64)"%02x";
        si128.m128i_i64[0] = (__int64)off_2BD9770;
        si128.m128i_i64[1] = (__int64)"_GUID_%08x_%04x_%04x_";
        v61 = v59.m128i_i16[3];
        v56 = _mm_loadh_ps((const double *)v56.m128_u64);
        v62 = v59.m128i_i16[2];
        v63 = v59.m128i_i32[0];
        sub_2258820(a4, &si128);
        si128 = _mm_load_si128((const __m128i *)&v56);
        LOBYTE(v61) = v59.m128i_i8[8];
        sub_2258820(a4, &si128);
        do
        {
          v16 = v59.m128i_i8[v15 + 9];
          si128 = _mm_load_si128((const __m128i *)&v56);
          LOBYTE(v61) = v16;
          sub_2258820(a4, &si128);
          if ( !(_DWORD)v15 )
          {
            v17 = *(_BYTE **)(a4 + 32);
            if ( *(_BYTE **)(a4 + 24) == v17 )
            {
              sub_22581D0(a4, "_", 1);
            }
            else
            {
              *v17 = 95;
              ++*(_QWORD *)(a4 + 32);
            }
          }
          ++v15;
        }
        while ( v15 != 7 );
      }
      else
      {
        v14((__int64)a1, v6, a4);
      }
    }
    else
    {
      v26 = sub_E4AE70(v9, (__int64)v6);
      if ( v26 == 5 )
      {
        v52 = *(__m128i **)(a4 + 32);
        if ( *(_QWORD *)(a4 + 24) - (_QWORD)v52 > 0xFu )
        {
          *v52 = _mm_load_si128((const __m128i *)&xmmword_2384ED0);
          *(_QWORD *)(a4 + 32) += 16LL;
        }
        else
        {
          sub_22581D0(a4, "__main_argc_argv", 16);
        }
      }
      else
      {
        v56.m128_i32[0] = v26;
        v27 = (*(__int64 (__fastcall **)(_QWORD *, __m128i *))(*a1 + 40LL))(a1, v6);
        v28 = v56.m128_i32[0];
        v29 = v27;
        if ( !v56.m128_i32[0]
          || (v30 = *(_QWORD *)(a1[1] + 17448LL), v56.m128_u64[0] = v30, v29) && *(_DWORD *)(v30 + 340) == 10 )
        {
          if ( (v6[1].m128i_i8[12] & 0x7F) == 0x12 )
            sub_E4BB20((__int64)a1, (__int64)v6, a4);
          else
            (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 72LL))(a1, a2, a3, a4);
        }
        else
        {
          v31 = *(_BYTE **)(a4 + 32);
          if ( (unsigned __int64)v31 >= *(_QWORD *)(a4 + 24) )
          {
            v58 = v29;
            LODWORD(v57) = v28;
            sub_2257CD0(a4, 1);
            v28 = v57;
            v29 = v58;
          }
          else
          {
            *(_QWORD *)(a4 + 32) = v31 + 1;
            *v31 = 1;
          }
          switch ( v28 )
          {
            case 4:
              v50 = *(_BYTE **)(a4 + 32);
              if ( (unsigned __int64)v50 >= *(_QWORD *)(a4 + 24) )
              {
                v58 = v29;
                LODWORD(v57) = 4;
                sub_2257CD0(a4, 95);
                v28 = 4;
                v29 = v58;
              }
              else
              {
                *(_QWORD *)(a4 + 32) = v50 + 1;
                *v50 = 95;
              }
              break;
            case 1:
              v51 = *(_BYTE **)(a4 + 32);
              if ( (unsigned __int64)v51 >= *(_QWORD *)(a4 + 24) )
              {
                v58 = v29;
                LODWORD(v57) = 1;
                sub_2257CD0(a4, 64);
                v28 = 1;
                v29 = v58;
              }
              else
              {
                *(_QWORD *)(a4 + 32) = v51 + 1;
                *v51 = 64;
              }
              break;
            case 2:
              v54 = *(void **)(a4 + 32);
              v55 = *(_QWORD *)(a4 + 24) - (_QWORD)v54;
              if ( (*(_BYTE *)(*(_QWORD *)(a1[1] + 2320LL) + 164LL) & 4) != 0 )
              {
                if ( v55 > 0xB )
                {
                  qmemcpy(v54, "__regcall4__", 12);
                  *(_QWORD *)(a4 + 32) += 12LL;
                }
                else
                {
                  v58 = v29;
                  LODWORD(v57) = 2;
                  sub_22581D0(a4, "__regcall4__", 12);
                  v28 = 2;
                  v29 = v58;
                }
              }
              else if ( v55 > 0xB )
              {
                qmemcpy(v54, "__regcall3__", 12);
                *(_QWORD *)(a4 + 32) += 12LL;
              }
              else
              {
                v58 = v29;
                LODWORD(v57) = 2;
                sub_22581D0(a4, "__regcall3__", 12);
                v28 = 2;
                v29 = v58;
              }
              break;
          }
          if ( v29 )
          {
            v49 = v6[1].m128i_i8[12];
            LODWORD(v57) = v28;
            if ( (v49 & 0x7F) == 0x12 )
            {
              a2 &= 0xFFFFFFFFFFFFFFF8LL;
              sub_E4BB20((__int64)a1, (__int64)v6, a4);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 72LL))(a1, a2, a3, a4);
            }
            v28 = v57;
          }
          else
          {
            v32 = v6[2].m128i_i64[1];
            if ( (v32 & 7) != 0 )
              BUG();
            v33 = *(void **)(a4 + 32);
            v34 = *(unsigned int **)((v32 & 0xFFFFFFFFFFFFFFF8LL) + 16);
            v35 = *v34;
            a2 = (__int64)(v34 + 4);
            if ( v35 > *(_QWORD *)(a4 + 24) - (_QWORD)v33 )
            {
              LODWORD(v57) = v28;
              sub_22581D0(a4, a2, v35);
              v28 = v57;
            }
            else if ( v35 )
            {
              LODWORD(v57) = v28;
              memcpy(v33, (const void *)a2, v35);
              *(_QWORD *)(a4 + 32) += v35;
              v28 = v57;
            }
          }
          v36 = *(_QWORD *)(v6[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
          v37 = *(unsigned __int8 *)(v36 + 16);
          if ( (unsigned int)(v37 - 25) > 1 )
          {
            v38 = *(_QWORD *)(v6[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
            LODWORD(v57) = v28;
            v39 = sub_F3F310(v38, a2, v36, v37);
            v28 = v57;
            LOBYTE(v37) = *(_BYTE *)(v39 + 16);
            v36 = v39;
          }
          v40 = (_BYTE)v37 == 26;
          v41 = *(_QWORD *)(a4 + 24);
          if ( !v40 )
            v36 = 0;
          v42 = *(_BYTE **)(a4 + 32);
          if ( v28 == 3 )
          {
            if ( (unsigned __int64)v42 >= v41 )
            {
              a2 = 64;
              v57 = v36;
              sub_2257CD0(a4, 64);
              v42 = *(_BYTE **)(a4 + 32);
              v41 = *(_QWORD *)(a4 + 24);
              v36 = v57;
            }
            else
            {
              *(_QWORD *)(a4 + 32) = v42 + 1;
              *v42 = 64;
              v42 = *(_BYTE **)(a4 + 32);
              v41 = *(_QWORD *)(a4 + 24);
            }
          }
          if ( v41 <= (unsigned __int64)v42 )
          {
            a2 = 64;
            v57 = v36;
            sub_2257CD0(a4, 64);
            v36 = v57;
          }
          else
          {
            *(_QWORD *)(a4 + 32) = v42 + 1;
            *v42 = 64;
          }
          if ( v36 )
          {
            v43 = 0;
            if ( (v6[1].m128i_i8[12] & 0x7Fu) - 35 <= 3 )
            {
              v57 = v36;
              v44 = sub_B744C0(v6, a2);
              v36 = v57;
              v43 = v44;
            }
            v45 = (_QWORD *)(v36 + 48);
            v46 = *(unsigned __int8 *)(v56.m128_u64[0] + 8);
            v47 = v36 + 48 + 8LL * *(unsigned __int16 *)(v36 + 22);
            if ( v47 != v36 + 48 )
            {
              do
              {
                if ( (unsigned __int8)sub_F3E930(*(_QWORD *)(*v45 & 0xFFFFFFFFFFFFFFF0LL), 0) )
                  break;
                v48 = sub_A73FE0(v9, *(_QWORD *)(*v45++ & 0xFFFFFFFFFFFFFFF0LL));
                v43 += v46 * ((v48 != 0) + (v48 - (unsigned __int64)(v48 != 0)) / v46) / v46;
              }
              while ( (_QWORD *)v47 != v45 );
            }
            sub_2257BD0(a4, (v46 >> 3) * v43);
          }
          else
          {
            v53 = *(_BYTE **)(a4 + 32);
            if ( (unsigned __int64)v53 >= *(_QWORD *)(a4 + 24) )
            {
              sub_2257CD0(a4, 48);
            }
            else
            {
              *(_QWORD *)(a4 + 32) = v53 + 1;
              *v53 = 48;
            }
          }
        }
      }
    }
    return;
  }
  v13 = v11;
  while ( *(_WORD *)(*v13 + 36LL) != 139 )
  {
    if ( (_QWORD *)v12 == ++v13 )
      goto LABEL_6;
  }
  if ( (_QWORD *)v12 == v13 )
    goto LABEL_6;
LABEL_17:
  v18 = *v11;
  if ( *(_WORD *)(*v11 + 36LL) != 139 )
  {
    v19 = v11 + 1;
    do
      v18 = *v19++;
    while ( *(_WORD *)(v18 + 36) != 139 );
  }
  v20 = *(unsigned int *)(v18 + 40);
  v21 = *(_BYTE **)(v18 + 48);
  if ( !*(_BYTE *)(v18 + 56) || (unsigned int)v20 > 4 && *(_DWORD *)v21 == 1836477548 && v21[4] == 46 )
  {
    v25 = *(void **)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) - (_QWORD)v25 >= v20 )
    {
      if ( *(_DWORD *)(v18 + 40) )
      {
        memcpy(v25, *(const void **)(v18 + 48), *(unsigned int *)(v18 + 40));
        *(_QWORD *)(a4 + 32) += v20;
      }
      return;
    }
LABEL_31:
    sub_22581D0(a4, v21, v20);
    return;
  }
  v22 = *(_BYTE **)(a4 + 32);
  v23 = *(_QWORD *)(a4 + 24);
  v24 = *(const char **)(*(_QWORD *)(a1[1] + 17448LL) + 320LL);
  if ( v24 && strlen(v24) )
  {
    if ( v23 <= (unsigned __int64)v22 )
    {
      sub_2257CD0(a4, 1);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = v22 + 1;
      *v22 = 1;
    }
    v21 = *(_BYTE **)(v18 + 48);
    v20 = *(unsigned int *)(v18 + 40);
    v23 = *(_QWORD *)(a4 + 24);
    v22 = *(_BYTE **)(a4 + 32);
  }
  if ( v23 - (unsigned __int64)v22 < v20 )
    goto LABEL_31;
  if ( v20 )
  {
    memcpy(v22, v21, v20);
    *(_QWORD *)(a4 + 32) += v20;
  }
}

