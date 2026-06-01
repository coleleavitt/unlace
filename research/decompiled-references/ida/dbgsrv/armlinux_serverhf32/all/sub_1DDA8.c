/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DDA8
// Address: 0x0001DDA8

//----- (0001DDA8) --------------------------------------------------------
void __fastcall sub_1DDA8(int a1, void *a2, int a3, const void *a4, const char *a5)
{
  int v8; // r11
  bool v9; // zf
  char v10; // r3
  int v11; // r3
  int v12; // r2
  size_t v13; // r0
  int v14; // r3
  const char *v15; // r0
  __int64 v16; // kr00_8
  int v17; // r1
  int v18; // r3
  bool v19; // zf
  bool v20; // r1
  int v22; // r4
  size_t v23; // r0
  signed int v24; // r8
  size_t v25; // r7
  size_t v26; // r7
  size_t v27; // r4
  size_t v28; // r4
  size_t v29; // r4
  int *v30; // r0
  int *i; // r2
  int *j; // r2
  size_t v33; // r4
  size_t v34; // r4
  unsigned int v35; // r11
  void *v36; // r0
  size_t v37; // r7
  size_t n; // [sp+14h] [bp-F8h]
  char *v40; // [sp+1Ch] [bp-F0h] BYREF
  void *src; // [sp+20h] [bp-ECh] BYREF
  size_t v42; // [sp+24h] [bp-E8h]
  int v43; // [sp+28h] [bp-E4h]
  void *v44; // [sp+2Ch] [bp-E0h] BYREF
  int v45; // [sp+30h] [bp-DCh]
  void *v46; // [sp+34h] [bp-D8h]
  size_t v47; // [sp+38h] [bp-D4h]
  size_t v48; // [sp+3Ch] [bp-D0h]
  void *v49; // [sp+40h] [bp-CCh]
  size_t v50; // [sp+44h] [bp-C8h]
  size_t v51; // [sp+48h] [bp-C4h]
  char v52[4]; // [sp+4Ch] [bp-C0h] BYREF
  int v53; // [sp+50h] [bp-BCh] BYREF
  int *v54; // [sp+54h] [bp-B8h]
  int *v55; // [sp+58h] [bp-B4h]
  int *v56; // [sp+5Ch] [bp-B0h]
  int v57; // [sp+60h] [bp-ACh]
  void *v58; // [sp+64h] [bp-A8h]
  size_t v59; // [sp+68h] [bp-A4h]
  int v60; // [sp+6Ch] [bp-A0h]
  void *v61; // [sp+70h] [bp-9Ch]
  size_t v62; // [sp+74h] [bp-98h]
  int v63; // [sp+78h] [bp-94h]
  int v64; // [sp+7Ch] [bp-90h]
  void *ptr; // [sp+80h] [bp-8Ch] BYREF
  signed int v66; // [sp+84h] [bp-88h]
  int v67; // [sp+88h] [bp-84h]
  void *v68; // [sp+8Ch] [bp-80h]
  size_t v69; // [sp+90h] [bp-7Ch]
  size_t v70; // [sp+94h] [bp-78h]
  void *v71; // [sp+98h] [bp-74h]
  size_t v72; // [sp+9Ch] [bp-70h]
  size_t v73; // [sp+A0h] [bp-6Ch]
  char v74[4]; // [sp+A4h] [bp-68h] BYREF
  int v75; // [sp+A8h] [bp-64h] BYREF
  int *v76; // [sp+ACh] [bp-60h]
  int *v77; // [sp+B0h] [bp-5Ch]
  int *v78; // [sp+B4h] [bp-58h]
  int v79; // [sp+B8h] [bp-54h]
  void *v80; // [sp+BCh] [bp-50h]
  size_t v81; // [sp+C0h] [bp-4Ch]
  size_t v82; // [sp+C4h] [bp-48h]
  void *v83; // [sp+C8h] [bp-44h]
  size_t v84; // [sp+CCh] [bp-40h]
  size_t v85; // [sp+D0h] [bp-3Ch]
  int v86; // [sp+D4h] [bp-38h]
  int v87; // [sp+D8h] [bp-34h] BYREF
  int v88; // [sp+DCh] [bp-30h]
  int v89; // [sp+E0h] [bp-2Ch]
  char v90; // [sp+E4h] [bp-28h]
  int v91; // [sp+E8h] [bp-24h]
  void *dest; // [sp+ECh] [bp-20h] BYREF
  unsigned int v93; // [sp+F0h] [bp-1Ch]
  unsigned int v94; // [sp+F4h] [bp-18h]
  void *v95; // [sp+F8h] [bp-14h]
  int v96; // [sp+FCh] [bp-10h]
  int v97; // [sp+100h] [bp-Ch]

  sub_53D50(a1, "%a: new dll %s (soname=%s)\n", a2);
  v91 = 0;
  dest = nullptr;
  v93 = 0;
  v94 = 0;
  v95 = nullptr;
  v96 = 0;
  v97 = 0;
  v87 = -1;
  v89 = -1;
  v88 = 0;
  v90 = 0;
  sub_6E3C0(&v87, 8);
  v8 = v91 & 0xFFFFFFF;
  v9 = (v91 & 0xFFFFFFF) == 11;
  if ( (v91 & 0xFFFFFFF) != 0xB )
    v9 = v8 == 1;
  v10 = !v9;
  if ( v8 == 8 )
    v11 = 0;
  else
    v11 = v10 & 1;
  if ( v11 )
  {
    if ( !under_debugger )
      sub_78AFC(3295);
LABEL_75:
    __und(0xFFu);
  }
  v12 = *(_DWORD *)(a1 + 1068);
  v89 = (int)a2;
  v90 = 1;
  v87 = v12;
  v88 = v12;
  if ( a4 && (v13 = strlen((const char *)a4), (n = v13) != 0) )
  {
    v35 = v13 + 1;
    v36 = dest;
    if ( v35 > v94 )
    {
      v36 = sub_77EB0((int)&dest, dest, v35, 1u);
      dest = v36;
    }
    v93 = v35;
    memmove(v36, a4, n);
    *((_BYTE *)dest + n) = 0;
    v8 = v91 & 0xFFFFFFF;
  }
  else
  {
    v93 = 0;
  }
  v14 = *(unsigned __int8 *)(a1 + 453);
  v95 = a2;
  v96 = a3;
  v97 = -1;
  if ( v14 )
  {
    v15 = *(_DWORD *)(a1 + 304) ? *(const char **)(a1 + 300) : (const char *)&dword_8DA5C;
    if ( !strcmp(v15, (const char *)a4) )
      v97 = (int)a2;
  }
  if ( !v8 )
    goto LABEL_74;
  v16 = *(_QWORD *)(a1 + 64);
  if ( (_DWORD)v16 == HIDWORD(v16) )
  {
    sub_1B568((_DWORD *)(a1 + 56), (int)&v87);
  }
  else
  {
    *(_DWORD *)(v16 - 44) = -1;
    *(_DWORD *)(v16 - 36) = -1;
    *(_DWORD *)(v16 - 40) = 0;
    *(_BYTE *)(v16 - 32) = 0;
    *(_DWORD *)(v16 - 28) = 0;
    sub_6E4A8(v16 - 44, (int)&v87);
    *(_DWORD *)(a1 + 64) -= 44;
  }
  v17 = v91;
  *(_BYTE *)(a1 + 1112) = 0;
  v18 = v17 & 0xFFFFFFF;
  v19 = (v17 & 0xFFFFFFF) == 1;
  if ( (v17 & 0xFFFFFFF) != 1 )
    v19 = v18 == 11;
  v20 = !v19;
  if ( v18 != 8 && v20 )
  {
LABEL_74:
    if ( !under_debugger )
      sub_78AFC(3295);
    goto LABEL_75;
  }
  src = nullptr;
  v42 = 0;
  v43 = 0;
  v22 = v96;
  if ( !a4 )
  {
    ptr = nullptr;
    v66 = 0;
    v67 = 0;
    if ( !a5 )
    {
      v44 = a2;
      v45 = v96;
      v46 = nullptr;
      v47 = 0;
      v48 = 0;
      goto LABEL_35;
    }
    goto LABEL_32;
  }
  v37 = strlen((const char *)a4);
  src = sub_77EB0((int)&src, nullptr, v37 + 1, 1u);
  v42 = v37 + 1;
  memmove(src, a4, v37);
  *((_BYTE *)src + v37) = 0;
  ptr = nullptr;
  v66 = 0;
  v67 = 0;
  if ( a5 )
  {
LABEL_32:
    v23 = strlen(a5);
    v24 = v23 + 1;
    v25 = v23;
    ptr = sub_77EB0((int)&ptr, nullptr, v23 + 1, 1u);
    v66 = v24;
    memmove(ptr, a5, v25);
    *((_BYTE *)ptr + v25) = 0;
  }
  v26 = v42;
  v44 = a2;
  v45 = v22;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  if ( v42 )
  {
    v46 = sub_77E84(v42);
    v48 = v26;
    memcpy(v46, src, v26);
    v47 = v26;
  }
LABEL_35:
  v27 = v66;
  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  if ( v66 )
  {
    v49 = sub_77E84(v66);
    v51 = v27;
    memcpy(v49, ptr, v27);
    v50 = v27;
  }
  v53 = 0;
  v54 = nullptr;
  v57 = 0;
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = nullptr;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v55 = &v53;
  v56 = &v53;
  if ( ptr )
  {
    v66 = 0;
    sub_77E08(ptr);
  }
  if ( src )
  {
    v42 = 0;
    sub_77E08(src);
  }
  v28 = v47;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  ptr = v44;
  v66 = (signed int)v44;
  v67 = v45;
  if ( v47 )
  {
    v68 = sub_77E84(v47);
    v70 = v28;
    memcpy(v68, v46, v28);
    v69 = v28;
  }
  v29 = v50;
  v71 = nullptr;
  v72 = 0;
  v73 = 0;
  if ( v50 )
  {
    v71 = sub_77E84(v50);
    v73 = v29;
    memcpy(v71, v49, v29);
    v72 = v29;
  }
  v75 = 0;
  v76 = nullptr;
  v79 = 0;
  v77 = &v75;
  v78 = &v75;
  if ( v54 )
  {
    v40 = v74;
    v30 = sub_1DC98((int)v74, v54, (int)&v75, (int)&v40);
    for ( i = v30; i[2]; i = (int *)i[2] )
      ;
    v77 = i;
    for ( j = v30; j[3]; j = (int *)j[3] )
      ;
    v78 = j;
    v76 = v30;
    v79 = v57;
  }
  v33 = v59;
  v80 = nullptr;
  v81 = 0;
  v82 = 0;
  if ( v59 )
  {
    v80 = sub_77E84(v59);
    v82 = v33;
    memcpy(v80, v58, v33);
    v81 = v33;
  }
  v34 = v62;
  v83 = nullptr;
  v84 = 0;
  v85 = 0;
  if ( v62 )
  {
    v83 = sub_77E84(v62);
    v85 = v34;
    memcpy(v83, v61, v34);
    v84 = v34;
  }
  v86 = v64;
  sub_1A184((int)&src, (_DWORD *)(a1 + 976), (int *)&ptr);
  if ( v83 )
  {
    v84 = 0;
    sub_77E08(v83);
  }
  if ( v80 )
  {
    v81 = 0;
    sub_77E08(v80);
  }
  sub_18B5C((int)v74, v76);
  if ( v71 )
  {
    v72 = 0;
    sub_77E08(v71);
  }
  if ( v68 )
  {
    v69 = 0;
    sub_77E08(v68);
  }
  sub_1A2D8((int)&ptr, (_DWORD *)(a1 + 952), (unsigned int *)&v44);
  if ( v61 )
  {
    v62 = 0;
    sub_77E08(v61);
  }
  if ( v58 )
  {
    v59 = 0;
    sub_77E08(v58);
  }
  sub_18B5C((int)v52, v54);
  if ( v49 )
  {
    v50 = 0;
    sub_77E08(v49);
  }
  if ( v46 )
  {
    v47 = 0;
    sub_77E08(v46);
  }
  sub_6E318(&v87);
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
