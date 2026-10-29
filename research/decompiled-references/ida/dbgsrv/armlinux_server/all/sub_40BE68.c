/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BE68
// Address: 0x000000000040BE68

//----- (000000000040BE68) ----------------------------------------------------
__int64 __fastcall sub_40BE68(__int64 a1)
{
  __int64 v1; // x26
  _QWORD *v3; // x21
  char **v4; // x20
  __int64 v5; // x25
  __int64 v6; // x27
  char *v7; // x0
  __int64 v8; // x3
  unsigned __int64 v9; // x2
  unsigned __int64 v10; // x21
  char *v11; // x1
  char *v12; // x28
  __int64 v13; // x27
  char **v14; // x23
  char *v15; // x0
  char *v16; // x3
  unsigned __int64 v17; // x10
  unsigned __int64 v18; // x6
  __int64 v19; // x21
  size_t v20; // x0
  size_t v21; // x4
  char *v22; // x0
  __int64 v23; // x3
  unsigned __int64 v24; // x2
  char *v25; // x0
  __int64 *v26; // x2
  unsigned __int64 v28; // x5
  void *v29; // x0
  void *v30; // x0
  __int64 v31; // x3
  __int64 v32; // x22
  unsigned __int64 v33; // x2
  __int64 v34; // x21
  __int64 v35; // x26
  unsigned __int64 v36; // x2
  __int64 **v37; // x6
  size_t v38; // x0
  size_t v39; // x11
  const char *v40; // x10
  __int64 *v41; // x0
  char *v42; // x0
  unsigned __int64 v43; // x1
  unsigned __int64 v44; // x12
  bool v45; // cc
  void *v46; // x0
  void *v47; // x1
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // [xsp+38h] [xbp-98h]
  unsigned __int64 i; // [xsp+70h] [xbp-60h]
  unsigned __int64 v53; // [xsp+78h] [xbp-58h]
  size_t v54; // [xsp+78h] [xbp-58h]
  const char *v55; // [xsp+78h] [xbp-58h]
  char *v56; // [xsp+78h] [xbp-58h]
  size_t v57; // [xsp+78h] [xbp-58h]
  size_t v58; // [xsp+80h] [xbp-50h]
  char *v59; // [xsp+80h] [xbp-50h]
  unsigned __int64 v60; // [xsp+80h] [xbp-50h]
  __int64 **v61; // [xsp+80h] [xbp-50h]
  int v62; // [xsp+88h] [xbp-48h]
  char *s; // [xsp+90h] [xbp-40h]
  int v64; // [xsp+98h] [xbp-38h]
  char v65; // [xsp+9Ch] [xbp-34h]
  char *v66; // [xsp+A0h] [xbp-30h]
  const char *v67; // [xsp+B0h] [xbp-20h]
  size_t v68; // [xsp+B8h] [xbp-18h]
  __int64 v69; // [xsp+C0h] [xbp-10h] BYREF

  v3 = sub_49E050(0x3A0u);
  sub_40BAF8((__int64)v3, a1 + 672);
  *(_QWORD *)(a1 + 664) = v3;
  sub_409EF8(v3, (__int64)&off_521C30, 104, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521C50, 112, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521C70, 120, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521C90, 128, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521CB0, 136, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521CD0, 144, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521CF0, 152, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521D10, 160, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521D30, 168, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521D50, 176, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521D70, 184, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521D90, 192, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521DB0, 200, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521DD0, 208, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521DF0, 216, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521E10, 224, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521E30, 232, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521E50, 240, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521E70, 248, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521E90, 256, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521EB0, 264, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521ED0, 272, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521EF0, 280, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521F10, 288, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521F30, 296, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521F50, 304, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521F70, 312, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521F90, 320, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521FB0, 328, 8);
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521FD0, 336, 8);
  *(_DWORD *)(a1 + 1640) = sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_5217B0, 344, 8);
  *(_DWORD *)(a1 + 780) = sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521810, 352, 8);
  *(_DWORD *)(a1 + 784) = sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_5217D0, 360, 8);
  *(_DWORD *)(a1 + 1644) = sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_5217F0, 368, 8);
  if ( qword_522000 )
  {
    v4 = &off_521830;
    v5 = 384;
    for ( i = 0; qword_522000 > i; ++i )
    {
      v6 = *(_QWORD *)(a1 + 664);
      v7 = *(char **)(v6 + 16);
      v8 = *(_QWORD *)(v6 + 24);
      v9 = v8 + 1;
      if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v6 + 32) )
      {
        v7 = (char *)sub_491288(v6 + 16, *(void **)(v6 + 16), v9, 0x28u);
        *(_QWORD *)(v6 + 16) = v7;
        v8 = *(_QWORD *)(v6 + 24);
        v9 = v8 + 1;
      }
      *(_QWORD *)(v6 + 24) = v9;
      v10 = 16;
      v11 = &v7[40 * v8];
      *(_DWORD *)v11 = 2;
      *((_QWORD *)v11 + 1) = -1;
      *((_QWORD *)v11 + 2) = v5;
      *((_QWORD *)v11 + 3) = 16;
      *((_QWORD *)v11 + 4) = 16;
      s = *v4;
      v62 = *((_DWORD *)v4 + 2);
      v64 = *((unsigned __int8 *)v4 + 13);
      v12 = v4[2];
      v65 = *((_BYTE *)v4 + 12);
      v66 = v4[3];
      v13 = *(_QWORD *)(v6 + 8);
      if ( v12 )
      {
        if ( (v62 & 0x100) != 0 )
        {
          v10 = 1;
          v51 = v1;
          goto LABEL_28;
        }
        switch ( v64 )
        {
          case 1:
            v51 = v1;
            goto LABEL_28;
          case 2:
            v10 = 32;
            v51 = v1;
            goto LABEL_28;
          case 7:
            v10 = 64;
            v51 = v1;
LABEL_28:
            v30 = *(void **)(v13 + 72);
            v31 = *(_QWORD *)(v13 + 80);
            if ( (unsigned __int64)(v31 + 1) > *(_QWORD *)(v13 + 88) )
            {
              v30 = sub_491288(v13 + 72, *(void **)(v13 + 72), v31 + 1, 0x18u);
              *(_QWORD *)(v13 + 72) = v30;
              v31 = *(_QWORD *)(v13 + 80);
            }
            v69 = 0;
            v32 = (__int64)v30 + 24 * v31;
            *(_QWORD *)v32 = 0;
            *(_QWORD *)(v32 + 8) = 0;
            *(_QWORD *)(v32 + 16) = 0;
            ++*(_QWORD *)(v13 + 80);
            v33 = *(_QWORD *)(v32 + 8);
            if ( v33 <= v10 )
            {
              if ( v33 >= v10 )
                goto LABEL_32;
              v42 = *(char **)v32;
              v43 = *(_QWORD *)(v32 + 16);
              if ( *(_QWORD *)v32 <= (unsigned __int64)&v69 && &v69 < (__int64 *)&v42[8 * v43] )
              {
                if ( v10 <= v43
                  || (v42 = (char *)sub_491288(v32, *(void **)v32, v10, 8u),
                      *(_QWORD *)v32 = v42,
                      v33 = *(_QWORD *)(v32 + 8),
                      v10 > v33) )
                {
                  v49 = 8 * v33;
                  while ( 1 )
                  {
                    *(_QWORD *)&v42[v49] = 0;
                    ++v33;
                    v49 += 8;
                    if ( v10 <= v33 )
                      break;
                    v42 = *(char **)v32;
                  }
                  *(_QWORD *)(v32 + 8) = v10;
                }
                else
                {
                  *(_QWORD *)(v32 + 8) = v10;
                }
LABEL_32:
                v14 = (char **)(v13 + 24);
                v15 = *(char **)(v13 + 24);
                v34 = 8 * v10;
                v35 = 0;
                v16 = *(char **)(v13 + 32);
                v17 = *(_QWORD *)(v13 + 40);
                v36 = (unsigned __int64)(v16 + 1);
                do
                {
                  v18 = v36;
                  if ( *(_QWORD *)&v12[v35] )
                  {
                    if ( v36 > v17 )
                    {
                      v15 = (char *)sub_491288(v13 + 24, v15, v36, 0x18u);
                      v16 = *(char **)(v13 + 32);
                      *v14 = v15;
                    }
                    v37 = (__int64 **)&v15[24 * (_QWORD)v16];
                    *v37 = nullptr;
                    v37[1] = nullptr;
                    v37[2] = nullptr;
                    ++*(_QWORD *)(v13 + 32);
                    if ( *(_QWORD *)&v12[v35]
                      && (v55 = *(const char **)&v12[v35],
                          v59 = &v15[24 * (_QWORD)v16],
                          v38 = strlen(v55),
                          v39 = v38,
                          v40 = v55,
                          v37 = (__int64 **)v59,
                          v38) )
                    {
                      v44 = v38 + 1;
                      v45 = v38 + 1 > *((_QWORD *)v59 + 2);
                      v46 = *(void **)v59;
                      if ( v45 )
                      {
                        v47 = *(void **)v59;
                        v48 = (__int64)v59;
                        v56 = v59;
                        v60 = v44;
                        v67 = v40;
                        v68 = v39;
                        v46 = sub_491288(v48, v47, v44, 1u);
                        v40 = v67;
                        v39 = v68;
                        v37 = (__int64 **)v56;
                        v44 = v60;
                        *(_QWORD *)v56 = v46;
                      }
                      v37[1] = (__int64 *)v44;
                      v57 = v39;
                      v61 = v37;
                      memmove(v46, v40, v39);
                      *((_BYTE *)*v61 + v57) = 0;
                      if ( v61[1] )
                        v41 = *v61;
                      else
                        v41 = &qword_4B2D48;
                    }
                    else
                    {
                      v41 = &qword_4B2D48;
                      v37[1] = nullptr;
                    }
                    *(_QWORD *)(*(_QWORD *)v32 + v35) = v41;
                    v15 = *v14;
                    v16 = *(char **)(v13 + 32);
                    v17 = *(_QWORD *)(v13 + 40);
                    v36 = (unsigned __int64)(v16 + 1);
                    v18 = (unsigned __int64)(v16 + 1);
                  }
                  v35 += 8;
                }
                while ( v34 != v35 );
                v12 = *(char **)v32;
                v1 = v51;
                goto LABEL_13;
              }
              if ( v10 <= v43
                || (v42 = (char *)sub_491288(v32, *(void **)v32, v10, 8u),
                    *(_QWORD *)v32 = v42,
                    v33 = *(_QWORD *)(v32 + 8),
                    v10 > v33) )
              {
                v50 = 8 * v33;
                while ( 1 )
                {
                  *(_QWORD *)&v42[v50] = 0;
                  ++v33;
                  v50 += 8;
                  if ( v10 <= v33 )
                    break;
                  v42 = *(char **)v32;
                }
                *(_QWORD *)(v32 + 8) = v10;
                goto LABEL_32;
              }
            }
            *(_QWORD *)(v32 + 8) = v10;
            goto LABEL_32;
        }
        if ( !under_debugger )
          sub_492270(1795);
        __break(0x3E8u);
      }
      v14 = (char **)(v13 + 24);
      v15 = *(char **)(v13 + 24);
      v16 = *(char **)(v13 + 32);
      v17 = *(_QWORD *)(v13 + 40);
      v18 = (unsigned __int64)(v16 + 1);
LABEL_13:
      if ( v18 > v17 )
      {
        v15 = (char *)sub_491288((__int64)v14, v15, v18, 0x18u);
        *v14 = v15;
        v16 = v14[1];
      }
      v19 = (__int64)&v15[24 * (_QWORD)v16];
      *(_QWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = 0;
      ++v14[1];
      if ( s && (v20 = strlen(s), (v21 = v20) != 0) )
      {
        v28 = v20 + 1;
        v29 = *(void **)v19;
        if ( v28 > *(_QWORD *)(v19 + 16) )
        {
          v53 = v28;
          v58 = v21;
          v29 = sub_491288(v19, *(void **)v19, v28, 1u);
          v28 = v53;
          v21 = v58;
          *(_QWORD *)v19 = v29;
        }
        *(_QWORD *)(v19 + 8) = v28;
        v54 = v21;
        memmove(v29, s, v21);
        *(_BYTE *)(*(_QWORD *)v19 + v54) = 0;
      }
      else
      {
        *(_QWORD *)(v19 + 8) = 0;
      }
      v22 = *(char **)v13;
      v23 = *(_QWORD *)(v13 + 8);
      v24 = v23 + 1;
      if ( (unsigned __int64)(v23 + 1) > *(_QWORD *)(v13 + 16) )
      {
        v22 = (char *)sub_491288(v13, *(void **)v13, v24, 0x20u);
        v23 = *(_QWORD *)(v13 + 8);
        *(_QWORD *)v13 = v22;
        v24 = v23 + 1;
      }
      *(_QWORD *)(v13 + 8) = v24;
      v25 = &v22[32 * v23];
      v26 = &qword_4B2D48;
      if ( *(_QWORD *)(v19 + 8) )
        v26 = *(__int64 **)v19;
      *(_QWORD *)v25 = v26;
      v5 += 16;
      v4 += 4;
      *((_DWORD *)v25 + 2) = v62;
      v25[12] = v65;
      v25[13] = v64;
      *((_QWORD *)v25 + 2) = v12;
      *((_QWORD *)v25 + 3) = v66;
    }
  }
  sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521790, 896, 4);
  return sub_409EF8(*(_QWORD **)(a1 + 664), (__int64)&off_521770, 900, 4);
}
// 40BE68: could not find valid save-restore pair for x22
// 40BE68: could not find valid save-restore pair for x26
// 40BE68: could not find valid save-restore pair for x27
// 40BE68: could not find valid save-restore pair for x28
// 40C448: variable 'v1' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 521770: using guessed type char *off_521770;
// 521790: using guessed type char *off_521790;
// 5217B0: using guessed type __int64 *off_5217B0;
// 5217D0: using guessed type _UNKNOWN *off_5217D0;
// 5217F0: using guessed type __int64 *off_5217F0;
// 521810: using guessed type __int64 *off_521810;
// 521830: using guessed type char *off_521830;
// 521C30: using guessed type char *off_521C30;
// 521C50: using guessed type char *;
// 521C70: using guessed type char *;
// 521C90: using guessed type char *;
// 521CB0: using guessed type char *;
// 521CD0: using guessed type char *;
// 521CF0: using guessed type char *;
// 521D10: using guessed type char *;
// 521D30: using guessed type char *;
// 521D50: using guessed type char *;
// 521D70: using guessed type char *;
// 521D90: using guessed type char *;
// 521DB0: using guessed type char *;
// 521DD0: using guessed type char *;
// 521DF0: using guessed type char *;
// 521E10: using guessed type char *;
// 521E30: using guessed type char *;
// 521E50: using guessed type char *;
// 521E70: using guessed type char *;
// 521E90: using guessed type char *;
// 521EB0: using guessed type char *;
// 521ED0: using guessed type char *;
// 521EF0: using guessed type char *;
// 521F10: using guessed type char *;
// 521F30: using guessed type char *;
// 521F50: using guessed type char *;
// 521F70: using guessed type char *;
// 521F90: using guessed type char *;
// 521FB0: using guessed type char *;
// 521FD0: using guessed type char *;
// 522000: using guessed type __int64 qword_522000;
// 52451C: using guessed type char under_debugger;
