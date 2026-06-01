__int64 __fastcall sub_FB0E30(_QWORD *a1, char *a2)
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
  unsigned __int8 v34; // al
  void *v35; // r11
  unsigned __int8 v36; // dl
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int8 v39; // dl
  unsigned int v40; // eax
  __int64 v41; // rax
  int v42; // eax
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // al
  unsigned int v45; // edi
  unsigned int v46; // esi
  unsigned int v47; // edi
  unsigned int v48; // esi
  unsigned int v49; // edi
  unsigned int v50; // esi
  unsigned int v51; // edx
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // eax
  __int64 v56; // rax
  size_t v57; // rsi
  const void *v58; // rdx
  unsigned int v59; // eax
  size_t v60; // r11
  size_t v61; // rdx
  int v62; // eax
  unsigned int v63; // [rsp+0h] [rbp-88h]
  void *v64; // [rsp+0h] [rbp-88h]
  __int64 v65; // [rsp+0h] [rbp-88h]
  __int64 v66; // [rsp+0h] [rbp-88h]
  unsigned int v67; // [rsp+8h] [rbp-80h]
  __int64 v68; // [rsp+8h] [rbp-80h]
  unsigned int v69; // [rsp+10h] [rbp-78h]
  _QWORD *v70; // [rsp+10h] [rbp-78h]
  _QWORD *v71; // [rsp+18h] [rbp-70h]
  size_t v72; // [rsp+18h] [rbp-70h]
  int v73; // [rsp+20h] [rbp-68h]
  _QWORD *v74; // [rsp+20h] [rbp-68h]
  size_t v75; // [rsp+28h] [rbp-60h]
  int v76; // [rsp+28h] [rbp-60h]
  size_t v77; // [rsp+30h] [rbp-58h]
  unsigned __int8 v78; // [rsp+3Fh] [rbp-49h]
  __int64 v79; // [rsp+40h] [rbp-48h] BYREF
  __int64 v80; // [rsp+48h] [rbp-40h]

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
      goto LABEL_21;
    v16 = (unsigned __int8)v16;
    v12 = (unsigned __int8)v12;
    v67 = v17;
    v69 = v9;
    v63 = v15;
LABEL_18:
    v75 = v19;
    v73 = v6;
    v71 = v22;
    v30 = std::_Rb_tree_decrement();
    v22 = v71;
    v6 = v73;
    v31 = v30;
    v19 = v75;
    v32 = *(_BYTE *)(v30 + 32) & 7;
    if ( v32 < v12 )
      goto LABEL_19;
    goto LABEL_23;
  }
  v16 = (unsigned __int8)v16;
  v12 = (unsigned __int8)v12;
  v67 = v17;
  v69 = v9;
  v63 = v15;
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
    if ( v63 < v26 )
      goto LABEL_10;
    if ( v63 != v26 )
      goto LABEL_15;
    v29 = v23 >> 7;
    if ( v29 > v67 )
      goto LABEL_10;
    if ( v29 != v67 )
      goto LABEL_15;
    v59 = *((_BYTE *)v21 + 33) & 1;
    if ( v59 > v9 )
      goto LABEL_10;
    if ( v59 != v9 )
      goto LABEL_15;
    if ( v6 < *((_DWORD *)v21 + 9) )
      goto LABEL_10;
    if ( v6 != *((_DWORD *)v21 + 9) )
      goto LABEL_15;
    v60 = v21[6];
    v61 = v60;
    if ( v19 <= v60 )
      v61 = v19;
    if ( !v61 )
      break;
    v78 = *((_BYTE *)v21 + 32);
    v77 = v19;
    v76 = v6;
    v74 = v22;
    v72 = v21[6];
    v62 = memcmp(v14, (const void *)v21[5], v61);
    v60 = v72;
    v22 = v74;
    v6 = v76;
    v19 = v77;
    v23 = v78;
    if ( !v62 )
      break;
LABEL_64:
    if ( v62 >= 0 )
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
  if ( (__int64)(v19 - v60) <= 0x7FFFFFFF )
  {
    v62 = v19 - v60;
    if ( (__int64)(v19 - v60) < (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_10;
    goto LABEL_64;
  }
LABEL_15:
  v27 = (_QWORD *)v21[3];
  v28 = 0;
  if ( v27 )
    goto LABEL_11;
LABEL_16:
  if ( !v28 )
  {
    v34 = v23;
    v31 = (__int64)v21;
    v32 = v34 & 7;
    if ( v32 < (unsigned __int8)v12 )
      goto LABEL_20;
LABEL_23:
    v35 = *(void **)(v4 + 40);
    if ( v32 != v12
      || (v36 = *(_BYTE *)(v31 + 32), v37 = (v36 >> 3) & 7, v37 >= v16)
      && (v37 != v16
       || (v38 = (v36 & 0x40) != 0, v38 >= v63)
       && (v38 != v63
        || (v39 = v36 >> 7, v39 >= v67)
        && (v39 != v67
         || (v40 = *(_BYTE *)(v31 + 33) & 1, v40 >= v69)
         && (v40 != v69
          || v6 <= *(_DWORD *)(v31 + 36)
          && ((v70 = v22, v6 != *(_DWORD *)(v31 + 36))
           || (v41 = *(_QWORD *)(v31 + 40),
               v68 = v31,
               v79 = *(_QWORD *)(v31 + 48),
               v64 = v35,
               v80 = v41,
               v42 = sub_FB0DD0((__int64)&v79, v19, v35),
               v35 = v64,
               v31 = v68,
               v22 = v70,
               v42 >= 0)))))) )
    {
LABEL_35:
      if ( (void *)(v4 + 56) != v35 )
      {
        v65 = v31;
        operator delete(v35);
        v31 = v65;
      }
      v66 = v31;
      operator delete((void *)v4);
      return v66;
    }
LABEL_19:
    if ( v21 )
      goto LABEL_20;
    v35 = *(void **)(v4 + 40);
    v31 = 0;
    goto LABEL_35;
  }
  if ( v21 != (_QWORD *)a1[3] )
    goto LABEL_18;
LABEL_20:
  if ( v22 != v21 )
  {
    v43 = *((_BYTE *)v21 + 32);
    v44 = *(_BYTE *)(v4 + 32);
    v45 = v43 & 7;
    v46 = v44 & 7;
    if ( v45 <= v46 && v45 == v46 )
    {
      v47 = (v43 >> 3) & 7;
      v48 = (v44 >> 3) & 7;
      if ( v47 <= v48 && v47 == v48 )
      {
        v49 = (v43 & 0x40) != 0;
        v50 = (v44 & 0x40) != 0;
        if ( v49 <= v50 && v49 == v50 )
        {
          v51 = v43 >> 7;
          v52 = v44 >> 7;
          if ( v51 <= v52 && v51 == v52 )
          {
            v53 = *((_BYTE *)v21 + 33) & 1;
            v54 = *(_BYTE *)(v4 + 33) & 1;
            if ( v53 <= v54 && v53 == v54 )
            {
              v55 = *(_DWORD *)(v4 + 36);
              if ( *((_DWORD *)v21 + 9) <= v55 && *((_DWORD *)v21 + 9) == v55 )
              {
                v56 = *(_QWORD *)(v4 + 40);
                v57 = v21[6];
                v58 = (const void *)v21[5];
                v79 = *(_QWORD *)(v4 + 48);
                v80 = v56;
                sub_FB0DD0((__int64)&v79, v57, v58);
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v4;
}

