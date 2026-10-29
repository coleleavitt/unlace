void __fastcall sub_2203EA0(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, char a5)
{
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  int v14; // r12d
  unsigned __int64 v15; // rax
  unsigned int v16; // ebp
  size_t v17; // rax
  size_t v18; // rax
  __int64 v19; // rdi
  size_t v20; // rbp
  size_t v21; // rax
  size_t v22; // rax
  int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // ebp
  unsigned int v26; // ebp
  char v27; // r15
  void *v28; // rdi
  __int64 v29; // rsi
  __int32 v30; // edx
  unsigned int v31; // r15d
  __int32 v32; // ebp
  void *v33; // rcx
  unsigned int v34; // r15d
  __int64 v35; // rax
  _BYTE *v36; // rsi
  unsigned __int32 v37; // r12d
  __int64 v38; // rax
  int v39; // ebp
  int v40; // r15d
  unsigned int v41; // r12d
  __int64 v42; // rdx
  char v43; // si
  unsigned __int64 v44; // rcx
  unsigned int v45; // esi
  unsigned int v46; // r13d
  unsigned int v47; // ebp
  __int64 v48; // rax
  unsigned int v49; // r15d
  char v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rbp
  unsigned int v55; // ecx
  size_t v56; // rax
  size_t v57; // rax
  int v58; // r12d
  int v59; // r13d
  unsigned __int32 v60; // r15d
  unsigned int v61; // r12d
  __int64 v62; // rax
  unsigned int v63; // r12d
  __int64 v64; // rax
  __int64 v65; // rax
  _BYTE *v66; // rsi
  __int64 v67; // r8
  char *v68; // rax
  size_t v69; // rdx
  _BYTE *v70; // rax
  int v71; // ebp
  unsigned int v72; // eax
  unsigned int v73; // edx
  __int64 v74; // rdi
  __int64 v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rax
  unsigned __int32 v78; // r13d
  unsigned __int64 v79; // rdx
  int v80; // r13d
  int i; // r12d
  unsigned int v82; // [rsp+0h] [rbp-1D8h]
  unsigned int v83; // [rsp+0h] [rbp-1D8h]
  unsigned int v84; // [rsp+0h] [rbp-1D8h]
  unsigned int v85; // [rsp+0h] [rbp-1D8h]
  unsigned int v88; // [rsp+10h] [rbp-1C8h]
  void *v89; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v90; // [rsp+28h] [rbp-1B0h]
  void *v91; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v92; // [rsp+38h] [rbp-1A0h]
  void *v93; // [rsp+40h] [rbp-198h] BYREF
  unsigned int v94; // [rsp+48h] [rbp-190h]
  void *v95; // [rsp+50h] [rbp-188h] BYREF
  unsigned int v96; // [rsp+58h] [rbp-180h]
  void *v97; // [rsp+60h] [rbp-178h] BYREF
  __int64 v98; // [rsp+68h] [rbp-170h]
  unsigned __int64 v99; // [rsp+70h] [rbp-168h]
  char v100[8]; // [rsp+78h] [rbp-160h] BYREF
  void *ptr; // [rsp+80h] [rbp-158h] BYREF
  __m128i si128; // [rsp+88h] [rbp-150h]
  _BYTE v103[320]; // [rsp+98h] [rbp-140h] BYREF

  v7 = *(_BYTE *)(a1 + 20) & 7;
  switch ( v7 )
  {
    case 1:
      v18 = j__strlen("NaN");
      v19 = a2[1];
      v20 = v18;
      if ( v18 + v19 > a2[2] )
      {
        sub_2236E10(a2, a2 + 3, v18 + v19, 1);
        v19 = a2[1];
      }
      if ( v20 )
      {
        memcpy((void *)(*a2 + v19), "NaN", v20);
        v19 = a2[1];
      }
      a2[1] = v19 + v20;
      return;
    case 0:
      if ( (*(_BYTE *)(a1 + 20) & 8) != 0 )
      {
        v17 = j__strlen("-Inf");
        sub_A1FE50(a2, "-Inf", &aInf[v17]);
      }
      else
      {
        v22 = j__strlen("+Inf");
        sub_A1FE50(a2, "+Inf", &aInf_0[v22]);
      }
      return;
    case 3:
      if ( (*(_BYTE *)(a1 + 20) & 8) != 0 )
        sub_FC8050(a2, 45);
      if ( a4 )
      {
        sub_FC8050(a2, 48);
      }
      else if ( a5 )
      {
        v21 = j__strlen("0.0E+0");
        sub_A1FE50(a2, "0.0E+0", &a00e0[v21]);
      }
      else
      {
        v56 = j__strlen("0.0");
        sub_A1FE50(a2, "0.0", &a000[v56 + 2]);
        if ( a3 > 1 )
        {
          v74 = a2[1];
          v75 = a3 - 1;
          if ( v75 + v74 > (unsigned __int64)a2[2] )
          {
            sub_2236E10(a2, a2 + 3, v75 + v74, 1);
            v74 = a2[1];
          }
          memset((void *)(*a2 + v74), 48, a3 - 1);
          a2[1] += v75;
        }
        v57 = j__strlen("e+00");
        sub_A1FE50(a2, "e+00", &aE00[v57]);
      }
      return;
  }
  v8 = a1 + 8;
  v9 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  v10 = *(_DWORD *)(a1 + 16) - (v9 - 1);
  v11 = (unsigned int)(v9 + 63) >> 6;
  if ( (unsigned int)(v9 + 63) <= 0x7F )
    v11 = 1;
  if ( (unsigned int)(v9 + 64) > 0x7F )
    v8 = *(_QWORD *)(a1 + 8);
  sub_2205600(&v89, v9, v8, v11);
  v12 = v90;
  v92 = v90;
  if ( v90 > 0x40 )
  {
    sub_2205510(&v91);
    v12 = v92;
  }
  else
  {
    v91 = v89;
  }
  v82 = v12;
  if ( (*(_BYTE *)(a1 + 20) & 8) != 0 )
  {
    sub_FC8050(a2, 45);
    v12 = v92;
  }
  if ( !a3 )
    a3 = (int)(59 * v82) / 196 + 2;
  if ( v12 > 0x40 )
  {
    v13 = sub_22068B0(&v91);
    v14 = v13 + v10;
    sub_220ABD0(&v91, v13);
    if ( !v14 )
      goto LABEL_45;
    goto LABEL_16;
  }
  _RAX = v91;
  if ( v91 )
  {
    __asm { tzcnt   rdx, rax }
    v55 = _RDX;
    if ( v12 <= (unsigned int)_RDX )
      v55 = v12;
    v14 = v55 + v10;
    if ( v12 > (unsigned int)_RDX )
    {
      v15 = (unsigned __int64)v91 >> v55;
      v91 = (void *)((unsigned __int64)v91 >> v55);
      if ( !v14 )
      {
LABEL_24:
        if ( !v15 )
          goto LABEL_71;
        _BitScanReverse64(&v15, v15);
        v16 = 64 - (v15 ^ 0x3F);
        goto LABEL_47;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v14 = v12 + v10;
  }
  v91 = nullptr;
  if ( !v14 )
    goto LABEL_71;
LABEL_16:
  if ( v14 <= 0 )
  {
    v71 = -v14;
    v85 = (-137 * v14 + 136) / 0x3Bu + v82;
    sub_2206CD0(&ptr, &v91, v85);
    v72 = v85;
    if ( v92 > 0x40 && v91 )
    {
      operator delete[](v91);
      v72 = v85;
    }
    v91 = ptr;
    v73 = si128.m128i_i32[0];
    si128.m128i_i32[0] = v72;
    v92 = v73;
    if ( v72 > 0x40 )
      sub_2205470(&ptr, 5, 0);
    else
      ptr = &byte_5;
    while ( 1 )
    {
      if ( (v71 & 1) != 0 )
        sub_2209DE0(&v91, &ptr);
      v71 >>= 1;
      if ( !v71 )
        break;
      sub_2209DE0(&ptr, &ptr);
    }
    if ( si128.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
  }
  else
  {
    sub_2206CD0(&ptr, &v91, v14 + v82);
    if ( v92 > 0x40 && v91 )
      operator delete[](v91);
    v12 = si128.m128i_i32[0];
    v91 = ptr;
    v92 = si128.m128i_i32[0];
    if ( si128.m128i_i32[0] <= 0x40u )
    {
      if ( si128.m128i_i32[0] == v14 )
      {
        v91 = nullptr;
        v12 = v14;
        v14 = 0;
        goto LABEL_71;
      }
      if ( !si128.m128i_i32[0] )
      {
        v14 = 0;
        v91 = nullptr;
        ptr = v103;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        goto LABEL_161;
      }
      v15 = ((_QWORD)ptr << v14) & (0xFFFFFFFFFFFFFFFFLL >> -si128.m128i_i8[0]);
      v14 = 0;
      v91 = (void *)v15;
      goto LABEL_24;
    }
    v76 = (unsigned int)v14;
    v14 = 0;
    sub_220A130(&v91, v76);
  }
LABEL_45:
  v12 = v92;
  if ( v92 <= 0x40 )
  {
    v15 = (unsigned __int64)v91;
    goto LABEL_24;
  }
  v83 = v92;
  v23 = sub_2206780(&v91);
  v12 = v83;
  v16 = v83 - v23;
LABEL_47:
  v24 = (196 * a3 + 58) / 0x3B;
  if ( v24 >= v16 )
    goto LABEL_71;
  v25 = 59 * (v16 - v24);
  if ( v25 <= 0xC3 )
    goto LABEL_71;
  v96 = v12;
  v26 = v25 / 0xC4;
  v14 += v26;
  if ( v12 <= 0x40 )
  {
    LODWORD(v98) = v12;
    v95 = &dword_0 + 1;
LABEL_51:
    v97 = byte_9 + 1;
    goto LABEL_54;
  }
  sub_2205470(&v95, 1, 0);
  LODWORD(v98) = v92;
  if ( v92 <= 0x40 )
    goto LABEL_51;
  sub_2205470(&v97, 10, 0);
LABEL_54:
  while ( (v26 & 1) == 0 )
  {
    v26 >>= 1;
    if ( !v26 )
      goto LABEL_56;
LABEL_53:
    sub_2209DE0(&v97, &v97);
  }
  sub_2209DE0(&v95, &v97);
  v26 >>= 1;
  if ( v26 )
    goto LABEL_53;
LABEL_56:
  sub_22078F0(&ptr);
  if ( v92 > 0x40 && v91 )
    operator delete[](v91);
  v91 = ptr;
  v92 = si128.m128i_i32[0];
  if ( si128.m128i_i32[0] > 0x40u )
    sub_2206780(&v91);
  sub_2206A40(&ptr, &v91);
  if ( v92 > 0x40 && v91 )
    operator delete[](v91);
  v91 = ptr;
  v92 = si128.m128i_i32[0];
  if ( (unsigned int)v98 > 0x40 && v97 )
    operator delete[](v97);
  if ( v96 > 0x40 && v95 )
    operator delete[](v95);
  v12 = v92;
LABEL_71:
  ptr = v103;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v12 <= 3 )
  {
LABEL_161:
    sub_2206CD0(&v97, &v91, 4);
    if ( v92 > 0x40 && v91 )
      operator delete[](v91);
    v12 = v98;
    v94 = 4;
    v93 = byte_9 + 1;
    v91 = v97;
    v92 = v98;
    v96 = 4;
LABEL_74:
    v95 = nullptr;
    goto LABEL_75;
  }
  v94 = v12;
  if ( v12 <= 0x40 )
  {
    v93 = byte_9 + 1;
    v96 = v12;
    goto LABEL_74;
  }
  v84 = v12;
  sub_2205470(&v93, 10, 0);
  v96 = v84;
  sub_2205470(&v95, 0, 0);
  v12 = v92;
LABEL_75:
  v27 = 1;
  while ( 2 )
  {
    if ( v12 <= 0x40 )
    {
      v28 = v91;
      if ( !v91 )
        break;
      goto LABEL_77;
    }
    if ( v12 - (unsigned int)sub_2206780(&v91) > 0x40 || (v28 = *(void **)v91) != nullptr )
    {
LABEL_77:
      sub_2208490(&v91, &v93, &v91, &v95);
      LODWORD(v29) = (_DWORD)v95;
      if ( v96 > 0x40 )
        v29 = *(_QWORD *)v95;
      v27 &= (_DWORD)v29 == 0;
      if ( v27 )
        ++v14;
      else
        sub_FC8050(&ptr, v29 + 48);
      v12 = v92;
      continue;
    }
    break;
  }
  v30 = si128.m128i_i32[0];
  v31 = v14;
  v32 = si128.m128i_i32[0];
  if ( a3 < si128.m128i_i32[0] )
  {
    v33 = ptr;
    v34 = si128.m128i_i32[0] - a3;
    if ( *((char *)ptr + si128.m128i_i32[0] - a3 - 1) > 52 )
    {
      while ( 1 )
      {
        if ( si128.m128i_i32[0] == v34 )
        {
          v31 = v14 + v34;
          si128.m128i_i64[0] = 0;
          sub_FC8050(&ptr, 49);
          v30 = si128.m128i_i32[0];
          v14 = v31;
          v32 = si128.m128i_i32[0];
          goto LABEL_92;
        }
        v35 = v34;
        v36 = (char *)ptr + v34;
        if ( *v36 != 57 )
          break;
        ++v34;
      }
      v31 = v14 + v34;
      ++*v36;
      v14 = v31;
      v52 = si128.m128i_i64[0] - v35;
      if ( si128.m128i_i64[0] != v35 )
      {
        v33 = ptr;
        v69 = si128.m128i_i64[0] - v35;
        v66 = (char *)ptr + v35;
        goto LABEL_173;
      }
    }
    else
    {
      v65 = v34;
      v66 = (char *)ptr + v34;
      if ( si128.m128i_i32[0] > v34 && *v66 == 48 )
      {
        v67 = v34 + 1;
        v68 = (char *)ptr + v67;
        while ( 1 )
        {
          v34 = v67;
          v66 = v68;
          if ( si128.m128i_i32[0] == (_DWORD)v67 )
            break;
          if ( *v68++ != 48 )
            break;
          LODWORD(v67) = v67 + 1;
        }
        v65 = (unsigned int)v67;
      }
      v31 = v14 + v34;
      v69 = si128.m128i_i64[0] - v65;
      v14 = v31;
      v52 = si128.m128i_i64[0] - v65;
      if ( si128.m128i_i64[0] != v65 )
      {
LABEL_173:
        v70 = memmove(v33, v66, v69);
        v28 = (void *)(&v70[v52] - (_BYTE *)ptr);
      }
    }
    si128.m128i_i64[0] = (__int64)v28;
    v32 = (int)v28;
    v30 = (int)v28;
  }
LABEL_92:
  if ( !a4 )
    goto LABEL_115;
  if ( v14 < 0 )
  {
    v88 = v32 - 1;
    v40 = v32 - 1 + v31;
    if ( v40 < 0 && a4 < -v40 )
      goto LABEL_116;
    v58 = v30 + v14;
    v59 = v58;
    if ( v58 <= 0 )
    {
      sub_FC8050(a2, 48);
      v80 = 1 - v58;
      sub_FC8050(a2, 46);
      for ( i = 1; v80 != i; ++i )
        sub_FC8050(a2, 48);
      v59 = 0;
    }
    else
    {
      v60 = v32 - 1;
      v61 = v88 - v58;
      do
      {
        v62 = v60--;
        sub_FC8050(a2, *((_BYTE *)ptr + v62));
      }
      while ( v61 != v60 );
      sub_FC8050(a2, 46);
    }
    v63 = v88 - v59;
    if ( v59 != v32 )
    {
      do
      {
        v64 = v63--;
        sub_FC8050(a2, *((_BYTE *)ptr + v64));
      }
      while ( v63 != -1 );
    }
  }
  else
  {
    if ( a4 >= v31 && a3 >= v32 + v31 )
    {
      v37 = v32 - 1;
      if ( v32 )
      {
        do
        {
          v38 = v37--;
          sub_FC8050(a2, *((_BYTE *)ptr + v38));
        }
        while ( v37 != -1 );
      }
      v39 = 0;
      if ( v31 )
      {
        do
        {
          ++v39;
          sub_FC8050(a2, 48);
        }
        while ( v39 != v31 );
      }
      goto LABEL_100;
    }
LABEL_115:
    v88 = v32 - 1;
    v40 = v32 - 1 + v31;
LABEL_116:
    sub_FC8050(a2, *((_BYTE *)ptr + v88));
    sub_FC8050(a2, 46);
    if ( v32 == 1 && a5 )
    {
      sub_FC8050(a2, 48);
      v43 = 69;
    }
    else
    {
      v41 = v88 - 1;
      if ( v32 == 1 )
        goto LABEL_121;
      do
      {
        v42 = v41--;
        sub_FC8050(a2, *((_BYTE *)ptr + v42));
      }
      while ( v88 - v32 != v41 );
      v43 = 69;
      if ( !a5 )
      {
LABEL_121:
        if ( a3 > v88 )
        {
          v77 = a2[1];
          v78 = a3 + 1 - v32;
          v79 = v78 + v77;
          if ( v79 > a2[2] )
          {
            sub_2236E10(a2, a2 + 3, v79, 1);
            v77 = a2[1];
          }
          if ( v78 )
          {
            memset((void *)(*a2 + v77), 48, v78);
            v77 = a2[1];
          }
          a2[1] = v77 + v78;
        }
        v43 = 101;
      }
    }
    sub_FC8050(a2, v43);
    if ( v40 < 0 )
    {
      v40 = -v40;
      sub_FC8050(a2, 45);
    }
    else
    {
      sub_FC8050(a2, 43);
    }
    v44 = 1;
    v97 = v100;
    v99 = _mm_load_si128((const __m128i *)&xmmword_23AA8C0).m128i_u64[1];
    v98 = 1;
    v45 = v40 / 0xAu;
    v100[0] = v40 % 0xAu + 48;
    if ( v40 / 0xAu )
    {
      do
      {
        v46 = v45 / 0xA;
        v47 = v45 % 0xA + 48;
        if ( v44 + 1 <= v99 )
        {
          *((_BYTE *)v97 + v44) = v47;
        }
        else
        {
          sub_2236E10(&v97, v100, v44 + 1, 1);
          *((_BYTE *)v97 + v98) = v47;
        }
        v45 /= 0xAu;
        v44 = ++v98;
      }
      while ( v46 );
    }
    if ( v44 <= 1 && a5 != 1 )
    {
      sub_FC8050(&v97, 48);
      LODWORD(v44) = v98;
    }
    if ( (_DWORD)v44 )
    {
      v48 = a2[1];
      v49 = v44 - 1;
      do
      {
        v50 = *((_BYTE *)v97 + v49);
        if ( v48 + 1 > (unsigned __int64)a2[2] )
        {
          sub_2236E10(a2, a2 + 3, v48 + 1, 1);
          v51 = *a2;
          v48 = a2[1];
        }
        else
        {
          v51 = *a2;
        }
        *(_BYTE *)(v51 + v48) = v50;
        --v49;
        v48 = a2[1] + 1;
        a2[1] = v48;
      }
      while ( v49 != -1 );
    }
    if ( v97 != v100 )
      free(v97);
  }
LABEL_100:
  if ( v96 > 0x40 && v95 )
    operator delete[](v95);
  if ( v94 > 0x40 && v93 )
    operator delete[](v93);
  if ( ptr != v103 )
    free(ptr);
  if ( v92 > 0x40 && v91 )
    operator delete[](v91);
  if ( v90 > 0x40 )
  {
    if ( v89 )
      operator delete[](v89);
  }
}
