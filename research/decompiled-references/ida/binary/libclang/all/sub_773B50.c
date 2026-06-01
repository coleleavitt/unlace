size_t *__fastcall sub_773B50(size_t *a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(_QWORD), __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r12d
  __int64 v11; // rbx
  _BYTE *v12; // rcx
  _BYTE *v13; // r15
  __int64 v14; // rbx
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  bool v20; // cf
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  char *v23; // rax
  void *v24; // r8
  char *v25; // r9
  __int64 v26; // r10
  char *v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  _BYTE *v32; // rcx
  _QWORD *v33; // r12
  __int64 v34; // r15
  _QWORD *v35; // rsi
  _QWORD *v36; // rax
  void **v37; // r12
  void **v38; // rdi
  void **v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  char *v45; // rax
  void *v46; // r8
  char *v47; // r9
  __int64 v48; // r10
  char *v49; // rax
  unsigned __int64 v50; // rsi
  _BYTE *v51; // [rsp+0h] [rbp-1F0h]
  __int64 v52; // [rsp+0h] [rbp-1F0h]
  void *v53; // [rsp+8h] [rbp-1E8h]
  char *v54; // [rsp+8h] [rbp-1E8h]
  __int64 v55; // [rsp+8h] [rbp-1E8h]
  void *src; // [rsp+18h] [rbp-1D8h]
  char *srca; // [rsp+18h] [rbp-1D8h]
  void *srcb; // [rsp+18h] [rbp-1D8h]
  void *srcc; // [rsp+18h] [rbp-1D8h]
  char *srcd; // [rsp+18h] [rbp-1D8h]
  __int64 n; // [rsp+20h] [rbp-1D0h]
  size_t na; // [rsp+20h] [rbp-1D0h]
  size_t nb; // [rsp+20h] [rbp-1D0h]
  size_t nc; // [rsp+20h] [rbp-1D0h]
  __int64 v66; // [rsp+28h] [rbp-1C8h]
  __int64 v67; // [rsp+30h] [rbp-1C0h] BYREF
  __int64 *v68; // [rsp+40h] [rbp-1B0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-1A8h] BYREF
  void *v70[2]; // [rsp+50h] [rbp-1A0h] BYREF
  __int64 v71; // [rsp+60h] [rbp-190h]
  __int64 v72; // [rsp+68h] [rbp-188h]
  __int64 v73; // [rsp+70h] [rbp-180h]
  __int64 v74; // [rsp+80h] [rbp-170h]
  __int64 v75; // [rsp+90h] [rbp-160h]
  __int64 v76; // [rsp+A0h] [rbp-150h]
  __int64 v77; // [rsp+B0h] [rbp-140h]
  __int64 v78; // [rsp+C0h] [rbp-130h]
  __int64 v79; // [rsp+D0h] [rbp-120h]
  __int64 v80; // [rsp+E0h] [rbp-110h]
  void *v81; // [rsp+F0h] [rbp-100h]
  __int64 v82; // [rsp+F8h] [rbp-F8h]
  int v83; // [rsp+100h] [rbp-F0h]
  char v84; // [rsp+104h] [rbp-ECh]
  char v85; // [rsp+108h] [rbp-E8h] BYREF
  __int64 v86; // [rsp+128h] [rbp-C8h]
  void *ptr; // [rsp+130h] [rbp-C0h]
  __int64 v88; // [rsp+138h] [rbp-B8h]
  _BYTE v89[96]; // [rsp+140h] [rbp-B0h] BYREF
  int v90; // [rsp+1A0h] [rbp-50h]
  __int64 v91; // [rsp+1A8h] [rbp-48h]
  __int16 v92; // [rsp+1B0h] [rbp-40h]
  char v93; // [rsp+1B2h] [rbp-3Eh]

  a1[2] = 0;
  *(_OWORD *)a1 = 0;
  v67 = a3;
  v8 = sub_7A0650(a2 + 64, a3);
  if ( !v8 )
    goto LABEL_31;
  v9 = v8;
  v10 = 0;
  while ( 1 )
  {
    v11 = v9;
    v12 = (_BYTE *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    v13 = v12;
    v14 = (v11 >> 2) & 1;
    if ( !(_DWORD)v14 )
    {
      LOBYTE(v8) = (v12[30] & 0x2A) != 0;
      v10 |= v8;
      if ( !((unsigned __int8 (__fastcall *)(__int64, _BYTE *))a4)(a5, v12) )
        goto LABEL_6;
      v16 = v13;
LABEL_10:
      v8 = a1[1];
      if ( v8 == a1[2] )
        goto LABEL_18;
LABEL_11:
      *(_QWORD *)v8 = v16;
      a1[1] += 8LL;
      goto LABEL_12;
    }
    if ( !v12 )
    {
      LOBYTE(v8) = 0;
      v10 |= v8;
      if ( !((unsigned __int8 (__fastcall *)(__int64, _QWORD))a4)(a5, 0) )
        goto LABEL_6;
      v16 = nullptr;
      goto LABEL_10;
    }
    v51 = *(_BYTE **)v12;
    LOBYTE(v8) = (*(_BYTE *)(*(_QWORD *)v12 + 30LL) & 0x2A) != 0;
    v10 |= v8;
    LODWORD(v8) = a4(a5);
    if ( (_BYTE)v8 )
      break;
LABEL_14:
    v9 = *((_QWORD *)v13 + 1);
    if ( !v9 )
      goto LABEL_6;
  }
  v16 = v51;
  v8 = a1[1];
  if ( v8 != a1[2] )
    goto LABEL_11;
LABEL_18:
  v17 = v8 - *a1;
  v18 = v17 >> 3;
  if ( v17 >> 3 == 0xFFFFFFFFFFFFFFFLL )
LABEL_76:
    std::__throw_length_error("vector::_M_realloc_append");
  v19 = 1;
  if ( v18 )
    v19 = v17 >> 3;
  v20 = __CFADD__(v19, v18);
  v21 = v19 + v18;
  if ( v20 )
  {
    v52 = 0x7FFFFFFFFFFFFFF8LL;
    v22 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v21 > 0xFFFFFFFFFFFFFFFLL )
      v21 = 0xFFFFFFFFFFFFFFFLL;
    v52 = 8 * v21;
    v22 = 8 * v21;
  }
  n = v17;
  src = (void *)*a1;
  v23 = (char *)operator new(v22);
  v24 = src;
  v25 = v23;
  *(_QWORD *)&v23[n] = v16;
  v26 = (__int64)&v23[n + 8];
  if ( n > 0 )
  {
    srca = &v23[n + 8];
    v53 = v24;
    v27 = (char *)memcpy(v23, v24, n);
    v24 = v53;
    v26 = (__int64)srca;
    v25 = v27;
    v28 = a1[2] - (_QWORD)v53;
LABEL_30:
    srcb = (void *)v26;
    v54 = v25;
    operator delete(v24, v28);
    v26 = (__int64)srcb;
    v25 = v54;
    goto LABEL_27;
  }
  if ( src )
  {
    v28 = a1[2] - (_QWORD)src;
    goto LABEL_30;
  }
LABEL_27:
  LODWORD(v8) = v52;
  *a1 = (size_t)v25;
  a1[1] = v26;
  a1[2] = (size_t)&v25[v52];
LABEL_12:
  if ( (_BYTE)v14 && v13 )
    goto LABEL_14;
LABEL_6:
  if ( (_BYTE)v10 )
    return a1;
LABEL_31:
  v71 = 0;
  v81 = &v85;
  ptr = v89;
  v88 = 0x400000000LL;
  v92 = 257;
  v68 = &v67;
  v72 = 1;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v82 = 4;
  v83 = 0;
  v84 = 1;
  v86 = 0;
  v90 = 0;
  v91 = 0;
  v93 = 1;
  v69 = a2;
  *(__m128i *)v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v70, (__m128i)(unsigned __int64)v70);
  v29 = sub_798D40(a2);
  if ( (unsigned __int8)sub_76FAA0(
                          (__int64)&v69,
                          v29,
                          a2,
                          (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))sub_76D950,
                          (__int64)&v68,
                          1u) )
  {
    sub_773780((__int64)&v69);
    v30 = *((_QWORD *)v70[0] + 17);
    if ( v30 )
    {
      while ( 2 )
      {
        v31 = v30;
        v32 = (_BYTE *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
        v33 = v32;
        v34 = (v31 >> 2) & 1;
        if ( (_DWORD)v34 )
        {
          if ( !v32 )
            BUG();
          if ( (*(_BYTE *)(*(_QWORD *)v32 + 30LL) & 0x2A) != 0 && (unsigned __int8)a4(a5) )
          {
            v35 = (_QWORD *)*v33;
            goto LABEL_39;
          }
LABEL_43:
          v30 = v33[1];
          if ( !v30 )
            goto LABEL_44;
          continue;
        }
        break;
      }
      if ( (v32[30] & 0x2A) == 0 || !((unsigned __int8 (__fastcall *)(__int64, _BYTE *))a4)(a5, v32) )
        goto LABEL_44;
      v35 = v33;
LABEL_39:
      v36 = (_QWORD *)a1[1];
      if ( v36 != (_QWORD *)a1[2] )
      {
        *v36 = v35;
        a1[1] += 8LL;
LABEL_41:
        if ( !(_BYTE)v34 || !v33 )
          goto LABEL_44;
        goto LABEL_43;
      }
      v40 = (__int64)v36 - *a1;
      v41 = v40 >> 3;
      if ( v40 >> 3 == 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_76;
      v42 = 1;
      if ( v41 )
        v42 = v40 >> 3;
      v20 = __CFADD__(v42, v41);
      v43 = v42 + v41;
      if ( v20 )
      {
        v55 = 0x7FFFFFFFFFFFFFF8LL;
        v44 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v43 > 0xFFFFFFFFFFFFFFFLL )
          v43 = 0xFFFFFFFFFFFFFFFLL;
        v55 = 8 * v43;
        v44 = 8 * v43;
      }
      v66 = v40;
      na = *a1;
      v45 = (char *)operator new(v44);
      v46 = (void *)na;
      v47 = v45;
      *(_QWORD *)&v45[v66] = v35;
      v48 = (__int64)&v45[v66 + 8];
      if ( v66 > 0 )
      {
        nb = (size_t)&v45[v66 + 8];
        srcc = v46;
        v49 = (char *)memcpy(v45, v46, v66);
        v46 = srcc;
        v48 = nb;
        v47 = v49;
        v50 = a1[2] - (_QWORD)srcc;
      }
      else
      {
        if ( !na )
        {
LABEL_70:
          *a1 = (size_t)v47;
          a1[1] = v48;
          a1[2] = (size_t)&v47[v55];
          goto LABEL_41;
        }
        v50 = a1[2] - na;
      }
      nc = v48;
      srcd = v47;
      operator delete(v46, v50);
      v48 = nc;
      v47 = srcd;
      goto LABEL_70;
    }
  }
LABEL_44:
  if ( ptr != v89 )
    free(ptr);
  if ( !v84 )
    free(v81);
  if ( (v72 & 1) == 0 )
    operator delete();
  v37 = (void **)v70[0];
  if ( v70[0] != v70 )
  {
    while ( 1 )
    {
      v38 = (void **)v37[2];
      v39 = (void **)*v37;
      if ( v38 != v37 + 4 )
        free(v38);
      operator delete(v37, 0x90u);
      if ( v39 == v70 )
        break;
      v37 = v39;
    }
  }
  return a1;
}

