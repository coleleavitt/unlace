__int64 __fastcall sub_873F00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // r9d
  bool v10; // al
  unsigned __int8 *v11; // rdi
  char *v12; // rbx
  char *v13; // r12
  _QWORD **v14; // rbx
  _QWORD **v15; // r12
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 *v37; // [rsp+0h] [rbp-498h] BYREF
  _QWORD *v38; // [rsp+8h] [rbp-490h]
  size_t v39; // [rsp+18h] [rbp-480h] BYREF
  __int16 v40; // [rsp+20h] [rbp-478h] BYREF
  __int64 v41; // [rsp+28h] [rbp-470h]
  void *v42; // [rsp+30h] [rbp-468h] BYREF
  __int64 v43; // [rsp+38h] [rbp-460h]
  unsigned __int8 v44[16]; // [rsp+40h] [rbp-458h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-448h] BYREF
  _QWORD *v46; // [rsp+60h] [rbp-438h]
  __int64 v47; // [rsp+68h] [rbp-430h]
  _QWORD v48[4]; // [rsp+70h] [rbp-428h] BYREF
  __int64 (__fastcall **v49)(); // [rsp+90h] [rbp-408h] BYREF
  char v50; // [rsp+98h] [rbp-400h]
  __int64 v51; // [rsp+A0h] [rbp-3F8h]
  __int16 *v52; // [rsp+A8h] [rbp-3F0h]
  _OWORD *v53; // [rsp+B0h] [rbp-3E8h]
  __int64 v54; // [rsp+B8h] [rbp-3E0h]
  int v55; // [rsp+C0h] [rbp-3D8h]
  char v56; // [rsp+C4h] [rbp-3D4h]
  _OWORD v57[3]; // [rsp+C8h] [rbp-3D0h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-3A0h]
  __int64 v59; // [rsp+100h] [rbp-398h]
  __int64 v60; // [rsp+108h] [rbp-390h]
  int v61; // [rsp+118h] [rbp-380h] BYREF
  __int64 v62; // [rsp+120h] [rbp-378h]
  int *v63; // [rsp+128h] [rbp-370h]
  int *v64; // [rsp+130h] [rbp-368h]
  __int64 v65; // [rsp+138h] [rbp-360h]
  int v66; // [rsp+148h] [rbp-350h] BYREF
  __int64 v67; // [rsp+150h] [rbp-348h]
  int *v68; // [rsp+158h] [rbp-340h]
  int *v69; // [rsp+160h] [rbp-338h]
  __int64 v70; // [rsp+168h] [rbp-330h]
  __int64 v71; // [rsp+170h] [rbp-328h]
  int v72; // [rsp+178h] [rbp-320h]
  _DWORD *v73; // [rsp+180h] [rbp-318h]
  __int64 v74; // [rsp+188h] [rbp-310h]
  _DWORD v75[4]; // [rsp+190h] [rbp-308h] BYREF
  __int64 v76; // [rsp+1A0h] [rbp-2F8h]
  __int64 v77; // [rsp+1A8h] [rbp-2F0h]
  int v78; // [rsp+1B0h] [rbp-2E8h]
  __int64 v79; // [rsp+1B8h] [rbp-2E0h]
  char v80; // [rsp+1C0h] [rbp-2D8h]
  void *ptr; // [rsp+1C8h] [rbp-2D0h]
  __int64 v82; // [rsp+1D0h] [rbp-2C8h]
  _BYTE v83[512]; // [rsp+1D8h] [rbp-2C0h] BYREF
  char v84[16]; // [rsp+3D8h] [rbp-C0h] BYREF
  int v85; // [rsp+3E8h] [rbp-B0h]
  __int128 v86; // [rsp+3F0h] [rbp-A8h]
  __int64 v87; // [rsp+400h] [rbp-98h]
  unsigned int v88; // [rsp+408h] [rbp-90h]
  int v89; // [rsp+418h] [rbp-80h] BYREF
  void *v90; // [rsp+420h] [rbp-78h]
  int *v91; // [rsp+428h] [rbp-70h]
  int *v92; // [rsp+430h] [rbp-68h]
  __int64 v93; // [rsp+438h] [rbp-60h]
  __int64 v94; // [rsp+440h] [rbp-58h]
  __int64 v95; // [rsp+448h] [rbp-50h]
  __int64 v96; // [rsp+450h] [rbp-48h]

  v40 = 0;
  v52 = &v40;
  v5 = *(_QWORD *)(a3 + 2160);
  v51 = a3;
  v6 = *(_DWORD *)(v5 + 136);
  LOBYTE(v5) = *(_BYTE *)(v5 + 140);
  v41 = 0;
  v50 = 0;
  v55 = v6;
  v56 = v5 & 1;
  v37 = (__int64 *)&v49;
  v49 = &off_47DA958;
  v58 = 0;
  v59 = 0;
  v57[0] = _mm_loadh_ps((const double *)&v37);
  memset(&v57[1], 0, 32);
  v60 = 0;
  v63 = &v61;
  v64 = &v61;
  v68 = &v66;
  v69 = &v66;
  v73 = v75;
  v61 = 0;
  v74 = 0x200000001LL;
  v54 = 0x200000001LL;
  v62 = 0;
  v82 = 0x1000000000LL;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 1;
  v75[0] = 1;
  v75[2] = 1;
  v78 = 0;
  v76 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v53 = v57;
  ptr = v83;
  sub_69F1C0((__int64)v84, 0, 0, 0);
  v7 = (__int64)&v39;
  v85 = 0;
  v96 = 0x200000000LL;
  v88 = 0;
  v87 = 0;
  v89 = 0;
  v90 = nullptr;
  v91 = &v89;
  v92 = &v89;
  v93 = 0;
  v94 = 0;
  v95 = -1;
  v42 = v44;
  v43 = 0;
  v44[0] = 0;
  v86 = 0;
  v10 = sub_873970(a2, &v39, v37, &v42, v8, v9);
  v11 = (unsigned __int8 *)v42;
  if ( v10 )
  {
    v28 = a1 + 16;
    v29 = v43;
    *(_QWORD *)a1 = a1 + 16;
    if ( v11 == v44 )
    {
      v31 = v29 + 1;
      if ( (unsigned int)(v29 + 1) >= 8 )
      {
        *(_QWORD *)(a1 + 16) = *(_QWORD *)v44;
        *(_QWORD *)(v28 + v31 - 8) = *(_QWORD *)&v44[v31 - 8];
        v11 = (unsigned __int8 *)((a1 + 24) & 0xFFFFFFFFFFFFFFF8LL);
        v32 = v28 - (_QWORD)v11;
        v7 = (__int64)&v44[-v32];
        v33 = (v32 + v31) & 0xFFFFFFF8;
        if ( v33 >= 8 )
        {
          v34 = v33 & 0xFFFFFFF8;
          v35 = 0;
          do
          {
            v36 = v35;
            v35 += 8;
            *(_QWORD *)&v11[v36] = *(_QWORD *)(v7 + v36);
          }
          while ( v35 < v34 );
        }
      }
      else if ( (v31 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 16) = *(_DWORD *)v44;
        v7 = *(unsigned int *)&v44[v31 - 4];
        *(_DWORD *)(v28 + v31 - 4) = v7;
      }
      else if ( (_DWORD)v29 != -1 )
      {
        v7 = v44[0];
        *(_BYTE *)(a1 + 16) = v44[0];
        if ( (v31 & 2) != 0 )
        {
          v7 = *(unsigned __int16 *)&v44[v31 - 2];
          *(_WORD *)(v28 + v31 - 2) = v7;
        }
      }
    }
    else
    {
      v30 = *(_QWORD *)v44;
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 16) = v30;
    }
    *(_QWORD *)(a1 + 8) = v29;
    v42 = v44;
    v43 = 0;
    v44[0] = 0;
    *(_BYTE *)(a1 + 32) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( v11 != v44 )
    {
      v7 = *(_QWORD *)v44 + 1LL;
      operator delete(v11, *(_QWORD *)v44 + 1LL);
    }
  }
  v49 = &off_47DA958;
  v12 = (char *)ptr;
  v13 = (char *)ptr + 32 * (unsigned int)v82;
  if ( ptr != v13 )
  {
    do
    {
      v11 = *((unsigned __int8 **)v12 + 3);
      if ( (unsigned int)sub_B19900(v11) )
      {
        *(_BYTE *)v52 = 1;
        if ( HIDWORD(v96) <= 2 && !WORD1(v96) )
          break;
      }
      v12 += 32;
    }
    while ( v13 != v12 );
  }
  v14 = (_QWORD **)v90;
  LODWORD(v82) = 0;
  if ( v90 )
  {
    while ( 1 )
    {
      sub_822210(v14[3]);
      v15 = (_QWORD **)v14[2];
      if ( *((_DWORD *)v14 + 10) > 1u )
        sub_69F740((__int64)(v14 + 5));
      v7 = 104;
      v11 = (unsigned __int8 *)v14;
      operator delete(v14, 0x68u);
      if ( !v15 )
        break;
      v14 = v15;
    }
  }
  if ( !v88 )
  {
    v16 = 0;
    goto LABEL_17;
  }
  v18 = sub_69F620(v11, v7);
  v46 = nullptr;
  v45[0] = v18;
  v45[1] = v19;
  v47 = 0;
  v20 = sub_69F630(v11, v7);
  v21 = *((_QWORD **)&v86 + 1);
  v48[2] = 0;
  v48[0] = v20;
  v48[1] = v22;
  v48[3] = 0;
  v23 = *((_QWORD *)&v86 + 1) + 40LL * v88;
  if ( *((_QWORD *)&v86 + 1) != v23 )
  {
    v38 = v48;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v21, v45) )
      {
        v24 = v21[3];
        if ( v24 == v47 )
        {
          v25 = (_QWORD *)v21[2];
          v26 = &v25[v24];
          v27 = v46;
          if ( v25 == v26 )
            goto LABEL_23;
          while ( *v25 == *v27 )
          {
            ++v25;
            ++v27;
            if ( v26 == v25 )
              goto LABEL_23;
          }
        }
      }
      sub_69F550(v21, v38);
LABEL_23:
      v21 += 5;
      if ( (_QWORD *)v23 == v21 )
      {
        v16 = 40LL * v88;
        goto LABEL_17;
      }
    }
  }
  v16 = 0;
LABEL_17:
  operator delete();
  if ( ptr != v83 )
    free(ptr);
  sub_822100((__int64)v57);
  sub_A2CAF0(v37, v16);
  return a1;
}

