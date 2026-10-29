__int64 __fastcall sub_FD4B70(_QWORD *a1, char *a2)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  int v6; // r8d
  __int16 v7; // cx
  __int16 v8; // di
  unsigned __int8 v9; // si
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // r13
  unsigned int v12; // r13d
  __int16 v13; // cx
  char *v14; // rdi
  bool v15; // dl
  unsigned int v16; // r12d
  unsigned __int8 v17; // al
  __int64 v18; // r9
  size_t v19; // r9
  int v20; // ecx
  _QWORD *v21; // rbp
  _QWORD *v22; // rcx
  unsigned __int8 v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  _QWORD *v27; // rax
  char v28; // dl
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r10
  unsigned int v32; // eax
  __int64 v33; // rdi
  unsigned __int8 v35; // al
  void *v36; // r11
  unsigned __int8 v37; // dl
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned __int8 v40; // dl
  unsigned int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  unsigned __int8 v44; // dl
  unsigned __int8 v45; // al
  unsigned int v46; // edi
  unsigned int v47; // esi
  unsigned int v48; // edi
  unsigned int v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // esi
  unsigned int v52; // edx
  unsigned int v53; // eax
  unsigned int v54; // edx
  unsigned int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  size_t v58; // rsi
  const void *v59; // rdx
  int v60; // eax
  unsigned int v61; // eax
  size_t v62; // r11
  size_t v63; // rdx
  int v64; // eax
  unsigned int v65; // [rsp+0h] [rbp-88h]
  void *v66; // [rsp+0h] [rbp-88h]
  __int64 v67; // [rsp+0h] [rbp-88h]
  __int64 v68; // [rsp+0h] [rbp-88h]
  _QWORD *v69; // [rsp+0h] [rbp-88h]
  unsigned int v70; // [rsp+8h] [rbp-80h]
  __int64 v71; // [rsp+8h] [rbp-80h]
  unsigned int v72; // [rsp+10h] [rbp-78h]
  _QWORD *v73; // [rsp+10h] [rbp-78h]
  _QWORD *v74; // [rsp+18h] [rbp-70h]
  size_t v75; // [rsp+18h] [rbp-70h]
  int v76; // [rsp+20h] [rbp-68h]
  _QWORD *v77; // [rsp+20h] [rbp-68h]
  size_t v78; // [rsp+28h] [rbp-60h]
  int v79; // [rsp+28h] [rbp-60h]
  size_t v80; // [rsp+30h] [rbp-58h]
  unsigned __int8 v81; // [rsp+3Fh] [rbp-49h]
  __int64 v82; // [rsp+40h] [rbp-48h] BYREF
  __int64 v83; // [rsp+48h] [rbp-40h]

  v4 = operator new(0x50u);
  v5 = *a2;
  v6 = *((_DWORD *)a2 + 1);
  v7 = *(_WORD *)(v4 + 32);
  v8 = *(_WORD *)a2 & 0x1FF;
  v9 = a2[1] & 1;
  v10 = *a2;
  v11 = *a2;
  *(_DWORD *)(v4 + 36) = v6;
  LOBYTE(v12) = v11 & 7;
  *(_QWORD *)(v4 + 40) = v4 + 56;
  v13 = v8 | v7 & 0xFE00;
  v14 = *((char **)a2 + 1);
  v15 = (v10 & 0x40) != 0;
  *(_WORD *)(v4 + 32) = v13;
  LOBYTE(v16) = (v5 >> 3) & 7;
  v17 = v5 >> 7;
  if ( v14 == a2 + 24 )
  {
    v14 = (char *)(v4 + 56);
    *(__m128i *)(v4 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  }
  else
  {
    v18 = *((_QWORD *)a2 + 3);
    *(_QWORD *)(v4 + 40) = v14;
    *(_QWORD *)(v4 + 56) = v18;
  }
  v19 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 1) = a2 + 24;
  *((_QWORD *)a2 + 2) = 0;
  v20 = *((_DWORD *)a2 + 10);
  a2[24] = 0;
  v21 = (_QWORD *)a1[2];
  *(_DWORD *)(v4 + 72) = v20;
  v22 = a1 + 1;
  *(_QWORD *)(v4 + 48) = v19;
  if ( !v21 )
  {
    v21 = a1 + 1;
    if ( v22 == (_QWORD *)a1[3] )
      goto LABEL_55;
    v16 = (unsigned __int8)v16;
    v12 = (unsigned __int8)v12;
    v70 = v17;
    v72 = v9;
    v65 = v15;
LABEL_18:
    v78 = v19;
    v76 = v6;
    v74 = v22;
    v30 = std::_Rb_tree_decrement(v21);
    v22 = v74;
    v6 = v76;
    v31 = v30;
    v19 = v78;
    v32 = *(_BYTE *)(v30 + 32) & 7;
    if ( v32 >= v12 )
      goto LABEL_23;
    goto LABEL_19;
  }
  v16 = (unsigned __int8)v16;
  v12 = (unsigned __int8)v12;
  v70 = v17;
  v72 = v9;
  v65 = v15;
  while ( 1 )
  {
    v23 = *((_BYTE *)v21 + 32);
    v24 = v23 & 7;
    if ( v24 > (unsigned __int8)v12 )
      goto LABEL_10;
    if ( v24 != (unsigned __int8)v12 )
      goto LABEL_15;
    v25 = (v23 >> 3) & 7;
    if ( v25 > (unsigned __int8)v16 )
      goto LABEL_10;
    if ( v25 != (unsigned __int8)v16 )
      goto LABEL_15;
    v26 = (v23 & 0x40) != 0;
    if ( v65 < v26 )
      goto LABEL_10;
    if ( v65 != v26 )
      goto LABEL_15;
    v29 = v23 >> 7;
    if ( v29 > v70 )
      goto LABEL_10;
    if ( v29 != v70 )
      goto LABEL_15;
    v61 = *((_BYTE *)v21 + 33) & 1;
    if ( v61 > v9 )
      goto LABEL_10;
    if ( v61 != v9 )
      goto LABEL_15;
    if ( v6 < *((_DWORD *)v21 + 9) )
      goto LABEL_10;
    if ( v6 != *((_DWORD *)v21 + 9) )
      goto LABEL_15;
    v62 = v21[6];
    v63 = v62;
    if ( v19 <= v62 )
      v63 = v19;
    if ( !v63 )
      break;
    v81 = *((_BYTE *)v21 + 32);
    v80 = v19;
    v79 = v6;
    v77 = v22;
    v75 = v21[6];
    v64 = memcmp(v14, (const void *)v21[5], v63);
    v62 = v75;
    v22 = v77;
    v6 = v79;
    v19 = v80;
    v23 = v81;
    if ( !v64 )
      break;
LABEL_64:
    if ( v64 >= 0 )
      goto LABEL_15;
LABEL_10:
    v27 = (_QWORD *)v21[2];
    v28 = 1;
    if ( !v27 )
      goto LABEL_16;
LABEL_11:
    v14 = *(char **)(v4 + 40);
    v21 = v27;
  }
  if ( (__int64)(v19 - v62) <= 0x7FFFFFFF )
  {
    v64 = v19 - v62;
    if ( (__int64)(v19 - v62) < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_10;
    goto LABEL_64;
  }
LABEL_15:
  v27 = (_QWORD *)v21[3];
  v28 = 0;
  if ( v27 )
    goto LABEL_11;
LABEL_16:
  if ( v28 )
  {
    if ( v21 != (_QWORD *)a1[3] )
      goto LABEL_18;
LABEL_20:
    v33 = 1;
    if ( v22 == v21 )
    {
LABEL_21:
      std::_Rb_tree_insert_and_rebalance(v33, v4, v21, v22);
      ++a1[5];
      return v4;
    }
    v44 = *((_BYTE *)v21 + 32);
    v45 = *(_BYTE *)(v4 + 32);
    v46 = v44 & 7;
    v47 = v45 & 7;
    if ( v46 <= v47 )
    {
      if ( v46 != v47
        || (v48 = (v44 >> 3) & 7, v49 = (v45 >> 3) & 7, v48 <= v49)
        && (v48 != v49
         || (v50 = (v44 & 0x40) != 0, v51 = (v45 & 0x40) != 0, v50 <= v51)
         && (v50 != v51
          || (v52 = v44 >> 7, v53 = v45 >> 7, v52 <= v53)
          && (v52 != v53
           || (v54 = *((_BYTE *)v21 + 33) & 1, v55 = *(_BYTE *)(v4 + 33) & 1, v54 <= v55)
           && (v54 != v55
            || (v56 = *(_DWORD *)(v4 + 36), *((_DWORD *)v21 + 9) <= v56)
            && (*((_DWORD *)v21 + 9) != v56
             || (v57 = *(_QWORD *)(v4 + 40),
                 v69 = v22,
                 v58 = v21[6],
                 v59 = (const void *)v21[5],
                 v82 = *(_QWORD *)(v4 + 48),
                 v83 = v57,
                 v60 = sub_FD4B10((__int64)&v82, v58, v59),
                 v22 = v69,
                 v60 >= 0)))))) )
      {
        v33 = 0;
        goto LABEL_21;
      }
    }
LABEL_55:
    v33 = 1;
    goto LABEL_21;
  }
  v35 = v23;
  v31 = (__int64)v21;
  v32 = v35 & 7;
  if ( v32 < (unsigned __int8)v12 )
    goto LABEL_20;
LABEL_23:
  v36 = *(void **)(v4 + 40);
  if ( v32 == v12 )
  {
    v37 = *(_BYTE *)(v31 + 32);
    v38 = (v37 >> 3) & 7;
    if ( v38 < v16
      || v38 == v16
      && ((v39 = (v37 & 0x40) != 0, v39 < v65)
       || v39 == v65
       && ((v40 = v37 >> 7, v40 < v70)
        || v40 == v70
        && ((v41 = *(_BYTE *)(v31 + 33) & 1, v41 < v72)
         || v41 == v72
         && (v6 > *(_DWORD *)(v31 + 36)
          || (v73 = v22, v6 == *(_DWORD *)(v31 + 36))
          && (v42 = *(_QWORD *)(v31 + 40),
              v71 = v31,
              v82 = *(_QWORD *)(v31 + 48),
              v66 = v36,
              v83 = v42,
              v43 = sub_FD4B10((__int64)&v82, v19, v36),
              v36 = v66,
              v31 = v71,
              v22 = v73,
              v43 < 0))))) )
    {
LABEL_19:
      if ( v21 )
        goto LABEL_20;
      v36 = *(void **)(v4 + 40);
      v31 = 0;
    }
  }
  if ( (void *)(v4 + 56) != v36 )
  {
    v67 = v31;
    operator delete(v36);
    v31 = v67;
  }
  v68 = v31;
  operator delete((void *)v4);
  return v68;
}
