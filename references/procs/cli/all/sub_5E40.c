__int64 __fastcall sub_5E40(int a1, __int64 *a2, unsigned __int8 **a3, unsigned __int64 a4, int a5, int a6)
{
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned __int8 *v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // r15d
  __int64 v16; // rax
  unsigned __int8 *v17; // rax
  int v18; // edx
  unsigned int v19; // ecx
  unsigned __int8 *v20; // rax
  unsigned int v21; // r14d
  int *v22; // rdx
  int v23; // ecx
  __int64 v24; // rdi
  int v25; // edi
  unsigned int v26; // ecx
  int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  int *v30; // rdx
  unsigned __int8 *v31; // rax
  int v32; // ecx
  __int64 v33; // rdi
  int v34; // edi
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // rbp
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rbx
  int v42; // eax
  int v43; // edx
  int v44; // r12d
  __int64 *v45; // rax
  __int64 v46; // r8
  __int64 *v47; // rbp
  __int64 v48; // r11
  unsigned __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rbp
  unsigned __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rbp
  unsigned __int64 v56; // rdx
  __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned __int64 v62; // rbp
  __int64 v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // [rsp+8h] [rbp-2070h]
  __int64 v70; // [rsp+8h] [rbp-2070h]
  unsigned __int64 v71; // [rsp+10h] [rbp-2068h]
  unsigned __int64 v72; // [rsp+10h] [rbp-2068h]
  unsigned __int64 v73; // [rsp+10h] [rbp-2068h]
  unsigned int v74; // [rsp+10h] [rbp-2068h]
  __int64 v75; // [rsp+18h] [rbp-2060h]
  __int64 v76; // [rsp+18h] [rbp-2060h]
  __int64 v77; // [rsp+20h] [rbp-2058h]
  unsigned __int8 v78; // [rsp+2Fh] [rbp-2049h]
  _DWORD v79[1024]; // [rsp+30h] [rbp-2048h] BYREF
  _DWORD v80[1026]; // [rsp+1030h] [rbp-1048h] BYREF
  unsigned __int64 v81; // [rsp+2038h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v9 = sub_65F0(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, a6);
  if ( !(_BYTE)v9 )
    return 0;
  v12 = *a3;
  if ( (unsigned __int64)*a3 >= a4 )
    return 0;
  v10 = v9;
  v13 = *v12;
  v14 = a4 - (_DWORD)v12;
  if ( (v13 & 0x80u) != 0 )
  {
    if ( (v13 & 0xC0) == 0x80 )
    {
      if ( v14 <= 1 )
        return 0;
      v15 = ((_WORD)v13 << 8) & 0x3F00 | v12[1];
      v16 = 2;
    }
    else
    {
      if ( (v13 & 0xE0) != 0xC0 || v14 <= 3 )
        return 0;
      v15 = (v13 << 24) & 0x1F000000 | v12[3] | (v12[2] << 8) | (v12[1] << 16);
      v16 = 4;
    }
  }
  else
  {
    if ( !v14 )
      return 0;
    v15 = (unsigned __int8)v13;
    v16 = 1;
  }
  v17 = &v12[v16];
  *a3 = v17;
  if ( (unsigned __int64)v17 >= a4 )
    return 0;
  v18 = *v17;
  v19 = a4 - (_DWORD)v17;
  if ( (v18 & 0x80u) != 0 )
  {
    if ( (v18 & 0xC0) == 0x80 )
    {
      if ( v19 <= 1 )
        return 0;
      v21 = ((_WORD)v18 << 8) & 0x3F00 | v17[1];
      v36 = 2;
    }
    else
    {
      if ( (v18 & 0xE0) != 0xC0 || v19 <= 3 )
        return 0;
      v21 = (v18 << 24) & 0x1F000000 | v17[3] | (v17[2] << 8) | (v17[1] << 16);
      v36 = 4;
    }
    v20 = &v17[v36];
    *a3 = v20;
    if ( v21 > 0x400 )
    {
      sub_5D80(a2, (__int64)"!![[%u array sizes]]", v21);
      return v10;
    }
  }
  else
  {
    if ( !v19 )
      return 0;
    v20 = v17 + 1;
    v21 = (unsigned __int8)v18;
    *a3 = v20;
  }
  if ( v21 )
  {
    v22 = v79;
    while ( (unsigned __int64)v20 < a4 )
    {
      v25 = *v20;
      v26 = a4 - (_DWORD)v20;
      if ( (v25 & 0x80u) == 0 )
      {
        if ( !v26 )
          return 0;
        v23 = (unsigned __int8)v25;
        v24 = 1;
      }
      else if ( (v25 & 0xC0) == 0x80 )
      {
        if ( v26 <= 1 )
          return 0;
        v23 = v20[1] | ((_WORD)v25 << 8) & 0x3F00;
        v24 = 2;
      }
      else
      {
        if ( (v25 & 0xE0) != 0xC0 || v26 <= 3 )
          return 0;
        v23 = (v25 << 24) & 0x1F000000 | v20[3] | (v20[2] << 8) | (v20[1] << 16);
        v24 = 4;
      }
      *v22 = v23;
      v20 += v24;
      ++v22;
      *a3 = v20;
      if ( &v79[v21] == v22 )
        goto LABEL_29;
    }
    return 0;
  }
LABEL_29:
  if ( (unsigned __int64)v20 >= a4 )
    return 0;
  v27 = *v20;
  v28 = a4 - (_DWORD)v20;
  if ( (v27 & 0x80u) == 0 )
  {
    if ( v28 )
    {
      v29 = (unsigned __int8)v27;
      *a3 = v20 + 1;
      goto LABEL_33;
    }
    return 0;
  }
  if ( (v27 & 0xC0) == 0x80 )
  {
    if ( v28 <= 1 )
      return 0;
    v29 = ((_WORD)v27 << 8) & 0x3F00 | v20[1];
    v66 = 2;
  }
  else
  {
    if ( (v27 & 0xE0) != 0xC0 || v28 <= 3 )
      return 0;
    v29 = (v27 << 24) & 0x1F000000 | v20[3] | (v20[2] << 8) | (v20[1] << 16);
    v66 = 4;
  }
  *a3 = &v20[v66];
  if ( v29 > 0x400 )
  {
    sub_5D80(a2, (__int64)"!![[%u array lobounds]]", v29);
    return v10;
  }
LABEL_33:
  if ( v29 )
  {
    v30 = v80;
    v31 = *a3;
    while ( (unsigned __int64)v31 < a4 )
    {
      v34 = *v31;
      v35 = a4 - (_DWORD)v31;
      if ( (v34 & 0x80u) == 0 )
      {
        if ( !v35 )
          return 0;
        v32 = (unsigned __int8)v34;
        v33 = 1;
      }
      else if ( (v34 & 0xC0) == 0x80 )
      {
        if ( v35 <= 1 )
          return 0;
        v32 = v31[1] | ((_WORD)v34 << 8) & 0x3F00;
        v33 = 2;
      }
      else
      {
        if ( (v34 & 0xE0) != 0xC0 || v35 <= 3 )
          return 0;
        v32 = (v34 << 24) & 0x1F000000 | v31[3] | (v31[2] << 8) | (v31[1] << 16);
        v33 = 4;
      }
      *v30 = v32;
      v31 += v33;
      ++v30;
      *a3 = v31;
      if ( &v80[v29] == v30 )
        goto LABEL_54;
    }
    return 0;
  }
LABEL_54:
  v37 = a2[1];
  if ( v37 )
  {
    v38 = v37 + 1;
    v39 = a2[1];
    --v37;
  }
  else
  {
    v38 = 2;
    v39 = 1;
  }
  v40 = *a2;
  if ( a2[2] < v38 )
  {
    v74 = v29;
    v70 = v39;
    v67 = qvector_reserve(a2, v40, v38, 1);
    v29 = v74;
    v39 = v70;
    *a2 = v67;
    v40 = v67;
  }
  a2[1] = v38;
  *(_BYTE *)(v40 + v39) = 0;
  *(_BYTE *)(*a2 + v37) = 91;
  v41 = 0;
  if ( v15 )
  {
    v69 = v29;
    v78 = v10;
    do
    {
      if ( v41 )
      {
        v55 = a2[1];
        if ( v55 )
        {
          v56 = v55 + 1;
          v57 = a2[1];
          --v55;
        }
        else
        {
          v56 = 2;
          v57 = 1;
        }
        v58 = *a2;
        if ( a2[2] < v56 )
        {
          v73 = v56;
          v65 = qvector_reserve(a2, v58, v56, 1);
          v56 = v73;
          *a2 = v65;
          v58 = v65;
        }
        a2[1] = v56;
        *(_BYTE *)(v58 + v57) = 0;
        *(_BYTE *)(*a2 + v55) = 44;
      }
      if ( (unsigned int)v41 < v69 )
      {
        v42 = v80[v41];
        v43 = v42;
      }
      else
      {
        v43 = 0;
        v42 = 0;
      }
      v44 = -1;
      if ( (unsigned int)v41 < v21 )
        v44 = v42 + v79[v41] - 1;
      v45 = sub_5D80(a2, (__int64)"%d", v43);
      v46 = v45[1];
      v47 = v45;
      if ( v46 )
      {
        v48 = v46 + 1;
        v49 = v46 + 2;
        --v46;
      }
      else
      {
        v49 = 3;
        v48 = 2;
      }
      v50 = *v45;
      if ( v45[2] < v49 )
      {
        v77 = v46;
        v75 = v48;
        v71 = v49;
        v59 = qvector_reserve(v45, v50, v49, 1);
        v46 = v77;
        v48 = v75;
        *v47 = v59;
        v49 = v71;
        v50 = v59;
      }
      v47[1] = v49;
      *(_BYTE *)(v50 + v48) = 0;
      *(_WORD *)(*v47 + v46) = 11822;
      if ( v44 < 0 )
      {
        v51 = a2[1];
        if ( v51 )
        {
          v52 = v51 + 1;
          v53 = a2[1];
          --v51;
        }
        else
        {
          v52 = 2;
          v53 = 1;
        }
        v54 = *a2;
        if ( a2[2] < v52 )
        {
          v76 = v53;
          v72 = v52;
          v60 = qvector_reserve(a2, v54, v52, 1);
          v53 = v76;
          v52 = v72;
          *a2 = v60;
          v54 = v60;
        }
        a2[1] = v52;
        *(_BYTE *)(v54 + v53) = 0;
        *(_BYTE *)(*a2 + v51) = 46;
      }
      else
      {
        sub_5D80(a2, (__int64)"%d", v44);
      }
      ++v41;
    }
    while ( v41 != v15 );
    v10 = v78;
  }
  v61 = a2[1];
  if ( v61 )
  {
    v62 = v61 + 1;
    v63 = a2[1];
    --v61;
  }
  else
  {
    v62 = 2;
    v63 = 1;
  }
  v64 = *a2;
  if ( a2[2] < v62 )
  {
    v68 = qvector_reserve(a2, v64, v62, 1);
    *a2 = v68;
    v64 = v68;
  }
  a2[1] = v62;
  *(_BYTE *)(v64 + v63) = 0;
  *(_BYTE *)(*a2 + v61) = 93;
  return v10;
}
