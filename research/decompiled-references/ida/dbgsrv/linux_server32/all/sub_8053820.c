/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8053820
// Address: 0x08053820

//----- (08053820) --------------------------------------------------------
size_t __cdecl sub_8053820(int a1, size_t *a2)
{
  char *v2; // eax
  int v3; // edi
  char *v4; // esi
  void *v5; // eax
  void *v6; // eax
  int v7; // esi
  int v8; // eax
  size_t v9; // eax
  int v10; // eax
  size_t v11; // edi
  unsigned int v12; // ecx
  _BYTE *v13; // edx
  unsigned int i; // eax
  FILE *v15; // eax
  FILE *v16; // edi
  size_t v17; // eax
  size_t v18; // edx
  size_t v19; // edi
  void *v20; // eax
  unsigned int v21; // edi
  size_t v22; // edx
  int v23; // ecx
  void *v24; // eax
  size_t v25; // edi
  size_t v26; // esi
  void *v28; // eax
  size_t v29; // eax
  unsigned int v30; // esi
  char *v31; // ecx
  char *v32; // eax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  size_t v35; // esi
  _BYTE *v36; // eax
  size_t v37; // edi
  unsigned int v38; // edi
  void *v39; // eax
  size_t v40; // edi
  void *v41; // eax
  size_t v42; // edx
  size_t v43; // ecx
  size_t v44; // eax
  char *v45; // esi
  int v46; // eax
  size_t v47; // edi
  int v48; // edx
  __int64 v49; // xmm1_8
  int v50; // edx
  int v51; // edx
  __int64 v52; // xmm2_8
  void *v53; // edx
  size_t v54; // esi
  size_t v55; // esi
  void *v56; // eax
  size_t v57; // [esp+0h] [ebp-54B8h]
  size_t v58; // [esp+4h] [ebp-54B4h]
  int v59; // [esp+8h] [ebp-54B0h]
  int v60; // [esp+8h] [ebp-54B0h]
  size_t v61; // [esp+Ch] [ebp-54ACh]
  int v62; // [esp+Ch] [ebp-54ACh]
  int v63; // [esp+Ch] [ebp-54ACh]
  void *ptr; // [esp+18h] [ebp-54A0h]
  int v65; // [esp+1Ch] [ebp-549Ch]
  void *v66; // [esp+1Ch] [ebp-549Ch]
  __pid_t v67; // [esp+24h] [ebp-5494h]
  size_t v68; // [esp+28h] [ebp-5490h]
  size_t size; // [esp+34h] [ebp-5484h]
  size_t sizea; // [esp+34h] [ebp-5484h]
  size_t sizec; // [esp+34h] [ebp-5484h]
  size_t sizeb; // [esp+34h] [ebp-5484h]
  size_t n; // [esp+38h] [ebp-5480h]
  size_t na; // [esp+38h] [ebp-5480h]
  char *nb; // [esp+38h] [ebp-5480h]
  size_t nc; // [esp+38h] [ebp-5480h]
  size_t nd; // [esp+38h] [ebp-5480h]
  size_t nf; // [esp+38h] [ebp-5480h]
  size_t ne; // [esp+38h] [ebp-5480h]
  void *src; // [esp+40h] [ebp-5478h] BYREF
  int v81; // [esp+44h] [ebp-5474h]
  int v82; // [esp+48h] [ebp-5470h]
  int v83; // [esp+50h] [ebp-5468h]
  void *dest; // [esp+54h] [ebp-5464h] BYREF
  size_t v85; // [esp+58h] [ebp-5460h]
  unsigned int v86; // [esp+5Ch] [ebp-545Ch]
  int v87; // [esp+60h] [ebp-5458h]
  void *v88; // [esp+64h] [ebp-5454h] BYREF
  size_t v89; // [esp+68h] [ebp-5450h]
  size_t v90; // [esp+6Ch] [ebp-544Ch]
  char v91[4]; // [esp+70h] [ebp-5448h] BYREF
  char v92[8216]; // [esp+74h] [ebp-5444h] BYREF
  int v93; // [esp+208Ch] [ebp-342Ch]
  int v94; // [esp+2094h] [ebp-3424h]
  char v95[1024]; // [esp+409Ch] [ebp-141Ch] BYREF
  char v96[4096]; // [esp+449Ch] [ebp-101Ch] BYREF
  unsigned int v97; // [esp+549Ch] [ebp-1Ch]

  v97 = __readgsdword(0x14u);
  v67 = getpid();
  v2 = (char *)*a2;
  if ( *a2 )
  {
    if ( a2[1] )
    {
      n = a2[1];
      v3 = 0;
      do
      {
        v4 = &v2[32 * v3];
        v5 = *((void **)v4 + 5);
        if ( v5 )
        {
          *((_DWORD *)v4 + 6) = 0;
          sub_80CF780(v5);
        }
        v6 = *((void **)v4 + 1);
        if ( v6 )
        {
          *((_DWORD *)v4 + 2) = 0;
          sub_80CF780(v6);
        }
        ++v3;
        v2 = (char *)*a2;
      }
      while ( n != v3 );
    }
    a2[1] = 0;
    sub_80CF780(v2);
    *a2 = 0;
    a2[2] = 0;
  }
  v93 = 0;
  v94 = 0;
  v7 = sub_80CE3F0("/proc/*", (int)v91, 0x4000);
  if ( !v7 )
  {
    while ( (unsigned __int8)(v92[0] - 48) > 9u )
    {
LABEL_45:
      v7 = sub_80CE330((int)v91);
      if ( v7 )
        goto LABEL_46;
    }
    dest = nullptr;
    v85 = 0;
    v86 = 0;
    v88 = nullptr;
    v89 = 0;
    v90 = 0;
    v8 = strtol(v92, nullptr, 10);
    v83 = v8;
    if ( v67 == v8 || !(*(unsigned __int8 (__cdecl **)(int, int, char *, int))(*(_DWORD *)a1 + 312))(a1, v8, v95, 1024) )
    {
      if ( v88 )
      {
        v89 = 0;
        sub_80CF780(v88);
      }
      if ( !dest )
        goto LABEL_45;
LABEL_44:
      v85 = 0;
      sub_80CF780(dest);
      goto LABEL_45;
    }
    v9 = strlen(v95);
    na = v9;
    if ( v9 )
    {
      v38 = v9 + 1;
      v39 = dest;
      if ( v86 < v38 )
      {
        v39 = sub_80CF920((int)&dest, dest, v38, 1u);
        dest = v39;
      }
      v85 = v38;
      memmove(v39, v95, na);
      *((_BYTE *)dest + na) = 0;
    }
    else
    {
      v85 = 0;
    }
    v10 = (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 316))(a1, v83);
    v87 = v10;
    if ( v10 == 4 )
    {
      v11 = 5;
      v12 = 4;
      nb = (char *)&qword_811CFF4 - 282583;
    }
    else
    {
      if ( v10 != 8 )
      {
        v13 = v88;
        v11 = 4;
        v12 = 3;
        nb = (char *)&qword_811CFF4 - 282573;
        if ( v90 >= 4 )
          goto LABEL_20;
        goto LABEL_49;
      }
      v11 = 5;
      v12 = 4;
      nb = (char *)&qword_811CFF4 - 282578;
    }
    v13 = v88;
    if ( v90 >= 5 )
    {
LABEL_20:
      v89 = v11;
      for ( i = 0; i < v12; ++i )
        v13[i] = nb[i];
      *((_BYTE *)v88 + v12) = 0;
      sub_80D3B60(v96, 4096, "/proc/%u/cmdline", v83);
      v15 = sub_80CDA20((int)v96, "r");
      v16 = v15;
      if ( v15 )
      {
        v17 = sub_80CEE00(v15, v96, 4096);
        if ( v17 )
        {
          v65 = v17;
          v96[v17] = 0;
          sub_80CF060(v16);
          if ( v65 > 0 )
          {
            do
            {
              src = nullptr;
              v81 = 0;
              v82 = 0;
              v25 = strlen(&v96[v7]);
              src = sub_80CF920((int)&src, nullptr, v25 + 1, 1u);
              v81 = v25 + 1;
              memmove(src, &v96[v7], v25);
              *((_BYTE *)src + v25) = 0;
              sub_80C50F0((int)&src);
              v19 = v89;
              if ( v89 )
              {
                v18 = v89;
                v19 = v89 - 1;
                size = v89 + 1;
              }
              else
              {
                size = 2;
                v18 = 1;
              }
              v20 = v88;
              if ( v90 < size )
              {
                v61 = v18;
                v20 = sub_80CF920((int)&v88, v88, size, 1u);
                v18 = v61;
                v88 = v20;
              }
              v89 = size;
              *((_BYTE *)v20 + v18) = 0;
              *((_BYTE *)v88 + v19) = 32;
              v21 = v81;
              if ( v81 )
              {
                v22 = v81 - 1;
                if ( v81 != 1 )
                {
                  v23 = v81 - 1;
                  sizea = v89;
                  if ( v89 )
                  {
                    sizea = v89 - 1;
                    v23 = v22 + v89 - 1;
                    v21 = v81 + v89 - 1;
                  }
                  v24 = v88;
                  if ( v90 < v21 )
                  {
                    v60 = v23;
                    v63 = v81 - 1;
                    v24 = sub_80CF920((int)&v88, v88, v21, 1u);
                    v23 = v60;
                    v88 = v24;
                    v22 = v63;
                  }
                  v89 = v21;
                  *((_BYTE *)v24 + v23) = 0;
                  memcpy((char *)v88 + sizea, src, v22);
                }
              }
              v7 += strlen(&v96[v7]) + 1;
              if ( src )
              {
                v81 = 0;
                sub_80CF780(src);
              }
            }
            while ( v65 > v7 );
          }
          sizeb = v85;
          goto LABEL_51;
        }
      }
      v35 = v89;
      if ( v89 )
      {
        nc = v89;
        v37 = v89 + 1;
        v36 = v88;
        v35 = v89 - 1;
        if ( v90 >= v89 + 1 )
          goto LABEL_63;
      }
      else
      {
        nc = 1;
        v36 = v88;
        v37 = 2;
        if ( v90 >= 2 )
        {
LABEL_63:
          v89 = v37;
          v36[nc] = 0;
          *((_BYTE *)v88 + v35) = 32;
          sizeb = v85;
          if ( !v85 )
          {
            ptr = nullptr;
            v62 = v83;
            goto LABEL_53;
          }
          v40 = v85 - 1;
          if ( v85 == 1 )
          {
            sizeb = 1;
            v62 = v83;
LABEL_71:
            ptr = sub_80CF8B0(sizeb);
            memcpy(ptr, dest, sizeb);
LABEL_53:
            v66 = nullptr;
            v59 = v87;
            v68 = v89;
            if ( v89 )
            {
              v54 = v89;
              v66 = sub_80CF8B0(v89);
              memcpy(v66, v88, v54);
            }
            v29 = a2[1];
            v30 = a2[2];
            if ( v30 < v29 + 1 )
            {
              v41 = sub_80CF920((int)a2, nullptr, v29 + 1, 0x20u);
              v42 = a2[2];
              v43 = (size_t)v41;
              v44 = a2[1];
              a2[2] = v30;
              v45 = (char *)*a2;
              v58 = v42;
              v46 = v44 - 1;
              if ( v46 >= 0 )
              {
                v57 = v43;
                v47 = v43;
                for ( nd = v46; nd != -1; --nd )
                {
                  *(_DWORD *)v47 = *(_DWORD *)v45;
                  v48 = *((_DWORD *)v45 + 1);
                  v49 = *((_QWORD *)v45 + 1);
                  *((_DWORD *)v45 + 1) = 0;
                  *(_DWORD *)(v47 + 4) = v48;
                  *(_QWORD *)(v47 + 8) = v49;
                  v50 = *((_DWORD *)v45 + 4);
                  *((_DWORD *)v45 + 2) = 0;
                  *((_DWORD *)v45 + 3) = 0;
                  *(_DWORD *)(v47 + 16) = v50;
                  v51 = *((_DWORD *)v45 + 5);
                  v52 = *((_QWORD *)v45 + 3);
                  *((_DWORD *)v45 + 5) = 0;
                  *(_DWORD *)(v47 + 20) = v51;
                  *(_QWORD *)(v47 + 24) = v52;
                  v53 = *((void **)v45 + 1);
                  *((_DWORD *)v45 + 7) = 0;
                  if ( v53 )
                  {
                    *((_DWORD *)v45 + 2) = 0;
                    sub_80CF780(v53);
                  }
                  v45 += 32;
                  v47 += 32;
                }
                v43 = v57;
                v45 = (char *)*a2;
              }
              nf = v43;
              sub_80CF780(v45);
              v31 = (char *)nf;
              *a2 = nf;
              a2[2] = v58;
              v29 = a2[1];
            }
            else
            {
              v31 = (char *)*a2;
            }
            v32 = &v31[32 * v29];
            *(_DWORD *)v32 = v62;
            *((_DWORD *)v32 + 1) = ptr;
            v33 = _mm_cvtsi32_si128(sizeb);
            *((_QWORD *)v32 + 1) = _mm_unpacklo_epi32(v33, v33).m128i_u64[0];
            v34 = _mm_cvtsi32_si128(v68);
            *((_DWORD *)v32 + 4) = v59;
            *((_DWORD *)v32 + 5) = v66;
            *((_QWORD *)v32 + 3) = _mm_unpacklo_epi32(v34, v34).m128i_u64[0];
            ++a2[1];
            if ( v88 )
            {
              v89 = 0;
              sub_80CF780(v88);
            }
            if ( !dest )
              goto LABEL_45;
            goto LABEL_44;
          }
          v55 = v89;
          ne = v85 - 1;
          if ( v89 )
          {
            v55 = v89 - 1;
            ne = v40 + v89 - 1;
            sizeb = v85 + v89 - 1;
          }
          v56 = v88;
          if ( v90 < sizeb )
          {
            v56 = sub_80CF920((int)&v88, v88, sizeb, 1u);
            v88 = v56;
          }
          v89 = sizeb;
          *((_BYTE *)v56 + ne) = 0;
          memcpy((char *)v88 + v55, dest, v40);
          sizeb = v85;
LABEL_51:
          v62 = v83;
          if ( !sizeb )
          {
            ptr = nullptr;
            goto LABEL_53;
          }
          goto LABEL_71;
        }
      }
      v36 = sub_80CF920((int)&v88, v36, v37, 1u);
      v88 = v36;
      goto LABEL_63;
    }
LABEL_49:
    sizec = v12;
    v28 = sub_80CF920((int)&v88, v13, v11, 1u);
    v12 = sizec;
    v88 = v28;
    v13 = v28;
    goto LABEL_20;
  }
LABEL_46:
  v26 = a2[1];
  sub_80CE450((int)v91);
  if ( v97 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v26;
}
// 8053A9F: conditional instruction was optimized away because ecx.4 is in (3..4)
// 811CFF4: using guessed type __int64 qword_811CFF4;
