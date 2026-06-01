__int64 __fastcall sub_206BC70(__int64 a1)
{
  __int64 v1; // rax
  void **v2; // rbx
  void *v3; // rsi
  void **v4; // r12
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 **v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int8 **v20; // rbx
  unsigned __int8 **v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned int v24; // eax
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 **v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  void **v33; // rbp
  __int64 v34; // rbx
  void **v35; // rax
  unsigned __int8 **v36; // r12
  void **v37; // r15
  void **v38; // rax
  char v39; // al
  unsigned int v40; // esi
  __int64 v41; // rdi
  unsigned int v42; // edx
  __int64 *v43; // rax
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // eax
  void **v47; // rax
  int v48; // ebp
  __int64 *v49; // r15
  bool v50; // zf
  void **v51; // rax
  unsigned __int8 **v52; // r15
  void **v53; // rax
  unsigned __int8 **v54; // r15
  __int64 v55; // rdi
  __int64 v56; // rsi
  void **v58; // rax
  unsigned __int8 **v59; // r15
  char v60; // al
  void **v61; // [rsp+8h] [rbp-1F0h] BYREF
  void **v62; // [rsp+10h] [rbp-1E8h]
  void **v63; // [rsp+18h] [rbp-1E0h]
  unsigned __int8 v64; // [rsp+27h] [rbp-1D1h]
  __int64 v65; // [rsp+28h] [rbp-1D0h]
  unsigned __int8 **v66; // [rsp+30h] [rbp-1C8h]
  __int64 v67; // [rsp+38h] [rbp-1C0h]
  __int64 v68; // [rsp+40h] [rbp-1B8h]
  void **v69; // [rsp+48h] [rbp-1B0h]
  __m128i v70; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-190h] BYREF
  __m128i v72; // [rsp+70h] [rbp-188h] BYREF
  __int64 v73; // [rsp+80h] [rbp-178h] BYREF
  __int64 v74; // [rsp+88h] [rbp-170h]
  unsigned int v75; // [rsp+90h] [rbp-168h]
  void *s; // [rsp+A0h] [rbp-158h] BYREF
  unsigned int v77; // [rsp+A8h] [rbp-150h]
  __int64 v78; // [rsp+ACh] [rbp-14Ch]
  char v79; // [rsp+B4h] [rbp-144h]
  __int64 v80; // [rsp+B8h] [rbp-140h] BYREF
  void *ptr[2]; // [rsp+100h] [rbp-F8h] BYREF
  int v82; // [rsp+110h] [rbp-E8h]
  char v83; // [rsp+114h] [rbp-E4h]
  __int64 v84; // [rsp+118h] [rbp-E0h] BYREF
  void *v85[2]; // [rsp+160h] [rbp-98h] BYREF
  int v86; // [rsp+170h] [rbp-88h]
  char v87; // [rsp+174h] [rbp-84h]

  if ( (*(_BYTE *)(a1 + 7) & 0x20) != 0 && sub_20AF750(a1, 0) )
  {
    sub_20BE030(a1, 0);
    v64 = 1;
  }
  else
  {
    v64 = 0;
  }
  v1 = *(_QWORD *)(a1 + 80);
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v65 = v1;
  v68 = a1 + 72;
  if ( v1 == a1 + 72 )
  {
    v55 = 0;
    v56 = 0;
    goto LABEL_88;
  }
  if ( !v1 )
LABEL_108:
    BUG();
  v61 = ptr;
  v63 = v85;
  v70 = (__m128i)_mm_loadh_ps((const double *)&v61);
  while ( 1 )
  {
    v2 = *(void ***)(v65 + 32);
    v62 = (void **)(v65 + 24);
    if ( (void **)(v65 + 24) != v2 )
    {
      while ( 1 )
      {
        v3 = v2[3];
        v4 = v2 - 3;
        v61 = (void **)v2[1];
        if ( v3 )
        {
          ptr[0] = nullptr;
          v85[0] = nullptr;
          if ( v2 + 3 != v63 )
          {
            sub_20A0850(v2 + 3);
            v5 = v85[0];
            v2[3] = v85[0];
            if ( v5 )
              sub_20B3430(v63, v5, v2 + 3);
            if ( ptr[0] )
              sub_20A0850(ptr);
          }
          v64 = 1;
        }
        if ( (*((_BYTE *)v2 - 17) & 0x20) != 0 )
          break;
LABEL_14:
        sub_2090090(v4);
        if ( v62 == v61 )
          goto LABEL_59;
        v2 = v61;
      }
      v6 = sub_20AF750(v2 - 3, 18);
      v9 = v6;
      v71 = v6;
      if ( !v6 )
      {
LABEL_12:
        if ( (*((_BYTE *)v2 - 17) & 0x20) != 0 )
        {
          sub_20BE0D0(v4, "heapallocsite", 13, 0);
          sub_20BE040(v4, 38, 0);
        }
        goto LABEL_14;
      }
      if ( v75 )
      {
        v10 = (v75 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
        v11 = (__int64 *)(v73 + 16LL * v10);
        v12 = *v11;
        if ( v9 != *v11 )
        {
          v46 = 1;
          if ( v12 == -4096 )
            goto LABEL_28;
          while ( 1 )
          {
            v7 = (unsigned int)(v46 + 1);
            v10 = (v75 - 1) & (v46 + v10);
            v11 = (__int64 *)(v73 + 16LL * v10);
            if ( v9 == *v11 )
              break;
            if ( *v11 == -4096 )
              goto LABEL_28;
            v46 = v7;
          }
        }
        v13 = v11[1];
        if ( v13 )
          goto LABEL_10;
      }
LABEL_28:
      ptr[1] = byte_8;
      s = &v80;
      ptr[0] = &v84;
      v85[1] = byte_8;
      v79 = 1;
      v85[0] = v63 + 3;
      v14 = *(_BYTE *)(v9 - 16);
      v77 = 8;
      v82 = 0;
      v83 = 1;
      v86 = 0;
      v87 = 1;
      v78 = 1;
      v80 = v9;
      if ( (v14 & 2) != 0 )
      {
        v15 = *(_QWORD *)(v9 - 32);
        v16 = *(unsigned int *)(v9 - 24);
        v17 = (unsigned __int8 **)(v15 + 8);
        v18 = v15 + 8 * v16;
        if ( v18 != v15 + 8 )
        {
LABEL_30:
          v66 = (unsigned __int8 **)v9;
          v67 = (__int64)v2;
          v19 = 0;
          v20 = v17;
          v21 = (unsigned __int8 **)v18;
          do
            v19 -= (sub_206B6D0((__int64)&s, (__int64)ptr, *v20++) == 0) - 1LL;
          while ( v21 != v20 );
          v22 = v19;
          v23 = (__int64)v66;
          v2 = (void **)v67;
          v13 = (__int64)v66;
          if ( !v22 )
            goto LABEL_51;
          if ( !v79 )
          {
            v24 = 4 * (v78 - HIDWORD(v78));
            if ( v24 < 0x20 )
              v24 = 32;
            if ( v77 > v24 )
            {
              sub_22364B0(&s);
LABEL_39:
              v25 = *(_BYTE *)(v23 - 16);
              if ( (v25 & 2) != 0 )
              {
                v16 = *(_QWORD *)(v23 - 32);
                v26 = *(unsigned int *)(v23 - 24);
              }
              else
              {
                v26 = (*(_WORD *)(v23 - 16) >> 6) & 0xF;
                v16 = v23 - 8LL * ((v25 >> 2) & 0xF) - 16;
              }
              v27 = 8 * v26;
              v28 = (unsigned __int8 **)(v16 + 8);
              v29 = v16 + v27;
              v30 = v27 - 8;
              v31 = (v27 - 8) >> 5;
              v66 = (unsigned __int8 **)v29;
              v32 = v30 >> 3;
              if ( v31 > 0 )
              {
                v69 = v2;
                v67 = v23;
                v33 = v63;
                v34 = v16 + 32 * v31 + 8;
                v35 = v4;
                v36 = (unsigned __int8 **)(v16 + 8);
                v37 = v35;
                while ( 1 )
                {
                  if ( !(unsigned __int8)sub_206B800((__int64)&s, (__int64)v33, (__int64)ptr, *v36) )
                  {
                    v38 = v37;
                    v23 = v67;
                    v2 = v69;
                    v28 = v36;
                    v4 = v38;
                    goto LABEL_49;
                  }
                  if ( !(unsigned __int8)sub_206B800((__int64)&s, (__int64)v33, (__int64)ptr, v36[1]) )
                  {
                    v51 = v37;
                    v52 = v36;
                    v23 = v67;
                    v2 = v69;
                    v4 = v51;
                    v28 = v52 + 1;
                    goto LABEL_49;
                  }
                  if ( !(unsigned __int8)sub_206B800((__int64)&s, (__int64)v33, (__int64)ptr, v36[2]) )
                  {
                    v53 = v37;
                    v54 = v36;
                    v23 = v67;
                    v2 = v69;
                    v4 = v53;
                    v28 = v54 + 2;
                    goto LABEL_49;
                  }
                  if ( !(unsigned __int8)sub_206B800((__int64)&s, (__int64)v33, (__int64)ptr, v36[3]) )
                    break;
                  v36 += 4;
                  if ( (unsigned __int8 **)v34 == v36 )
                  {
                    v47 = v37;
                    v28 = v36;
                    v23 = v67;
                    v2 = v69;
                    v4 = v47;
                    v32 = v66 - v28;
                    goto LABEL_75;
                  }
                }
                v58 = v37;
                v59 = v36;
                v23 = v67;
                v2 = v69;
                v4 = v58;
                v28 = v59 + 3;
LABEL_49:
                if ( v66 != v28 )
                {
                  v72 = _mm_load_si128(&v70);
                  v13 = sub_206B1D0(v23, (__int64 (__fastcall *)(__int64))sub_206B620, (__int64)&v72);
                  goto LABEL_51;
                }
                goto LABEL_78;
              }
LABEL_75:
              if ( v32 != 2 )
              {
                if ( v32 != 3 )
                {
                  if ( v32 != 1 )
                  {
LABEL_78:
                    v13 = 0;
                    goto LABEL_51;
                  }
                  goto LABEL_95;
                }
                if ( !(unsigned __int8)sub_206B800((__int64)&s, (__int64)v63, (__int64)ptr, *v28) )
                  goto LABEL_49;
                ++v28;
              }
              if ( !(unsigned __int8)sub_206B800((__int64)&s, (__int64)v63, (__int64)ptr, *v28) )
                goto LABEL_49;
              ++v28;
LABEL_95:
              v60 = sub_206B800((__int64)&s, (__int64)v63, (__int64)ptr, *v28);
              v13 = 0;
              if ( v60 )
              {
LABEL_51:
                if ( v87 )
                {
                  v39 = v83;
                }
                else
                {
                  v66 = (unsigned __int8 **)v13;
                  free(v85[0]);
                  v39 = v83;
                  v13 = (__int64)v66;
                }
                if ( !v39 )
                {
                  v66 = (unsigned __int8 **)v13;
                  free(ptr[0]);
                  v13 = (__int64)v66;
                }
                if ( !v79 )
                {
                  v66 = (unsigned __int8 **)v13;
                  free(s);
                  v40 = v75;
                  v13 = (__int64)v66;
                  if ( v75 )
                  {
LABEL_57:
                    v41 = v71;
                    v42 = (v40 - 1) & (((unsigned int)v71 >> 9) ^ ((unsigned int)v71 >> 4));
                    v43 = (__int64 *)(v73 + 16LL * v42);
                    v44 = *v43;
                    if ( *v43 == v71 )
                    {
LABEL_58:
                      v43[1] = v13;
                      v9 = v71;
LABEL_10:
                      if ( v13 != v9 )
                        sub_20BE040(v4, 18, v13);
                      goto LABEL_12;
                    }
                    v48 = 1;
                    v49 = nullptr;
                    if ( v44 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v49 && v44 == -8192 )
                          v49 = v43;
                        v42 = (v40 - 1) & (v48 + v42);
                        v43 = (__int64 *)(v73 + 16LL * v42);
                        v44 = *v43;
                        if ( v71 == *v43 )
                          goto LABEL_58;
                        if ( v44 == -4096 )
                        {
                          if ( v49 )
                            v43 = v49;
                          break;
                        }
                        ++v48;
                      }
                    }
                    v7 = 3 * v40;
                    v85[0] = v43;
                    v16 = (unsigned int)(v74 + 1);
                    v8 = (unsigned int)(4 * v16);
                    if ( (unsigned int)v8 < (unsigned int)v7 )
                    {
                      v7 = v40 - HIDWORD(v74) - (unsigned int)v16;
                      v8 = v40 >> 3;
                      if ( (unsigned int)v7 > (unsigned int)v8 )
                        goto LABEL_82;
                      v66 = (unsigned __int8 **)v13;
LABEL_68:
                      sub_206BA60((__int64)&v73, v40, v16, v13, v7, v8);
                      sub_206B930(&v73, &v71, v63);
                      v41 = v71;
                      v13 = (__int64)v66;
                      LODWORD(v16) = v74 + 1;
                      v43 = (__int64 *)v85[0];
LABEL_82:
                      v50 = *v43 == -4096;
                      LODWORD(v74) = v16;
                      if ( !v50 )
                        --HIDWORD(v74);
                      *v43 = v41;
                      v43[1] = 0;
                      goto LABEL_58;
                    }
LABEL_67:
                    v66 = (unsigned __int8 **)v13;
                    v40 *= 2;
                    goto LABEL_68;
                  }
LABEL_66:
                  v85[0] = nullptr;
                  goto LABEL_67;
                }
LABEL_56:
                v40 = v75;
                if ( v75 )
                  goto LABEL_57;
                goto LABEL_66;
              }
              goto LABEL_49;
            }
            memset(s, -1, 8LL * v77);
          }
          v78 = 0;
          goto LABEL_39;
        }
      }
      else
      {
        v16 = (*(_WORD *)(v9 - 16) >> 6) & 0xF;
        v45 = v9 - 8LL * ((v14 >> 2) & 0xF) - 16;
        v18 = v45 + 8 * v16;
        v17 = (unsigned __int8 **)(v45 + 8);
        if ( v18 != v45 + 8 )
          goto LABEL_30;
      }
      v13 = v9;
      goto LABEL_56;
    }
LABEL_59:
    v65 = *(_QWORD *)(v65 + 8);
    if ( v68 == v65 )
      break;
    if ( !v65 )
      goto LABEL_108;
  }
  v55 = v73;
  v56 = 16LL * v75;
LABEL_88:
  operator delete(v55, v56, 8);
  return v64;
}
