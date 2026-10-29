__int64 __fastcall Z3_mk_app(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, int a5, int a6)
{
  int v7; // ebp
  char v8; // al
  int *v9; // rcx
  __int64 v10; // r12
  unsigned int v11; // edx
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  int *v15; // rax
  int *v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rbx
  _OWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r15
  int v30; // edx
  char *v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r11
  int v37; // eax
  __int64 v38; // rsi
  void *v39; // rdi
  bool v40; // zf
  __int64 *v41; // rbx
  unsigned __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned __int64 v45; // rax
  int v46; // [rsp+0h] [rbp-1D8h]
  __int64 v48; // [rsp+8h] [rbp-1D0h]
  int v49; // [rsp+10h] [rbp-1C8h]
  int *v51; // [rsp+18h] [rbp-1C0h]
  int v52; // [rsp+20h] [rbp-1B8h]
  char v53; // [rsp+23h] [rbp-1B5h]
  int v54; // [rsp+24h] [rbp-1B4h]
  _BYTE *v55; // [rsp+28h] [rbp-1B0h]
  _QWORD *v56; // [rsp+30h] [rbp-1A8h]
  _OWORD *v57; // [rsp+38h] [rbp-1A0h]
  __int64 v58; // [rsp+40h] [rbp-198h] BYREF
  void *v59; // [rsp+48h] [rbp-190h]
  __int64 v60; // [rsp+50h] [rbp-188h] BYREF
  void *v61; // [rsp+58h] [rbp-180h]
  __int64 v62; // [rsp+60h] [rbp-178h]
  int v63; // [rsp+68h] [rbp-170h]
  __int64 v64; // [rsp+70h] [rbp-168h]
  __int64 *v65; // [rsp+78h] [rbp-160h]
  void *v66; // [rsp+80h] [rbp-158h]
  __int64 v67; // [rsp+88h] [rbp-150h]
  int v68[32]; // [rsp+90h] [rbp-148h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h]
  __int64 v70; // [rsp+118h] [rbp-C0h]
  _BYTE v71[184]; // [rsp+120h] [rbp-B8h] BYREF

  v7 = a2;
  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  HIBYTE(v52) = v8;
  if ( v8 )
    sub_2959F0(a1, a2, a3);
  v66 = v68;
  v9 = v68;
  *(_DWORD *)(a1 + 1520) = 0;
  v67 = 0x1000000000LL;
  if ( a3 )
  {
    LODWORD(v10) = 16;
    v11 = 0;
    v12 = &a4[a3];
    do
    {
      v14 = *a4;
      if ( v11 >= (unsigned int)v10 )
      {
        v10 = (unsigned int)(2 * v10);
        v15 = (int *)sub_186B270(8 * v10);
        v11 = v67;
        v16 = (int *)v66;
        v9 = v15;
        if ( (_DWORD)v67 )
        {
          if ( (unsigned int)(v67 - 1) <= 2 || v15 == (int *)((char *)v66 + 8) )
          {
            v35 = 0;
            v36 = 8LL * (unsigned int)v67;
            do
            {
              *(_QWORD *)&v9[v35 / 4] = *(_QWORD *)&v16[v35 / 4];
              v35 += 8LL;
            }
            while ( v35 != v36 );
          }
          else
          {
            v17 = 0;
            v18 = 16LL * ((unsigned int)v67 >> 1);
            do
            {
              *(__m128i *)&v9[v17 / 4] = _mm_loadu_si128((const __m128i *)&v16[v17 / 4]);
              v17 += 16LL;
            }
            while ( v17 != v18 );
            if ( (v11 & 1) != 0 )
              *(_QWORD *)&v9[2 * (v11 & 0xFFFFFFFE)] = *(_QWORD *)&v16[2 * (v11 & 0xFFFFFFFE)];
          }
        }
        if ( v16 != v68 && v16 )
        {
          v51 = v9;
          sub_186B220(v16);
          v11 = v67;
          v9 = v51;
        }
        v66 = v9;
        HIDWORD(v67) = v10;
      }
      v13 = v11;
      ++a4;
      ++v11;
      *(_QWORD *)&v9[2 * v13] = v14;
      LODWORD(v67) = v11;
    }
    while ( v12 != a4 );
  }
  v19 = *(_QWORD *)(a1 + 232);
  v20 = *(_QWORD *)(a2 + 24);
  if ( v20 && (*(_BYTE *)(v20 + 18) & 4) != 0 )
  {
    v57 = (_OWORD *)sub_186B270(0x80u);
    *v57 = 0;
    v57[1] = 0;
    v57[2] = 0;
    v57[3] = 0;
    v57[4] = 0;
    v57[5] = 0;
    v57[6] = 0;
    v57[7] = 0;
    v60 = v19;
    v23 = (_OWORD *)sub_186B270(0x80u);
    v61 = v23;
    *v23 = 0;
    v23[1] = 0;
    v23[2] = 0;
    v23[3] = 0;
    v23[4] = 0;
    v23[5] = 0;
    v23[6] = 0;
    v23[7] = 0;
    v55 = v71;
    ptr = v71;
    v62 = 8;
    v70 = 0x1000000000LL;
    v63 = 0;
    v64 = v19;
    v65 = nullptr;
    if ( a3 )
    {
      v27 = 0;
      v51 = (int *)&v60;
      do
      {
        v28 = sub_15D1F10(*(_QWORD *)((char *)v66 + v27));
        if ( !(unsigned __int8)sub_1616440(&v60, *(_QWORD *)(a2 + v27 + 48), v28) )
          sub_24EA30(a1, 3u, "failed to match argument of polymorphic function");
        v29 = sub_15D1F10(*(_QWORD *)((char *)v66 + v27));
        v30 = v70;
        if ( (unsigned int)v70 < HIDWORD(v70) )
        {
          v24 = ptr;
        }
        else
        {
          v54 = 2 * HIDWORD(v70);
          v31 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v70)));
          v30 = v70;
          v32 = (char *)ptr;
          v24 = v31;
          if ( (_DWORD)v70 )
          {
            if ( (unsigned int)(v70 - 1) <= 2 || v31 == (char *)ptr + 8 )
            {
              v45 = 0;
              v26 = 8LL * (unsigned int)v70;
              do
              {
                v24[v45 / 8] = *(_QWORD *)&v32[v45];
                v45 += 8LL;
              }
              while ( v45 != v26 );
            }
            else
            {
              v33 = 0;
              v25 = 16LL * ((unsigned int)v70 >> 1);
              do
              {
                *(__m128i *)&v24[v33 / 8] = _mm_loadu_si128((const __m128i *)&v32[v33]);
                v33 += 16LL;
              }
              while ( v33 != v25 );
              if ( (v30 & 1) != 0 )
              {
                v34 = v30 & 0xFFFFFFFE;
                v25 = *(_QWORD *)&v32[8 * v34];
                v24[v34] = v25;
              }
            }
          }
          if ( v32 && v32 != v71 )
          {
            v56 = v24;
            sub_186B220(v32);
            v30 = v70;
            v24 = v56;
          }
          ptr = v24;
          HIDWORD(v70) = v54;
        }
        v27 += 8;
        v24[v30] = v29;
        LODWORD(v70) = v30 + 1;
      }
      while ( 8LL * a3 != v27 );
    }
    else
    {
      v51 = (int *)&v60;
    }
    sub_1616AB0((unsigned int)&v58, (unsigned int)&v60, *(_QWORD *)(a2 + 40), (_DWORD)v24, v25, v26);
    v37 = sub_15E39A0(v19, a2, a3, ptr, v58);
    v38 = v58;
    v7 = v37;
    if ( v58 )
    {
      v39 = v59;
      v40 = (*(_DWORD *)(v58 + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v39, v38);
    }
    if ( ptr != v71 && ptr )
      sub_186B220(ptr);
    v41 = v65;
    if ( v65 )
    {
      v42 = (unsigned __int64)&v65[*((unsigned int *)v65 - 1)];
      if ( (unsigned __int64)v65 >= v42 )
        goto LABEL_61;
      do
      {
        while ( 1 )
        {
          v43 = *v41;
          if ( *v41 )
          {
            v44 = v64;
            v40 = (*(_DWORD *)(v43 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( (unsigned __int64)++v41 >= v42 )
            goto LABEL_60;
        }
        sub_15D7BC0(v44, v43);
        ++v41;
      }
      while ( (unsigned __int64)v41 < v42 );
LABEL_60:
      v41 = v65;
      if ( v65 )
LABEL_61:
        sub_186B220(v41 - 1);
    }
    if ( v61 )
      sub_186B220(v61);
    sub_186B220(v57);
    LODWORD(v9) = (_DWORD)v66;
  }
  v21 = sub_15DC610(v19, v7, a3, (int)v9, a5, a6, v46, a1, v49, (int)v51, v52, (char)v55, (int)v56, (int)v57, v58, v59);
  sub_251FD0(v48, v21);
  sub_24FE40(v48, v21);
  if ( v53 )
  {
    sub_2BB620(v21);
    if ( v66 != v68 && v66 )
      sub_186B220(v66);
    byte_1C7EBA0 = 1;
  }
  else if ( v66 != v68 && v66 )
  {
    sub_186B220(v66);
  }
  return v21;
}

