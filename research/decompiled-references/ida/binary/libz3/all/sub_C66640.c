__int64 __fastcall sub_C66640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // r14d
  __int64 v18; // r14
  unsigned int v19; // r14d
  __int64 v20; // rsi
  int v21; // edx
  _QWORD *v22; // rcx
  _DWORD *v23; // rax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  __int64 v33; // rsi
  __int64 v34; // rdi
  char *v35; // r14
  _BYTE *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  char *v39; // rax
  char *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // [rsp-10h] [rbp-220h]
  _QWORD *v46; // [rsp+8h] [rbp-208h]
  int v47; // [rsp+18h] [rbp-1F8h]
  unsigned __int8 v48; // [rsp+2Fh] [rbp-1E1h]
  __int64 v49; // [rsp+30h] [rbp-1E0h]
  int v51; // [rsp+40h] [rbp-1D0h]
  void *v52; // [rsp+40h] [rbp-1D0h]
  int v53; // [rsp+48h] [rbp-1C8h]
  char *v55; // [rsp+50h] [rbp-1C0h]
  __int64 v56; // [rsp+60h] [rbp-1B0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-1A8h]
  __int64 v58; // [rsp+70h] [rbp-1A0h] BYREF
  __int64 v59; // [rsp+78h] [rbp-198h]
  __int64 v60; // [rsp+80h] [rbp-190h] BYREF
  __int64 v61; // [rsp+88h] [rbp-188h]
  __int64 v62; // [rsp+90h] [rbp-180h]
  _QWORD v63[3]; // [rsp+98h] [rbp-178h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-160h]
  _QWORD v65[3]; // [rsp+B8h] [rbp-158h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-140h]
  _QWORD v67[3]; // [rsp+D8h] [rbp-138h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-120h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-118h]
  _QWORD v70[2]; // [rsp+100h] [rbp-110h] BYREF
  __int64 v71[3]; // [rsp+110h] [rbp-100h] BYREF
  int v72; // [rsp+128h] [rbp-E8h]
  __int64 v73; // [rsp+140h] [rbp-D0h]
  void *ptr; // [rsp+148h] [rbp-C8h]
  __int64 v75; // [rsp+150h] [rbp-C0h]
  _BYTE v76[184]; // [rsp+158h] [rbp-B8h] BYREF

  v7 = a1 + 752;
  v56 = 0;
  v57 = a1 + 752;
  v58 = 0;
  v59 = a1 + 752;
  v62 = a1 + 24;
  v63[0] = 0;
  v63[1] = 0;
  v64 = a1 + 24;
  v65[0] = 0;
  v65[1] = 0;
  v49 = a1 + 760;
  sub_1633040(a1 + 760, a3, &v56);
  sub_1633040(a1 + 760, a4, &v58);
  v66 = a1 + 24;
  v67[0] = 0;
  v67[1] = 0;
  sub_183BAF0(a1 + 24, v63, v65, v67);
  sub_183C300(a1 + 24, v67, v63, v63);
  sub_183C300(a1 + 24, v67, v65, v65);
  sub_1839100(a1 + 24, v65);
  v8 = v58;
  v51 = sub_177D2E0(a1 + 752);
  v53 = v56;
  v9 = sub_177D2E0(a1 + 752);
  v10 = sub_17846F0((int)a1 + 752, (unsigned int)v63, v9, v53, (unsigned int)v65, v51, v8);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10;
    sub_177CDE0(v7, v10);
    if ( (unsigned __int8)sub_177C5E0(v11, v12) )
    {
      v16 = 5;
LABEL_12:
      sub_177F260(v7);
      goto LABEL_13;
    }
LABEL_3:
    sub_177C4F0(v71, v7);
    sub_17886D0(v7, v11, v71, a1 + 784);
    v13 = v71[0];
    if ( v71[0] && *(_DWORD *)(v71[0] - 4) == 1 && *(_DWORD *)v71[1] == 1 )
    {
      v16 = 5;
LABEL_11:
      sub_177F350(v71);
      if ( !v11 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v14 = *(_DWORD **)(a2 + 24);
    if ( v14 )
    {
      v15 = v14[1];
      if ( !*v14 && v15 == 2 )
      {
        v48 = *(_BYTE *)(a1 + 796);
        if ( v48 )
        {
          sub_C65160((__int64 *)a1, v71, a5);
        }
        else
        {
          v18 = *(_QWORD *)a1;
          v60 = 0;
          ptr = v76;
          v73 = v18;
          v75 = 0x1000000000LL;
          v61 = v18;
          if ( v71[0] )
          {
            v19 = 0;
            do
            {
              if ( v19 >= *(_DWORD *)(v13 - 4) )
                break;
              sub_177C570(&v68, v71, v19);
              sub_1632F10(v49, &v68, 1, &v60);
              if ( v68 )
                sub_177F260(v69);
              v20 = v60;
              if ( v60 )
                ++*(_DWORD *)(v60 + 8);
              v21 = v75;
              if ( (unsigned int)v75 >= HIDWORD(v75) )
              {
                v47 = 2 * HIDWORD(v75);
                v39 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v75)));
                v21 = v75;
                v40 = (char *)ptr;
                v22 = v39;
                if ( (_DWORD)v75 )
                {
                  if ( (unsigned int)(v75 - 1) <= 2 || v39 == (char *)ptr + 8 )
                  {
                    v43 = 0;
                    v44 = 8LL * (unsigned int)v75;
                    do
                    {
                      v22[v43 / 8] = *(_QWORD *)&v40[v43];
                      v43 += 8LL;
                    }
                    while ( v43 != v44 );
                  }
                  else
                  {
                    v41 = 0;
                    v42 = 16LL * ((unsigned int)v75 >> 1);
                    do
                    {
                      *(__m128i *)&v22[v41 / 8] = _mm_loadu_si128((const __m128i *)&v40[v41]);
                      v41 += 16LL;
                    }
                    while ( v42 != v41 );
                    if ( (v21 & 1) != 0 )
                      v22[v21 & 0xFFFFFFFE] = *(_QWORD *)&v40[8 * (v21 & 0xFFFFFFFE)];
                  }
                }
                if ( v40 != v76 && v40 )
                {
                  v46 = v22;
                  sub_186B220(v40);
                  v21 = v75;
                  v22 = v46;
                }
                ptr = v22;
                HIDWORD(v75) = v47;
              }
              else
              {
                v22 = ptr;
              }
              v13 = v71[0];
              ++v19;
              v22[v21] = v20;
              LODWORD(v75) = v21 + 1;
            }
            while ( v13 );
            v13 = v60;
            v18 = *(_QWORD *)a1;
          }
          v23 = *(_DWORD **)(sub_15D1F10(v13) + 24);
          if ( v23 && *v23 == 5 )
            v48 = v23[1] == 1;
          v68 = 0;
          v69 = 0;
          v70[0] = 1;
          v70[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v70);
          BYTE4(v70[0]) &= ~1u;
          LODWORD(v70[0]) = 1;
          v27 = *(_QWORD *)(a1 + 16);
          if ( !v27 )
          {
            sub_16669E0(a1 + 8);
            v27 = *(_QWORD *)(a1 + 16);
          }
          sub_166A700(v27, (unsigned int)&v68, v48, v24, v25, v26);
          v52 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v68);
          sub_182CBA0(v52, v70);
          if ( (_DWORD)v75 != 1 )
            sub_15E1AF0(*(_QWORD *)(a1 + 8));
          v28 = sub_15E1B70(v18);
          v29 = v28;
          if ( v28 )
            ++*(_DWORD *)(v28 + 8);
          v30 = *a5;
          if ( *a5 )
          {
            v31 = a5[1];
            v32 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v32 )
              sub_15D7BC0(v31, v30);
          }
          v33 = v60;
          *a5 = v29;
          if ( v33 )
          {
            v34 = v61;
            v32 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v32 )
              sub_15D7BC0(v34, v33);
          }
          v35 = (char *)ptr + 8 * (unsigned int)v75;
          v36 = ptr;
          if ( ptr < v35 )
          {
            v55 = (char *)ptr;
            do
            {
              v37 = *(_QWORD *)v55;
              if ( *(_QWORD *)v55 )
              {
                v32 = (*(_DWORD *)(v37 + 8))-- == 1;
                if ( v32 )
                  sub_15D7BC0(v73, v37);
              }
              v55 += 8;
            }
            while ( v55 < v35 );
            v36 = ptr;
          }
          if ( v36 && v36 != v76 )
            sub_186B220(v36);
        }
        goto LABEL_10;
      }
      if ( v72 >= 0 )
      {
LABEL_8:
        if ( *(_BYTE *)(a1 + 796) )
          sub_C655A0((_QWORD *)a1, v15, v71, a5);
        else
          sub_C66100((__int64 *)a1, v15, v71, a5);
LABEL_10:
        v16 = 4;
        goto LABEL_11;
      }
      v38 = v15 - 2;
      if ( (unsigned int)v38 <= 3 )
      {
        v15 = *((_DWORD *)qword_18C6770 + v38);
        goto LABEL_8;
      }
    }
    else
    {
      v15 = -1;
      if ( v72 >= 0 )
        goto LABEL_8;
    }
    sub_1872CE0("");
    sub_1873130(114, 91);
  }
  if ( !(unsigned __int8)sub_177C5E0(0, v45) )
    goto LABEL_3;
  v16 = 5;
LABEL_13:
  sub_182EF00(v66, v67);
  sub_182EF00(v64, v65);
  sub_182EF00(v62, v63);
  if ( v58 )
    sub_177F260(v59);
  if ( v56 )
    sub_177F260(v57);
  return v16;
}

