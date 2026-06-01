/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051110
// Address: 0x0000000100051110

//----- (0000000100051110) ----------------------------------------------------
__int64 __fastcall sub_100051110(void **a1, _DWORD *a2)
{
  _QWORD *v2; // x8
  const char *v5; // x20
  char v6; // w28
  void *v8; // x0
  unsigned int v9; // w8
  int v10; // w0
  unsigned int v11; // w1
  _QWORD *v12; // x1
  void *v13; // x8
  _QWORD *v14; // x8
  _QWORD *v15; // x21
  unsigned __int64 v16; // x1
  __int64 v17; // x8
  int v18; // w22
  __int64 v19; // x20
  __int64 v20; // x23
  const void **v21; // x24
  __int64 v22; // x25
  const void *v23; // x24
  size_t v24; // x0
  size_t v25; // x25
  unsigned __int64 v26; // x26
  _QWORD *v27; // x1
  const char *v28; // x0
  int v29; // w0
  _BYTE *v30; // x1
  unsigned __int64 v31; // x8
  size_t v32; // x23
  void *v33; // x1
  char *v34; // x25
  char v35; // w9
  _QWORD *v36; // [xsp+10h] [xbp-310h]
  unsigned __int8 v37; // [xsp+1Fh] [xbp-301h] BYREF
  void **v38; // [xsp+20h] [xbp-300h]
  void *v39; // [xsp+28h] [xbp-2F8h] BYREF
  __int128 v40; // [xsp+30h] [xbp-2F0h] BYREF
  void *__ptr[2]; // [xsp+40h] [xbp-2E0h] BYREF
  __int128 v42; // [xsp+50h] [xbp-2D0h]
  __int128 v43; // [xsp+60h] [xbp-2C0h]
  __int128 v44; // [xsp+70h] [xbp-2B0h]
  __int128 v45; // [xsp+80h] [xbp-2A0h]
  __int128 v46; // [xsp+90h] [xbp-290h]
  __int64 v47; // [xsp+A0h] [xbp-280h]
  _QWORD v48[2]; // [xsp+B0h] [xbp-270h] BYREF
  _QWORD v49[3]; // [xsp+C0h] [xbp-260h] BYREF
  int v50; // [xsp+D8h] [xbp-248h]
  char v51; // [xsp+DCh] [xbp-244h]
  void *v52; // [xsp+E0h] [xbp-240h]
  char v53; // [xsp+E8h] [xbp-238h]
  __int128 v54; // [xsp+F8h] [xbp-228h]
  __int128 v55; // [xsp+108h] [xbp-218h]
  __int64 v56; // [xsp+118h] [xbp-208h]
  char v57; // [xsp+120h] [xbp-200h]
  __int64 v58; // [xsp+128h] [xbp-1F8h]
  __int128 v59; // [xsp+130h] [xbp-1F0h]
  __int128 v60; // [xsp+140h] [xbp-1E0h]
  __int16 v61; // [xsp+150h] [xbp-1D0h]
  __int128 v62; // [xsp+178h] [xbp-1A8h]
  __int128 v63; // [xsp+188h] [xbp-198h]
  __int128 v64; // [xsp+198h] [xbp-188h]
  __int128 v65; // [xsp+1A8h] [xbp-178h]
  __int128 v66; // [xsp+1B8h] [xbp-168h]
  __int128 v67; // [xsp+1C8h] [xbp-158h]
  __int128 v68; // [xsp+1D8h] [xbp-148h]
  __int128 v69; // [xsp+1E8h] [xbp-138h]
  __int128 v70; // [xsp+1F8h] [xbp-128h]
  __int128 v71; // [xsp+208h] [xbp-118h]
  __int128 v72; // [xsp+218h] [xbp-108h]
  __int128 v73; // [xsp+228h] [xbp-F8h]
  __int128 v74; // [xsp+238h] [xbp-E8h]
  __int128 v75; // [xsp+248h] [xbp-D8h]
  _BYTE v76[19]; // [xsp+258h] [xbp-C8h] BYREF
  int v77; // [xsp+26Ch] [xbp-B4h]
  __int64 v78; // [xsp+270h] [xbp-B0h]
  __int64 v79; // [xsp+278h] [xbp-A8h]
  __int64 v80; // [xsp+280h] [xbp-A0h]
  __int64 v81; // [xsp+288h] [xbp-98h]
  int v82; // [xsp+290h] [xbp-90h]
  __int128 v83; // [xsp+298h] [xbp-88h]
  __int128 v84; // [xsp+2A8h] [xbp-78h]

  v2 = *a1;
  if ( *a1 && *((_DWORD *)v2 + 2) == 1 )
  {
    v5 = v2[3] ? (const char *)v2[2] : &byte_100075A30;
    v8 = (void *)open_linput(v5, 0);
    v39 = v8;
    if ( v8 )
    {
      v38 = &v39;
      v48[0] = off_100099670;
      v48[1] = v49;
      v49[0] = 0xFFFFFFFFLL;
      v49[1] = -1;
      v49[2] = -1;
      v50 = 8;
      v51 = 1;
      v52 = v8;
      v53 = 0;
      v54 = 0u;
      v55 = 0u;
      v56 = -1;
      v57 = 0;
      v58 = -1;
      v77 = 0;
      v59 = 0u;
      v60 = 0u;
      v61 = 0;
      v75 = 0u;
      memset(v76, 0, sizeof(v76));
      v73 = 0u;
      v74 = 0u;
      v71 = 0u;
      v72 = 0u;
      v69 = 0u;
      v70 = 0u;
      v67 = 0u;
      v68 = 0u;
      v66 = 0u;
      v65 = 0u;
      v64 = 0u;
      v63 = 0u;
      v62 = 0u;
      v78 = -1;
      v79 = -1;
      v82 = 0;
      v80 = 0;
      v81 = 0;
      v83 = 0u;
      v84 = 0u;
      if ( (sub_10000E3F0((__int64)v48) & 1) != 0 )
      {
        if ( a2 )
        {
          v9 = a2[6];
          if ( v9 > 0x12 || ((1 << v9) & 0x40C00) == 0 )
          {
            v37 = 0;
            v10 = sub_10000DD1C(a2[522], (unsigned int)a2[523], (char *)&v37);
            v11 = sub_100048AAC((__int64)v48, v10, v37);
            if ( v11 != -1 && ((unsigned __int8)sub_10000EB00((__int64)v48, v11, 0, 0) & 1) != 0 )
            {
              v12 = a1[13];
              v13 = a1[14];
              if ( a1[15] < (char *)v13 + 1 )
              {
                v12 = qvector_reserve(a1 + 13, v12, (unsigned __int64)v13 + 1, 0x78u);
                a1[13] = v12;
                v13 = a1[14];
              }
              v14 = &v12[15 * (_QWORD)v13];
              v14[14] = 0;
              *((_OWORD *)v14 + 5) = 0u;
              *((_OWORD *)v14 + 6) = 0u;
              *((_OWORD *)v14 + 3) = 0u;
              *((_OWORD *)v14 + 4) = 0u;
              *((_OWORD *)v14 + 1) = 0u;
              *((_OWORD *)v14 + 2) = 0u;
              *(_OWORD *)v14 = 0u;
              a1[14] = (char *)a1[14] + 1;
              v15 = (_QWORD *)sub_1000108DC((__int64)v48);
              v16 = v15[1];
              if ( a1[14] != (void *)v16 )
              {
                v47 = 0;
                v45 = 0u;
                v46 = 0u;
                v43 = 0u;
                v44 = 0u;
                *(_OWORD *)__ptr = 0u;
                v42 = 0u;
                v40 = 0u;
                sub_100051C38(a1 + 13, v16, (unsigned __int64)&v40);
                if ( __ptr[0] )
                {
                  __ptr[1] = nullptr;
                  qfree(__ptr[0]);
                }
                v16 = v15[1];
              }
              if ( v16 )
              {
                v36 = a1 + 13;
                v17 = 0;
                v18 = 0;
                v6 = 0;
                while ( 1 )
                {
                  v47 = 0;
                  v45 = 0u;
                  v46 = 0u;
                  v43 = 0u;
                  v44 = 0u;
                  *(_OWORD *)__ptr = 0u;
                  v42 = 0u;
                  v40 = 0u;
                  v19 = *v36 + 120 * v17;
                  v20 = *v15 + 80 * v17;
                  *(_QWORD *)v19 = *(_QWORD *)(v20 + 32);
                  *(_DWORD *)(v19 + 8) = *(_QWORD *)(v20 + 40);
                  *(_QWORD *)(v19 + 40) = 0;
                  *(_QWORD *)(v19 + 48) = v58 + *(unsigned int *)(v20 + 48);
                  v21 = (const void **)off_10009AA48;
                  v22 = 22;
                  while ( strncmp((const char *)*(v21 - 1), (const char *)v20, 0x10u) )
                  {
                    v21 += 2;
                    if ( !--v22 )
                      goto LABEL_34;
                  }
                  v23 = *v21;
                  if ( v23 && (v24 = strlen((const char *)v23)) != 0 )
                  {
                    v25 = v24;
                    v26 = v24 + 1;
                    v27 = *(_QWORD **)(v19 + 16);
                    if ( *(_QWORD *)(v19 + 32) < v24 + 1 )
                    {
                      v27 = qvector_reserve((_QWORD *)(v19 + 16), v27, v26, 1u);
                      *(_QWORD *)(v19 + 16) = v27;
                    }
                    *(_QWORD *)(v19 + 24) = v26;
                    memmove(v27, v23, v25);
                    *(_BYTE *)(*(_QWORD *)(v19 + 16) + v25) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v19 + 24) = 0;
                  }
LABEL_34:
                  *(_QWORD *)(v19 + 56) = 0;
                  *(_QWORD *)(v19 + 64) = 0;
                  v28 = *(_QWORD *)(v19 + 24) ? *(const char **)(v19 + 16) : &byte_100075A30;
                  v29 = strncmp(v28, ".debug_", 7u);
                  if ( !v29 )
                  {
                    if ( *(_DWORD *)(v20 + 60) )
                      break;
                  }
                  if ( !v29 )
                    goto LABEL_53;
LABEL_56:
                  if ( __ptr[0] )
                  {
                    __ptr[1] = nullptr;
                    qfree(__ptr[0]);
                  }
                  v17 = ++v18;
                  if ( v15[1] <= (unsigned __int64)v18 )
                    goto LABEL_64;
                }
                v30 = __ptr[0];
                if ( (unsigned __int64)v42 <= 5 )
                {
                  v30 = qvector_reserve(__ptr, (_QWORD *)__ptr[0], 6u, 1u);
                  __ptr[0] = v30;
                }
                __ptr[1] = (void *)6;
                v30[4] = 97;
                *(_DWORD *)v30 = 1818587694;
                *((_BYTE *)__ptr[0] + 5) = 0;
                v31 = *(_QWORD *)(v19 + 24);
                if ( v31 )
                  v32 = v31 - 1;
                else
                  v32 = 0;
                if ( v31 >= 2 )
                {
                  v33 = __ptr[0];
                  if ( __ptr[1] )
                    v34 = (char *)__ptr[1] - 1;
                  else
                    v34 = nullptr;
                  if ( (unsigned __int64)v42 < (unsigned __int64)&v34[v32 + 1] )
                  {
                    v33 = qvector_reserve(__ptr, (_QWORD *)__ptr[0], (unsigned __int64)&v34[v32 + 1], 1u);
                    __ptr[0] = v33;
                  }
                  __ptr[1] = &v34[v32 + 1];
                  v34[v32 + (_QWORD)v33] = 0;
                  memcpy((char *)__ptr[0] + (unsigned __int64)v34, *(const void **)(v19 + 16), v32);
                }
                *((_QWORD *)&v43 + 1) = 4;
                *(_QWORD *)&v44 = v18 + 1;
                DWORD2(v40) = 1;
LABEL_53:
                if ( __ptr[1] >= (void *)2 )
                  sub_100051A90(v36, (__int64 *)&v40);
                v6 = 1;
                goto LABEL_56;
              }
              v6 = 0;
LABEL_64:
              v35 = v61;
              *((_BYTE *)a1 + 168) = HIBYTE(v61);
              *((_BYTE *)a1 + 169) = v35;
              goto LABEL_62;
            }
            sub_100000AA0();
LABEL_61:
            v6 = 0;
LABEL_62:
            sub_100019A48((__int64)v48);
            close_linput(v39);
            return v6 & 1;
          }
          if ( under_debugger != 1 )
            interr(30762);
        }
        else if ( under_debugger != 1 )
        {
          goto LABEL_69;
        }
        while ( 1 )
        {
          __break(1u);
LABEL_69:
          interr(30461);
        }
      }
      sub_100000AA0();
      goto LABEL_61;
    }
  }
  sub_100000AA0();
  v6 = 0;
  return v6 & 1;
}
// 100075A30: using guessed type char byte_100075A30;
// 100099670: using guessed type __int64 (__fastcall *off_100099670[2])();
// 10009AA48: using guessed type char *off_10009AA48[43];
// 10009D90D: using guessed type char under_debugger;
