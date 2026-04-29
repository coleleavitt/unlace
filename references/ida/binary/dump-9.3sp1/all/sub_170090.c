__int64 __fastcall sub_170090(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  unsigned __int64 *v7; // r13
  __int64 v10; // r15
  int v11; // eax
  int v12; // edx
  __int64 v13; // r15
  int v14; // eax
  signed int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  unsigned __int8 v20; // r8
  int v21; // r8d
  int v22; // r9d
  int v23; // r9d
  unsigned __int8 v24; // r8
  __int64 v25; // rdi
  _QWORD *i; // r10
  unsigned __int8 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r12
  __int32 v32; // eax
  __int32 v33; // eax
  unsigned __int8 v34; // r8
  __int32 v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // r8
  _QWORD *v39; // rax
  int v40; // [rsp+0h] [rbp-190h]
  int v41; // [rsp+0h] [rbp-190h]
  int v42; // [rsp+0h] [rbp-190h]
  _QWORD *v43; // [rsp+0h] [rbp-190h]
  _QWORD *v44; // [rsp+0h] [rbp-190h]
  int v45; // [rsp+8h] [rbp-188h]
  int v46; // [rsp+8h] [rbp-188h]
  int v47; // [rsp+8h] [rbp-188h]
  _DWORD *v48; // [rsp+8h] [rbp-188h]
  _DWORD *v49; // [rsp+8h] [rbp-188h]
  _QWORD *v50; // [rsp+8h] [rbp-188h]
  int v51; // [rsp+10h] [rbp-180h]
  int v52; // [rsp+10h] [rbp-180h]
  unsigned __int64 v53; // [rsp+10h] [rbp-180h]
  int v54; // [rsp+18h] [rbp-178h]
  int v55; // [rsp+18h] [rbp-178h]
  __int64 *v56; // [rsp+18h] [rbp-178h]
  __int64 v57; // [rsp+20h] [rbp-170h]
  __int64 v58; // [rsp+20h] [rbp-170h]
  unsigned int *v59; // [rsp+20h] [rbp-170h]
  unsigned __int8 *v60; // [rsp+28h] [rbp-168h]
  __int64 v61; // [rsp+38h] [rbp-158h]
  int v62; // [rsp+40h] [rbp-150h]
  __int64 v63; // [rsp+40h] [rbp-150h]
  unsigned __int8 *v64; // [rsp+48h] [rbp-148h]
  unsigned __int8 v65; // [rsp+5Fh] [rbp-131h]
  unsigned __int8 v66; // [rsp+5Fh] [rbp-131h]
  __int64 v67; // [rsp+60h] [rbp-130h]
  unsigned __int8 v69; // [rsp+68h] [rbp-128h]
  unsigned __int8 v70; // [rsp+68h] [rbp-128h]
  unsigned __int8 v71; // [rsp+68h] [rbp-128h]
  unsigned __int8 v72; // [rsp+68h] [rbp-128h]
  __int64 v73; // [rsp+78h] [rbp-118h] BYREF
  _QWORD v74[2]; // [rsp+80h] [rbp-110h] BYREF
  _QWORD *v75; // [rsp+90h] [rbp-100h] BYREF
  __int64 v76; // [rsp+98h] [rbp-F8h]
  __int64 v77[2]; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v79; // [rsp+B8h] [rbp-D8h]
  __int64 v80[2]; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+E0h] [rbp-B0h] BYREF
  __int128 v82; // [rsp+E8h] [rbp-A8h]
  unsigned int v83[8]; // [rsp+100h] [rbp-90h] BYREF
  _QWORD v84[2]; // [rsp+120h] [rbp-70h] BYREF
  _QWORD v85[12]; // [rsp+130h] [rbp-60h] BYREF

  v6 = *(_DWORD *)(a4 + 376) == 1;
  v85[5] = __readfsqword(0x28u);
  v7 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
  if ( v6 && *(_DWORD *)(a3 + 72) == **(_DWORD **)(a4 + 368) )
  {
    v67 = sub_1229A0(*(_QWORD *)(a4 + 48));
    if ( !v67 || *(_DWORD *)v67 != 4 && (*(_DWORD *)v67 != 67 || *(_DWORD *)(v67 + 36) != *(_DWORD *)(v67 + 68)) )
      return 0;
    v10 = a4;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 376) != 1 || *(_DWORD *)(a4 + 72) != **(_DWORD **)(a3 + 368) )
      return 0;
    v67 = 0;
    v10 = a3;
  }
  v11 = sub_330DE0(v10);
  v12 = v11;
  if ( v11 > 0 )
  {
    if ( **(_DWORD **)(v10 + 56) == 55 )
      v12 = v11 - 1;
    if ( v12 == 1 )
    {
      v13 = v67 ? sub_1229D0(*(_QWORD *)(a1[3].m128i_i64[1] + 16)) : sub_1229A0(*(_QWORD *)(a3 + 48));
      if ( v13 )
      {
        if ( *(_DWORD *)v13 == 12 )
        {
          v65 = sub_11FD80((char *)(v13 + 48), &v73, 0);
          if ( v65 )
          {
            if ( (v73 & (v73 + 1)) == 0 )
            {
              v14 = log2ceil();
              v15 = *(_DWORD *)(v13 + 36);
              v62 = v14;
              v74[0] = 0xFFFFFFFF00000000LL;
              v74[1] = 0;
              v64 = (unsigned __int8 *)sub_167B10(v7, a2, v15, (__int64)v74);
              if ( v64 )
              {
                v16 = a1[3].m128i_i64[1];
                v17 = v13 + 32;
                if ( v67 )
                {
                  if ( !(unsigned __int8)sub_12EA80((__int64)v7, a1, v13, v17, v16, (__int64)v64, 0) )
                    goto LABEL_25;
                  if ( !sub_125B60((unsigned __int8 *)(v67 + 32), v13 + 32, 0) )
                    goto LABEL_25;
                  v60 = (unsigned __int8 *)(v13 + 64);
                  if ( !sub_125B60((unsigned __int8 *)(v67 + 64), v13 + 64, 0) )
                    goto LABEL_25;
                  v61 = a3;
                }
                else
                {
                  if ( !(unsigned __int8)sub_12EA80((__int64)v7, a1, v16, v17, v16, (__int64)v64, 0) )
                    goto LABEL_25;
                  v60 = (unsigned __int8 *)(v13 + 64);
                  v61 = a4;
                  if ( !(unsigned __int8)sub_12EA80(
                                           (__int64)v7,
                                           a1,
                                           a1[3].m128i_i64[1],
                                           v13 + 64,
                                           a1[3].m128i_i64[1],
                                           (__int64)v64,
                                           0) )
                    goto LABEL_25;
                }
                if ( sub_330DE0(v61) && *(_DWORD *)(v61 + 352) == 2 )
                {
                  v77[0] = 0;
                  v77[1] = 0;
                  v78 = 0;
                  v79 = 0;
                  sub_127FE0((__int64)a1, (__int64)v77, a2 + 32, 0, v18, v19, v40, v45, v51, v54, v57);
                  sub_127FE0((__int64)a1, (__int64)v77, (__int64)v60, 0, v21, v22, v41, v46, v52, v55, v58);
                  v84[1] = 0;
                  v84[0] = 0xFFFFFFFF00000000LL;
                  v85[0] = 0xFFFFFFFF00000000LL;
                  v85[2] = 0xFFFFFFFF00000000LL;
                  v85[3] = 0;
                  v85[1] = 0;
                  v59 = v83;
                  sub_330970(v83, -1);
                  v83[0] = 24;
                  sub_125180((__int64)v84, v60);
                  sub_120A10((__int64)v85, (__int64)v7, v62, 1, -1, 0);
                  v56 = (__int64 *)&v75;
                  sub_133810(&v75, a1, v77, *(_QWORD *)(v61 + 48), 0, a1[3].m128i_i64[1], v83);
                  v24 = 0;
                  if ( v76 )
                  {
                    v80[0] = 0;
                    v80[1] = 0;
                    v81 = 0;
                    v82 = 0;
                    sub_127FE0(
                      (__int64)a1,
                      (__int64)v80,
                      (__int64)v60,
                      0,
                      0,
                      v23,
                      v42,
                      v47,
                      v62,
                      (int)&v75,
                      (__int64)v83);
                    sub_64700(v80, v77);
                    sub_3180C0(&v81, &v78);
                    if ( v67 && (!(unsigned __int8)sub_64880(v80) || (_QWORD)v82) )
                    {
                      v25 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
                      if ( !v25
                        || (unsigned __int8)sub_17C4E0(v25, (unsigned int)v80, *(_DWORD *)(v61 + 72), -1, 0, 0, 2, 1) )
                      {
                        goto LABEL_71;
                      }
                    }
                    i = v75;
                    if ( v75 && v76 )
                      i = (_QWORD *)v75[1];
                    v27 = 0;
                    v63 = 1LL << v62;
                    while ( i != v75 )
                    {
                      v28 = (_DWORD *)i[3];
                      if ( (unsigned int)(*v28 - 23) <= 1 )
                      {
                        *v28 = 16;
                        if ( v67 )
                        {
                          if ( !v27 )
                          {
                            v43 = i;
                            v48 = v28;
                            sub_120220((__int64)a1, a2, (__int64)v64, 0);
                            i = v43;
                            v28 = v48;
                          }
                          v44 = i;
                          v49 = v28;
                          sub_125180((__int64)(v28 + 8), v64);
                          i = v44;
                          v28 = v49;
                        }
                        v29 = 0;
                        if ( v53 <= 0x3F )
                          v29 = v63;
                        v50 = i;
                        sub_120A10((__int64)(v28 + 12), (__int64)v7, v29, v28[9], -1, 0);
                        v27 = v65;
                        i = v50;
                      }
                      if ( (*i & 2) == 0 )
                      {
                        v30 = (_QWORD *)i[2];
                        if ( (*(_BYTE *)v30 & 2) != 0 )
                        {
                          v39 = i;
                          for ( i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL);
                                (*i & 2) == 0 && (_QWORD *)i[2] == v39;
                                i = (_QWORD *)(*i & 0xFFFFFFFFFFFFFFFCLL) )
                          {
                            v39 = i;
                          }
                        }
                        else
                        {
                          do
                          {
                            i = v30;
                            v30 = (_QWORD *)v30[1];
                          }
                          while ( (*(_BYTE *)v30 & 2) == 0 );
                        }
                      }
                    }
                    v66 = v27;
                    if ( !v27 )
                    {
LABEL_71:
                      v38 = 0;
                    }
                    else
                    {
                      v31 = sub_167E70(a1[4].m128i_i64[0], *(_DWORD *)(a1[3].m128i_i64[1] + 72));
                      sub_11D5A0(a1[3].m128i_i64[1]);
                      v32 = a1[1].m128i_i32[2];
                      BYTE1(v32) &= ~2u;
                      LOBYTE(v32) = v32 | 0x80;
                      a1[1].m128i_i32[2] = v32;
                      sub_11D5A0(v13);
                      v33 = a1[1].m128i_i32[2];
                      v34 = v66;
                      BYTE1(v33) &= ~2u;
                      LOBYTE(v33) = v33 | 0x80;
                      a1[1].m128i_i32[2] = v33;
                      if ( v67 )
                      {
                        sub_11D5A0(v67);
                        v35 = a1[1].m128i_i32[2];
                        v34 = v66;
                        BYTE1(v35) &= ~2u;
                        LOBYTE(v35) = v35 | 0x80;
                        a1[1].m128i_i32[2] = v35;
                        v36 = *(_DWORD *)(a3 + 24);
                        BYTE1(v36) &= ~2u;
                        LOBYTE(v36) = v36 | 0x80;
                        *(_DWORD *)(a3 + 24) = v36;
                        v37 = *(_DWORD *)(a4 + 24);
                        BYTE1(v37) &= ~2u;
                        LOBYTE(v37) = v37 | 0x80;
                        *(_DWORD *)(a4 + 24) = v37;
                      }
                      v70 = v34;
                      sub_112550((__int64)a1, a3, v31);
                      sub_A2520(v61, (__int64)"SDIV_POWER2");
                      v38 = v70;
                    }
                    v71 = v38;
                    sub_93B40(v80);
                    v24 = v71;
                  }
                  v72 = v24;
                  sub_133690(v56);
                  sub_7CCD0((__int64)v59);
                  sub_93B40(v77);
                  v20 = v72;
                  goto LABEL_26;
                }
              }
LABEL_25:
              v20 = 0;
LABEL_26:
              v69 = v20;
              sub_11CDA0((__int64)v74);
              return v69;
            }
          }
        }
      }
    }
  }
  return 0;
}
