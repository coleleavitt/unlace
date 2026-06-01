__int64 __fastcall sub_1BDDF50(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  char *v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 **v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbp
  bool v17; // zf
  __int64 *v18; // rax
  char *v19; // rbp
  char *v20; // rax
  char *v21; // r12
  __int64 v22; // rax
  __int64 v23; // r15
  char *v24; // rax
  char *v25; // r9
  __m128i **v26; // rsi
  __m128i si128; // xmm0
  _QWORD *v28; // rdi
  void *v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rax
  char *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // r8
  bool v38; // al
  __int64 *v39; // rbx
  __int64 v40; // r14
  void *v41; // rax
  unsigned int v42; // r13d
  void *v43; // rax
  __int64 v44; // rbp
  int v45; // eax
  bool v46; // r13
  size_t v47; // rax
  unsigned int v48; // ebp
  __int64 v50; // rbx
  __int64 *i; // rax
  __int64 *v52; // rax
  __int64 v53; // rdx
  bool v54; // al
  __int64 v55; // rbx
  void *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r12
  bool v59; // al
  bool v60; // al
  void *v61; // rax
  __int64 v62; // rsi
  __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  void *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r13
  void *v75; // rax
  _QWORD *v76; // rax
  char *v77; // [rsp+0h] [rbp-178h]
  int v78; // [rsp+0h] [rbp-178h]
  char *v79; // [rsp+0h] [rbp-178h]
  int v80; // [rsp+0h] [rbp-178h]
  int v81; // [rsp+0h] [rbp-178h]
  int v82; // [rsp+0h] [rbp-178h]
  __int64 *v84; // [rsp+10h] [rbp-168h]
  unsigned int v85; // [rsp+24h] [rbp-154h]
  __int64 v86; // [rsp+30h] [rbp-148h]
  __int64 v87; // [rsp+30h] [rbp-148h]
  int v88; // [rsp+38h] [rbp-140h]
  void *v89[2]; // [rsp+40h] [rbp-138h] BYREF
  __m128i v90; // [rsp+50h] [rbp-128h] BYREF
  char *v91; // [rsp+60h] [rbp-118h] BYREF
  __int64 v92; // [rsp+68h] [rbp-110h]
  _BYTE ptr[64]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v94; // [rsp+B0h] [rbp-C8h] BYREF
  void *v95; // [rsp+B8h] [rbp-C0h] BYREF
  void *v96; // [rsp+C0h] [rbp-B8h]
  __m128i v97; // [rsp+C8h] [rbp-B0h] BYREF
  char v98; // [rsp+128h] [rbp-50h]
  unsigned int v99; // [rsp+130h] [rbp-48h]
  char v100; // [rsp+134h] [rbp-44h]

  v6 = ptr;
  v85 = a3;
  v91 = ptr;
  v92 = 0x800000000LL;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_52;
  v8 = sub_B8C3D0(a2, a2, a3, (__int64)a4, a5, a6);
  v12 = *((unsigned int *)v8 + 2);
  v13 = *v8 + 8 * v12;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = (__int64 **)sub_B8C3D0(a2, a2, v12, v9, v10, v11);
    v15 = (unsigned int)v92;
    v16 = *v14;
  }
  else
  {
    v15 = (unsigned int)v92;
    v16 = nullptr;
  }
  v17 = v16 == (__int64 *)v13;
  if ( (unsigned __int64)v16 >= v13 )
    goto LABEL_60;
LABEL_5:
  v18 = v16;
  while ( *(_WORD *)(*v18 + 36) != 202 )
  {
    if ( (__int64 *)v13 == ++v18 )
    {
LABEL_8:
      v6 = v91;
      if ( (_DWORD)v15 )
        goto LABEL_9;
LABEL_52:
      v48 = 0;
      goto LABEL_53;
    }
  }
  do
  {
LABEL_56:
    v50 = *v16;
    for ( i = v16 + 1; *(_WORD *)(v50 + 36) != 202; ++i )
    {
      v50 = *i;
      v16 = i;
    }
    if ( *(_BYTE *)(v50 + 80) )
    {
      if ( v15 + 1 > (unsigned __int64)HIDWORD(v92) )
      {
        sub_2237220(&v91, ptr, v15 + 1, 8);
        v15 = (unsigned int)v92;
      }
      *(_QWORD *)&v91[8 * v15] = v50;
      v15 = (unsigned int)(v92 + 1);
      LODWORD(v92) = v92 + 1;
    }
    v17 = ++v16 == (__int64 *)v13;
    if ( (unsigned __int64)v16 < v13 )
      goto LABEL_5;
LABEL_60:
    if ( v17 )
      goto LABEL_8;
  }
  while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 202 );
  v52 = (__int64 *)(v13 + 8);
  while ( v16 != v52 )
  {
    v53 = *v52++;
    if ( *(_WORD *)(v53 + 36) == 202 )
      goto LABEL_56;
  }
  v6 = v91;
  if ( !(_DWORD)v15 )
    goto LABEL_52;
LABEL_9:
  v19 = &v6[8 * v15];
  v20 = (char *)sub_1BC6F60(v6, (__int64)v19);
  v21 = v20;
  if ( v19 != v20 )
  {
    v22 = v19 - v20;
    if ( v19 - v21 > 0x7FFFFFFFFFFFFFF8LL )
    {
      v23 = 0xFFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v23 = (v19 - v21) >> 3;
    if ( v22 <= 0 )
    {
LABEL_95:
      v23 = 0;
      v25 = nullptr;
    }
    else
    {
LABEL_14:
      while ( 1 )
      {
        v24 = (char *)operator new(8 * v23, (const std::nothrow_t *)&std::nothrow);
        if ( v24 )
          break;
        v23 >>= 1;
        if ( !v23 )
          goto LABEL_95;
      }
      v25 = v24;
    }
    v77 = v25;
    v21 = sub_1BC7CD0(v21, v19, (v19 - v21) >> 3, v25, v23);
    operator delete(v77, (const std::nothrow_t *)&std::nothrow);
    v6 = v91;
  }
  v26 = (__m128i **)a4[1].m128i_i64[0];
  si128 = _mm_load_si128(a4);
  v28 = (_QWORD *)a4->m128i_i64[0];
  v29 = (void *)a4->m128i_i64[1];
  v30 = (v21 - v6) >> 5;
  *(__m128i *)v89 = si128;
  v90.m128i_i64[0] = (__int64)v26;
  v31 = (v21 - v6) >> 3;
  if ( v30 <= 0 )
  {
LABEL_100:
    if ( v31 != 2 )
    {
      if ( v31 != 3 )
      {
        if ( v31 != 1 )
          goto LABEL_38;
LABEL_103:
        if ( !(unsigned __int8)sub_1BC6E60((__int64 *)v89, *(_QWORD *)v6) )
          goto LABEL_38;
        goto LABEL_37;
      }
      if ( (unsigned __int8)sub_1BC6E60((__int64 *)v89, *(_QWORD *)v6) )
      {
LABEL_37:
        if ( v6 != v21 )
          goto LABEL_78;
LABEL_38:
        v6 = v91;
        v79 = &v91[8 * (unsigned int)v92];
        if ( v79 != v21 )
        {
          v39 = (__int64 *)v21;
          v40 = a1;
          v84 = (__int64 *)a4;
          do
          {
            v44 = *v39;
            if ( (unsigned __int8)sub_1BC6E60(v84, *v39) )
            {
              if ( !*(_DWORD *)(v44 + 68) && *(_DWORD *)(v44 + 64) == 1 )
              {
                sub_168B9F0((__int64)&v94, (__int64 *)(v40 + 8), v85, 0x1AC1u, 0);
                v61 = (void *)*(unsigned int *)(v44 + 48);
                v89[0] = *(void **)(v44 + 56);
                v89[1] = v61;
                sub_166BAF0((__int64)&v94, (__int64)v89);
                sub_15F7200(&v94);
                v62 = v40 + 8;
                sub_168B9F0((__int64)&v94, (__int64 *)(v40 + 8), *(_DWORD *)(v44 + 24), 0x176Du, 0);
                v63 = *(_QWORD *)(v44 + 88);
                if ( v98 )
                {
                  v62 = *(_QWORD *)(v44 + 88);
                  sub_AE9DF0((unsigned __int8 **)&v97.m128i_i64[1], v62, 0xAu);
                }
                else if ( v100 )
                {
                  v87 = sub_168B9E0(&v94);
                  v68 = v96;
                  if ( v96 )
                    v68 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 32LL))(v96);
                  v89[0] = v68;
                  v69 = sub_1587BC0(v87, (__int64 *)v89, v64, v65, v66, v67);
                  v62 = v63;
                  sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v99 + 8), v63, 0xAu);
                }
                v89[0] = (void *)sub_EEC8C0(*(_QWORD *)(v44 + 40), v62, *(double *)si128.m128i_i64);
                sub_1587DB0((__int64)&v94, (__int64 *)v89);
                sub_15F7200(&v94);
              }
              else
              {
                v88 = sub_FD3F00(*(const void **)(v44 + 72), *(unsigned int *)(v44 + 68));
                v86 = *(_QWORD *)(*(_QWORD *)(v40 + 264) + 32LL);
                v45 = *(_DWORD *)(v44 + 64);
                v89[0] = &v90;
                v46 = v45 == 0;
                v47 = j__strlen("%0");
                sub_1BC95E0(v89, "%0", (__int64)&aCannotYetEncod[v47 + 24]);
                HIDWORD(v94) = v88;
                LOBYTE(v94) = v94 & 0xF8 | (v46 + 3);
                LOWORD(v94) = v94 & 0xFE07 | 0x118;
                v95 = &v97;
                if ( v89[0] == &v90 )
                {
                  v97 = _mm_load_si128(&v90);
                }
                else
                {
                  v95 = v89[0];
                  v97.m128i_i64[0] = v90.m128i_i64[0];
                }
                v41 = v89[1];
                v89[0] = &v90;
                v89[1] = nullptr;
                v96 = v41;
                v90.m128i_i8[0] = 0;
                v42 = sub_FD5980(v86, (__int64)&v94);
                if ( v95 != &v97 )
                  operator delete(v95);
                if ( v89[0] != &v90 )
                  operator delete(v89[0]);
                sub_168B9F0((__int64)&v94, (__int64 *)(v40 + 8), v85, v42, 0);
                v43 = (void *)*(unsigned int *)(v44 + 48);
                v89[0] = *(void **)(v44 + 56);
                v89[1] = v43;
                sub_166BAF0((__int64)&v94, (__int64)v89);
                sub_15F7200(&v94);
              }
            }
            ++v39;
          }
          while ( v79 != (char *)v39 );
          v6 = v91;
          v48 = 0;
          goto LABEL_53;
        }
        goto LABEL_52;
      }
      v6 += 8;
    }
    if ( !(unsigned __int8)sub_1BC6E60((__int64 *)v89, *(_QWORD *)v6) )
    {
      v6 += 8;
      goto LABEL_103;
    }
    goto LABEL_37;
  }
  v32 = &v6[32 * v30];
  while ( 1 )
  {
    v36 = *(_QWORD *)v6;
    v37 = *(__int64 **)v29;
    LODWORD(v94) = 0;
    BYTE4(v94) &= ~1u;
    if ( (unsigned __int8)sub_C61F40(
                            *(_QWORD *)(v36 + 40),
                            (__int64)&v94,
                            v28[31],
                            *(_QWORD *)(v36 + 88),
                            v37,
                            *((_QWORD *)v29 + 1),
                            *v26)
      && (_DWORD)v94 == 2 )
    {
      if ( (unsigned int)v96 <= 0x40 )
      {
        v38 = v95 == nullptr;
      }
      else
      {
        v78 = (int)v96;
        v38 = v78 == (unsigned int)sub_2206780(&v95);
      }
      if ( !v38 )
      {
        sub_A4F8E0((int *)&v94);
        goto LABEL_37;
      }
LABEL_70:
      sub_A4F8E0((int *)&v94);
      goto LABEL_20;
    }
    if ( (unsigned int)v94 > 1 )
      goto LABEL_70;
LABEL_20:
    v33 = *((_QWORD *)v6 + 1);
    LODWORD(v94) = 0;
    BYTE4(v94) &= ~1u;
    if ( (unsigned __int8)sub_C61F40(
                            *(_QWORD *)(v33 + 40),
                            (__int64)&v94,
                            *((_QWORD *)v89[0] + 31),
                            *(_QWORD *)(v33 + 88),
                            *(__int64 **)v89[1],
                            *((_QWORD *)v89[1] + 1),
                            *(__m128i **)v90.m128i_i64[0]) )
    {
      if ( (_DWORD)v94 == 2 )
        break;
    }
    if ( (unsigned int)v94 > 1 )
      goto LABEL_71;
LABEL_23:
    v34 = *((_QWORD *)v6 + 2);
    LODWORD(v94) = 0;
    BYTE4(v94) &= ~1u;
    if ( (unsigned __int8)sub_C61F40(
                            *(_QWORD *)(v34 + 40),
                            (__int64)&v94,
                            *((_QWORD *)v89[0] + 31),
                            *(_QWORD *)(v34 + 88),
                            *(__int64 **)v89[1],
                            *((_QWORD *)v89[1] + 1),
                            *(__m128i **)v90.m128i_i64[0])
      && (_DWORD)v94 == 2 )
    {
      if ( (unsigned int)v96 <= 0x40 )
      {
        v59 = v95 == nullptr;
      }
      else
      {
        v81 = (int)v96;
        v59 = v81 == (unsigned int)sub_2206780(&v95);
      }
      if ( !v59 )
      {
        v6 += 16;
        sub_A4F8E0((int *)&v94);
        goto LABEL_37;
      }
LABEL_72:
      sub_A4F8E0((int *)&v94);
      goto LABEL_26;
    }
    if ( (unsigned int)v94 > 1 )
      goto LABEL_72;
LABEL_26:
    v35 = *((_QWORD *)v6 + 3);
    LODWORD(v94) = 0;
    BYTE4(v94) &= ~1u;
    if ( (unsigned __int8)sub_C61F40(
                            *(_QWORD *)(v35 + 40),
                            (__int64)&v94,
                            *((_QWORD *)v89[0] + 31),
                            *(_QWORD *)(v35 + 88),
                            *(__int64 **)v89[1],
                            *((_QWORD *)v89[1] + 1),
                            *(__m128i **)v90.m128i_i64[0])
      && (_DWORD)v94 == 2 )
    {
      if ( (unsigned int)v96 <= 0x40 )
      {
        v60 = v95 == nullptr;
      }
      else
      {
        v82 = (int)v96;
        v60 = v82 == (unsigned int)sub_2206780(&v95);
      }
      if ( !v60 )
      {
        v6 += 24;
        sub_A4F8E0((int *)&v94);
        goto LABEL_37;
      }
    }
    else if ( (unsigned int)v94 <= 1 )
    {
      goto LABEL_29;
    }
    sub_A4F8E0((int *)&v94);
LABEL_29:
    v6 += 32;
    if ( v32 == v6 )
    {
      v31 = (v21 - v6) >> 3;
      goto LABEL_100;
    }
    v26 = (__m128i **)v90.m128i_i64[0];
    v29 = v89[1];
    v28 = v89[0];
  }
  if ( (unsigned int)v96 <= 0x40 )
  {
    v54 = v95 == nullptr;
  }
  else
  {
    v80 = (int)v96;
    v54 = v80 == (unsigned int)sub_2206780(&v95);
  }
  if ( v54 )
  {
LABEL_71:
    sub_A4F8E0((int *)&v94);
    goto LABEL_23;
  }
  v6 += 8;
  sub_A4F8E0((int *)&v94);
  if ( v6 == v21 )
    goto LABEL_38;
LABEL_78:
  v55 = *(_QWORD *)v6;
  sub_168B9F0((__int64)&v94, (__int64 *)(a1 + 8), v85, 0xE6Du, 0);
  v56 = (void *)*(unsigned int *)(v55 + 48);
  v89[0] = *(void **)(v55 + 56);
  v89[1] = v56;
  sub_166BAF0((__int64)&v94, (__int64)v89);
  sub_15F7200(&v94);
  v57 = a1 + 8;
  sub_168B9F0((__int64)&v94, (__int64 *)(a1 + 8), *(_DWORD *)(v55 + 24), 0x176Du, 0);
  v58 = *(_QWORD *)(v55 + 88);
  if ( v98 )
  {
    v57 = *(_QWORD *)(v55 + 88);
    sub_AE9DF0((unsigned __int8 **)&v97.m128i_i64[1], v57, 0xAu);
  }
  else if ( v100 )
  {
    v74 = sub_168B9E0(&v94);
    v75 = v96;
    if ( v96 )
      v75 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v96 + 32LL))(v96);
    v89[0] = v75;
    v76 = sub_1587BC0(v74, (__int64 *)v89, v70, v71, v72, v73);
    v57 = v58;
    sub_AE9DF0((unsigned __int8 **)(*v76 + 32LL * v99 + 8), v58, 0xAu);
  }
  v89[0] = (void *)sub_EEC8C0(*(_QWORD *)(v55 + 40), v57, *(double *)si128.m128i_i64);
  sub_1587DB0((__int64)&v94, (__int64 *)v89);
  v48 = 1;
  sub_15F7200(&v94);
  v6 = v91;
LABEL_53:
  if ( v6 != ptr )
    free(v6);
  return v48;
}
