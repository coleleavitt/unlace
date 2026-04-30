__int64 __fastcall sub_51AE60(__int64 a1, __int64 *a2, unsigned __int8 *a3, double a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // r10
  __int64 v17; // r15
  int v18; // eax
  unsigned __int64 v19; // r11
  __int64 v20; // r10
  int v21; // eax
  int v22; // r9d
  unsigned __int64 v23; // r11
  int v24; // eax
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int8 v27; // bl
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned __int8 v31; // r13
  __int64 v32; // rcx
  int v33; // r9d
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned int v37; // r15d
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i si128; // xmm0
  __int64 v56; // [rsp+0h] [rbp-118h]
  __int64 v57; // [rsp+0h] [rbp-118h]
  __int64 v59; // [rsp+10h] [rbp-108h]
  __int64 v60; // [rsp+10h] [rbp-108h]
  __int64 v61; // [rsp+10h] [rbp-108h]
  __int64 v62; // [rsp+10h] [rbp-108h]
  __int64 v63; // [rsp+10h] [rbp-108h]
  unsigned __int64 v64; // [rsp+18h] [rbp-100h]
  __int64 v65; // [rsp+18h] [rbp-100h]
  __int64 v66; // [rsp+18h] [rbp-100h]
  int v67; // [rsp+18h] [rbp-100h]
  int v68; // [rsp+18h] [rbp-100h]
  unsigned int v69; // [rsp+18h] [rbp-100h]
  unsigned __int64 v70; // [rsp+20h] [rbp-F8h]
  int v71; // [rsp+20h] [rbp-F8h]
  int v72; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v73; // [rsp+28h] [rbp-F0h]
  __int64 v74; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v75; // [rsp+38h] [rbp-E0h]
  _QWORD v76[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v77[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v78[2]; // [rsp+60h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v80; // [rsp+80h] [rbp-98h]
  void *v81[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-78h]
  _BYTE v83[24]; // [rsp+B0h] [rbp-68h] BYREF
  int v84; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v85; // [rsp+D8h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v5 = a2[1];
  if ( !v5 )
    goto LABEL_10;
  v6 = 0;
  v56 = *a2;
  v7 = *a2;
  while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "frame_geometry") )
  {
    ++v6;
    v7 += 40;
    if ( v5 == v6 )
      goto LABEL_10;
  }
  v8 = 0;
  v9 = v56;
  if ( *(_DWORD *)(v7 + 24) != 4 )
    goto LABEL_10;
  while ( !*(_QWORD *)(v9 + 8) || strcmp(*(const char **)v9, "normal_geometry") )
  {
    ++v8;
    v9 += 40;
    if ( v5 == v8 )
      goto LABEL_10;
  }
  v11 = 0;
  v12 = v56;
  if ( *(_DWORD *)(v9 + 24) != 4 )
    goto LABEL_10;
  while ( !*(_QWORD *)(v12 + 8) || strcmp(*(const char **)v12, "screen_number") )
  {
    ++v11;
    v12 += 40;
    if ( v5 == v11 )
      goto LABEL_10;
  }
  v13 = 0;
  v14 = v56;
  if ( *(_DWORD *)(v12 + 24) != 1 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_QWORD *)(v14 + 8) )
    {
      v59 = v14;
      v15 = strcmp(*(const char **)v14, "maximized");
      v14 = v59;
      if ( !v15 )
        break;
    }
    ++v13;
    v14 += 40;
    if ( v13 >= v5 )
      goto LABEL_10;
  }
  v16 = 0;
  v17 = v56;
  if ( *(_DWORD *)(v59 + 24) != 5 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_QWORD *)(v17 + 8) )
    {
      v64 = v16;
      v60 = v14;
      v18 = strcmp(*(const char **)v17, "fullscreen");
      v14 = v60;
      v16 = v64;
      if ( !v18 )
        break;
    }
    ++v16;
    v17 += 40;
    if ( v16 >= v5 )
      goto LABEL_10;
  }
  v19 = 0;
  v20 = v56;
  if ( *(_DWORD *)(v17 + 24) != 5 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_QWORD *)(v20 + 8) )
    {
      v70 = v19;
      v65 = v14;
      v61 = v20;
      v21 = strcmp(*(const char **)v20, "screen_width");
      v20 = v61;
      v14 = v65;
      v19 = v70;
      v22 = v21;
      if ( !v21 )
        break;
    }
    ++v19;
    v20 += 40;
    if ( v19 >= v5 )
      goto LABEL_10;
  }
  v23 = 0;
  if ( *(_DWORD *)(v61 + 24) != 1 )
  {
LABEL_10:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v56 + 8) )
    {
      v73 = v23;
      v71 = v22;
      v66 = v14;
      v62 = v20;
      v24 = strcmp(*(const char **)v56, "geometry");
      v20 = v62;
      v14 = v66;
      v22 = v71;
      v23 = v73;
      if ( !v24 )
        break;
    }
    ++v23;
    v56 += 40;
    if ( v23 >= v5 )
      goto LABEL_36;
  }
  if ( *(_DWORD *)(v56 + 24) != 4 )
  {
LABEL_36:
    v25 = 0;
    goto LABEL_37;
  }
  v25 = *(_QWORD *)(v56 + 32);
LABEL_37:
  v26 = *(_QWORD *)(v7 + 32);
  v72 = v22;
  v27 = *(_BYTE *)(v14 + 32);
  v57 = v26;
  v28 = *(_QWORD *)(v9 + 32);
  v29 = *(_QWORD *)(v20 + 32);
  v63 = v28;
  v30 = *(_QWORD *)(v12 + 32);
  v31 = *(_BYTE *)(v17 + 32);
  v67 = v30;
  QT::QGuiApplication::screens((QT::QGuiApplication *)ptr);
  v33 = v72;
  if ( v67 < 0 || (v32 = v67, v67 >= v80) )
  {
    if ( v80 <= 0 )
    {
      v37 = 0;
      v74 = 0;
      v75 = 0xFFFFFFFF00000000LL;
      v38 = -1;
      goto LABEL_41;
    }
  }
  else
  {
    v33 = v67;
  }
  v68 = v33;
  v34 = QT::QScreen::geometry(*((QT::QScreen **)ptr[1] + v33));
  v36 = v35;
  v74 = v34;
  LODWORD(v35) = v34;
  v37 = v68;
  v75 = v36;
  v38 = v36;
  v33 = v35;
LABEL_41:
  LODWORD(v74) = v33;
  v39 = (unsigned int)(v38 + 1 - v33);
  LODWORD(v75) = v38;
  if ( (int)v29 > 0 )
    v39 = (unsigned int)v29;
  v69 = v39;
  v76[0] = sub_518720(v57, &v74, a4, v39, v32);
  v76[1] = v40;
  v42 = sub_518720(v63, &v74, a4, v40, v41);
  v77[0] = v42;
  v77[1] = v43;
  if ( v25 )
    v42 = sub_518720(v25, &v74, a4, v43, v44);
  v78[1] = v43;
  v78[0] = v42;
  v82 = 0;
  *(_OWORD *)v81 = 0;
  QT::QDataStream::QDataStream(v83, v81, 2, 0.0);
  v84 = 7;
  v45 = QT::QDataStream::operator<<(v83, 31051979);
  v46 = QT::QDataStream::operator<<(v45, 3);
  v47 = QT::QDataStream::operator<<(v46, 0);
  v48 = QT::operator<<(v47, v76);
  v49 = QT::operator<<(v48, v77);
  v50 = QT::QDataStream::operator<<(v49, v37);
  v51 = QT::QDataStream::operator<<(v50, v27);
  v52 = QT::QDataStream::operator<<(v51, v31);
  v53 = QT::QDataStream::operator<<(v52, v69);
  QT::operator<<(v53, v78);
  if ( a3 )
    *a3 = v27;
  v54 = v82;
  si128 = _mm_load_si128((const __m128i *)v81);
  v82 = 0;
  *(_QWORD *)(a1 + 16) = v54;
  *(__m128i *)a1 = si128;
  *(_OWORD *)v81 = 0;
  QT::QDataStream::~QDataStream((QT::QDataStream *)v83);
  if ( v81[0] && !_InterlockedSub((volatile signed __int32 *)v81[0], 1u) )
    free(v81[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
