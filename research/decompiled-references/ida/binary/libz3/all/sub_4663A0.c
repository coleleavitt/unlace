__int64 __fastcall sub_4663A0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  _DWORD *v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  void *v21; // r13
  __int64 v22; // r13
  int v23; // edx
  _QWORD *v24; // rcx
  void *v25; // r13
  void *v26; // r13
  __int64 v27; // r12
  void *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rax
  char *v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rdi
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rsi
  __int64 v52; // rdi
  char *v53; // rbx
  __int64 result; // rax
  char *v55; // rbp
  __int64 v56; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // r9
  struct _Unwind_Exception *v59; // [rsp+0h] [rbp-168h]
  void *v60; // [rsp+8h] [rbp-160h]
  int v61; // [rsp+8h] [rbp-160h]
  __int64 v62; // [rsp+10h] [rbp-158h]
  int v64; // [rsp+20h] [rbp-148h]
  unsigned __int8 v65; // [rsp+27h] [rbp-141h]
  _QWORD *v66; // [rsp+30h] [rbp-138h]
  int v68[2]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v69; // [rsp+48h] [rbp-120h]
  int v70[2]; // [rsp+50h] [rbp-118h] BYREF
  __int64 v71; // [rsp+58h] [rbp-110h]
  _QWORD v72[2]; // [rsp+60h] [rbp-108h] BYREF
  int v73[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v74; // [rsp+78h] [rbp-F0h]
  _QWORD v75[2]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+90h] [rbp-D8h]
  void *ptr; // [rsp+98h] [rbp-D0h]
  __int64 v78; // [rsp+A0h] [rbp-C8h]
  _BYTE v79[192]; // [rsp+A8h] [rbp-C0h] BYREF

  v7 = *(_QWORD *)(a1 + 32);
  v8 = *a2;
  ptr = v79;
  v76 = v7;
  v78 = 0x1000000000LL;
  *(_QWORD *)v68 = 0;
  v69 = v7;
  if ( !v8 )
  {
    v65 = 0;
    if ( *(_DWORD *)(a1 + 80) )
      goto LABEL_70;
    goto LABEL_100;
  }
  v64 = *(_DWORD *)(v8 - 4);
  if ( !v64 )
  {
    v65 = 0;
    if ( *(_DWORD *)(a1 + 80) )
      goto LABEL_101;
LABEL_100:
    sub_1872CE0("");
    sub_1873130(114, 185);
  }
  v62 = *(unsigned int *)(v8 - 4);
  v9 = 0;
  v65 = 0;
  while ( 1 )
  {
    *(_QWORD *)v70 = 0;
    v26 = qword_1C7F2C0;
    v71 = 0;
    v72[0] = 1;
    v27 = 32 * v9 + v8;
    v72[1] = 0;
    if ( (*(_BYTE *)(v27 + 4) & 1) != 0 )
      break;
    v70[0] = *(_DWORD *)v27;
    if ( (*(_BYTE *)(v27 + 20) & 1) != 0 )
      goto LABEL_28;
LABEL_5:
    v10 = *(_DWORD *)(v27 + 16);
    v11 = v70[0];
    BYTE4(v72[0]) &= ~1u;
    LODWORD(v72[0]) = v10;
    if ( v70[0] )
      goto LABEL_6;
LABEL_29:
    v28 = qword_1C7F2C0;
    ++v9;
    sub_182CBA0(qword_1C7F2C0, v70);
    sub_182CBA0(v28, v72);
    if ( v9 == v62 )
      goto LABEL_30;
LABEL_25:
    v8 = *a2;
  }
  sub_182C690(qword_1C7F2C0, v70, v27);
  if ( (*(_BYTE *)(v27 + 20) & 1) == 0 )
    goto LABEL_5;
LABEL_28:
  sub_182C690(v26, v72, v27 + 16);
  v11 = v70[0];
  if ( !v70[0] )
    goto LABEL_29;
LABEL_6:
  if ( (unsigned int)v9 >= v64 - 1 )
  {
    v35 = *(unsigned int *)(a1 + 80);
    if ( (_DWORD)v35 )
    {
      v37 = sub_1674520(a1 + 56, v70, v35);
      v22 = v37;
      if ( v37 )
        goto LABEL_52;
    }
    else
    {
      v36 = *(_QWORD *)(a1 + 48);
      if ( !v36 )
      {
        sub_16669E0(a1 + 40);
        v36 = *(_QWORD *)(a1 + 48);
      }
      v37 = sub_166A700(v36, (unsigned int)v70, v65, v11, a5, a6);
      v22 = v37;
      if ( v37 )
      {
LABEL_52:
        v38 = *(_QWORD *)v68;
        ++*(_DWORD *)(v37 + 8);
        if ( !v38 || (v39 = v69, v15 = *(_DWORD *)(v38 + 8) == 1, --*(_DWORD *)(v38 + 8), !v15) )
        {
          *(_QWORD *)v68 = v22;
          goto LABEL_21;
        }
        goto LABEL_93;
      }
    }
    v38 = *(_QWORD *)v68;
    if ( !*(_QWORD *)v68
      || (v39 = v69, v15 = *(_DWORD *)(*(_QWORD *)v68 + 8LL) == 1, --*(_DWORD *)(*(_QWORD *)v68 + 8LL), !v15) )
    {
      *(_QWORD *)v68 = 0;
      goto LABEL_22;
    }
LABEL_93:
    sub_15D7BC0(v39, v38);
    *(_QWORD *)v68 = v22;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v9);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = *(_QWORD *)v68;
  if ( *(_QWORD *)v68 )
  {
    v14 = v69;
    v15 = (*(_DWORD *)(*(_QWORD *)v68 + 8LL))-- == 1;
    if ( v15 )
      sub_15D7BC0(v14, v13);
  }
  *(_QWORD *)v68 = v12;
  v16 = *(_DWORD **)(sub_15D1F10(v12) + 24);
  if ( v16 && *v16 == 5 )
    v65 |= v16[1] == 1;
  *(_QWORD *)v73 = 0;
  v21 = qword_1C7F2C0;
  v74 = 0;
  v75[0] = 1;
  v75[1] = 0;
  if ( (v70[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v73, v70);
  else
    v73[0] = v70[0];
  if ( (v72[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v21, v75, v72);
  }
  else
  {
    BYTE4(v75[0]) &= ~1u;
    LODWORD(v75[0]) = v72[0];
  }
  sub_491350((int)v68, (int)v73, v17, v18, v19, v20, v59);
  v60 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v73);
  sub_182CBA0(v60, v75);
  v22 = *(_QWORD *)v68;
LABEL_20:
  if ( v22 )
LABEL_21:
    ++*(_DWORD *)(v22 + 8);
LABEL_22:
  v23 = v78;
  if ( (unsigned int)v78 >= HIDWORD(v78) )
  {
    v61 = 2 * HIDWORD(v78);
    v31 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v78)));
    v23 = v78;
    v32 = (char *)ptr;
    v24 = v31;
    if ( (_DWORD)v78 )
    {
      if ( (unsigned int)(v78 - 1) <= 2 || v31 == (char *)ptr + 8 )
      {
        v57 = 0;
        v58 = 8LL * (unsigned int)v78;
        do
        {
          v24[v57 / 8] = *(_QWORD *)&v32[v57];
          v57 += 8LL;
        }
        while ( v57 != v58 );
      }
      else
      {
        v33 = 0;
        v34 = 16LL * ((unsigned int)v78 >> 1);
        do
        {
          *(__m128i *)&v24[v33 / 8] = _mm_loadu_si128((const __m128i *)&v32[v33]);
          v33 += 16LL;
        }
        while ( v34 != v33 );
        if ( (v23 & 1) != 0 )
          v24[v23 & 0xFFFFFFFE] = *(_QWORD *)&v32[8 * (v23 & 0xFFFFFFFE)];
      }
    }
    if ( v32 != v79 && v32 )
    {
      v66 = v24;
      sub_186B220(v32);
      v23 = v78;
      v24 = v66;
    }
    ptr = v24;
    HIDWORD(v78) = v61;
  }
  else
  {
    v24 = ptr;
  }
  ++v9;
  v24[v23] = v22;
  v25 = qword_1C7F2C0;
  LODWORD(v78) = v23 + 1;
  sub_182CBA0(qword_1C7F2C0, v70);
  sub_182CBA0(v25, v72);
  if ( v9 != v62 )
    goto LABEL_25;
LABEL_30:
  a4 = v78;
  if ( !*(_DWORD *)(a1 + 80) )
  {
    if ( (_DWORD)v78 == 1 )
    {
      v8 = *(_QWORD *)ptr;
      goto LABEL_63;
    }
    if ( (unsigned int)v78 > 1 )
    {
      v30 = sub_15E1AF0(*(_QWORD *)(a1 + 40));
      goto LABEL_62;
    }
    goto LABEL_100;
  }
  a5 = (int)ptr;
  if ( !(_DWORD)v78 )
  {
LABEL_101:
    v40 = *(_QWORD *)v68;
    v41 = v69;
    v8 = 0;
    goto LABEL_66;
  }
  if ( (_DWORD)v78 == 1 )
  {
    v8 = *(_QWORD *)ptr;
    if ( !*(_WORD *)(*(_QWORD *)ptr + 4LL) )
      goto LABEL_64;
    goto LABEL_101;
  }
  v29 = *(_QWORD *)(a1 + 64);
  if ( (_DWORD)v78 == 2 )
    v30 = sub_15E1B70(v29);
  else
    v30 = sub_15E1AF0(v29);
LABEL_62:
  v8 = v30;
LABEL_63:
  if ( v8 )
LABEL_64:
    ++*(_DWORD *)(v8 + 8);
  v40 = *(_QWORD *)v68;
  v41 = v69;
LABEL_66:
  if ( v40 )
  {
    v15 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v41, v40);
  }
  v7 = *(_QWORD *)(a1 + 32);
LABEL_70:
  v42 = *(unsigned int *)(a1 + 80);
  *(_QWORD *)v68 = v8;
  if ( (_DWORD)v42 )
  {
    sub_1674520(a1 + 56, &qword_1C7F2A0, v42);
  }
  else
  {
    v43 = *(_QWORD *)(a1 + 48);
    if ( !v43 )
    {
      sub_16669E0(a1 + 40);
      v43 = *(_QWORD *)(a1 + 48);
    }
    sub_166A700(v43, (unsigned int)&qword_1C7F2A0, v65, a4, a5, a6);
  }
  v44 = sub_15E1B70(v7);
  v45 = v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  v46 = *(_QWORD *)v68;
  if ( *(_QWORD *)v68 )
  {
    v47 = v69;
    v15 = (*(_DWORD *)(*(_QWORD *)v68 + 8LL))-- == 1;
    if ( v15 )
      sub_15D7BC0(v47, v46);
  }
  *(_QWORD *)v68 = v45;
  *(_QWORD *)v70 = 0;
  sub_1862300(v70, "som", 1);
  sub_1862300(v70, "flat", 1);
  sub_14B7810((int)v73, *(_QWORD *)(a1 + 32), (int)v70, v48, v49, v50, v59);
  sub_14B9BF0(v73, *(_QWORD *)v68, a3);
  sub_14B63F0(v73);
  sub_18572D0(v70);
  v51 = *(_QWORD *)v68;
  if ( *(_QWORD *)v68 )
  {
    v52 = v69;
    v15 = (*(_DWORD *)(*(_QWORD *)v68 + 8LL))-- == 1;
    if ( v15 )
      sub_15D7BC0(v52, v51);
  }
  v53 = (char *)ptr;
  result = (unsigned int)v78;
  v55 = (char *)ptr + 8 * (unsigned int)v78;
  if ( ptr < v55 )
  {
    do
    {
      while ( 1 )
      {
        v56 = *(_QWORD *)v53;
        if ( *(_QWORD *)v53 )
        {
          v15 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v15 )
            break;
        }
        v53 += 8;
        if ( v53 >= v55 )
          goto LABEL_88;
      }
      result = sub_15D7BC0(v76, v56);
      v53 += 8;
    }
    while ( v53 < v55 );
LABEL_88:
    v53 = (char *)ptr;
  }
  if ( v53 )
  {
    result = (__int64)v79;
    if ( v53 != v79 )
      return sub_186B220(v53);
  }
  return result;
}

