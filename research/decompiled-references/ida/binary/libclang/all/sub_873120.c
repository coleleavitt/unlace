__int64 __fastcall sub_873120(unsigned __int64 a1, char **a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rsi
  unsigned int v10; // eax
  char *v11; // rbp
  char *v12; // r12
  _QWORD **v13; // rbp
  _QWORD **v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  _QWORD *v25; // rdx
  __int16 v27; // [rsp+10h] [rbp-458h] BYREF
  __int64 v28; // [rsp+18h] [rbp-450h]
  _QWORD v29[2]; // [rsp+20h] [rbp-448h] BYREF
  _QWORD *v30; // [rsp+30h] [rbp-438h]
  __int64 v31; // [rsp+38h] [rbp-430h]
  _QWORD v32[4]; // [rsp+40h] [rbp-428h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+60h] [rbp-408h] BYREF
  char v34; // [rsp+68h] [rbp-400h]
  __int64 v35; // [rsp+70h] [rbp-3F8h]
  __int16 *v36; // [rsp+78h] [rbp-3F0h]
  _OWORD *v37; // [rsp+80h] [rbp-3E8h]
  __int64 v38; // [rsp+88h] [rbp-3E0h]
  int v39; // [rsp+90h] [rbp-3D8h]
  char v40; // [rsp+94h] [rbp-3D4h]
  _OWORD v41[3]; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-3A0h]
  __int64 v43; // [rsp+D0h] [rbp-398h]
  __int64 v44; // [rsp+D8h] [rbp-390h]
  int v45; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-378h]
  int *v47; // [rsp+F8h] [rbp-370h]
  int *v48; // [rsp+100h] [rbp-368h]
  __int64 v49; // [rsp+108h] [rbp-360h]
  int v50; // [rsp+118h] [rbp-350h] BYREF
  __int64 v51; // [rsp+120h] [rbp-348h]
  int *v52; // [rsp+128h] [rbp-340h]
  int *v53; // [rsp+130h] [rbp-338h]
  __int64 v54; // [rsp+138h] [rbp-330h]
  __int64 v55; // [rsp+140h] [rbp-328h]
  int v56; // [rsp+148h] [rbp-320h]
  _DWORD *v57; // [rsp+150h] [rbp-318h]
  __int64 v58; // [rsp+158h] [rbp-310h]
  _DWORD v59[4]; // [rsp+160h] [rbp-308h] BYREF
  __int64 v60; // [rsp+170h] [rbp-2F8h]
  __int64 v61; // [rsp+178h] [rbp-2F0h]
  int v62; // [rsp+180h] [rbp-2E8h]
  __int64 v63; // [rsp+188h] [rbp-2E0h]
  char v64; // [rsp+190h] [rbp-2D8h]
  void *ptr; // [rsp+198h] [rbp-2D0h]
  __int64 v66; // [rsp+1A0h] [rbp-2C8h]
  _BYTE v67[512]; // [rsp+1A8h] [rbp-2C0h] BYREF
  char v68[16]; // [rsp+3A8h] [rbp-C0h] BYREF
  int v69; // [rsp+3B8h] [rbp-B0h]
  __int128 v70; // [rsp+3C0h] [rbp-A8h]
  __int64 v71; // [rsp+3D0h] [rbp-98h]
  unsigned int v72; // [rsp+3D8h] [rbp-90h]
  int v73; // [rsp+3E8h] [rbp-80h] BYREF
  void *v74; // [rsp+3F0h] [rbp-78h]
  int *v75; // [rsp+3F8h] [rbp-70h]
  int *v76; // [rsp+400h] [rbp-68h]
  __int64 v77; // [rsp+408h] [rbp-60h]
  __int64 v78; // [rsp+410h] [rbp-58h]
  __int64 v79; // [rsp+418h] [rbp-50h]
  __int64 v80; // [rsp+420h] [rbp-48h]

  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 41 )
    return v4;
  v35 = a3;
  v36 = &v27;
  v7 = *(_QWORD *)(a3 + 2160);
  v8 = *(_DWORD *)(v7 + 136);
  v27 = 0;
  LOBYTE(v7) = *(_BYTE *)(v7 + 140);
  v39 = v8;
  v34 = 0;
  v40 = v7 & 1;
  v28 = 0;
  v47 = &v45;
  v48 = &v45;
  v52 = &v50;
  v53 = &v50;
  v41[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v33);
  memset(&v41[1], 0, 32);
  v57 = v59;
  v33 = &off_47DA958;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 1;
  v59[0] = 1;
  v59[2] = 1;
  v58 = 0x200000001LL;
  v38 = 0x200000001LL;
  v62 = 0;
  v66 = 0x1000000000LL;
  v60 = 0;
  v61 = 0;
  v63 = 0;
  v64 = 0;
  v37 = v41;
  ptr = v67;
  sub_69F1C0((__int64)v68, 0, 0, 0);
  v9 = a4;
  v69 = 0;
  v75 = &v73;
  v76 = &v73;
  v72 = 0;
  v71 = 0;
  v73 = 0;
  v74 = nullptr;
  v77 = 0;
  v78 = 0;
  v79 = -1;
  v80 = 0x200000000LL;
  v70 = 0;
  v10 = sub_872240(a1, a4, (__int64)&v33, a2);
  v33 = &off_47DA958;
  v11 = (char *)ptr;
  v4 = v10;
  v12 = (char *)ptr + 32 * (unsigned int)v66;
  if ( ptr != v12 )
  {
    do
    {
      a1 = *((_QWORD *)v11 + 3);
      if ( (unsigned int)sub_B19900(a1) )
      {
        *(_BYTE *)v36 = 1;
        if ( HIDWORD(v80) <= 2 && !WORD1(v80) )
          break;
      }
      v11 += 32;
    }
    while ( v12 != v11 );
  }
  v13 = (_QWORD **)v74;
  LODWORD(v66) = 0;
  if ( v74 )
  {
    while ( 1 )
    {
      sub_822210(v13[3]);
      v14 = (_QWORD **)v13[2];
      if ( *((_DWORD *)v13 + 10) > 1u )
        sub_69F740((__int64)(v13 + 5));
      v9 = 104;
      a1 = (unsigned __int64)v13;
      operator delete(v13, 0x68u);
      if ( !v14 )
        break;
      v13 = v14;
    }
  }
  if ( !v72 )
  {
    v15 = 0;
    goto LABEL_16;
  }
  v16 = sub_69F620(a1, v9);
  v30 = nullptr;
  v29[0] = v16;
  v29[1] = v17;
  v31 = 0;
  v18 = sub_69F630(a1, v9);
  v19 = *((_QWORD **)&v70 + 1);
  v32[2] = 0;
  v32[0] = v18;
  v32[1] = v20;
  v32[3] = 0;
  v21 = *((_QWORD *)&v70 + 1) + 40LL * v72;
  if ( *((_QWORD *)&v70 + 1) != v21 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v19, v29) )
      {
        v22 = v19[3];
        if ( v22 == v31 )
        {
          v23 = (_QWORD *)v19[2];
          v24 = &v23[v22];
          v25 = v30;
          if ( v23 == v24 )
            goto LABEL_22;
          while ( *v23 == *v25 )
          {
            ++v23;
            ++v25;
            if ( v24 == v23 )
              goto LABEL_22;
          }
        }
      }
      sub_69F550(v19, v32);
LABEL_22:
      v19 += 5;
      if ( (_QWORD *)v21 == v19 )
      {
        v15 = 40LL * v72;
        goto LABEL_16;
      }
    }
  }
  v15 = 0;
LABEL_16:
  operator delete();
  if ( ptr != v67 )
    free(ptr);
  sub_822100((__int64)v41);
  sub_A2CAF0(&v33, v15);
  return v4;
}

