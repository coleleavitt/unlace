void __fastcall sub_7C4940(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int16 v25; // ax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdi
  _WORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  _WORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  _WORD *v37; // rdx
  __int64 v38; // rax
  _DWORD *v39; // rdx
  __int64 v40; // rdi
  _WORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  _WORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rsi
  char v49; // r12
  __int64 v50; // rdi
  _WORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  _BYTE *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdi
  _WORD *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdi
  _WORD *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdi
  _WORD *v68; // rdx
  __int64 v69; // rax
  _DWORD *v70; // rdx
  __int64 v71; // rdi
  _WORD *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128i si128; // xmm0
  __int64 v76; // rdi
  _WORD *v77; // rdx
  __int64 v78; // rax
  _QWORD *v79; // rdx
  __int64 v80; // rdi
  __int64 v81; // rdx
  _WORD *v82; // rdx
  __int64 v83; // rax
  unsigned int v84; // eax
  _WORD *v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r14
  unsigned int v88; // r15d
  const void *v89; // rax
  size_t v90; // rdx
  void *v91; // rdi
  size_t v92; // r12
  _WORD *v93; // rdx
  _WORD *v94; // rax
  __int64 v95; // [rsp+0h] [rbp-78h]
  _QWORD *v96; // [rsp+8h] [rbp-70h]
  unsigned __int64 v97; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v98; // [rsp+18h] [rbp-60h] BYREF
  void *v99; // [rsp+20h] [rbp-58h] BYREF
  __int64 v100; // [rsp+28h] [rbp-50h]
  __int64 v101; // [rsp+30h] [rbp-48h] BYREF

  v4 = *a1;
  v5 = *(void **)(v4 + 32);
  v6 = *(_BYTE *)(a2 + 76) & 3;
  v7 = *(_QWORD *)(v4 + 24) - (_QWORD)v5;
  if ( v6 == 1 )
  {
    if ( v7 <= 9 )
    {
      sub_26240F0(v4, "@required\n", 10);
    }
    else
    {
      qmemcpy(v5, "@required\n", 10);
      *(_QWORD *)(v4 + 32) += 10LL;
    }
    v4 = *a1;
  }
  else if ( v6 == 2 )
  {
    if ( v7 <= 9 )
    {
      sub_26240F0(v4, "@optional\n", 10);
    }
    else
    {
      qmemcpy(v5, "@optional\n", 10);
      *(_QWORD *)(v4 + 32) += 10LL;
    }
    v4 = *a1;
  }
  v8 = *(_QWORD *)(v4 + 32);
  v97 = *(_QWORD *)(a2 + 56);
  if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v8) <= 8 )
  {
    sub_26240F0(v4, "@property", 9);
  }
  else
  {
    *(_BYTE *)(v8 + 8) = 121;
    *(_QWORD *)v8 = 0x747265706F727040LL;
    *(_QWORD *)(v4 + 32) += 9LL;
  }
  if ( *(_WORD *)(a2 + 72) )
  {
    v23 = *a1;
    v24 = *(_BYTE **)(*a1 + 32);
    if ( *(_BYTE **)(*a1 + 24) == v24 )
    {
      sub_26240F0(v23, "(", 1);
    }
    else
    {
      *v24 = 40;
      ++*(_QWORD *)(v23 + 32);
    }
    v25 = *(_WORD *)(a2 + 72);
    if ( (v25 & 0x4000) != 0 )
    {
      v80 = *a1;
      v81 = *(_QWORD *)(*a1 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v81) <= 4 )
      {
        sub_26240F0(v80, "class", 5);
      }
      else
      {
        *(_DWORD *)v81 = 1935764579;
        *(_BYTE *)(v81 + 4) = 115;
        *(_QWORD *)(v80 + 32) += 5LL;
      }
      v25 = *(_WORD *)(a2 + 72);
      if ( v25 >= 0 )
      {
        if ( (v25 & 0x40) == 0 )
        {
          if ( (v25 & 0x100) != 0 )
          {
LABEL_90:
            v59 = *a1;
            v60 = *(_WORD **)(*a1 + 32);
            if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v60 > 1u )
            {
              *v60 = 8236;
              v62 = *(_QWORD *)(v59 + 32) + 2LL;
              *(_QWORD *)(v59 + 32) = v62;
            }
            else
            {
              v61 = sub_26240F0(v59, ", ", 2);
              v62 = *(_QWORD *)(v61 + 32);
              v59 = v61;
            }
            goto LABEL_92;
          }
          if ( (v25 & 4) == 0 )
          {
            if ( (v25 & 0x10) != 0 )
              goto LABEL_96;
            v49 = 0;
LABEL_137:
            if ( (v25 & 0x400) != 0 )
            {
              v32 = *a1;
              v35 = *(_QWORD *)(*a1 + 32);
              if ( v49 )
              {
LABEL_46:
                if ( (unsigned __int64)(*(_QWORD *)(v32 + 24) - v35) <= 5 )
                {
                  sub_26240F0(v32, "strong", 6);
                }
                else
                {
                  *(_DWORD *)v35 = 1869771891;
                  *(_WORD *)(v35 + 4) = 26478;
                  *(_QWORD *)(v32 + 32) += 6LL;
                }
                v25 = *(_WORD *)(a2 + 72);
                if ( (v25 & 0x20) == 0 )
                {
                  if ( (v25 & 0x200) != 0 )
                  {
LABEL_50:
                    v36 = *a1;
                    goto LABEL_51;
                  }
                  if ( (v25 & 0x800) == 0 )
                  {
                    if ( (v25 & 8) != 0 )
                      goto LABEL_57;
                    v49 = 0;
                    if ( (v25 & 1) != 0 )
                      goto LABEL_116;
                    goto LABEL_210;
                  }
LABEL_109:
                  v71 = *a1;
                  goto LABEL_110;
                }
                goto LABEL_102;
              }
LABEL_44:
              v33 = *(_WORD **)(v32 + 32);
              if ( *(_QWORD *)(v32 + 24) - (_QWORD)v33 > 1u )
              {
                *v33 = 8236;
                v35 = *(_QWORD *)(v32 + 32) + 2LL;
                *(_QWORD *)(v32 + 32) = v35;
              }
              else
              {
                v34 = sub_26240F0(v32, ", ", 2);
                v35 = *(_QWORD *)(v34 + 32);
                v32 = v34;
              }
              goto LABEL_46;
            }
            goto LABEL_216;
          }
LABEL_37:
          v28 = *a1;
          v29 = *(_WORD **)(*a1 + 32);
          if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v29 > 1u )
          {
            *v29 = 8236;
            v31 = *(_QWORD *)(v28 + 32) + 2LL;
            *(_QWORD *)(v28 + 32) = v31;
          }
          else
          {
            v30 = sub_26240F0(v28, ", ", 2);
            v31 = *(_QWORD *)(v30 + 32);
            v28 = v30;
          }
          goto LABEL_39;
        }
LABEL_140:
        v26 = *a1;
        v82 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v82 > 1u )
        {
          *v82 = 8236;
          v27 = *(_QWORD *)(v26 + 32) + 2LL;
          *(_QWORD *)(v26 + 32) = v27;
        }
        else
        {
          v83 = sub_26240F0(v26, ", ", 2);
          v27 = *(_QWORD *)(v83 + 32);
          v26 = v83;
        }
        goto LABEL_33;
      }
      v57 = *a1;
      v93 = *(_WORD **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v93 > 1u )
      {
        *v93 = 8236;
        v58 = *(_QWORD *)(v57 + 32) + 2LL;
        *(_QWORD *)(v57 + 32) = v58;
      }
      else
      {
        v57 = sub_26240F0(v57, ", ", 2);
        v58 = *(_QWORD *)(v57 + 32);
      }
    }
    else
    {
      if ( v25 >= 0 )
      {
        if ( (v25 & 0x40) != 0 )
        {
          v26 = *a1;
          v27 = *(_QWORD *)(*a1 + 32);
LABEL_33:
          if ( (unsigned __int64)(*(_QWORD *)(v26 + 24) - v27) <= 8 )
          {
            sub_26240F0(v26, "nonatomic", 9);
          }
          else
          {
            *(_BYTE *)(v27 + 8) = 99;
            *(_QWORD *)v27 = 0x696D6F74616E6F6ELL;
            *(_QWORD *)(v26 + 32) += 9LL;
          }
          v25 = *(_WORD *)(a2 + 72);
          if ( (v25 & 0x100) == 0 )
          {
            if ( (v25 & 4) != 0 )
              goto LABEL_37;
            if ( (v25 & 0x10) == 0 )
            {
              if ( (v25 & 0x400) != 0 )
                goto LABEL_43;
              v49 = 0;
              if ( (v25 & 0x20) != 0 )
                goto LABEL_102;
              goto LABEL_201;
            }
LABEL_96:
            v63 = *a1;
            v64 = *(_WORD **)(*a1 + 32);
            if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v64 > 1u )
            {
              *v64 = 8236;
              v66 = *(_QWORD *)(v63 + 32) + 2LL;
              *(_QWORD *)(v63 + 32) = v66;
            }
            else
            {
              v65 = sub_26240F0(v63, ", ", 2);
              v66 = *(_QWORD *)(v65 + 32);
              v63 = v65;
            }
            goto LABEL_98;
          }
          goto LABEL_90;
        }
        if ( (v25 & 0x100) != 0 )
        {
          v59 = *a1;
          v62 = *(_QWORD *)(*a1 + 32);
LABEL_92:
          if ( (unsigned __int64)(*(_QWORD *)(v59 + 24) - v62) <= 5 )
          {
            sub_26240F0(v59, "atomic", 6);
          }
          else
          {
            *(_DWORD *)v62 = 1836020833;
            *(_WORD *)(v62 + 4) = 25449;
            *(_QWORD *)(v59 + 32) += 6LL;
          }
          v25 = *(_WORD *)(a2 + 72);
          if ( (v25 & 4) != 0 )
            goto LABEL_37;
          if ( (v25 & 0x10) == 0 )
          {
            if ( (v25 & 0x400) != 0 )
              goto LABEL_43;
            if ( (v25 & 0x20) != 0 )
              goto LABEL_102;
            v49 = 0;
            if ( (v25 & 0x200) != 0 )
              goto LABEL_50;
LABEL_189:
            if ( (v25 & 0x800) != 0 )
            {
              v71 = *a1;
              v74 = *(_QWORD *)(*a1 + 32);
              if ( v49 )
              {
LABEL_112:
                if ( (unsigned __int64)(*(_QWORD *)(v71 + 24) - v74) <= 0x10 )
                {
                  sub_26240F0(v71, "unsafe_unretained", 17);
                }
                else
                {
                  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E8D0);
                  *(_BYTE *)(v74 + 16) = 100;
                  *(__m128i *)v74 = si128;
                  *(_QWORD *)(v71 + 32) += 17LL;
                }
                v25 = *(_WORD *)(a2 + 72);
                if ( (v25 & 8) != 0 )
                  goto LABEL_57;
                if ( (v25 & 1) == 0 )
                {
                  if ( (v25 & 2) != 0 )
                    goto LABEL_64;
                  goto LABEL_122;
                }
LABEL_116:
                v76 = *a1;
                goto LABEL_117;
              }
LABEL_110:
              v72 = *(_WORD **)(v71 + 32);
              if ( *(_QWORD *)(v71 + 24) - (_QWORD)v72 > 1u )
              {
                *v72 = 8236;
                v74 = *(_QWORD *)(v71 + 32) + 2LL;
                *(_QWORD *)(v71 + 32) = v74;
              }
              else
              {
                v73 = sub_26240F0(v71, ", ", 2);
                v74 = *(_QWORD *)(v73 + 32);
                v71 = v73;
              }
              goto LABEL_112;
            }
LABEL_195:
            if ( (v25 & 8) != 0 )
            {
              v40 = *a1;
              v43 = *(_QWORD *)(*a1 + 32);
              if ( v49 )
              {
LABEL_60:
                if ( (unsigned __int64)(*(_QWORD *)(v40 + 24) - v43) <= 8 )
                {
                  sub_26240F0(v40, "readwrite", 9);
                }
                else
                {
                  *(_BYTE *)(v43 + 8) = 101;
                  *(_QWORD *)v43 = 0x7469727764616572LL;
                  *(_QWORD *)(v40 + 32) += 9LL;
                }
                v25 = *(_WORD *)(a2 + 72);
                if ( (v25 & 1) == 0 )
                {
                  if ( (v25 & 2) != 0 )
                  {
LABEL_64:
                    v44 = *a1;
LABEL_65:
                    v45 = *(_WORD **)(v44 + 32);
                    if ( *(_QWORD *)(v44 + 24) - (_QWORD)v45 > 1u )
                    {
                      *v45 = 8236;
                      v47 = *(_QWORD *)(v44 + 32) + 2LL;
                      *(_QWORD *)(v44 + 32) = v47;
                    }
                    else
                    {
                      v46 = sub_26240F0(v44, ", ", 2);
                      v47 = *(_QWORD *)(v46 + 32);
                      v44 = v46;
                    }
LABEL_67:
                    if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v47) <= 8 )
                    {
                      sub_26240F0(v44, "getter = ", 9);
                    }
                    else
                    {
                      *(_BYTE *)(v47 + 8) = 32;
                      *(_QWORD *)v47 = 0x3D20726574746567LL;
                      *(_QWORD *)(v44 + 32) += 9LL;
                    }
                    v48 = *a1;
                    v49 = 0;
                    v99 = *(void **)(a2 + 80);
                    sub_C878B0(&v99, v48);
                    v25 = *(_WORD *)(a2 + 72);
                    if ( (v25 & 0x80u) == 0 )
                      goto LABEL_76;
                    v50 = *a1;
                    goto LABEL_71;
                  }
                  if ( (v25 & 0x80u) == 0 )
                    goto LABEL_152;
                  goto LABEL_123;
                }
                goto LABEL_116;
              }
LABEL_58:
              v41 = *(_WORD **)(v40 + 32);
              if ( *(_QWORD *)(v40 + 24) - (_QWORD)v41 > 1u )
              {
                *v41 = 8236;
                v43 = *(_QWORD *)(v40 + 32) + 2LL;
                *(_QWORD *)(v40 + 32) = v43;
              }
              else
              {
                v42 = sub_26240F0(v40, ", ", 2);
                v43 = *(_QWORD *)(v42 + 32);
                v40 = v42;
              }
              goto LABEL_60;
            }
            goto LABEL_183;
          }
          goto LABEL_96;
        }
        if ( (v25 & 4) != 0 )
        {
          v28 = *a1;
          v31 = *(_QWORD *)(*a1 + 32);
LABEL_39:
          if ( (unsigned __int64)(*(_QWORD *)(v28 + 24) - v31) <= 5 )
          {
            sub_26240F0(v28, "assign", 6);
          }
          else
          {
            *(_DWORD *)v31 = 1769173857;
            *(_WORD *)(v31 + 4) = 28263;
            *(_QWORD *)(v28 + 32) += 6LL;
          }
          v25 = *(_WORD *)(a2 + 72);
          if ( (v25 & 0x10) == 0 )
          {
            if ( (v25 & 0x400) != 0 )
            {
LABEL_43:
              v32 = *a1;
              goto LABEL_44;
            }
            if ( (v25 & 0x20) == 0 )
            {
              if ( (v25 & 0x200) != 0 )
                goto LABEL_50;
              v49 = 0;
              if ( (v25 & 0x800) != 0 )
                goto LABEL_109;
              goto LABEL_195;
            }
LABEL_102:
            v67 = *a1;
            goto LABEL_103;
          }
          goto LABEL_96;
        }
        if ( (v25 & 0x10) != 0 )
        {
          v63 = *a1;
          v66 = *(_QWORD *)(*a1 + 32);
LABEL_98:
          if ( (unsigned __int64)(*(_QWORD *)(v63 + 24) - v66) <= 5 )
          {
            sub_26240F0(v63, "retain", 6);
          }
          else
          {
            *(_DWORD *)v66 = 1635018098;
            *(_WORD *)(v66 + 4) = 28265;
            *(_QWORD *)(v63 + 32) += 6LL;
          }
          v25 = *(_WORD *)(a2 + 72);
          if ( (v25 & 0x400) != 0 )
            goto LABEL_43;
          if ( (v25 & 0x20) == 0 )
          {
            if ( (v25 & 0x200) != 0 )
              goto LABEL_50;
            if ( (v25 & 0x800) != 0 )
              goto LABEL_109;
            v49 = 0;
            if ( (v25 & 8) != 0 )
              goto LABEL_57;
LABEL_183:
            if ( (v25 & 1) != 0 )
            {
              v76 = *a1;
              v79 = *(_QWORD **)(*a1 + 32);
              if ( v49 )
              {
LABEL_119:
                if ( *(_QWORD *)(v76 + 24) - (_QWORD)v79 <= 7u )
                {
                  sub_26240F0(v76, "readonly", 8);
                }
                else
                {
                  *v79 = 0x796C6E6F64616572LL;
                  *(_QWORD *)(v76 + 32) += 8LL;
                }
                v25 = *(_WORD *)(a2 + 72);
                if ( (v25 & 2) != 0 )
                  goto LABEL_64;
                goto LABEL_122;
              }
LABEL_117:
              v77 = *(_WORD **)(v76 + 32);
              if ( *(_QWORD *)(v76 + 24) - (_QWORD)v77 > 1u )
              {
                *v77 = 8236;
                v79 = (_QWORD *)(*(_QWORD *)(v76 + 32) + 2LL);
                *(_QWORD *)(v76 + 32) = v79;
              }
              else
              {
                v78 = sub_26240F0(v76, ", ", 2);
                v79 = *(_QWORD **)(v78 + 32);
                v76 = v78;
              }
              goto LABEL_119;
            }
LABEL_210:
            if ( (v25 & 2) != 0 )
            {
              v44 = *a1;
              v47 = *(_QWORD *)(*a1 + 32);
              if ( v49 )
                goto LABEL_67;
              goto LABEL_65;
            }
            goto LABEL_177;
          }
          goto LABEL_102;
        }
        v49 = 1;
        goto LABEL_137;
      }
      v57 = *a1;
      v58 = *(_QWORD *)(*a1 + 32);
    }
    if ( (unsigned __int64)(*(_QWORD *)(v57 + 24) - v58) <= 5 )
    {
      sub_26240F0(v57, "direct", 6);
    }
    else
    {
      *(_DWORD *)v58 = 1701996900;
      *(_WORD *)(v58 + 4) = 29795;
      *(_QWORD *)(v57 + 32) += 6LL;
    }
    v25 = *(_WORD *)(a2 + 72);
    if ( (v25 & 0x40) == 0 )
    {
      if ( (v25 & 0x100) != 0 )
        goto LABEL_90;
      if ( (v25 & 4) == 0 )
      {
        if ( (v25 & 0x10) != 0 )
          goto LABEL_96;
        v49 = 0;
        if ( (v25 & 0x400) != 0 )
          goto LABEL_43;
LABEL_216:
        if ( (v25 & 0x20) != 0 )
        {
          v67 = *a1;
          v70 = *(_DWORD **)(*a1 + 32);
          if ( v49 )
          {
LABEL_105:
            if ( *(_QWORD *)(v67 + 24) - (_QWORD)v70 <= 3u )
            {
              sub_26240F0(v67, "copy", 4);
            }
            else
            {
              *v70 = 2037411683;
              *(_QWORD *)(v67 + 32) += 4LL;
            }
            v25 = *(_WORD *)(a2 + 72);
            if ( (v25 & 0x200) != 0 )
              goto LABEL_50;
            if ( (v25 & 0x800) == 0 )
            {
              if ( (v25 & 8) != 0 )
                goto LABEL_57;
              if ( (v25 & 1) != 0 )
                goto LABEL_116;
              v49 = 0;
              if ( (v25 & 2) != 0 )
                goto LABEL_64;
LABEL_177:
              if ( (v25 & 0x80u) != 0 )
              {
                v50 = *a1;
                v53 = *(_QWORD *)(*a1 + 32);
                if ( v49 )
                  goto LABEL_73;
                goto LABEL_71;
              }
LABEL_76:
              if ( (v25 & 0x1000) != 0 )
              {
                v84 = sub_B16750(&v97);
                v86 = v84;
                LOWORD(v86) = BYTE1(v84);
                if ( BYTE1(v84) )
                {
                  v87 = *a1;
                  v88 = v84;
                  if ( (_BYTE)v84 == 2 && (*(_BYTE *)(a2 + 73) & 0x20) != 0 )
                  {
                    v94 = *(_WORD **)(v87 + 32);
                    if ( !v49 )
                    {
                      if ( *(_QWORD *)(v87 + 24) - (_QWORD)v94 > 1u )
                      {
                        *v94 = 8236;
                        v94 = (_WORD *)(*(_QWORD *)(v87 + 32) + 2LL);
                        *(_QWORD *)(v87 + 32) = v94;
                      }
                      else
                      {
                        v87 = sub_26240F0(*a1, ", ", 2);
                        v94 = *(_WORD **)(v87 + 32);
                      }
                    }
                    if ( *(_QWORD *)(v87 + 24) - (_QWORD)v94 <= 0xEu )
                    {
                      sub_26240F0(v87, "null_resettable", 15);
                    }
                    else
                    {
                      qmemcpy(v94, "null_resettable", 15);
                      *(_QWORD *)(v87 + 32) += 15LL;
                    }
                  }
                  else
                  {
                    if ( !v49 )
                    {
                      v85 = *(_WORD **)(v87 + 32);
                      if ( *(_QWORD *)(v87 + 24) - (_QWORD)v85 > 1u )
                      {
                        *v85 = 8236;
                        *(_QWORD *)(v87 + 32) += 2LL;
                      }
                      else
                      {
                        v87 = sub_26240F0(*a1, ", ", 2);
                      }
                    }
                    v89 = (const void *)sub_C88A60(v88, 1, v85, v86);
                    v91 = *(void **)(v87 + 32);
                    v92 = v90;
                    if ( *(_QWORD *)(v87 + 24) - (_QWORD)v91 < v90 )
                    {
                      sub_26240F0(v87, v89, v90);
                    }
                    else if ( v90 )
                    {
                      memcpy(v91, v89, v90);
                      *(_QWORD *)(v87 + 32) += v92;
                    }
                  }
                }
              }
              v55 = *a1;
              v56 = *(_BYTE **)(*a1 + 32);
              if ( *(_BYTE **)(*a1 + 24) == v56 )
              {
                sub_26240F0(v55, ")", 1);
              }
              else
              {
                *v56 = 41;
                ++*(_QWORD *)(v55 + 32);
              }
              goto LABEL_6;
            }
            goto LABEL_109;
          }
LABEL_103:
          v68 = *(_WORD **)(v67 + 32);
          if ( *(_QWORD *)(v67 + 24) - (_QWORD)v68 > 1u )
          {
            *v68 = 8236;
            v70 = (_DWORD *)(*(_QWORD *)(v67 + 32) + 2LL);
            *(_QWORD *)(v67 + 32) = v70;
          }
          else
          {
            v69 = sub_26240F0(v67, ", ", 2);
            v70 = *(_DWORD **)(v69 + 32);
            v67 = v69;
          }
          goto LABEL_105;
        }
LABEL_201:
        if ( (v25 & 0x200) != 0 )
        {
          v36 = *a1;
          v39 = *(_DWORD **)(*a1 + 32);
          if ( v49 )
          {
LABEL_53:
            if ( *(_QWORD *)(v36 + 24) - (_QWORD)v39 <= 3u )
            {
              sub_26240F0(v36, "weak", 4);
            }
            else
            {
              *v39 = 1801545079;
              *(_QWORD *)(v36 + 32) += 4LL;
            }
            v25 = *(_WORD *)(a2 + 72);
            if ( (v25 & 0x800) == 0 )
            {
              if ( (v25 & 8) != 0 )
              {
LABEL_57:
                v40 = *a1;
                goto LABEL_58;
              }
              if ( (v25 & 1) == 0 )
              {
                if ( (v25 & 2) != 0 )
                  goto LABEL_64;
LABEL_122:
                if ( (v25 & 0x80u) == 0 )
                {
LABEL_152:
                  v49 = 0;
                  goto LABEL_76;
                }
LABEL_123:
                v50 = *a1;
LABEL_71:
                v51 = *(_WORD **)(v50 + 32);
                if ( *(_QWORD *)(v50 + 24) - (_QWORD)v51 > 1u )
                {
                  *v51 = 8236;
                  v53 = *(_QWORD *)(v50 + 32) + 2LL;
                  *(_QWORD *)(v50 + 32) = v53;
                }
                else
                {
                  v52 = sub_26240F0(v50, ", ", 2);
                  v53 = *(_QWORD *)(v52 + 32);
                  v50 = v52;
                }
LABEL_73:
                if ( (unsigned __int64)(*(_QWORD *)(v50 + 24) - v53) <= 8 )
                {
                  sub_26240F0(v50, "setter = ", 9);
                }
                else
                {
                  *(_BYTE *)(v53 + 8) = 32;
                  *(_QWORD *)v53 = 0x3D20726574746573LL;
                  *(_QWORD *)(v50 + 32) += 9LL;
                }
                v54 = *a1;
                v49 = 0;
                v99 = *(void **)(a2 + 88);
                sub_C878B0(&v99, v54);
                v25 = *(_WORD *)(a2 + 72);
                goto LABEL_76;
              }
              goto LABEL_116;
            }
            goto LABEL_109;
          }
LABEL_51:
          v37 = *(_WORD **)(v36 + 32);
          if ( *(_QWORD *)(v36 + 24) - (_QWORD)v37 > 1u )
          {
            *v37 = 8236;
            v39 = (_DWORD *)(*(_QWORD *)(v36 + 32) + 2LL);
            *(_QWORD *)(v36 + 32) = v39;
          }
          else
          {
            v38 = sub_26240F0(v36, ", ", 2);
            v39 = *(_DWORD **)(v38 + 32);
            v36 = v38;
          }
          goto LABEL_53;
        }
        goto LABEL_189;
      }
      goto LABEL_37;
    }
    goto LABEL_140;
  }
LABEL_6:
  v9 = v97;
  v10 = *(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v17 = *(_QWORD *)&byte_8[v97 & 0xFFFFFFFFFFFFFFF0LL];
    v95 = *(_QWORD *)(v10 + 8);
    if ( (v17 & 8) != 0 )
    {
      v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
      v19 = *(__int64 *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL))
          | ((unsigned __int8)v97 | (unsigned __int8)v17) & 7;
      if ( (*(_DWORD *)((_BYTE *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) != 0 )
      {
        v96 = (_QWORD *)sub_798D40(a2);
        v20 = v19 & 0xFFFFFFFFFFFFFE3FLL;
        if ( (v95 & 7) != 0 || (v95 & 8) != 0 )
        {
          v21 = sub_B0CF30(v9, v18);
          v20 = v19 & 0xFFFFFFFFFFFFFE3FLL;
          v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v22 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        }
        if ( v20 > 7 )
          v9 = sub_6C3980(v96, v22, v20);
        else
          v9 = v22 | (unsigned int)v19 & 0xFFFFFE3F;
      }
    }
  }
  v98 = v9;
  sub_B2AE60(&v99, &v98, a1 + 1);
  v11 = *a1;
  v12 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 24) )
  {
    v11 = sub_26239D0(v11, 32);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v12 + 1;
    *v12 = 32;
  }
  sub_26240F0(v11, v99, v100);
  if ( !v100 || *((char *)v99 + v100 - 1) != 42 )
  {
    v15 = *a1;
    v16 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_26239D0(v15, 32);
    }
    else
    {
      *(_QWORD *)(v15 + 32) = v16 + 1;
      *v16 = 32;
    }
  }
  sub_77A870(a2, *a1);
  if ( (*((_BYTE *)a1 + 12) & 1) != 0 )
  {
    v13 = *a1;
    v14 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v14 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_26239D0(v13, 59);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = v14 + 1;
      *v14 = 59;
    }
  }
  if ( v99 != &v101 )
    operator delete(v99, v101 + 1);
}

