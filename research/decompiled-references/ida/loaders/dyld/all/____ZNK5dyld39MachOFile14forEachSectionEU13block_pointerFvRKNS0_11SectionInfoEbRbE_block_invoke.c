__int64 __fastcall ___ZNK5dyld39MachOFile14forEachSectionEU13block_pointerFvRKNS0_11SectionInfoEbRbE_block_invoke(
        __int64 result,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // x21
  __int64 v11; // x8
  __int64 v12; // x10
  unsigned __int64 v13; // x23
  int v14; // w11
  unsigned __int64 v15; // x12
  __int64 v16; // x13
  __int64 v17; // x12
  unsigned __int64 *v18; // x24
  __int64 v19; // x13
  int v20; // w11
  __int64 v21; // x11
  unsigned __int64 v22; // x23
  int v23; // w10
  int v24; // w12
  unsigned __int64 v25; // x13
  int v26; // w14
  unsigned int v27; // w13
  unsigned int v28; // w14
  int v29; // w12
  int v30; // w10
  __int64 v31; // x8
  __int64 *v32; // x22
  unsigned __int64 v33; // x25
  const char *v34; // x1
  unsigned __int64 v35; // x8
  __int64 v36; // x2
  unsigned __int64 v37; // x10
  unsigned __int64 v38; // x10
  bool v39; // cf
  int v40; // w10
  int v41; // w12
  __int64 v42; // d0
  __int128 v43; // off
  int v44; // w11
  _BOOL4 v46; // w11
  unsigned __int64 v47; // x24
  const char *v48; // x1
  unsigned int v49; // w10
  unsigned __int64 v50; // x8
  __int64 v51; // x2
  unsigned int v52; // w10
  unsigned int v53; // w10
  int v55; // w10
  int v56; // w12
  __int128 v57; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v58; // [xsp+10h] [xbp-A0h]
  __int64 v59; // [xsp+18h] [xbp-98h]
  __int64 v60; // [xsp+20h] [xbp-90h]
  __int64 v61; // [xsp+28h] [xbp-88h]
  int v62; // [xsp+30h] [xbp-80h]
  int v63; // [xsp+34h] [xbp-7Ch]
  int v64; // [xsp+38h] [xbp-78h]
  unsigned __int64 v65; // [xsp+40h] [xbp-70h]
  __int64 v66; // [xsp+48h] [xbp-68h]
  const char *v67; // [xsp+50h] [xbp-60h]
  int v68; // [xsp+58h] [xbp-58h]
  int v69; // [xsp+5Ch] [xbp-54h]
  int v70; // [xsp+60h] [xbp-50h]
  __int64 v71; // [xsp+64h] [xbp-4Ch]

  v10 = result;
  v11 = *(_QWORD *)(result + 48);
  if ( *(_DWORD *)a2 == 1 )
  {
    v21 = *(unsigned int *)(a2 + 28);
    v22 = a2 + 56 + 68LL * *(unsigned int *)(a2 + 48);
    if ( v22 <= a2 + 56 )
    {
      v29 = 0;
      v23 = 0;
      v27 = *(_DWORD *)(a2 + 24);
      v28 = *(_DWORD *)(a2 + 28);
    }
    else
    {
      v23 = 0;
      LOBYTE(v24) = 0;
      v25 = a2 + 56;
      do
      {
        if ( *(_DWORD *)(v25 + 44) > (unsigned int)(unsigned __int8)v24 )
          v24 = *(_DWORD *)(v25 + 44);
        v23 |= (*(_BYTE *)(v25 + 57) & 3) != 0;
        v25 += 68LL;
      }
      while ( v25 < v22 );
      v26 = *(_DWORD *)(v25 - 32) + *(_DWORD *)(v25 - 36);
      v27 = *(_DWORD *)(a2 + 24);
      v28 = v26 - v27;
      v29 = (unsigned __int8)v24 << 16;
    }
    v42 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)&v43 = (unsigned int)v42;
    *((_QWORD *)&v43 + 1) = HIDWORD(v42);
    v57 = v43;
    v58 = v27;
    v59 = v21;
    v60 = v28;
    v61 = a2 + 8;
    v44 = *(_DWORD *)(a2 + 44);
    v62 = a2 - v11;
    v63 = v44;
    v32 = (__int64 *)(result + 40);
    v31 = *(_QWORD *)(result + 40);
    v46 = (v44 & 2) == 0 && *(_BYTE *)(result + 64) != 0;
    v64 = (*(_DWORD *)(a2 + 52) >> 3) & 2
        | v46 & v23 & 0xFF0007
        | (*(_DWORD *)(a2 + 52) >> 1) & 4
        | v29 & 0xFF0007
        | (16 * (*(_DWORD *)(*(_QWORD *)(v31 + 8) + 24LL) & 0xFFF));
    if ( *a3 || v22 <= a2 + 56 )
      goto LABEL_57;
    v47 = a2 + 124;
    do
    {
      v48 = (const char *)(v47 - 68);
      if ( *(_BYTE *)(v47 - 53) )
      {
        strlcpy(*(char **)(v10 + 56), v48, 0x11u);
        v48 = *(const char **)(v10 + 56);
      }
      v49 = *(_DWORD *)(a2 + 24);
      v50 = *(unsigned int *)(v47 - 36);
      if ( (unsigned int)v50 >= v49 )
      {
        v52 = *(_DWORD *)(a2 + 36) + v49;
        v39 = v52 >= (unsigned int)v50;
        v53 = v52 - v50;
        v51 = !v39 || v53 < *(_DWORD *)(v47 - 32);
      }
      else
      {
        v51 = 1;
      }
      v66 = *(unsigned int *)(v47 - 32);
      v67 = v48;
      v55 = *(_DWORD *)(v47 - 12);
      v56 = *(_DWORD *)(v47 - 24);
      v68 = *(_DWORD *)(v47 - 28);
      v69 = v55;
      v65 = v50;
      v70 = v56;
      v71 = *(_QWORD *)(v47 - 8);
      result = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _BYTE *, __int64, __int64, __int64, __int64))(*(_QWORD *)(v10 + 32) + 16LL))(
                 *(_QWORD *)(v10 + 32),
                 &v57,
                 v51,
                 a3,
                 a5,
                 a6,
                 a7,
                 a8);
      if ( *a3 )
        break;
      v39 = v47 >= v22;
      v47 += 68LL;
    }
    while ( !v39 );
    goto LABEL_56;
  }
  if ( *(_DWORD *)a2 != 25 )
    return result;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = a2 + 72 + 80LL * *(unsigned int *)(a2 + 64);
  if ( v13 <= a2 + 72 )
  {
    v20 = 0;
    v18 = (unsigned __int64 *)(a2 + 24);
    v17 = *(_QWORD *)(a2 + 24);
    v19 = *(_QWORD *)(a2 + 32);
  }
  else
  {
    LOBYTE(v14) = 0;
    v15 = a2 + 72;
    do
    {
      if ( *(_DWORD *)(v15 + 52) > (unsigned int)(unsigned __int8)v14 )
        v14 = *(_DWORD *)(v15 + 52);
      v15 += 80LL;
    }
    while ( v15 < v13 );
    v16 = *(_QWORD *)(v15 - 40) + *(_QWORD *)(v15 - 48);
    v18 = (unsigned __int64 *)(a2 + 24);
    v17 = *(_QWORD *)(a2 + 24);
    v19 = v16 - v17;
    v20 = (unsigned __int8)v14 << 16;
  }
  v57 = *(_OWORD *)(a2 + 40);
  v58 = v17;
  v59 = v12;
  v60 = v19;
  v61 = a2 + 8;
  v30 = *(_DWORD *)(a2 + 60);
  v62 = a2 - v11;
  v63 = v30;
  v64 = (*(_DWORD *)(a2 + 68) >> 3) & 2 | (*(_DWORD *)(a2 + 68) >> 1) & 4 | v20;
  v32 = (__int64 *)(result + 40);
  v31 = *(_QWORD *)(result + 40);
  v64 = v64 & 0xFF0006 | (16 * (*(_DWORD *)(*(_QWORD *)(v31 + 8) + 24LL) & 0xFFF));
  if ( !*a3 && v13 > a2 + 72 )
  {
    v33 = a2 + 152;
    do
    {
      v34 = (const char *)(v33 - 80);
      if ( *(_BYTE *)(v33 - 65) )
      {
        strlcpy(*(char **)(v10 + 56), v34, 0x11u);
        v34 = *(const char **)(v10 + 56);
      }
      v35 = *(_QWORD *)(v33 - 48);
      if ( v35 >= *v18 )
      {
        v37 = *(_QWORD *)(a2 + 48) + *v18;
        v39 = v37 >= v35;
        v38 = v37 - v35;
        v39 = v39 && v38 >= *(_QWORD *)(v33 - 40);
        v36 = !v39;
      }
      else
      {
        v36 = 1;
      }
      v66 = *(_QWORD *)(v33 - 40);
      v67 = v34;
      v40 = *(_DWORD *)(v33 - 16);
      v41 = *(_DWORD *)(v33 - 28);
      v68 = *(_DWORD *)(v33 - 32);
      v69 = v40;
      v65 = v35;
      v70 = v41;
      v71 = *(_QWORD *)(v33 - 12);
      result = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _BYTE *, __int64, __int64, __int64, __int64))(*(_QWORD *)(v10 + 32) + 16LL))(
                 *(_QWORD *)(v10 + 32),
                 &v57,
                 v36,
                 a3,
                 a5,
                 a6,
                 a7,
                 a8);
      if ( *a3 )
        break;
      v39 = v33 >= v13;
      v33 += 80LL;
    }
    while ( !v39 );
LABEL_56:
    v31 = *v32;
  }
LABEL_57:
  ++*(_DWORD *)(*(_QWORD *)(v31 + 8) + 24LL);
  return result;
}
