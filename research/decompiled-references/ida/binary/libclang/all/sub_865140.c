__int64 __fastcall sub_865140(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int16 *v9; // rsi
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // al
  unsigned int v15; // eax
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rax
  char v19; // [rsp+Fh] [rbp-469h] BYREF
  void *v20; // [rsp+10h] [rbp-468h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-460h]
  char v22; // [rsp+1Ch] [rbp-45Ch]
  __int16 v23; // [rsp+20h] [rbp-458h] BYREF
  __int64 v24; // [rsp+28h] [rbp-450h]
  __int16 v25; // [rsp+30h] [rbp-448h] BYREF
  __int64 v26; // [rsp+38h] [rbp-440h]
  unsigned int v27; // [rsp+40h] [rbp-438h] BYREF
  char v28; // [rsp+44h] [rbp-434h]
  __int64 v29; // [rsp+48h] [rbp-430h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-428h]
  char v31; // [rsp+54h] [rbp-424h]
  __int64 (__fastcall **v32)(); // [rsp+80h] [rbp-3F8h] BYREF
  char v33; // [rsp+88h] [rbp-3F0h]
  _QWORD *v34; // [rsp+90h] [rbp-3E8h]
  __int16 *v35; // [rsp+98h] [rbp-3E0h]
  _OWORD *v36; // [rsp+A0h] [rbp-3D8h]
  __int64 v37; // [rsp+A8h] [rbp-3D0h]
  int v38; // [rsp+B0h] [rbp-3C8h]
  char v39; // [rsp+B4h] [rbp-3C4h]
  _OWORD v40[3]; // [rsp+B8h] [rbp-3C0h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-390h]
  __int64 v42; // [rsp+F0h] [rbp-388h]
  __int64 v43; // [rsp+F8h] [rbp-380h]
  int v44; // [rsp+108h] [rbp-370h] BYREF
  __int64 v45; // [rsp+110h] [rbp-368h]
  int *v46; // [rsp+118h] [rbp-360h]
  int *v47; // [rsp+120h] [rbp-358h]
  __int64 v48; // [rsp+128h] [rbp-350h]
  int v49; // [rsp+138h] [rbp-340h] BYREF
  __int64 v50; // [rsp+140h] [rbp-338h]
  int *v51; // [rsp+148h] [rbp-330h]
  int *v52; // [rsp+150h] [rbp-328h]
  __int64 v53; // [rsp+158h] [rbp-320h]
  __int64 v54; // [rsp+160h] [rbp-318h]
  int v55; // [rsp+168h] [rbp-310h]
  _DWORD *v56; // [rsp+170h] [rbp-308h]
  __int64 v57; // [rsp+178h] [rbp-300h]
  _DWORD v58[4]; // [rsp+180h] [rbp-2F8h] BYREF
  __int64 v59; // [rsp+190h] [rbp-2E8h]
  __int64 v60; // [rsp+198h] [rbp-2E0h]
  int v61; // [rsp+1A0h] [rbp-2D8h]
  __int64 v62; // [rsp+1A8h] [rbp-2D0h]
  char v63; // [rsp+1B0h] [rbp-2C8h]
  char *v64; // [rsp+1B8h] [rbp-2C0h]
  __int64 v65; // [rsp+1C0h] [rbp-2B8h]
  char v66; // [rsp+1C8h] [rbp-2B0h] BYREF
  _BYTE v67[16]; // [rsp+3C8h] [rbp-B0h] BYREF
  int v68; // [rsp+3D8h] [rbp-A0h]
  __int128 v69; // [rsp+3E0h] [rbp-98h]
  __int64 v70; // [rsp+3F0h] [rbp-88h]
  int v71; // [rsp+3F8h] [rbp-80h]
  int v72; // [rsp+408h] [rbp-70h] BYREF
  __int64 v73; // [rsp+410h] [rbp-68h]
  int *v74; // [rsp+418h] [rbp-60h]
  int *v75; // [rsp+420h] [rbp-58h]
  __int64 v76; // [rsp+428h] [rbp-50h]
  __int64 v77; // [rsp+430h] [rbp-48h]
  __int64 v78; // [rsp+438h] [rbp-40h]
  __int64 v79; // [rsp+440h] [rbp-38h]

  if ( (*(_BYTE *)(a2 + 2) & 2) != 0 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v6 = a3[270];
  v22 = 0;
  v21 = 1;
  v20 = nullptr;
  if ( (*(_BYTE *)(v6 + 1) & 0x10) != 0 )
  {
    if ( (unsigned __int8)sub_862040((__int64)a3, a2, (__int64)&v20, a4) )
    {
      v17 = v21;
      *(_BYTE *)(a1 + 16) = 1;
      *(_DWORD *)(a1 + 8) = v17;
      *(_QWORD *)a1 = v20;
      *(_BYTE *)(a1 + 12) = v22;
      return a1;
    }
    goto LABEL_6;
  }
  if ( (unsigned __int8)sub_865090((unsigned __int16 *)a2, a3, a4) )
  {
    v25 = 0;
    v9 = nullptr;
    v32 = &off_47DA958;
    v35 = &v23;
    v10 = a3[270];
    v23 = 0;
    v11 = *(_DWORD *)(v10 + 136);
    LOBYTE(v10) = *(_BYTE *)(v10 + 140);
    v26 = 0;
    v28 &= ~1u;
    v38 = v11;
    v39 = v10 & 1;
    v27 = 0;
    v46 = &v44;
    v47 = &v44;
    v51 = &v49;
    v52 = &v49;
    v40[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v32);
    memset(&v40[1], 0, 32);
    v24 = 0;
    v33 = 0;
    v34 = a3;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v53 = 0;
    v54 = 0;
    v56 = v58;
    v36 = v40;
    v57 = 0x200000001LL;
    v37 = 0x200000001LL;
    v64 = &v66;
    v55 = 1;
    v65 = 0x1000000000LL;
    v58[0] = 1;
    v58[2] = 1;
    v61 = 0;
    v59 = 0;
    v60 = 0;
    v62 = 0;
    v63 = 0;
    sub_69F1C0((__int64)v67, 0, 0, 0);
    v68 = 0;
    v74 = &v72;
    v75 = &v72;
    v79 = 0x300000000LL;
    v12 = *(_QWORD *)(a2 + 8);
    v71 = 0;
    v70 = 0;
    v72 = 0;
    v73 = 0;
    v76 = 0;
    v77 = 0;
    v78 = -1;
    v69 = 0;
    v33 = 1;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_BYTE *)(v13 + 16);
    switch ( v14 )
    {
      case 13:
        if ( (((*(_WORD *)(v13 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          goto LABEL_13;
        break;
      case 46:
        v18 = sub_B14A40(v13);
        if ( (*(_BYTE *)(v18 + 74) & 1) == 0 && *(_QWORD *)(v18 + 128) <= 7u )
          goto LABEL_13;
        break;
      case 10:
        break;
      default:
LABEL_13:
        v15 = v30;
        *(_DWORD *)(a1 + 8) = v30;
        if ( v15 > 0x40 )
        {
          v9 = (__int16 *)&v29;
          sub_2585B30(a1);
        }
        else
        {
          *(_QWORD *)a1 = v29;
        }
        v16 = v31;
        *(_BYTE *)(a1 + 16) = 1;
        *(_BYTE *)(a1 + 12) = v16;
        sub_8227E0((__int64)&v32, (__int64)v9);
        if ( v27 > 1 )
          sub_69F740((__int64)&v27);
        goto LABEL_7;
    }
    v9 = &v25;
    if ( !(unsigned __int8)sub_8331A0((_WORD *)a2, (__int64)&v25, (__int64)a3, &v19) )
    {
      v9 = (__int16 *)a2;
      sub_85F8D0((__int64)&v32, a2, &v27);
    }
    goto LABEL_13;
  }
LABEL_6:
  *(_BYTE *)(a1 + 16) = 0;
LABEL_7:
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  return a1;
}

