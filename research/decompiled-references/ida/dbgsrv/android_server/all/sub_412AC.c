/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412AC
// Address: 0x00000000000412AC

//----- (00000000000412AC) ----------------------------------------------------
void __fastcall sub_412AC(__int64 a1, const char *a2, __int64 a3, char *a4, char *a5, double a6)
{
  int v11; // w9
  size_t v12; // x0
  void *v13; // x1
  unsigned __int64 v14; // x25
  size_t v15; // x24
  const char *v16; // x0
  int v17; // w8
  unsigned __int64 v18; // x9
  __int64 v19; // x12
  __int64 *v20; // x8
  __int64 v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  int64x2_t v24; // q0
  unsigned int v25; // w8
  __int64 v26; // x23
  __int64 *v27; // x22
  __int64 **v28; // x21
  unsigned __int64 v29; // x9
  char *v30; // x0
  __int64 *v31; // x1
  __int128 v32; // q0
  __int128 v33; // q1
  __int128 v34; // q3
  __int128 v35; // q4
  __int64 v36; // x10
  __int64 *v37; // x12
  __int64 v38; // x11
  char *v39; // x9
  __int128 v40; // q0
  __int128 v41; // q2
  __int128 v42; // q3
  int v43; // w8
  __int64 v44; // x8
  __int64 *v45; // x21
  __int64 **v46; // x20
  unsigned __int64 v47; // x9
  __int64 *v48; // x1
  __int64 v49; // x8
  __int64 v50; // x8
  void *ptr[3]; // [xsp+10h] [xbp-1F0h] BYREF
  void *v52; // [xsp+28h] [xbp-1D8h] BYREF
  _OWORD v53[3]; // [xsp+30h] [xbp-1D0h] BYREF
  __int128 v54; // [xsp+60h] [xbp-1A0h]
  __int64 *v55; // [xsp+70h] [xbp-190h]
  __int64 v56; // [xsp+78h] [xbp-188h] BYREF
  __int64 v57; // [xsp+80h] [xbp-180h]
  _OWORD v58[2]; // [xsp+88h] [xbp-178h] BYREF
  __int128 v59; // [xsp+A8h] [xbp-158h]
  int v60; // [xsp+B8h] [xbp-148h]
  _QWORD v61[18]; // [xsp+C0h] [xbp-140h] BYREF
  __int64 v62; // [xsp+150h] [xbp-B0h] BYREF
  __int64 v63; // [xsp+158h] [xbp-A8h]
  char v64; // [xsp+160h] [xbp-A0h]
  _DWORD v65[15]; // [xsp+164h] [xbp-9Ch] BYREF

  _ReadStatusReg(TPIDR_EL0);
  sub_99D18(a1, "%a: new dll %s (soname=%s)\n", a6, a2, a4);
  v62 = 0xFFFFFFFFLL;
  v63 = -1;
  v64 = 0;
  memset(v65, 0, 52);
  set_debug_event_code((__int64)&v62, 8);
  if ( (v65[0] & 0xFFFFFFFu) > 0xB || ((1 << SLOBYTE(v65[0])) & 0x902) == 0 )
  {
    if ( under_debugger )
      goto LABEL_69;
    interr(3295);
LABEL_67:
    if ( !under_debugger )
      interr(3295);
LABEL_69:
    __break(1u);
  }
  v11 = *(_DWORD *)(a1 + 1844);
  v63 = (__int64)a2;
  v64 = 1;
  LODWORD(v62) = v11;
  HIDWORD(v62) = v11;
  if ( a4 && (v12 = strlen(a4)) != 0 )
  {
    v13 = *(void **)&v65[1];
    v14 = v12 + 1;
    v15 = v12;
    if ( *(_QWORD *)&v65[5] < v12 + 1 )
    {
      v13 = qvector_reserve((pthread_mutex_t *)&v65[1], *(void **)&v65[1], v14, 1u);
      *(_QWORD *)&v65[1] = v13;
    }
    *(_QWORD *)&v65[3] = v14;
    memmove(v13, a4, v15);
    *(_BYTE *)(*(_QWORD *)&v65[1] + v15) = 0;
  }
  else
  {
    *(_QWORD *)&v65[3] = 0;
  }
  *(_QWORD *)&v65[7] = a2;
  *(_QWORD *)&v65[9] = a3;
  *(_QWORD *)&v65[11] = -1;
  if ( *(_BYTE *)(a1 + 733) )
  {
    v16 = *(_QWORD *)(a1 + 488) ? *(const char **)(a1 + 480) : &byte_F154B;
    if ( !strcmp(v16, a4) )
      *(_QWORD *)&v65[11] = a2;
  }
  v17 = v65[0];
  if ( (v65[0] & 0xFFFFFFF) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 152);
    if ( !v18 )
    {
      sub_477B4(a1 + 120);
      v18 = *(_QWORD *)(a1 + 152);
    }
    v19 = *(_QWORD *)(a1 + 128);
    v20 = (__int64 *)(v19 + 8 * (v18 / 0x38));
    v21 = *v20;
    if ( *(_QWORD *)(a1 + 136) == v19 )
    {
      v22 = 0;
      if ( v21 )
        goto LABEL_21;
    }
    else
    {
      v22 = v21 + 72 * (v18 % 0x38);
      if ( v22 != v21 )
      {
LABEL_21:
        *(_QWORD *)(v22 - 72) = 0xFFFFFFFFLL;
        v23 = v22 - 72;
        *(_QWORD *)(v23 + 8) = -1;
        *(_BYTE *)(v23 + 16) = 0;
        *(_DWORD *)(v23 + 20) = 0;
        copy_debug_event(v23, (__int64)&v62);
        v24 = *(int64x2_t *)(a1 + 152);
        *(_BYTE *)(a1 + 1932) = 0;
        *(int64x2_t *)(a1 + 152) = vaddq_s64(v24, (int64x2_t)xmmword_F17F0);
        v17 = v65[0];
        goto LABEL_22;
      }
    }
    v22 = *(v20 - 1) + 4032;
    goto LABEL_21;
  }
LABEL_22:
  v25 = v17 & 0xFFFFFFF;
  if ( v25 > 0xB || ((1 << v25) & 0x902) == 0 )
    goto LABEL_67;
  v26 = *(_QWORD *)&v65[9];
  sub_39140(&v52, a4);
  sub_39140(ptr, a5);
  sub_41888(v61, (__int64)a2, v26, (__int64)&v52, (__int64)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  if ( v52 )
  {
    *(_QWORD *)&v53[0] = 0;
    qfree(v52);
    v52 = nullptr;
    *((_QWORD *)&v53[0] + 1) = 0;
  }
  v52 = (void *)v61[0];
  sub_489C8(v53, (__int64)v61);
  v27 = *(__int64 **)(a1 + 1720);
  v28 = (__int64 **)(a1 + 1720);
  if ( v27 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v29 = v27[4];
        if ( (unsigned __int64)v52 < v29 )
          break;
        if ( v29 >= (unsigned __int64)v52 )
          goto LABEL_38;
        v28 = (__int64 **)(v27 + 1);
        if ( !v27[1] )
          goto LABEL_38;
        v27 = (__int64 *)v27[1];
      }
      if ( !*v27 )
        break;
      v28 = (__int64 **)v27;
      v27 = (__int64 *)*v27;
    }
    v28 = (__int64 **)v27;
    if ( !*v27 )
      goto LABEL_39;
  }
  else
  {
    v27 = (__int64 *)(a1 + 1720);
LABEL_38:
    if ( !*v28 )
    {
LABEL_39:
      v30 = (char *)operator new(0xB8u);
      v31 = (__int64 *)v30;
      v32 = v53[0];
      v33 = v53[1];
      v34 = v53[2];
      v35 = v54;
      v37 = v55;
      v36 = v56;
      *((_QWORD *)v30 + 4) = v52;
      v38 = v57;
      v39 = v30 + 112;
      memset(&v53[1], 0, 32);
      v54 = 0u;
      *(_OWORD *)(v30 + 40) = v32;
      *(_OWORD *)(v30 + 56) = v33;
      *(_OWORD *)(v30 + 72) = v34;
      *(_OWORD *)(v30 + 88) = v35;
      *((_QWORD *)v30 + 13) = v37;
      *((_QWORD *)v30 + 14) = v36;
      *((_QWORD *)v30 + 15) = v38;
      if ( v38 )
      {
        *(_QWORD *)(v36 + 16) = v39;
        v55 = &v56;
        v56 = 0;
        v57 = 0;
      }
      else
      {
        *((_QWORD *)v30 + 13) = v39;
      }
      v40 = v58[0];
      memset(v58, 0, sizeof(v58));
      v41 = v58[1];
      v42 = v59;
      v59 = 0u;
      v43 = v60;
      *(_OWORD *)v30 = 0u;
      *((_QWORD *)v30 + 2) = v27;
      *((_OWORD *)v30 + 8) = v40;
      *((_OWORD *)v30 + 9) = v41;
      *((_OWORD *)v30 + 10) = v42;
      *((_DWORD *)v30 + 44) = v43;
      *v28 = (__int64 *)v30;
      v44 = **(_QWORD **)(a1 + 1712);
      if ( v44 )
      {
        *(_QWORD *)(a1 + 1712) = v44;
        v31 = *v28;
      }
      sub_48ED8(*(__int64 **)(a1 + 1720), v31);
      ++*(_QWORD *)(a1 + 1728);
    }
  }
  sub_41960((__int64)v53);
  v45 = *(__int64 **)(a1 + 1696);
  v46 = (__int64 **)(a1 + 1696);
  if ( !v45 )
  {
    v45 = (__int64 *)(a1 + 1696);
LABEL_59:
    if ( *v46 )
      goto LABEL_64;
LABEL_60:
    v48 = (__int64 *)operator new(0x28u);
    v49 = v61[0];
    *v48 = 0;
    v48[1] = 0;
    v48[2] = (__int64)v45;
    v48[4] = v49;
    *v46 = v48;
    v50 = **(_QWORD **)(a1 + 1688);
    if ( v50 )
    {
      *(_QWORD *)(a1 + 1688) = v50;
      v48 = *v46;
    }
    sub_48ED8(*(__int64 **)(a1 + 1696), v48);
    ++*(_QWORD *)(a1 + 1704);
    goto LABEL_64;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v47 = v45[4];
      if ( v61[0] < v47 )
        break;
      if ( v47 >= v61[0] )
        goto LABEL_59;
      v46 = (__int64 **)(v45 + 1);
      if ( !v45[1] )
        goto LABEL_59;
      v45 = (__int64 *)v45[1];
    }
    if ( !*v45 )
      break;
    v46 = (__int64 **)v45;
    v45 = (__int64 *)*v45;
  }
  v46 = (__int64 **)v45;
  if ( !*v45 )
    goto LABEL_60;
LABEL_64:
  sub_41960((__int64)v61);
  free_debug_event((__int64)&v62);
}
// F154B: using guessed type char byte_F154B;
// F17F0: using guessed type __int128 xmmword_F17F0;
// 168DF0: using guessed type char under_debugger;
