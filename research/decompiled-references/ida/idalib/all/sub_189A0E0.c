__int64 __fastcall sub_189A0E0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // r14d
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  size_t v21; // r13
  int v22; // esi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 *v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 *v48; // rax
  unsigned __int64 *v49; // rax
  __int64 *v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 *i; // rax
  __int64 v54; // rcx
  __int64 v55; // rbp
  size_t v56; // rax
  signed __int64 v57; // rcx
  _QWORD *v58; // rax
  _BYTE *v59; // rdi
  unsigned __int64 v60; // rax
  size_t v61; // rdx
  double v62[2]; // [rsp+8h] [rbp-140h] BYREF
  __int64 v63; // [rsp+18h] [rbp-130h] BYREF
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n; // [rsp+28h] [rbp-120h]
  _QWORD v66[2]; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v67[2]; // [rsp+40h] [rbp-108h] BYREF
  char v68; // [rsp+48h] [rbp-100h]
  __int64 v69; // [rsp+4Ch] [rbp-FCh]
  char v70; // [rsp+54h] [rbp-F4h]
  void *dest; // [rsp+58h] [rbp-F0h]
  __m128 v72; // [rsp+60h] [rbp-E8h] BYREF
  char v73; // [rsp+78h] [rbp-D0h]
  _BYTE v74[200]; // [rsp+80h] [rbp-C8h] BYREF

  v4 = sub_168B6C0((__int64)a1);
  switch ( sub_BA8080(a2, a2, v5, v6, v7, v8) )
  {
    case 0LL:
    case 6LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
      return 0;
    case 1LL:
    case 2LL:
    case 4LL:
    case 5LL:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_14;
      v37 = sub_B8C3D0(a2, a2, v9, v10, v11, v12);
      v40 = *v37;
      v41 = *v37 + 8LL * *((unsigned int *)v37 + 2);
      if ( *v37 >= v41 )
      {
        if ( v40 != v41 )
        {
          while ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 71 )
          {
            v41 += 8LL;
            if ( v40 == v41 )
              goto LABEL_20;
          }
          return 0;
        }
      }
      else
      {
        v42 = (__int64 *)*v37;
        while ( 1 )
        {
          v40 = *v42;
          if ( *(_WORD *)(*v42 + 36) == 71 )
            break;
          if ( (__int64 *)v41 == ++v42 )
            goto LABEL_20;
        }
        if ( (__int64 *)v41 != v42 )
          return 0;
      }
LABEL_20:
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v43 = sub_B8C3D0(a2, a2, v40, v41, v38, v39);
        v46 = *v43;
        v47 = *v43 + 8LL * *((unsigned int *)v43 + 2);
        if ( *v43 >= v47 )
        {
          if ( v46 != v47 )
          {
            while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 266 )
            {
              v47 += 8LL;
              if ( v46 == v47 )
                goto LABEL_25;
            }
            return 0;
          }
        }
        else
        {
          v48 = (__int64 *)*v43;
          while ( 1 )
          {
            v46 = *v48;
            if ( *(_WORD *)(*v48 + 36) == 266 )
              break;
            if ( (__int64 *)v47 == ++v48 )
              goto LABEL_25;
          }
          if ( (__int64 *)v47 != v48 )
            return 0;
        }
LABEL_25:
        if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        {
          v49 = sub_B8C3D0(a2, a2, v46, v47, v44, v45);
          v50 = (__int64 *)*v49;
          v51 = *v49 + 8LL * *((unsigned int *)v49 + 2);
          if ( *v49 >= v51 )
          {
            if ( v50 != (__int64 *)v51 )
            {
              if ( *(_WORD *)(*(_QWORD *)v51 + 36LL) == 265 )
                return 0;
              for ( i = (__int64 *)(v51 + 8); i != v50; ++i )
              {
                v54 = *i;
                if ( *(_WORD *)(v54 + 36) == 265 )
                  return 0;
              }
            }
          }
          else
          {
            v52 = *v49;
            while ( *(_WORD *)(*(_QWORD *)v52 + 36LL) != 265 )
            {
              v52 += 8LL;
              if ( v51 == v52 )
                goto LABEL_14;
            }
            if ( v51 != v52 )
              return 0;
          }
        }
      }
LABEL_14:
      v2 = 0;
      v32 = sub_B32C40(v4, 0, 0);
      sub_B8CC60(a2, v32, v33, v34, v35, v36);
      return v2;
    case 3LL:
      v2 = sub_1896B90(a1, a2, 0);
      if ( (_BYTE)v2 )
        return v2;
      v23 = sub_B33000(v4, 0, 0);
      sub_B8CC60(a2, v23, v24, v25, v26, v27);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 && sub_1894130(a2, v23, v28, v29, v30, v31) )
        return 0;
      goto LABEL_14;
    case 7LL:
      v14 = *(_QWORD *)&byte_8[*(_QWORD *)(v4 + 18632) & 0xFFFFFFFFFFFFFFF0LL];
      v15 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v15 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v15 | (unsigned __int8)*(_QWORD *)(a2 + 80)) & 7) == (v14 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v14 | (unsigned __int8)*(_QWORD *)(v4 + 18632)) & 7) )
        return 0;
      v16 = sub_BA8620(a2);
      v17 = *(_DWORD *)(a2 + 24);
      v18 = v16;
      v19 = HIDWORD(v16);
      LOBYTE(v2) = HIDWORD(v16) != 0 && (_DWORD)v16 != 0;
      if ( !(_BYTE)v2 )
      {
        sub_168B9F0((__int64)v74, a1, v17, 0xDF6u, 0);
        src = *(void **)(a2 + 80);
        v20 = sub_162B6D0((__int64)v74, (__int64 *)&src);
        v21 = j__strlen("(void)");
        if ( ((*(_BYTE *)(a2 + 60) >> 2) & 3) != 0 )
          v22 = sub_EE7BC0(
                  0,
                  *(_QWORD *)(a2 + 40),
                  ((*(_BYTE *)(a2 + 60) >> 2) & 3) == 2,
                  *(_QWORD *)(a2 + 96),
                  *(unsigned int *)(a2 + 104),
                  *(_DWORD *)(a2 + 108));
        else
          v22 = *(_DWORD *)(*(_QWORD *)(a2 + 96) + 8LL * *(unsigned int *)(a2 + 104));
        sub_9EC740((__int64)v67, v22, "(void)", v21, 0);
        sub_1589170(v20, v67);
        if ( dest != &v72.m128_u16[4] )
          operator delete(dest);
        v2 = 1;
        sub_15F7200(v74);
        return v2;
      }
      sub_168B9F0((__int64)v74, a1, v17, 0xDF6u, 0);
      v63 = *(_QWORD *)(a2 + 80);
      v55 = sub_162B6D0((__int64)v74, &v63);
      v56 = j__strlen("void");
      v67[0] = v18;
      v57 = v56;
      v69 = 0;
      dest = &v72.m128_u16[4];
      v58 = v66;
      v70 = 0;
      v72.m128_u64[0] = 0;
      v72.m128_i8[8] = 0;
      v73 = 0;
      v67[1] = v19;
      v68 = 1;
      src = v66;
      if ( (unsigned __int64)v57 > 0xF )
      {
        if ( v57 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        *(_QWORD *)&v62[0] = v57;
        v58 = (_QWORD *)operator new(v57 + 1);
        v57 = *(_QWORD *)&v62[0];
        src = v58;
        *(double *)v66 = v62[0];
LABEL_67:
        *(_QWORD *)&v62[0] = v57;
        memcpy(v58, "void", v57);
        v58 = src;
        v57 = *(_QWORD *)&v62[0];
        goto LABEL_53;
      }
      if ( v57 == 1 )
      {
        LOBYTE(v66[0]) = 118;
        goto LABEL_53;
      }
      if ( v57 )
        goto LABEL_67;
LABEL_53:
      n = v57;
      *((_BYTE *)v58 + v57) = 0;
      v59 = dest;
      if ( src == v66 )
      {
        v61 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v66[0];
          else
            memcpy(dest, src, n);
          v61 = n;
          v59 = dest;
        }
        v72.m128_u64[0] = v61;
        v59[v61] = 0;
        v59 = src;
      }
      else
      {
        if ( dest == &v72.m128_u16[4] )
        {
          v62[0] = *(double *)v66;
          dest = src;
          v72 = _mm_loadh_ps(v62);
        }
        else
        {
          v62[0] = *(double *)v66;
          v60 = v72.m128_u64[1];
          dest = src;
          v72 = _mm_loadh_ps(v62);
          if ( v59 )
          {
            src = v59;
            v66[0] = v60;
            goto LABEL_57;
          }
        }
        v59 = v66;
        src = v66;
      }
LABEL_57:
      n = 0;
      *v59 = 0;
      if ( src != v66 )
        operator delete(src);
      sub_1589170(v55, v67);
      if ( dest != &v72.m128_u16[4] )
        operator delete(dest);
      sub_15F7200(v74);
      return v2;
    default:
      goto LABEL_14;
  }
}
