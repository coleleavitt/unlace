__int64 __fastcall sub_2241AD0(__int64 a1)
{
  const char ***v1; // r14
  const char ***v2; // rax
  unsigned int v3; // r12d
  char *v4; // r8
  unsigned int v5; // r13d
  const char **v6; // rbx
  unsigned __int64 v7; // rcx
  __int8 *v8; // rsi
  void *v9; // rcx
  __m128 *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // r14
  unsigned int v14; // r12d
  void **v15; // r13
  __int64 *v16; // rsi
  __int64 v17; // rsi
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r14
  __m128i *v23; // rax
  __m128i si128; // xmm0
  __int64 v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i *v32; // rax
  __m128i v33; // xmm0
  void **v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 *v39; // r13
  __int64 *v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  void *v43; // rdx
  __int64 v44; // rax
  __m128i v45; // xmm1
  __m128 v46; // xmm0
  _BYTE *v47; // rax
  _BYTE *v48; // rdx
  __int64 result; // rax
  char *v50; // rdx
  __int64 v51; // rax
  const char ***v52; // r14
  __int64 v53; // rax
  __int64 v54; // rsi
  char *v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  signed __int64 v58; // rsi
  signed __int64 v59; // rax
  signed __int64 v60; // rsi
  __int64 v61; // rax
  void *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rsi
  __int64 v68; // rax
  void *v69; // rax
  __int64 v70; // rdx
  void *v71; // rax
  void *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rax
  signed __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rsi
  const char ***v84; // rsi
  const char ***v85; // rdi
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  size_t n[2]; // [rsp+0h] [rbp-128h] BYREF
  void *v89; // [rsp+10h] [rbp-118h] BYREF
  __int64 v90; // [rsp+18h] [rbp-110h]
  __int64 v91; // [rsp+20h] [rbp-108h]
  void *src; // [rsp+28h] [rbp-100h]
  void *v93; // [rsp+30h] [rbp-F8h]
  char *v94; // [rsp+38h] [rbp-F0h]
  void *v95; // [rsp+40h] [rbp-E8h]
  void *v96; // [rsp+48h] [rbp-E0h]
  void *v97; // [rsp+50h] [rbp-D8h]
  __int64 v98; // [rsp+58h] [rbp-D0h]
  __int64 v99; // [rsp+60h] [rbp-C8h]
  __int64 v100; // [rsp+68h] [rbp-C0h]
  void *v101; // [rsp+70h] [rbp-B8h]
  void *v102; // [rsp+78h] [rbp-B0h]
  void *v103; // [rsp+80h] [rbp-A8h]
  __int64 v104; // [rsp+88h] [rbp-A0h]
  void *v105[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-88h]
  void *v107[2]; // [rsp+B0h] [rbp-78h] BYREF
  __m128 v108; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v109; // [rsp+D0h] [rbp-58h]
  __int64 v110; // [rsp+D8h] [rbp-50h]
  unsigned int v111; // [rsp+E0h] [rbp-48h]

  v90 = a1;
  if ( !qword_2D0AB90 )
    sub_2230020(&qword_2D0AB90, sub_2240340, (__int64)sub_22411F0);
  v91 = qword_2D0AB90;
  v1 = *(const char ****)qword_2D0AB90;
  v2 = *(const char ****)(qword_2D0AB90 + 8);
  v89 = v2;
  if ( v1 == v2 )
  {
    n[0] = (size_t)v2;
    v12 = 0;
    v14 = 0;
    v15 = v105;
    v84 = v2;
    v85 = v2;
    goto LABEL_117;
  }
  v3 = 0;
  v4 = (char *)v105;
  v5 = 0;
  do
  {
    v6 = *v1;
    v7 = (unsigned __int64)(*v1)[3];
    if ( !v7 )
    {
      BYTE4(v106) = 48;
      v8 = v4 + 20;
      v107[0] = &v108;
LABEL_7:
      v9 = &dword_0 + 1;
      v108.m128_i8[0] = *v8;
      v10 = &v108;
      goto LABEL_8;
    }
    v8 = v4 + 21;
    while ( 1 )
    {
      *--v8 = v7 % 0xA + 48;
      if ( v7 <= 9 )
        break;
      v7 /= 0xAu;
    }
    v10 = &v108;
    v50 = (char *)(v4 + 21 - v8);
    v107[0] = &v108;
    v9 = v50;
    if ( (unsigned __int64)v50 > 0xF )
    {
      if ( (__int64)v50 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v94 = v4;
      v93 = (void *)(v4 + 21 - v8);
      src = v8;
      v10 = (__m128 *)operator new((unsigned __int64)(v50 + 1));
      v50 = (char *)v93;
      v107[0] = v10;
      v9 = v93;
      v108.m128_u64[0] = (unsigned __int64)v93;
      v4 = v94;
LABEL_48:
      src = v4;
      n[0] = (size_t)v9;
      memcpy(v10, v8, (size_t)v50);
      v9 = (void *)n[0];
      v4 = (char *)src;
      v10 = (__m128 *)v107[0];
      goto LABEL_8;
    }
    if ( v50 == (_BYTE *)&dword_0 + 1 )
      goto LABEL_7;
    if ( v50 )
      goto LABEL_48;
LABEL_8:
    v107[1] = v9;
    *((_BYTE *)v9 + (_QWORD)v10) = 0;
    n[0] = (size_t)v4;
    if ( v3 < LODWORD(v107[1]) )
      v3 = (unsigned int)v107[1];
    if ( v107[0] != &v108 )
      operator delete(v107[0]);
    v11 = strlen(*v6);
    v4 = (char *)n[0];
    if ( v5 < v11 )
      v5 = v11;
    ++v1;
  }
  while ( v89 != v1 );
  v12 = v3;
  v13 = 0xFFFFFFFFFFFFFFFLL;
  v14 = v5;
  v15 = (void **)n[0];
  v16 = *(__int64 **)v91;
  n[0] = *(_QWORD *)(v91 + 8);
  v89 = v16;
  v17 = n[0] - (_QWORD)v16;
  v93 = (void *)v17;
  src = (void *)(v17 >> 3);
  if ( v17 <= 0x7FFFFFFFFFFFFFF8LL )
  {
    if ( v17 > 0 )
    {
      v13 = (__int64)src;
      goto LABEL_18;
    }
LABEL_52:
    if ( (__int64)v93 > 112 )
    {
      v51 = 8 * ((__int64)src / 2);
      v95 = (void *)v51;
      v52 = (const char ***)((char *)v89 + v51);
      v94 = (char *)(v51 >> 3);
      if ( v51 <= 112 )
      {
        sub_2240A50((const char ***)v89, (const char ***)((char *)v89 + v51));
      }
      else
      {
        v96 = (void *)(8 * ((v51 >> 3) / 2));
        src = (char *)v89 + (_QWORD)v96;
        v98 = (__int64)v96 >> 3;
        if ( (__int64)v96 <= 112 )
        {
          sub_2240A50((const char ***)v89, (const char ***)src);
        }
        else
        {
          v99 = 8 * (((__int64)v96 >> 3) / 2);
          v93 = (char *)v89 + v99;
          v100 = v99 >> 3;
          if ( v99 <= 112 )
          {
            sub_2240A50((const char ***)v89, (const char ***)v93);
          }
          else
          {
            v101 = (void *)(8 * ((v99 >> 3) / 2));
            v97 = (char *)v89 + (_QWORD)v101;
            v102 = (void *)((__int64)v101 >> 3);
            if ( (__int64)v101 <= 112 )
            {
              sub_2240A50((const char ***)v89, (const char ***)v97);
            }
            else
            {
              v104 = 8 * (((__int64)v101 >> 3) / 2);
              v103 = (char *)v89 + v104;
              sub_2240B70((const char ***)v89, (const char ***)((char *)v89 + v104));
              sub_2240B70((const char ***)((char *)v89 + v104), (const char ***)v97);
              sub_22408B0(
                (const char ***)v89,
                (const char ***)((char *)v89 + v104),
                (__int64)v97,
                v104 >> 3,
                ((__int64)v101 - v104) >> 3);
            }
            v53 = v99 - (_QWORD)v101;
            v54 = (v99 - (__int64)v101) >> 3;
            v101 = (void *)v54;
            if ( v53 <= 112 )
            {
              sub_2240A50((const char ***)v97, (const char ***)v93);
            }
            else
            {
              v104 = 8 * (v54 / 2);
              v103 = (char *)v97 + v104;
              sub_2240B70((const char ***)v97, (const char ***)((char *)v97 + v104));
              sub_2240B70((const char ***)((char *)v97 + v104), (const char ***)v93);
              sub_22408B0(
                (const char ***)v97,
                (const char ***)v103,
                (__int64)v93,
                v104 >> 3,
                ((_BYTE *)v93 - (_BYTE *)v103) >> 3);
            }
            sub_22408B0((const char ***)v89, (const char ***)v97, (__int64)v93, (__int64)v102, (__int64)v101);
          }
          v55 = (char *)v96 - v99;
          v56 = ((__int64)v96 - v99) >> 3;
          v99 = v56;
          if ( (__int64)v55 <= 112 )
          {
            sub_2240A50((const char ***)v93, (const char ***)src);
          }
          else
          {
            v57 = 8 * (v56 / 2);
            v97 = (char *)v93 + v57;
            v101 = (void *)(v57 >> 3);
            if ( v57 <= 112 )
            {
              sub_2240A50((const char ***)v93, (const char ***)v97);
            }
            else
            {
              v104 = 8 * (v56 / 2);
              v103 = (void *)(8 * ((__int64)v101 / 2));
              sub_2240B70((const char ***)v93, (const char ***)((char *)v103 + (_QWORD)v93));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v93), (const char ***)v97);
              sub_22408B0(
                (const char ***)v93,
                (const char ***)((char *)v103 + (_QWORD)v93),
                (__int64)v97,
                (__int64)v103 >> 3,
                (v104 - (__int64)v103) >> 3);
            }
            v58 = ((_BYTE *)src - (_BYTE *)v97) >> 3;
            v102 = (void *)v58;
            if ( (_BYTE *)src - (_BYTE *)v97 <= 112 )
            {
              sub_2240A50((const char ***)v97, (const char ***)src);
            }
            else
            {
              v104 = 8 * (v58 / 2);
              v103 = (char *)v97 + v104;
              sub_2240B70((const char ***)v97, (const char ***)((char *)v97 + v104));
              sub_2240B70((const char ***)((char *)v97 + v104), (const char ***)src);
              sub_22408B0(
                (const char ***)v97,
                (const char ***)v103,
                (__int64)src,
                v104 >> 3,
                ((_BYTE *)src - (_BYTE *)v103) >> 3);
            }
            sub_22408B0((const char ***)v93, (const char ***)v97, (__int64)src, (__int64)v101, (__int64)v102);
          }
          sub_22408B0((const char ***)v89, (const char ***)v93, (__int64)src, v100, v99);
        }
        v59 = (_BYTE *)v95 - (_BYTE *)v96;
        v60 = ((_BYTE *)v95 - (_BYTE *)v96) >> 3;
        v96 = (void *)v60;
        if ( v59 <= 112 )
        {
          sub_2240A50((const char ***)src, v52);
        }
        else
        {
          v61 = 8 * (v60 / 2);
          v93 = (char *)src + v61;
          v97 = (void *)(v61 >> 3);
          if ( v61 <= 112 )
          {
            sub_2240A50((const char ***)src, (const char ***)v93);
          }
          else
          {
            v99 = 8 * ((v61 >> 3) / 2);
            v95 = (char *)src + v99;
            v100 = v99 >> 3;
            if ( v99 <= 112 )
            {
              v101 = (void *)v61;
              sub_2240A50((const char ***)src, (const char ***)v95);
              v62 = v101;
            }
            else
            {
              v103 = (void *)v61;
              v102 = (void *)(8 * (v100 / 2));
              v101 = (char *)v102 + (_QWORD)src;
              sub_2240B70((const char ***)src, (const char ***)((char *)v102 + (_QWORD)src));
              sub_2240B70((const char ***)((char *)v102 + (_QWORD)src), (const char ***)v95);
              sub_22408B0(
                (const char ***)src,
                (const char ***)((char *)v102 + (_QWORD)src),
                (__int64)v95,
                (__int64)v102 >> 3,
                (v99 - (__int64)v102) >> 3);
              v62 = v103;
            }
            v63 = (__int64)v62 - v99;
            v99 = v63 >> 3;
            if ( v63 <= 112 )
            {
              sub_2240A50((const char ***)v95, (const char ***)v93);
            }
            else
            {
              v102 = (void *)(8 * ((v63 >> 3) / 2));
              v101 = (char *)v102 + (_QWORD)v95;
              sub_2240B70((const char ***)v95, (const char ***)((char *)v102 + (_QWORD)v95));
              sub_2240B70((const char ***)((char *)v102 + (_QWORD)v95), (const char ***)v93);
              sub_22408B0(
                (const char ***)v95,
                (const char ***)v101,
                (__int64)v93,
                (__int64)v102 >> 3,
                ((_BYTE *)v93 - (_BYTE *)v101) >> 3);
            }
            sub_22408B0((const char ***)src, (const char ***)v95, (__int64)v93, v100, v99);
          }
          v64 = ((char *)v52 - (_BYTE *)v93) >> 3;
          v99 = v64;
          if ( (char *)v52 - (_BYTE *)v93 <= 112 )
          {
            sub_2240A50((const char ***)v93, v52);
          }
          else
          {
            v65 = 8 * (v64 / 2);
            v95 = (char *)v93 + v65;
            v100 = v65 >> 3;
            if ( v65 <= 112 )
            {
              sub_2240A50((const char ***)v93, (const char ***)v95);
            }
            else
            {
              v103 = (void *)(8 * (v64 / 2));
              v102 = (void *)(8 * (v100 / 2));
              sub_2240B70((const char ***)v93, (const char ***)((char *)v102 + (_QWORD)v93));
              sub_2240B70((const char ***)((char *)v102 + (_QWORD)v93), (const char ***)v95);
              sub_22408B0(
                (const char ***)v93,
                (const char ***)((char *)v102 + (_QWORD)v93),
                (__int64)v95,
                (__int64)v102 >> 3,
                ((_BYTE *)v103 - (_BYTE *)v102) >> 3);
            }
            v66 = ((char *)v52 - (_BYTE *)v95) >> 3;
            v101 = (void *)v66;
            if ( (char *)v52 - (_BYTE *)v95 <= 112 )
            {
              sub_2240A50((const char ***)v95, v52);
            }
            else
            {
              v103 = (void *)(8 * (v66 / 2));
              v102 = (char *)v103 + (_QWORD)v95;
              sub_2240B70((const char ***)v95, (const char ***)((char *)v103 + (_QWORD)v95));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v95), v52);
              sub_22408B0(
                (const char ***)v95,
                (const char ***)v102,
                (__int64)v52,
                (__int64)v103 >> 3,
                ((char *)v52 - (_BYTE *)v102) >> 3);
            }
            sub_22408B0((const char ***)v93, (const char ***)v95, (__int64)v52, v100, (__int64)v101);
          }
          sub_22408B0((const char ***)src, (const char ***)v93, (__int64)v52, (__int64)v97, v99);
        }
        sub_22408B0((const char ***)v89, (const char ***)src, (__int64)v52, v98, (__int64)v96);
      }
      v67 = (__int64)(n[0] - (_QWORD)v52) >> 3;
      v95 = (void *)v67;
      if ( (__int64)(n[0] - (_QWORD)v52) <= 112 )
      {
        sub_2240A50(v52, (const char ***)n[0]);
      }
      else
      {
        v68 = 8 * (v67 / 2);
        src = &v52[(unsigned __int64)v68 / 8];
        v97 = (void *)(v68 >> 3);
        if ( v68 <= 112 )
        {
          sub_2240A50(v52, (const char ***)src);
        }
        else
        {
          v98 = 8 * ((v68 >> 3) / 2);
          v93 = (char *)v52 + v98;
          v99 = v98 >> 3;
          if ( v98 <= 112 )
          {
            v96 = (void *)v68;
            sub_2240A50(v52, (const char ***)v93);
            v72 = v96;
          }
          else
          {
            v100 = 8 * ((v98 >> 3) / 2);
            v96 = (char *)v52 + v100;
            v101 = (void *)(v100 >> 3);
            if ( v100 <= 112 )
            {
              v102 = (void *)v68;
              sub_2240A50(v52, (const char ***)v96);
              v69 = v102;
            }
            else
            {
              v104 = v68;
              v103 = (void *)(8 * ((__int64)v101 / 2));
              sub_2240B70(v52, (const char ***)((char *)v103 + (_QWORD)v52));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v52), (const char ***)v96);
              sub_22408B0(
                v52,
                (const char ***)((char *)v103 + (_QWORD)v52),
                (__int64)v96,
                (__int64)v103 >> 3,
                (v100 - (__int64)v103) >> 3);
              v69 = (void *)v104;
            }
            v70 = v98 - v100;
            v100 = (v98 - v100) >> 3;
            if ( v70 <= 112 )
            {
              v102 = v69;
              sub_2240A50((const char ***)v96, (const char ***)v93);
              v71 = v102;
            }
            else
            {
              v104 = (__int64)v69;
              v103 = (void *)(8 * (v100 / 2));
              sub_2240B70((const char ***)v96, (const char ***)((char *)v103 + (_QWORD)v96));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v96), (const char ***)v93);
              sub_22408B0(
                (const char ***)v96,
                (const char ***)((char *)v103 + (_QWORD)v96),
                (__int64)v93,
                (__int64)v103 >> 3,
                (signed __int64)((__int64)v93 - ((unsigned __int64)v103 + (_QWORD)v96)) >> 3);
              v71 = (void *)v104;
            }
            v102 = v71;
            sub_22408B0(v52, (const char ***)v96, (__int64)v93, (__int64)v101, v100);
            v72 = v102;
          }
          v73 = (__int64)v72 - v98;
          v74 = v73 >> 3;
          v98 = v73 >> 3;
          if ( v73 <= 112 )
          {
            sub_2240A50((const char ***)v93, (const char ***)src);
          }
          else
          {
            v75 = 8 * (v74 / 2);
            v96 = (char *)v93 + v75;
            v100 = v75 >> 3;
            if ( v75 <= 112 )
            {
              sub_2240A50((const char ***)v93, (const char ***)v96);
            }
            else
            {
              v103 = (void *)(8 * (v74 / 2));
              v102 = (void *)(8 * (v100 / 2));
              sub_2240B70((const char ***)v93, (const char ***)((char *)v102 + (_QWORD)v93));
              sub_2240B70((const char ***)((char *)v102 + (_QWORD)v93), (const char ***)v96);
              sub_22408B0(
                (const char ***)v93,
                (const char ***)((char *)v102 + (_QWORD)v93),
                (__int64)v96,
                (__int64)v102 >> 3,
                ((_BYTE *)v103 - (_BYTE *)v102) >> 3);
            }
            v76 = ((_BYTE *)src - (_BYTE *)v96) >> 3;
            v101 = (void *)v76;
            if ( (_BYTE *)src - (_BYTE *)v96 <= 112 )
            {
              sub_2240A50((const char ***)v96, (const char ***)src);
            }
            else
            {
              v103 = (void *)(8 * (v76 / 2));
              v102 = (char *)v103 + (_QWORD)v96;
              sub_2240B70((const char ***)v96, (const char ***)((char *)v103 + (_QWORD)v96));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v96), (const char ***)src);
              sub_22408B0(
                (const char ***)v96,
                (const char ***)v102,
                (__int64)src,
                (__int64)v103 >> 3,
                ((_BYTE *)src - (_BYTE *)v102) >> 3);
            }
            sub_22408B0((const char ***)v93, (const char ***)v96, (__int64)src, v100, (__int64)v101);
          }
          sub_22408B0(v52, (const char ***)v93, (__int64)src, v99, v98);
        }
        v77 = (__int64)(n[0] - (_QWORD)src) >> 3;
        v98 = v77;
        if ( (__int64)(n[0] - (_QWORD)src) <= 112 )
        {
          sub_2240A50((const char ***)src, (const char ***)n[0]);
        }
        else
        {
          v78 = 8 * (v77 / 2);
          v93 = (char *)src + v78;
          v99 = v78 >> 3;
          if ( v78 <= 112 )
          {
            sub_2240A50((const char ***)src, (const char ***)v93);
          }
          else
          {
            v100 = 8 * ((v78 >> 3) / 2);
            v96 = (char *)src + v100;
            v101 = (void *)(v100 >> 3);
            if ( v100 <= 112 )
            {
              v102 = (void *)v78;
              sub_2240A50((const char ***)src, (const char ***)v96);
              v79 = (__int64)v102;
            }
            else
            {
              v104 = v78;
              v103 = (void *)(8 * ((__int64)v101 / 2));
              v102 = (char *)v103 + (_QWORD)src;
              sub_2240B70((const char ***)src, (const char ***)((char *)v103 + (_QWORD)src));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)src), (const char ***)v96);
              sub_22408B0(
                (const char ***)src,
                (const char ***)((char *)v103 + (_QWORD)src),
                (__int64)v96,
                (__int64)v103 >> 3,
                (v100 - (__int64)v103) >> 3);
              v79 = v104;
            }
            v80 = v79 - v100;
            v100 = v80 >> 3;
            if ( v80 <= 112 )
            {
              sub_2240A50((const char ***)v96, (const char ***)v93);
            }
            else
            {
              v103 = (void *)(8 * ((v80 >> 3) / 2));
              v102 = (char *)v103 + (_QWORD)v96;
              sub_2240B70((const char ***)v96, (const char ***)((char *)v103 + (_QWORD)v96));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v96), (const char ***)v93);
              sub_22408B0(
                (const char ***)v96,
                (const char ***)v102,
                (__int64)v93,
                (__int64)v103 >> 3,
                ((_BYTE *)v93 - (_BYTE *)v102) >> 3);
            }
            sub_22408B0((const char ***)src, (const char ***)v96, (__int64)v93, (__int64)v101, v100);
          }
          v81 = (__int64)(n[0] - (_QWORD)v93) >> 3;
          v100 = v81;
          if ( (__int64)(n[0] - (_QWORD)v93) <= 112 )
          {
            sub_2240A50((const char ***)v93, (const char ***)n[0]);
          }
          else
          {
            v82 = 8 * (v81 / 2);
            v96 = (char *)v93 + v82;
            v101 = (void *)(v82 >> 3);
            if ( v82 <= 112 )
            {
              sub_2240A50((const char ***)v93, (const char ***)v96);
            }
            else
            {
              v104 = 8 * (v81 / 2);
              v103 = (void *)(8 * ((__int64)v101 / 2));
              sub_2240B70((const char ***)v93, (const char ***)((char *)v103 + (_QWORD)v93));
              sub_2240B70((const char ***)((char *)v103 + (_QWORD)v93), (const char ***)v96);
              sub_22408B0(
                (const char ***)v93,
                (const char ***)((char *)v103 + (_QWORD)v93),
                (__int64)v96,
                (__int64)v103 >> 3,
                (v104 - (__int64)v103) >> 3);
            }
            v83 = (__int64)(n[0] - (_QWORD)v96) >> 3;
            v102 = (void *)v83;
            if ( (__int64)(n[0] - (_QWORD)v96) <= 112 )
            {
              sub_2240A50((const char ***)v96, (const char ***)n[0]);
            }
            else
            {
              v104 = 8 * (v83 / 2);
              v103 = (char *)v96 + v104;
              sub_2240B70((const char ***)v96, (const char ***)((char *)v96 + v104));
              sub_2240B70((const char ***)((char *)v96 + v104), (const char ***)n[0]);
              sub_22408B0(
                (const char ***)v96,
                (const char ***)v103,
                n[0],
                v104 >> 3,
                (__int64)(n[0] - (_QWORD)v103) >> 3);
            }
            sub_22408B0((const char ***)v93, (const char ***)v96, n[0], (__int64)v101, (__int64)v102);
          }
          sub_22408B0((const char ***)src, (const char ***)v93, n[0], v99, v100);
        }
        sub_22408B0(v52, (const char ***)src, n[0], (__int64)v97, v98);
      }
      sub_22408B0((const char ***)v89, v52, n[0], (__int64)v94, (__int64)v95);
      v19 = nullptr;
      goto LABEL_20;
    }
    v84 = (const char ***)n[0];
    v85 = (const char ***)v89;
LABEL_117:
    sub_2240A50(v85, v84);
    v19 = nullptr;
    goto LABEL_20;
  }
LABEL_18:
  while ( 1 )
  {
    v18 = (void *)operator new(8 * v13, (const std::nothrow_t *)&std::nothrow);
    if ( v18 )
      break;
    v13 >>= 1;
    if ( !v13 )
      goto LABEL_52;
  }
  src = v18;
  sub_2241A10((const char ***)v89, (const char ***)n[0], (const char ***)v18, v13);
  v19 = src;
LABEL_20:
  operator delete(v19, (const std::nothrow_t *)&std::nothrow);
  v20 = v90;
  v21 = *(_QWORD *)(v90 + 32);
  v89 = *(void **)(v90 + 24);
  if ( (char *)v89 - v21 > (_BYTE *)&dword_0 + 2 )
  {
    *(_BYTE *)(v21 + 2) = 61;
    v22 = v20;
    *(_WORD *)v21 = 15677;
    *(_QWORD *)(v20 + 32) += 3LL;
  }
  else
  {
    v22 = sub_227BF10(v90, "===", 3);
  }
  v105[0] = v15 + 2;
  v23 = (__m128i *)operator new(0x4Au);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23ABB80);
  strcpy(v23[4].m128i_i8, "---------");
  *v23 = si128;
  v23[1] = si128;
  v23[2] = si128;
  v23[3] = si128;
  v105[0] = v23;
  v106 = 73;
  v105[1] = &qword_48 + 1;
  v25 = sub_227BF10(v22, v23, 73);
  v26 = *(_DWORD **)(v25 + 32);
  v27 = v25;
  if ( *(_QWORD *)(v25 + 24) - (_QWORD)v26 > 3u )
  {
    *v26 = 171785533;
    v29 = *(_QWORD *)(v25 + 32) + 4LL;
    *(_QWORD *)(v25 + 32) = v29;
  }
  else
  {
    v28 = sub_227BF10(v25, "===\n", 4);
    v29 = *(_QWORD *)(v28 + 32);
    v27 = v28;
  }
  if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v29) > 0x36 )
  {
    v86 = _mm_load_si128((const __m128i *)&xmmword_23ABB90);
    *(_DWORD *)(v29 + 48) = 773874789;
    *(_WORD *)(v29 + 52) = 11822;
    *(__m128i *)v29 = v86;
    v87 = _mm_load_si128((const __m128i *)&xmmword_23ABBA0);
    *(_BYTE *)(v29 + 54) = 10;
    *(__m128i *)(v29 + 16) = v87;
    *(__m128i *)(v29 + 32) = _mm_load_si128((const __m128i *)&xmmword_23ABBB0);
    v31 = *(_QWORD *)(v27 + 32) + 55LL;
    *(_QWORD *)(v27 + 32) = v31;
  }
  else
  {
    v30 = sub_227BF10(v27, "                          ... Statistics Collected ...\n", 55);
    v31 = *(_QWORD *)(v30 + 32);
    v27 = v30;
  }
  if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v31) > 2 )
  {
    *(_BYTE *)(v31 + 2) = 61;
    *(_WORD *)v31 = 15677;
    *(_QWORD *)(v27 + 32) += 3LL;
  }
  else
  {
    v27 = sub_227BF10(v27, "===", 3);
  }
  v107[0] = &v108;
  v32 = (__m128i *)operator new(0x4Au);
  v33 = _mm_load_si128((const __m128i *)&xmmword_23ABB80);
  strcpy(v32[4].m128i_i8, "---------");
  v34 = (void **)v32;
  *v32 = v33;
  v32[1] = v33;
  v32[2] = v33;
  v32[3] = v33;
  v107[0] = v32;
  v108.m128_u64[0] = 73;
  v107[1] = &qword_48 + 1;
  v35 = sub_227BF10(v27, v32, 73);
  v38 = *(_QWORD *)(v35 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v35 + 24) - v38) > 4 )
  {
    *(_DWORD *)v38 = 171785533;
    *(_BYTE *)(v38 + 4) = 10;
    *(_QWORD *)(v35 + 32) += 5LL;
  }
  else
  {
    v34 = (void **)"===\n\n";
    sub_227BF10(v35, "===\n\n", 5);
  }
  if ( v107[0] != &v108 )
    operator delete(v107[0]);
  if ( v105[0] != v15 + 2 )
    operator delete(v105[0]);
  v39 = *(__int64 **)v91;
  v40 = *(__int64 **)(v91 + 8);
  if ( v40 != *(__int64 **)v91 )
  {
    v41 = v90;
    v89 = "%*lu %-*s - %s\n";
    *(__m128 *)n = _mm_loadh_ps((const double *)&v89);
    do
    {
      v42 = *v39;
      v34 = v107;
      ++v39;
      v43 = *(void **)v42;
      v44 = *(_QWORD *)(v42 + 24);
      v45 = _mm_load_si128((const __m128i *)n);
      v109 = v14;
      v89 = v43;
      *(__m128i *)v107 = v45;
      v110 = v44;
      v46 = _mm_loadh_ps((const double *)&v89);
      v111 = v12;
      v108 = v46;
      sub_227C560(v41, v107);
    }
    while ( v40 != v39 );
  }
  v47 = *(_BYTE **)(v90 + 32);
  if ( (unsigned __int64)v47 >= *(_QWORD *)(v90 + 24) )
  {
    v34 = (void **)(byte_9 + 1);
    sub_227BA10(v90, 10);
  }
  else
  {
    v48 = v47 + 1;
    *(_QWORD *)(v90 + 32) = v47 + 1;
    *v47 = 10;
  }
  result = v90;
  if ( *(_QWORD *)(v90 + 32) != *(_QWORD *)(v90 + 16) )
    return sub_227B9F0(v90, v34, v48, v38, v36, v37, n[0]);
  return result;
}
