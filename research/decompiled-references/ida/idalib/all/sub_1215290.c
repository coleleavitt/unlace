void __fastcall sub_1215290(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdx
  size_t v4; // rdx
  __int64 v5; // rax
  _BYTE *i; // rbx
  bool v7; // al
  _BYTE *v8; // rsi
  _BYTE *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE *v12; // rsi
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE *v16; // rsi
  _BYTE *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  _BYTE *v20; // rsi
  _BYTE *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rdx
  _BYTE *v24; // rbp
  _BYTE *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  _BYTE *v28; // r14
  _BYTE *v29; // r13
  int v30; // ebp
  int v31; // eax
  int v32; // r12d
  int v33; // ecx
  void *v34; // r8
  size_t v35; // r9
  _BYTE *v36; // rbx
  size_t v37; // rdx
  size_t v38; // rdx
  size_t v39; // rdx
  size_t v40; // rdx
  size_t v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  int v48; // r11d
  size_t v49; // r10
  size_t v50; // rbp
  size_t v51; // r12
  size_t v52; // rdx
  int v53; // eax
  __int64 v54; // rbp
  void *v55; // rdi
  const void *v56; // rsi
  size_t v57; // rax
  size_t v58; // rdx
  int v59; // eax
  int v60; // eax
  size_t v61; // r10
  size_t v62; // rdx
  const void *v63; // [rsp+0h] [rbp-128h]
  size_t v64; // [rsp+10h] [rbp-118h]
  int v65; // [rsp+10h] [rbp-118h]
  size_t v66; // [rsp+10h] [rbp-118h]
  size_t v67; // [rsp+20h] [rbp-108h]
  size_t v68; // [rsp+20h] [rbp-108h]
  int v69; // [rsp+20h] [rbp-108h]
  int v70; // [rsp+2Ch] [rbp-FCh]
  int v71; // [rsp+2Ch] [rbp-FCh]
  size_t v72; // [rsp+38h] [rbp-F0h]
  __m128i v73[2]; // [rsp+40h] [rbp-E8h] BYREF
  int v74; // [rsp+60h] [rbp-C8h]
  int v75; // [rsp+64h] [rbp-C4h]
  int v76; // [rsp+68h] [rbp-C0h]
  __int64 v77[4]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v78[4]; // [rsp+90h] [rbp-98h] BYREF
  void *v79; // [rsp+B0h] [rbp-78h] BYREF
  size_t v80; // [rsp+B8h] [rbp-70h]
  void *s1; // [rsp+D0h] [rbp-58h] BYREF
  size_t n; // [rsp+D8h] [rbp-50h]
  _OWORD v83[4]; // [rsp+E0h] [rbp-48h] BYREF

  v2 = *a1;
  sub_1214140(v73, (__m128i *)(*a1 - 176));
  v3 = *(void **)(v2 - 32);
  s1 = v83;
  if ( v3 == (void *)(v2 - 16) )
  {
    v83[0] = _mm_loadu_si128((const __m128i *)(v2 - 16));
  }
  else
  {
    s1 = v3;
    *(_QWORD *)&v83[0] = *(_QWORD *)(v2 - 16);
  }
  v4 = *(_QWORD *)(v2 - 24);
  *(_QWORD *)(v2 - 32) = v2 - 16;
  *(_BYTE *)(v2 - 16) = 0;
  v5 = *a1;
  *(_QWORD *)(v2 - 24) = 0;
  n = v4;
  for ( i = (_BYTE *)(v5 + 160); ; i += 176 )
  {
    v28 = i - 160;
    v29 = i + 16;
    v30 = v74;
    if ( *((_DWORD *)i - 32) != v74 )
    {
      v7 = *((_DWORD *)i - 32) > v74;
LABEL_5:
      if ( v7 )
        goto LABEL_6;
      v32 = v75;
      v48 = v76;
      v49 = v80;
      v63 = v79;
      goto LABEL_76;
    }
    v31 = *((_DWORD *)i - 31);
    v32 = v75;
    if ( v31 != v75 )
    {
      if ( v31 == -1 )
        goto LABEL_6;
      v7 = v31 > v75;
      if ( v75 == -1 )
      {
        v33 = v76;
        v34 = v79;
        v35 = v80;
        goto LABEL_32;
      }
      goto LABEL_5;
    }
    v47 = *((_DWORD *)i - 30);
    v33 = v76;
    if ( v47 != v76 )
    {
      if ( v47 == -1 )
        goto LABEL_6;
      v7 = v47 > v76;
      if ( v76 == -1 )
      {
        v34 = v79;
        v35 = v80;
        goto LABEL_32;
      }
      goto LABEL_5;
    }
    v55 = v79;
    v56 = *((const void **)i - 6);
    v57 = *((_QWORD *)i - 5);
    v34 = v79;
    v64 = v57;
    v35 = v80;
    v63 = v79;
    if ( v57 == v80 )
    {
      v65 = v76;
      if ( v80 )
      {
        v72 = v80;
        v68 = v80;
        v71 = v76;
        v60 = memcmp(v79, v56, v80);
        v61 = v68;
        if ( v60 )
        {
          v62 = v68;
          v69 = v65;
          v66 = v61;
          v59 = memcmp(v63, v56, v62);
          v49 = v66;
          v48 = v69;
          if ( v59 )
            goto LABEL_104;
LABEL_76:
          v33 = v48;
          v34 = (void *)v63;
          v35 = v49;
          goto LABEL_32;
        }
        v33 = v71;
        v34 = v55;
        v35 = v72;
      }
    }
    else
    {
      if ( !v57 )
        goto LABEL_6;
      if ( v80 )
      {
        v58 = *((_QWORD *)i - 5);
        v67 = v80;
        if ( v57 > v80 )
          v58 = v80;
        v70 = v76;
        v59 = memcmp(v79, v56, v58);
        v49 = v67;
        v48 = v70;
        if ( !v59 )
        {
          if ( v64 > v67 )
            goto LABEL_6;
          goto LABEL_76;
        }
LABEL_104:
        if ( v59 < 0 )
          goto LABEL_6;
        goto LABEL_76;
      }
    }
LABEL_32:
    if ( (unsigned __int8)sub_1213FB0((__int64)(i - 160), v30, v32, v33, v34, v35) )
      goto LABEL_33;
    v50 = n;
    v51 = *((_QWORD *)i - 1);
    v52 = v51;
    if ( n <= v51 )
      v52 = n;
    if ( v52 )
    {
      v53 = memcmp(s1, *((const void **)i - 2), v52);
      if ( v53 )
        goto LABEL_84;
    }
    v54 = v50 - v51;
    if ( v54 > 0x7FFFFFFF )
      goto LABEL_33;
    if ( v54 >= (__int64)0xFFFFFFFF80000000LL )
      break;
LABEL_6:
    v8 = *((_BYTE **)i - 20);
    v9 = *((_BYTE **)i - 42);
    if ( v8 == i - 144 )
    {
      v41 = *((_QWORD *)i - 19);
      if ( v41 )
      {
        if ( v41 == 1 )
          *v9 = *(i - 144);
        else
          memcpy(v9, v8, v41);
        v41 = *((_QWORD *)i - 19);
        v9 = *((_BYTE **)i - 42);
      }
      *((_QWORD *)i - 41) = v41;
      v9[v41] = 0;
      v9 = *((_BYTE **)i - 20);
    }
    else
    {
      if ( v9 == i - 320 )
      {
        v43 = *((_QWORD *)i - 19);
        *((_QWORD *)i - 42) = v8;
        *((_QWORD *)i - 41) = v43;
        *((_QWORD *)i - 40) = *((_QWORD *)i - 18);
      }
      else
      {
        v10 = *((_QWORD *)i - 19);
        v11 = *((_QWORD *)i - 40);
        *((_QWORD *)i - 42) = v8;
        *((_QWORD *)i - 41) = v10;
        *((_QWORD *)i - 40) = *((_QWORD *)i - 18);
        if ( v9 )
        {
          *((_QWORD *)i - 20) = v9;
          *((_QWORD *)i - 18) = v11;
          goto LABEL_10;
        }
      }
      *((_QWORD *)i - 20) = i - 144;
      v9 = i - 144;
    }
LABEL_10:
    *((_QWORD *)i - 19) = 0;
    *v9 = 0;
    v12 = *((_BYTE **)i - 14);
    v13 = *((_BYTE **)i - 36);
    *((_DWORD *)i - 76) = *((_DWORD *)i - 32);
    *((_DWORD *)i - 75) = *((_DWORD *)i - 31);
    *((_DWORD *)i - 74) = *((_DWORD *)i - 30);
    if ( v12 == i - 96 )
    {
      v40 = *((_QWORD *)i - 13);
      if ( v40 )
      {
        if ( v40 == 1 )
          *v13 = *(i - 96);
        else
          memcpy(v13, v12, v40);
        v40 = *((_QWORD *)i - 13);
        v13 = *((_BYTE **)i - 36);
      }
      *((_QWORD *)i - 35) = v40;
      v13[v40] = 0;
      v13 = *((_BYTE **)i - 14);
    }
    else
    {
      if ( v13 == i - 272 )
      {
        v42 = *((_QWORD *)i - 13);
        *((_QWORD *)i - 36) = v12;
        *((_QWORD *)i - 35) = v42;
        *((_QWORD *)i - 34) = *((_QWORD *)i - 12);
      }
      else
      {
        v14 = *((_QWORD *)i - 13);
        v15 = *((_QWORD *)i - 34);
        *((_QWORD *)i - 36) = v12;
        *((_QWORD *)i - 35) = v14;
        *((_QWORD *)i - 34) = *((_QWORD *)i - 12);
        if ( v13 )
        {
          *((_QWORD *)i - 14) = v13;
          *((_QWORD *)i - 12) = v15;
          goto LABEL_14;
        }
      }
      *((_QWORD *)i - 14) = i - 96;
      v13 = i - 96;
    }
LABEL_14:
    *((_QWORD *)i - 13) = 0;
    *v13 = 0;
    v16 = *((_BYTE **)i - 10);
    v17 = *((_BYTE **)i - 32);
    if ( v16 == i - 64 )
    {
      v39 = *((_QWORD *)i - 9);
      if ( v39 )
      {
        if ( v39 == 1 )
          *v17 = *(i - 64);
        else
          memcpy(v17, v16, v39);
        v39 = *((_QWORD *)i - 9);
        v17 = *((_BYTE **)i - 32);
      }
      *((_QWORD *)i - 31) = v39;
      v17[v39] = 0;
      v17 = *((_BYTE **)i - 10);
    }
    else
    {
      if ( v17 == i - 240 )
      {
        v45 = *((_QWORD *)i - 9);
        *((_QWORD *)i - 32) = v16;
        *((_QWORD *)i - 31) = v45;
        *((_QWORD *)i - 30) = *((_QWORD *)i - 8);
      }
      else
      {
        v18 = *((_QWORD *)i - 9);
        v19 = *((_QWORD *)i - 30);
        *((_QWORD *)i - 32) = v16;
        *((_QWORD *)i - 31) = v18;
        *((_QWORD *)i - 30) = *((_QWORD *)i - 8);
        if ( v17 )
        {
          *((_QWORD *)i - 10) = v17;
          *((_QWORD *)i - 8) = v19;
          goto LABEL_18;
        }
      }
      *((_QWORD *)i - 10) = i - 64;
      v17 = i - 64;
    }
LABEL_18:
    *((_QWORD *)i - 9) = 0;
    *v17 = 0;
    v20 = *((_BYTE **)i - 6);
    v21 = *((_BYTE **)i - 28);
    if ( v20 == i - 32 )
    {
      v38 = *((_QWORD *)i - 5);
      if ( v38 )
      {
        if ( v38 == 1 )
          *v21 = *(i - 32);
        else
          memcpy(v21, v20, v38);
        v38 = *((_QWORD *)i - 5);
        v21 = *((_BYTE **)i - 28);
      }
      *((_QWORD *)i - 27) = v38;
      v21[v38] = 0;
      v21 = *((_BYTE **)i - 6);
    }
    else
    {
      if ( v21 == i - 208 )
      {
        v44 = *((_QWORD *)i - 5);
        *((_QWORD *)i - 28) = v20;
        *((_QWORD *)i - 27) = v44;
        *((_QWORD *)i - 26) = *((_QWORD *)i - 4);
      }
      else
      {
        v22 = *((_QWORD *)i - 5);
        v23 = *((_QWORD *)i - 26);
        *((_QWORD *)i - 28) = v20;
        *((_QWORD *)i - 27) = v22;
        *((_QWORD *)i - 26) = *((_QWORD *)i - 4);
        if ( v21 )
        {
          *((_QWORD *)i - 6) = v21;
          *((_QWORD *)i - 4) = v23;
          goto LABEL_22;
        }
      }
      *((_QWORD *)i - 6) = i - 32;
      v21 = i - 32;
    }
LABEL_22:
    *((_QWORD *)i - 5) = 0;
    *v21 = 0;
    v24 = *((_BYTE **)i - 2);
    v25 = *((_BYTE **)i - 24);
    if ( i == v24 )
    {
      v37 = *((_QWORD *)i - 1);
      if ( v37 )
      {
        if ( v37 == 1 )
          *v25 = *i;
        else
          memcpy(v25, i, v37);
        v37 = *((_QWORD *)i - 1);
        v25 = *((_BYTE **)i - 24);
      }
      *((_QWORD *)v24 - 23) = v37;
      v25[v37] = 0;
      v25 = *((_BYTE **)v24 - 2);
    }
    else
    {
      if ( v25 == i - 176 )
      {
        v46 = *((_QWORD *)i - 1);
        *((_QWORD *)i - 24) = v24;
        *((_QWORD *)i - 23) = v46;
        *((_QWORD *)i - 22) = *(_QWORD *)i;
      }
      else
      {
        v26 = *((_QWORD *)i - 1);
        v27 = *((_QWORD *)i - 22);
        *((_QWORD *)i - 24) = v24;
        *((_QWORD *)i - 23) = v26;
        *((_QWORD *)i - 22) = *(_QWORD *)i;
        if ( v25 )
        {
          *((_QWORD *)i - 2) = v25;
          *(_QWORD *)i = v27;
          goto LABEL_26;
        }
      }
      *((_QWORD *)i - 2) = i;
      v25 = i;
    }
LABEL_26:
    *((_QWORD *)i - 1) = 0;
    *v25 = 0;
    *a1 = (__int64)v29;
  }
  v53 = v54;
LABEL_84:
  if ( v53 < 0 )
    goto LABEL_6;
LABEL_33:
  v36 = i - 336;
  sub_A0AAD0((__int64)(v28 - 176), v73);
  *((_DWORD *)v28 - 36) = v74;
  *((_DWORD *)v28 - 35) = v75;
  *((_DWORD *)v28 - 34) = v76;
  sub_A0AAD0((__int64)(v36 + 48), v77);
  sub_A0AAD0((__int64)(v36 + 80), v78);
  sub_A0AAD0((__int64)(v36 + 112), &v79);
  sub_A0AAD0((__int64)(v36 + 144), &s1);
  if ( s1 != v83 )
    operator delete(s1);
  sub_1213F50((__int64)v73);
}
