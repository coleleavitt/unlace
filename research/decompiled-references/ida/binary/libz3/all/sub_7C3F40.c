__int64 __fastcall sub_7C3F40(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 v10; // rdi
  unsigned int *v11; // rcx
  int v12; // edx
  __int64 v13; // rsi
  unsigned int *v14; // rax
  unsigned int *v15; // rdx
  unsigned int v16; // r12d
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // r13
  __int64 v22; // r11
  unsigned int v23; // ebx
  __int64 v24; // r10
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  unsigned int v27; // eax
  __int64 v28; // r8
  unsigned int *v29; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  __int64 v37; // rcx
  __int64 *v38; // r8
  int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int *v52; // r12
  unsigned __int64 v53; // r15
  unsigned int v54; // esi
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned int *v57; // rax
  signed __int64 v58; // rdx
  __int64 v59; // rdi
  int *v60; // r15
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 v63; // r8
  int *v64; // r12
  int *v65; // r15
  int v66; // esi
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // [rsp+28h] [rbp-80h]
  __int64 v73; // [rsp+28h] [rbp-80h]
  __int64 v74; // [rsp+28h] [rbp-80h]
  char v75; // [rsp+3Fh] [rbp-69h] BYREF
  int v76; // [rsp+40h] [rbp-68h] BYREF
  __int64 v77; // [rsp+48h] [rbp-60h]
  __m128i v78; // [rsp+50h] [rbp-58h] BYREF
  __int64 v79; // [rsp+60h] [rbp-48h]

  if ( !*(_DWORD *)(a1 + 848) )
    return 0;
  v10 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v10 + 376) == 1 )
    return sub_7C38A0(a1);
  v11 = *(unsigned int **)(a1 + 800);
  *(_BYTE *)(a1 + 996) = 0;
  if ( v11 )
  {
    v12 = *(v11 - 1);
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 792);
      v14 = &v11[v12 - 1];
      do
      {
        *(_QWORD *)(v13 + 8LL * *v14) = 0;
        v15 = v14--;
      }
      while ( v11 != v15 );
    }
    *(v11 - 1) = 0;
  }
  *(_DWORD *)(a1 + 784) = 0;
  *(_DWORD *)(a1 + 808) = 0;
  v16 = *(_DWORD *)(v10 + 3216);
  v17 = _mm_loadu_si128((const __m128i *)(v10 + 3192));
  v18 = *(_QWORD *)(v10 + 3208);
  v19 = v16;
  v78 = v17;
  v79 = v18;
  v20 = sub_11B6490(v10, v16, (unsigned int)&v75, (_DWORD)v11, a8, a9, v17.m128i_i32[0], v17.m128i_i64[1], v18);
  *(_DWORD *)(a1 + 788) = v20;
  if ( !v20 )
    return 0;
  if ( v16 != -2 )
  {
    v16 ^= 1u;
    v10 = a1;
    v19 = v16;
    sub_7C03E0(a1, v16, 1u, *(double *)v17.m128i_i64);
  }
  v21 = *(_QWORD *)(a1 + 24);
  v22 = *(_QWORD *)(v21 + 3784);
  if ( v22 )
    v23 = *(_DWORD *)(v22 - 4) - 1;
  else
    v23 = -1;
  v24 = *(_QWORD *)(a1 + 24);
  v25 = 1;
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 996) || v25 > 0x1000 )
      goto LABEL_73;
    if ( v25 )
    {
      if ( byte_1C7EBD0 )
      {
        sub_180B130(v10);
        if ( (unsigned __int8)sub_186A530(*(double *)v17.m128i_i64) )
        {
          sub_186A4C0(*(double *)v17.m128i_i64);
          v43 = sub_180B150(v10, v19);
          sub_7C5DC0(v43, v16);
          std::operator<<<std::char_traits<char>>();
          v72 = *(_QWORD *)(a1 + 24);
          v44 = sub_180B150(v72, "\n");
          sub_11B7860(v72, v44, &v78);
          v45 = sub_180B150(v72, v44);
          std::operator<<<std::char_traits<char>>();
          sub_186A500(v45, "\n");
        }
        else
        {
          v55 = sub_180B150(v10, v19);
          sub_7C5DC0(v55, v16);
          std::operator<<<std::char_traits<char>>();
          v73 = *(_QWORD *)(a1 + 24);
          v56 = sub_180B150(v73, "\n");
          sub_11B7860(v73, v56, &v78);
          sub_180B150(v73, v56);
          std::operator<<<std::char_traits<char>>();
        }
        dword_1C7DF70 = v16;
      }
      v26 = v79 & 7;
      if ( v26 == 2 )
      {
        v46 = v78.m128i_i64[1];
        v47 = *(_DWORD *)(a1 + 808);
        *(_BYTE *)(a1 + 996) |= (__int64)(v47 + (unsigned __int64)v25) > 0xFFFFFFFFLL;
        v48 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 808) = v25 + v47;
        v49 = sub_1170D10(v48 + (-*(unsigned __int8 *)(v48 + 2352) & 0x238) + 1216, v46);
        v50 = v49;
        if ( v16 == -2 )
        {
          v26 = 0;
        }
        else
        {
          v74 = v49;
          sub_7C00D0(a1, v16, v25);
          v50 = v74;
          if ( v16 == *(_DWORD *)(v74 + 20) )
          {
            v26 = 1;
          }
          else
          {
            sub_7C03E0(a1, *(_DWORD *)(v74 + 20), v25, *(double *)v17.m128i_i64);
            v50 = v74;
          }
        }
        v51 = *(_DWORD *)(v50 + 4);
        if ( v26 < v51 )
        {
          v52 = (unsigned int *)(v50 + 4LL * v26 + 20);
          v53 = v50 + 4 * (v26 + (unsigned __int64)(v51 - 1 - v26)) + 24;
          do
          {
            v54 = *v52++;
            sub_7C03E0(a1, v54, v25, *(double *)v17.m128i_i64);
          }
          while ( v52 != (unsigned int *)v53 );
        }
      }
      else if ( v26 > 2 )
      {
        if ( v26 != 3 )
        {
          sub_1872CE0("");
          sub_1873130(114, 747);
        }
        if ( a1 != *(_QWORD *)v78.m128i_i64[1] )
          goto LABEL_30;
        v32 = v78.m128i_i64[1] + 8;
        v33 = *(_DWORD *)(v78.m128i_i64[1] + 16);
        ++*(_DWORD *)(a1 + 184);
        if ( v33 )
        {
          if ( v33 != 1 )
          {
            sub_1872CE0("");
            sub_1873130(114, 741);
          }
          v60 = (int *)sub_81AF20(v32);
          v61 = *(_QWORD *)(a1 + 832);
          if ( v61 )
            *(_DWORD *)(v61 - 4) = 0;
          v62 = v25 + *(_DWORD *)(a1 + 808);
          *(_BYTE *)(a1 + 996) |= (__int64)(*(unsigned int *)(a1 + 808) + (unsigned __int64)v25) > 0xFFFFFFFFLL;
          *(_DWORD *)(a1 + 808) = v62;
          sub_7C00D0(a1, v16, v25);
          sub_7B60C0((_QWORD *)a1, v16, v60, (_QWORD *)(a1 + 832), v63, *(double *)v17.m128i_i64);
          if ( byte_1C7EBD0 )
          {
            v67 = sub_180B150(a1, v16);
            v68 = sub_7C5DC0(v67, v16);
            std::operator<<<std::char_traits<char>>();
            v69 = sub_180B150(v68, " ");
            std::__ostream_insert<char,std::char_traits<char>>();
            v70 = *(_QWORD *)(a1 + 832);
            if ( v70 )
              v71 = *(_DWORD *)(v70 - 4);
            else
              v71 = 0;
            v76 = v71;
            v77 = v70;
            sub_7C5E30(v69, &v76);
            std::operator<<<std::char_traits<char>>();
          }
          v64 = *(int **)(a1 + 832);
          if ( v64 )
          {
            v65 = &v64[*(v64 - 1)];
            while ( v65 != v64 )
            {
              v66 = *v64++;
              sub_7C03E0(a1, v66 ^ 1, v25, *(double *)v17.m128i_i64);
            }
          }
        }
        else
        {
          v57 = (unsigned int *)sub_828140(v32);
          v58 = *(unsigned int *)(a1 + 808) + v25 * (unsigned __int64)v57[15];
          *(_DWORD *)(a1 + 808) = v58;
          *(_BYTE *)(a1 + 996) |= v58 > 0xFFFFFFFFLL;
          sub_7C0530((_QWORD *)a1, v57, v25, *(double *)v17.m128i_i64);
        }
      }
      else
      {
        v27 = v25 + *(_DWORD *)(a1 + 808);
        if ( (v79 & 7) != 0 )
        {
          *(_BYTE *)(a1 + 996) |= (__int64)(*(unsigned int *)(a1 + 808) + (unsigned __int64)v25) > 0xFFFFFFFFLL;
          *(_DWORD *)(a1 + 808) = v27;
          sub_7C00D0(a1, v16, v25);
          sub_7C03E0(a1, v78.m128i_u32[2], v25, *(double *)v17.m128i_i64);
        }
        else
        {
          *(_BYTE *)(a1 + 996) |= (__int64)(*(unsigned int *)(a1 + 808) + (unsigned __int64)v25) > 0xFFFFFFFFLL;
          *(_DWORD *)(a1 + 808) = v27;
        }
      }
      v10 = a1;
      sub_7C35F0(a1);
      v24 = *(_QWORD *)(a1 + 24);
      v22 = *(_QWORD *)(v21 + 3784);
    }
    v28 = *(_QWORD *)(v24 + 3312);
LABEL_24:
    v29 = (unsigned int *)(v22 + 4LL * v23);
    while ( 1 )
    {
      v16 = *v29;
      v19 = *v29 >> 1;
      if ( *(_BYTE *)(v28 + v19) )
      {
        v10 = *(_QWORD *)(v24 + 3296) + 24 * v19;
        if ( *(_DWORD *)(a1 + 788) == *(_DWORD *)v10 )
          break;
      }
      --v29;
      if ( !v23 )
      {
        if ( (unsigned int)sub_180B130(v10) > 1 )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)v17.m128i_i64) )
          {
            sub_186A4C0(*(double *)v17.m128i_i64);
            v31 = sub_180B150(v10, v19);
            std::operator<<<std::char_traits<char>>();
            sub_186A500(v31, "did not find marked literal\n");
          }
          else
          {
            sub_180B150(v10, v19);
            std::operator<<<std::char_traits<char>>();
          }
        }
        goto LABEL_30;
      }
      --v23;
    }
    v17 = _mm_loadu_si128((const __m128i *)v10);
    v34 = *(_DWORD *)(a1 + 784);
    *(_BYTE *)(v28 + v19) = 0;
    --v23;
    v78 = v17;
    v35 = *(_DWORD *)(v10 + 16);
    v36 = v34 - 1;
    v10 = *(unsigned __int8 *)(a1 + 996);
    *(_DWORD *)(a1 + 784) = v36;
    LODWORD(v79) = v35;
    v37 = *(_QWORD *)(a1 + 792);
    if ( !v37 )
      break;
    if ( (unsigned int)v19 >= *(_DWORD *)(v37 - 4) )
    {
      if ( v36 )
      {
        if ( !*(_BYTE *)(a1 + 996) )
          goto LABEL_24;
LABEL_73:
        if ( (unsigned int)sub_180B130(v10) > 0x13 )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)v17.m128i_i64) )
          {
            sub_186A4C0(*(double *)v17.m128i_i64);
            sub_180B150(v10, v19);
            std::__ostream_insert<char,std::char_traits<char>>();
            v59 = std::ostream::_M_insert<unsigned long>();
            std::operator<<<std::char_traits<char>>();
            sub_186A500(v59, "\n");
          }
          else
          {
            sub_180B150(v10, v19);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::operator<<<std::char_traits<char>>();
          }
        }
LABEL_30:
        if ( *(_BYTE *)(a1 + 996) )
        {
          ++*(_DWORD *)(a1 + 212);
          *(_BYTE *)(a1 + 996) = 0;
        }
        sub_7BFA20(a1, v23, v17, a3, a4);
        return 0;
      }
      goto LABEL_51;
    }
    v38 = (__int64 *)(v37 + 8 * v19);
    v39 = -1;
    v25 = *(_DWORD *)(a1 + 808);
    v40 = *v38;
    v41 = -*v38;
    if ( *v38 > 0 )
      v41 = *v38;
    LOBYTE(v39) = v41 > 0xFFFFFFFFLL;
    v19 = (unsigned int)v10 | v39;
    *(_BYTE *)(a1 + 996) = v19;
    if ( v25 >= (unsigned int)v41 )
    {
      v25 = v41;
    }
    else
    {
      v42 = v25;
      v19 = -(__int64)v25;
      if ( v40 < 0 )
        v42 = -(__int64)v25;
      *v38 = v42;
    }
    if ( !v36 )
      goto LABEL_51;
  }
  if ( v36 )
  {
    if ( !(_BYTE)v10 )
      goto LABEL_24;
    goto LABEL_73;
  }
LABEL_51:
  if ( !(unsigned __int8)sub_7C2EB0(a1, *(double *)v17.m128i_i64) )
    goto LABEL_30;
  sub_7BD480(a1, v17);
  return 1;
}

