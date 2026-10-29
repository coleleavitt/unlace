__int64 __fastcall sub_77D120(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned int v16; // edx
  __int64 v17; // r8
  _QWORD *v18; // rcx
  unsigned int v19; // edx
  bool v20; // si
  _BYTE *v21; // rcx
  int v22; // ebx
  unsigned int v23; // ebx
  __int64 v24; // rdi
  char *v26; // rax
  char *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  _BYTE *v30; // rdi
  unsigned int v31; // r8d
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp-8h] [rbp-1F8h]
  _QWORD *v43; // [rsp+8h] [rbp-1E8h]
  _BYTE *v44; // [rsp+8h] [rbp-1E8h]
  __int64 v45; // [rsp+10h] [rbp-1E0h]
  bool v46; // [rsp+10h] [rbp-1E0h]
  int v47; // [rsp+30h] [rbp-1C0h]
  int v48; // [rsp+38h] [rbp-1B8h]
  int v49; // [rsp+38h] [rbp-1B8h]
  __int64 v51; // [rsp+40h] [rbp-1B0h]
  __int64 v52; // [rsp+48h] [rbp-1A8h]
  void *v53; // [rsp+48h] [rbp-1A8h]
  __int64 v54; // [rsp+50h] [rbp-1A0h] BYREF
  __int64 v55; // [rsp+58h] [rbp-198h]
  __int64 v56; // [rsp+60h] [rbp-190h] BYREF
  __int64 v57; // [rsp+68h] [rbp-188h]
  _QWORD v58[2]; // [rsp+70h] [rbp-180h] BYREF
  __int64 v59; // [rsp+80h] [rbp-170h]
  _QWORD v60[3]; // [rsp+88h] [rbp-168h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-150h]
  _QWORD v62[3]; // [rsp+A8h] [rbp-148h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-130h]
  _QWORD v64[3]; // [rsp+C8h] [rbp-128h] BYREF
  void *v65; // [rsp+E0h] [rbp-110h]
  __int64 v66; // [rsp+E8h] [rbp-108h]
  _BYTE v67[16]; // [rsp+F0h] [rbp-100h] BYREF
  __int64 v68; // [rsp+100h] [rbp-F0h] BYREF
  __int64 v69; // [rsp+108h] [rbp-E8h]
  int v70; // [rsp+118h] [rbp-D8h]
  void *ptr; // [rsp+130h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+138h] [rbp-B8h]
  _BYTE v73[176]; // [rsp+140h] [rbp-B0h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v54 = 0;
  v55 = v6;
  v57 = v6;
  v7 = *(_QWORD *)(a1 + 24);
  v56 = 0;
  v59 = v7;
  v60[0] = 0;
  v60[1] = 0;
  v61 = v7;
  v62[0] = 0;
  v62[1] = 0;
  sub_1633040(a1 + 64, a2, &v54);
  sub_1633040(a1 + 64, a3, &v56);
  v8 = *(_QWORD *)(a1 + 24);
  v64[0] = 0;
  v64[1] = 0;
  v63 = v8;
  sub_183BAF0(v8, v60, v62, v64);
  sub_183C300(*(_QWORD *)(a1 + 24), v64, v60, v60);
  sub_183C300(*(_QWORD *)(a1 + 24), v64, v62, v62);
  sub_1839100(*(_QWORD *)(a1 + 24), v62);
  v52 = v56;
  v51 = *(_QWORD *)(a1 + 16);
  v9 = sub_177D2E0(v51);
  v47 = v54;
  v10 = sub_177D2E0(*(_QWORD *)(a1 + 16));
  v11 = sub_17846F0(v51, (unsigned int)v60, v10, v47, (unsigned int)v62, v9, v52);
  v53 = (void *)v11;
  v12 = v42;
  if ( v11 )
  {
    v12 = v11;
    sub_177CDE0(v51, v11);
  }
  if ( (unsigned __int8)sub_177C5E0(v53, v12) )
  {
    if ( (unsigned __int8)sub_177C5D0(v53) )
    {
      if ( a4 != 1 && a4 != 2 )
      {
        if ( a4 )
          goto LABEL_65;
LABEL_66:
        v23 = dword_1C7EBC4;
        goto LABEL_23;
      }
      goto LABEL_71;
    }
    if ( *(int *)sub_177C6B0(v53, 0) <= 0 )
    {
      if ( a4 == 1 )
        goto LABEL_66;
      if ( (a4 & 0xFFFFFFFD) == 0 )
      {
LABEL_71:
        v23 = dword_1C7EBC0;
        goto LABEL_23;
      }
    }
    else
    {
      switch ( a4 )
      {
        case 1u:
          goto LABEL_71;
        case 2u:
          goto LABEL_66;
        case 0u:
          goto LABEL_71;
      }
    }
LABEL_65:
    sub_1872CE0("");
    sub_1873130(114, 141);
  }
  if ( *(_BYTE *)(a1 + 112) )
  {
    v13 = *(_QWORD *)(a1 + 16);
    v65 = v67;
    v66 = 0x1000000000LL;
    v72 = 0x1000000000LL;
    ptr = v73;
    sub_177C4F0(&v68, v13);
    sub_17886D0(*(_QWORD *)(a1 + 16), v53, &v68, a1 + 88);
    v14 = v68;
    v15 = 0;
    if ( v68 )
    {
      while ( 1 )
      {
        if ( v15 >= *(_DWORD *)(v14 - 4) )
          goto LABEL_14;
        sub_177C570(v58, &v68, v15);
        v16 = v72;
        v17 = v58[0];
        if ( (unsigned int)v72 >= HIDWORD(v72) )
        {
          v45 = v58[0];
          v48 = 2 * HIDWORD(v72);
          v26 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v72)));
          v16 = v72;
          v27 = (char *)ptr;
          v18 = v26;
          v17 = v45;
          if ( (_DWORD)v72 )
          {
            if ( (unsigned int)(v72 - 1) <= 2 || v26 == (char *)ptr + 8 )
            {
              v40 = 0;
              do
              {
                v18[v40] = *(_QWORD *)&v27[v40 * 8];
                ++v40;
              }
              while ( v40 != v16 );
            }
            else
            {
              v28 = 0;
              do
              {
                *(__m128i *)&v18[v28] = _mm_loadu_si128((const __m128i *)&v27[v28 * 8]);
                v28 += 2;
              }
              while ( v28 != 2LL * (v16 >> 1) );
              if ( (v16 & 1) != 0 )
                v18[v16 & 0xFFFFFFFE] = *(_QWORD *)&v27[8 * (v16 & 0xFFFFFFFE)];
            }
          }
          if ( v27 != v73 && v27 )
          {
            v43 = v18;
            sub_186B220(v27);
            v16 = v72;
            v18 = v43;
            v17 = v45;
          }
          ptr = v18;
          HIDWORD(v72) = v48;
        }
        else
        {
          v18 = ptr;
        }
        v18[v16] = v17;
        LODWORD(v72) = v16 + 1;
        if ( v58[0] )
          sub_177F260(v58[1]);
        v19 = v66;
        v20 = (*(_DWORD *)(v69 + 4LL * v15) & 1) == 0;
        if ( (unsigned int)v66 >= HIDWORD(v66) )
          break;
        v21 = v65;
LABEL_13:
        ++v15;
        v21[v19] = v20;
        v14 = v68;
        LODWORD(v66) = v19 + 1;
        if ( !v68 )
          goto LABEL_14;
      }
      v46 = (*(_DWORD *)(v69 + 4LL * v15) & 1) == 0;
      v49 = 2 * HIDWORD(v66);
      v29 = sub_186B270((unsigned int)(2 * HIDWORD(v66)));
      v19 = v66;
      v30 = v65;
      v21 = (_BYTE *)v29;
      v20 = v46;
      if ( (_DWORD)v66 )
      {
        if ( (unsigned int)(v66 - 1) <= 6 || (unsigned __int64)(v29 - ((_QWORD)v65 + 1)) <= 0xE )
        {
          v41 = 0;
          do
          {
            v21[v41] = v30[v41];
            ++v41;
          }
          while ( v19 != v41 );
          goto LABEL_57;
        }
        v31 = v66;
        if ( (unsigned int)(v66 - 1) <= 0xE )
        {
          v33 = 0;
        }
        else
        {
          v32 = 0;
          do
          {
            *(__m128i *)&v21[v32] = _mm_loadu_si128((const __m128i *)&v30[v32]);
            v32 += 16;
          }
          while ( 16LL * (v19 >> 4) != v32 );
          v33 = v19 & 0xFFFFFFF0;
          if ( (v19 & 0xF) == 0 )
            goto LABEL_57;
          v31 = v19 - v33;
          if ( v19 - v33 - 1 <= 6 )
          {
LABEL_50:
            v21[v33] = v30[v33];
            v34 = v33 + 1;
            if ( (unsigned int)v34 < v19 )
            {
              v21[v34] = v30[v34];
              v35 = v33 + 2;
              if ( (unsigned int)v35 < v19 )
              {
                v21[v35] = v30[v35];
                v36 = v33 + 3;
                if ( (unsigned int)v36 < v19 )
                {
                  v21[v36] = v30[v36];
                  v37 = v33 + 4;
                  if ( (unsigned int)v37 < v19 )
                  {
                    v21[v37] = v30[v37];
                    v38 = v33 + 5;
                    if ( (unsigned int)v38 < v19 )
                    {
                      v39 = v33 + 6;
                      v21[v38] = v30[v38];
                      if ( (unsigned int)v39 < v19 )
                        v21[v39] = v30[v39];
                    }
                  }
                }
              }
            }
            goto LABEL_57;
          }
        }
        *(_QWORD *)&v21[v33] = *(_QWORD *)&v30[v33];
        v33 += v31 & 0xFFFFFFF8;
        if ( (v31 & 7) != 0 )
          goto LABEL_50;
      }
LABEL_57:
      if ( v30 && v30 != v67 )
      {
        v44 = v21;
        sub_186B220(v30);
        v19 = v66;
        v21 = v44;
      }
      v65 = v21;
      HIDWORD(v66) = v49;
      goto LABEL_13;
    }
LABEL_14:
    if ( v70 < 0 )
    {
      if ( a4 > 2 )
      {
        sub_1872CE0("");
        sub_1873130(114, 91);
      }
      a4 = *((_DWORD *)qword_18BF8C8 + a4);
    }
    v22 = sub_11450C0(*(_QWORD *)(a1 + 8), a4, (unsigned int)v72, ptr, v65);
    sub_177F350(&v68);
    if ( ptr && ptr != v73 )
      sub_186B220(ptr);
    if ( v65 != v67 && v65 )
      sub_186B220(v65);
    v23 = 2 * v22;
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 8);
    LOBYTE(v68) = 0;
    ptr = v53;
    v23 = 2 * sub_11450C0(v24, a4, 1, &ptr, &v68);
  }
LABEL_23:
  if ( v53 )
    sub_177F260(v51);
  sub_182EF00(v63, v64);
  sub_182EF00(v61, v62);
  sub_182EF00(v59, v60);
  if ( v56 )
    sub_177F260(v57);
  if ( v54 )
    sub_177F260(v55);
  return v23;
}

