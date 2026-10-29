__int64 __fastcall sub_14FDCA0(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5, __m128i a6)
{
  unsigned int v6; // r14d
  __int64 v7; // rbx
  bool v8; // zf
  char v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v16; // rax
  _BYTE *v17; // rdx
  __int64 v18; // r8
  __int16 v19; // ax
  int *v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // r14d
  size_t v28; // rax
  __int16 v29; // ax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int16 v35; // dx
  int *v37; // rbx
  __int64 *v38; // rdi
  unsigned int v39; // ebp
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int16 v44; // cx
  __int64 *v45; // rdi
  unsigned int v46; // r12d
  int v47; // ebp
  int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r14
  __int64 v51; // r10
  unsigned int v52; // eax
  unsigned __int16 v53; // si
  _WORD *v54; // rdx
  __int64 v55; // rax
  void *v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  void *v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rsi
  unsigned __int64 v68; // [rsp+28h] [rbp-220h]
  __int64 v69; // [rsp+28h] [rbp-220h]
  __int64 v70; // [rsp+38h] [rbp-210h]
  unsigned __int64 v71; // [rsp+38h] [rbp-210h]
  unsigned int v73; // [rsp+4Ch] [rbp-1FCh]
  int v74; // [rsp+5Ch] [rbp-1ECh] BYREF
  void *v75; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-1E0h]
  _BYTE v77[48]; // [rsp+70h] [rbp-1D8h] BYREF
  _DWORD v78[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  char v79; // [rsp+A8h] [rbp-1A0h]
  __int64 v80; // [rsp+ACh] [rbp-19Ch]
  char v81; // [rsp+B4h] [rbp-194h]
  void *v82; // [rsp+B8h] [rbp-190h]
  __int64 v83; // [rsp+C0h] [rbp-188h]
  _BYTE v84[24]; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int8 *v85[10]; // [rsp+E0h] [rbp-168h] BYREF
  void *v86; // [rsp+130h] [rbp-118h] BYREF
  __int64 v87; // [rsp+138h] [rbp-110h]
  _BYTE v88[96]; // [rsp+140h] [rbp-108h] BYREF
  void *ptr; // [rsp+1A0h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+1A8h] [rbp-A0h]
  _BYTE v91[152]; // [rsp+1B0h] [rbp-98h] BYREF

  v6 = a3;
  v7 = a1;
  v8 = *(_WORD *)(a1 + 32) == 3;
  v9 = *(_BYTE *)(a1 + 2064);
  *(_BYTE *)(a1 + 2064) = 1;
  if ( v8 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v10 + 760) )
    {
      *(_BYTE *)(v10 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v10 + 48) + 6LL) = 1;
    }
    v11 = *(_QWORD *)(a1 + 96);
    *(_WORD *)(a1 + 32) = 1;
    v12 = *(_QWORD *)(v11 + 656);
    v13 = *(_QWORD *)(v11 + 608);
    if ( a3 )
    {
      sub_172D6E0(v12, v13, a3, 0, 0, 0);
    }
    else if ( a4 )
    {
      sub_172C310(v12, v13, a4, 0, 0, 0, 0);
    }
    else
    {
      sub_172C560(v12, v13, a5, 0, 0, 0, 0);
    }
    v14 = 1;
  }
  else
  {
    v74 = 0;
    v16 = sub_14FCFD0(a1, &v74);
    v17 = v88;
    v18 = v16;
    v86 = v88;
    v87 = 0xC00000000LL;
    v76 = 0xC00000000LL;
    v90 = 0xC00000000LL;
    v19 = *(_WORD *)(a1 + 32);
    v75 = v77;
    ptr = v91;
    if ( v19 == 62 )
    {
      v22 = 0;
      v23 = v18;
      v73 = v6;
      while ( 1 )
      {
        *(_QWORD *)&v17[8 * v22] = v23;
        v25 = (unsigned int)v76;
        LODWORD(v87) = v87 + 1;
        v26 = (unsigned int)v76 + 1LL;
        v27 = v74;
        if ( v26 > HIDWORD(v76) )
        {
          sub_2237220(&v75, v77, v26, 4);
          v25 = (unsigned int)v76;
        }
        *((_DWORD *)v75 + v25) = v27;
        LODWORD(v76) = v76 + 1;
        v28 = j__strlen(&byte_22F0C30);
        if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v28) )
        {
LABEL_49:
          LOWORD(v85[0]) = 21;
          sub_15680D0(a1, v85, 1, 1);
LABEL_50:
          v14 = 1;
          goto LABEL_17;
        }
        v29 = *(_WORD *)(a1 + 32);
        v30 = *(_QWORD *)(a1 + 8);
        if ( v29 == 3 )
        {
          if ( *(_QWORD *)(v30 + 760) )
          {
            v55 = *(_QWORD *)(v30 + 48);
            *(_BYTE *)(v30 + 968) = 1;
            *(_BYTE *)(v55 + 6) = 1;
          }
          v56 = v86;
          v57 = (unsigned int)v87;
          *(_WORD *)(a1 + 32) = 1;
          v58 = *(_QWORD *)(a1 + 96);
          v59 = *(_QWORD *)(v58 + 656);
          v60 = *(_QWORD *)(v58 + 608);
          if ( v73 )
          {
            sub_172D6E0(v59, v60, v73, v56, v57, 1);
          }
          else if ( a4 )
          {
            sub_172C310(v59, v60, a4, (_DWORD)v56, v57, 1, 0);
          }
          else
          {
            sub_172C560(v59, v60, a5, (_DWORD)v56, v57, 1, 0);
          }
          goto LABEL_50;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v30 + 56) + 1LL) & 0x10) != 0 && v29 == 24 )
        {
          sub_1564840(v85, a1, a1 + 16, 2118);
          sub_AEA040((__int64)v85);
          v31 = sub_14EE310(a1, a6);
        }
        else
        {
          v31 = sub_14BDAD0(a1, 0, a6);
        }
        if ( v31 == 1 )
          goto LABEL_49;
        v32 = (unsigned int)v90;
        v33 = v31 & 0xFFFFFFFFFFFFFFFELL;
        v34 = (unsigned int)v90 + 1LL;
        if ( v34 > HIDWORD(v90) )
        {
          v71 = v33;
          sub_2237220(&ptr, v91, v34, 8);
          v32 = (unsigned int)v90;
          v33 = v71;
        }
        *((_QWORD *)ptr + v32) = v33;
        LODWORD(v90) = v90 + 1;
        if ( *(_WORD *)(a1 + 32) == 3 )
        {
          v61 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(v61 + 760) )
          {
            *(_BYTE *)(v61 + 968) = 1;
            *(_BYTE *)(*(_QWORD *)(v61 + 48) + 6LL) = 1;
          }
          v62 = *(_QWORD *)(a1 + 96);
          v63 = v86;
          *(_WORD *)(a1 + 32) = 1;
          v64 = *(_QWORD *)(v62 + 656);
          v65 = *(_QWORD *)(v62 + 608);
          if ( v73 )
          {
            sub_172D6E0(v64, v65, v73, v63, (unsigned int)v87, 0);
          }
          else if ( a4 )
          {
            sub_172C310(v64, v65, a4, (_DWORD)v63, v87, 0, 0);
          }
          else
          {
            sub_172C560(v64, v65, a5, (_DWORD)v63, v87, 0, 0);
          }
          goto LABEL_50;
        }
        v23 = sub_14FCFD0(a1, &v74);
        if ( !v23 )
        {
          v35 = *(_WORD *)(a1 + 32);
          if ( v35 != 62 )
            break;
        }
        v22 = (unsigned int)v87;
        v24 = (unsigned int)v87 + 1LL;
        if ( v24 > HIDWORD(v87) )
        {
          v70 = v23;
          sub_2237220(&v86, v88, v24, 8);
          v22 = (unsigned int)v87;
          v23 = v70;
        }
        v17 = v86;
      }
      v18 = 0;
      v6 = v73;
      v19 = *(_WORD *)(a1 + 32);
      v20 = (int *)(a1 + 16);
      if ( v35 != 66 )
        goto LABEL_11;
      v37 = (int *)(a1 + 16);
      while ( 1 )
      {
        v38 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v38, v37);
        v39 = *(_DWORD *)(a1 + 40);
        v40 = sub_14BDAD0(a1, 0, a6);
        if ( v40 == 1 )
          break;
        v41 = (unsigned int)v90;
        v42 = v40 & 0xFFFFFFFFFFFFFFFELL;
        v43 = (unsigned int)v90 + 1LL;
        if ( v43 > HIDWORD(v90) )
        {
          v68 = v42;
          sub_2237220(&ptr, v91, v43, 8);
          v41 = (unsigned int)v90;
          v42 = v68;
        }
        *((_QWORD *)ptr + v41) = v42;
        v19 = *(_WORD *)(a1 + 32);
        LODWORD(v90) = v90 + 1;
        if ( v19 != 66 )
        {
          v20 = v37;
          v18 = 0;
          v7 = a1;
          v6 = v73;
LABEL_11:
          if ( v19 != 21 )
          {
            sub_1564840(v85, v7, v20, 14);
            v21 = 62;
            if ( *(_WORD *)(v7 + 32) != 5 )
              v21 = 21;
            sub_AE9DF0(v85, v21, 4u);
            goto LABEL_15;
          }
          v44 = *(_WORD *)(v7 + 90);
          if ( !v44 )
          {
LABEL_52:
            v45 = *(__int64 **)(v7 + 8);
            v69 = v18;
            *(_DWORD *)(v7 + 40) = *(_DWORD *)(v7 + 16);
            sub_14634E0(v45, v20);
            v46 = v87;
            v47 = *(_DWORD *)(v7 + 40);
            if ( !(_DWORD)v87 )
            {
              sub_14FA200((__int64)&v86, v69);
              sub_14C6D60((__int64)&v75, v74);
            }
            v48 = sub_FE3230((_QWORD *)(*(_QWORD *)(v7 + 8) + 680LL), v46, (unsigned __int64 *)v86);
            if ( v6 )
            {
              v14 = sub_19E2AF0(
                      *(_QWORD *)(*(_QWORD *)(v7 + 96) + 736LL),
                      *(_QWORD *)(*(_QWORD *)(v7 + 96) + 608LL),
                      v6,
                      v48,
                      a2,
                      v47,
                      (__int64)v75,
                      (unsigned int)v76,
                      (__int64)ptr,
                      (unsigned int)v90);
            }
            else
            {
              v49 = *(_QWORD *)(v7 + 96);
              v50 = *(_QWORD *)(v49 + 608);
              v51 = *(_QWORD *)(v49 + 736);
              if ( a4 )
                v14 = sub_19E2060(
                        v51,
                        v50,
                        a4,
                        v48,
                        a2,
                        v47,
                        (__int64)v75,
                        (unsigned int)v76,
                        (__int64)ptr,
                        (unsigned int)v90);
              else
                v14 = sub_19E10C0(
                        v51,
                        v50,
                        a5,
                        v48,
                        a2,
                        v47,
                        (__int64)v75,
                        (unsigned int)v76,
                        (__int64)ptr,
                        (unsigned int)v90);
            }
            goto LABEL_17;
          }
          v52 = *(_DWORD *)(v7 + 2792);
          if ( !v52 )
          {
LABEL_66:
            *(_WORD *)(v7 + 90) = v44 - 1;
            goto LABEL_52;
          }
          v53 = *(_WORD *)(v7 + 88);
          v54 = (_WORD *)(*(_QWORD *)(v7 + 2784) + 24LL * v52 - 24);
          while ( 2 )
          {
            if ( v53 == v54[7] )
            {
              if ( *((_DWORD *)v54 + 4) != *(_DWORD *)(v7 + 90) )
              {
LABEL_64:
                if ( v44 <= v54[8] && *(_WORD *)(v7 + 92) <= v54[9] )
                  goto LABEL_66;
              }
            }
            else if ( v53 <= v54[7] )
            {
              goto LABEL_64;
            }
            --v52;
            v54 -= 12;
            *(_DWORD *)(v7 + 2792) = v52;
            if ( !v52 )
              goto LABEL_66;
            continue;
          }
        }
      }
      v7 = a1;
      if ( *(_WORD *)(a1 + 32) == 62 )
      {
        sub_1564820(v85, a1, v39, 2031);
        v80 = 0;
        v81 = 0;
        v82 = v84;
        v83 = 0;
        v84[0] = 0;
        v84[16] = 0;
        v78[0] = v39;
        v78[1] = v39;
        v79 = 1;
        if ( v39 )
        {
          sub_14FA6F0((__int64 *)v85, (unsigned __int64)v78);
          if ( v82 != v84 )
            operator delete(v82);
        }
LABEL_15:
        sub_AEA040((__int64)v85);
      }
      LOWORD(v85[0]) = 21;
      v14 = 1;
      sub_15680D0(v7, v85, 1, 1);
    }
    else
    {
      v20 = (int *)(a1 + 16);
      if ( v18 )
        goto LABEL_11;
      sub_1564840(v85, a1, a1 + 16, 14);
      sub_AE9DF0(v85, 5, 4u);
      sub_AEA040((__int64)v85);
      v14 = 1;
      LOWORD(v85[0]) = 21;
      sub_15680D0(a1, v85, 1, 1);
    }
LABEL_17:
    if ( ptr != v91 )
      free(ptr);
    if ( v75 != v77 )
      free(v75);
    if ( v86 != v88 )
      free(v86);
  }
  *(_BYTE *)(v7 + 2064) = v9;
  return v14;
}
