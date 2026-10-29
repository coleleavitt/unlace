__int64 __fastcall sub_42A7B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // r13
  int v7; // r10d
  int v8; // r14d
  int v9; // r15d
  __int64 v10; // rbx
  int v11; // r8d
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // esi
  _BYTE *v15; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  int v31; // eax
  int v32; // edx
  int v33; // ebx
  _BYTE *v34; // rcx
  int v35; // eax
  int v36; // edx
  unsigned int v37; // esi
  int v38; // ebx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  int v41; // ebx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // edx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  __int64 v51; // rdx
  _BYTE *v52; // rcx
  __int64 v53; // rcx
  int v54; // r15d
  _BYTE *v55; // rcx
  _BYTE *v56; // rcx
  int v57; // eax
  int v58; // edx
  _BYTE *v59; // rcx
  _BYTE *v60; // rcx
  _BYTE *v61; // rcx
  __int64 v62; // rdx
  _BYTE *v63; // rcx
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  _BYTE *v66; // rcx
  __int64 v67; // rdx
  _BYTE *v68; // rcx
  int v69; // r15d
  _BYTE *v70; // rcx
  __int64 v71; // rax
  int v72; // ecx
  int v73; // edx
  _BYTE *v74; // rcx
  _BYTE *v75; // rcx
  _BYTE *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // [rsp+8h] [rbp-130h]
  int v80; // [rsp+Ch] [rbp-12Ch]
  int v82; // [rsp+1Ch] [rbp-11Ch] BYREF
  __int64 v83; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v84; // [rsp+28h] [rbp-110h]

  v4 = a4;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(a2 + 28);
  LODWORD(a4) = 1;
  v79 = *(_DWORD *)(v6 + 28) - 1;
  if ( v7 <= 2 )
    return (unsigned int)a4;
  v8 = 0;
  v9 = 0;
  v80 = 0;
  v10 = *(_QWORD *)(a2 + 32);
  v11 = 1;
  if ( v7 - 2 <= 1 )
  {
LABEL_14:
    a4 = 1;
    if ( v7 - v11 != 2 )
      return (unsigned int)a4;
    v17 = v10 + 24LL * *(int *)(v10 + 20);
    v18 = v17 + 24;
    if ( *(_DWORD *)(v17 + 24) != 2 )
      goto LABEL_17;
    v37 = *(_DWORD *)(v17 + 64);
    if ( v9 == 0 && **(_BYTE **)(v17 + 56) == 45 )
      return (unsigned int)a4;
    if ( !v37 )
    {
      LOBYTE(a4) = 0;
      v38 = sub_471010(v4, "1", 1, a4);
      if ( v38 > 255 )
      {
        v64 = *(_BYTE **)(v4 + 120);
        if ( (unsigned __int64)(v64 + 5) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v64 = *(_BYTE **)(v4 + 120);
        }
        *v64 = 2;
        v65 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v65;
        *v65 = HIBYTE(v38);
        v66 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v66;
        *v66 = BYTE2(v38);
        v67 = *(_QWORD *)(v4 + 120);
        *(_QWORD *)(v4 + 120) = v67 + 1;
        *(_BYTE *)(v67 + 1) = BYTE1(v38);
        v68 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v68;
        *v68 = v38;
        ++*(_QWORD *)(v4 + 120);
        *(_DWORD *)(v4 + 3276) = 0;
        v31 = dword_65444C;
      }
      else
      {
        v39 = *(_BYTE **)(v4 + 120);
        if ( (unsigned __int64)(v39 + 2) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v39 = *(_BYTE **)(v4 + 120);
        }
        *v39 = 1;
        v40 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v40;
        *v40 = v38;
        ++*(_QWORD *)(v4 + 120);
        *(_DWORD *)(v4 + 3276) = 0;
        v31 = dword_65442C;
      }
      if ( !v31 )
        goto LABEL_29;
      if ( v31 == 0x80000000 )
        v31 = 1 - v38;
      goto LABEL_26;
    }
    if ( (unsigned int)sub_4A0150(0, *(_QWORD *)(v17 + 56), v37, &v83, &v82) )
    {
      if ( *(_DWORD *)v18 != 2 )
      {
LABEL_17:
        v19 = *(_QWORD *)(v6 + 16);
        v20 = 24LL * v79;
        v21 = *(_QWORD *)(v20 + v19 + 8);
        v22 = *(_QWORD *)(v20 + v19 + 16);
        *(_DWORD *)(v4 + 3272) = *(_DWORD *)(v21 + 4LL * *(int *)(a2 + 28) - 8);
        v23 = *(unsigned int *)(v18 + 20);
        *(_QWORD *)(v4 + 3288) = *(_QWORD *)(v22 + 8LL * *(int *)(a2 + 28) - 16);
        sub_4399D0(a1, v18 + 24, v23, v4);
        goto LABEL_18;
      }
      v54 = sub_471010(v4, *(_QWORD *)(v18 + 32), *(unsigned int *)(v18 + 40), 0);
      if ( v54 > 255 )
      {
        v59 = *(_BYTE **)(v4 + 120);
        if ( (unsigned __int64)(v59 + 5) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v59 = *(_BYTE **)(v4 + 120);
        }
        *v59 = 2;
        v60 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v60;
        *v60 = HIBYTE(v54);
        v61 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v61;
        *v61 = BYTE2(v54);
        v62 = *(_QWORD *)(v4 + 120);
        *(_QWORD *)(v4 + 120) = v62 + 1;
        *(_BYTE *)(v62 + 1) = BYTE1(v54);
        v63 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v63;
        *v63 = v54;
        ++*(_QWORD *)(v4 + 120);
        *(_DWORD *)(v4 + 3276) = 0;
        v57 = dword_65444C;
      }
      else
      {
        v55 = *(_BYTE **)(v4 + 120);
        if ( (unsigned __int64)(v55 + 2) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v55 = *(_BYTE **)(v4 + 120);
        }
        *v55 = 1;
        v56 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v56;
        *v56 = v54;
        ++*(_QWORD *)(v4 + 120);
        *(_DWORD *)(v4 + 3276) = 0;
        v57 = dword_65442C;
      }
      if ( v57 )
      {
        if ( v57 == 0x80000000 )
          v57 = 1 - v54;
        if ( v57 >= 0 )
        {
          v58 = *(_DWORD *)(v4 + 48);
LABEL_80:
          *(_DWORD *)(v4 + 48) = v57 + v58;
          goto LABEL_18;
        }
        v58 = *(_DWORD *)(v4 + 48);
        if ( *(_DWORD *)(v4 + 44) >= v58 )
          goto LABEL_80;
        *(_DWORD *)(v4 + 44) = v58;
        *(_DWORD *)(v4 + 48) = v57 + v58;
      }
    }
    else
    {
      v80 = 1;
      v69 = sub_471010(v4, v83, v84, 0);
      if ( v69 > 255 )
      {
        v74 = *(_BYTE **)(v4 + 120);
        if ( (unsigned __int64)(v74 + 5) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v74 = *(_BYTE **)(v4 + 120);
        }
        *v74 = 2;
        v75 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v75;
        *v75 = HIBYTE(v69);
        v76 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v76;
        *v76 = BYTE2(v69);
        v77 = *(_QWORD *)(v4 + 120);
        *(_QWORD *)(v4 + 120) = v77 + 1;
        *(_BYTE *)(v77 + 1) = BYTE1(v69);
        v78 = *(_QWORD *)(v4 + 120);
        *(_QWORD *)(v4 + 120) = v78 + 1;
        *(_BYTE *)(v78 + 1) = v69;
        ++*(_QWORD *)(v4 + 120);
        *(_DWORD *)(v4 + 3276) = 0;
        v72 = dword_65444C;
      }
      else
      {
        v70 = *(_BYTE **)(v4 + 120);
        if ( (unsigned __int64)(v70 + 2) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v70 = *(_BYTE **)(v4 + 120);
        }
        *v70 = 1;
        v71 = *(_QWORD *)(v4 + 120);
        *(_QWORD *)(v4 + 120) = v71 + 1;
        *(_BYTE *)(v71 + 1) = v69;
        ++*(_QWORD *)(v4 + 120);
        *(_DWORD *)(v4 + 3276) = 0;
        v72 = dword_65442C;
      }
      if ( v72 )
      {
        if ( v72 == 0x80000000 )
          v72 = 1 - v69;
        if ( v72 < 0 )
        {
          v73 = *(_DWORD *)(v4 + 48);
          if ( *(_DWORD *)(v4 + 44) < v73 )
            *(_DWORD *)(v4 + 44) = v73;
        }
        else
        {
          v73 = *(_DWORD *)(v4 + 48);
        }
        *(_DWORD *)(v4 + 48) = v72 + v73;
      }
      sub_49F100(&v83);
    }
LABEL_18:
    v24 = v18 + 24LL * *(int *)(v18 + 20);
    if ( *(_DWORD *)(v24 + 24) != 2 )
    {
      v25 = *(_QWORD *)(v6 + 16);
      v26 = 24LL * v79;
      v27 = *(_QWORD *)(v26 + v25 + 8);
      v28 = *(_QWORD *)(v26 + v25 + 16);
      *(_DWORD *)(v4 + 3272) = *(_DWORD *)(v27 + 4LL * *(int *)(a2 + 28) - 4);
      v29 = *(unsigned int *)(v24 + 44);
      *(_QWORD *)(v4 + 3288) = *(_QWORD *)(v28 + 8LL * *(int *)(a2 + 28) - 8);
      sub_4399D0(a1, v24 + 48, v29, v4);
      v30 = *(_BYTE **)(v4 + 120);
      goto LABEL_20;
    }
    v41 = sub_471010(v4, *(_QWORD *)(v24 + 56), *(unsigned int *)(v24 + 64), 0);
    if ( v41 > 255 )
    {
      v48 = *(_BYTE **)(v4 + 120);
      if ( (unsigned __int64)(v48 + 5) > *(_QWORD *)(v4 + 128) )
      {
        sub_439150(v4);
        v48 = *(_BYTE **)(v4 + 120);
      }
      *v48 = 2;
      v49 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
      *(_QWORD *)(v4 + 120) = v49;
      *v49 = HIBYTE(v41);
      v50 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
      *(_QWORD *)(v4 + 120) = v50;
      *v50 = BYTE2(v41);
      v51 = *(_QWORD *)(v4 + 120);
      *(_QWORD *)(v4 + 120) = v51 + 1;
      *(_BYTE *)(v51 + 1) = BYTE1(v41);
      v52 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
      *(_QWORD *)(v4 + 120) = v52;
      *v52 = v41;
      v53 = *(_QWORD *)(v4 + 120);
      *(_DWORD *)(v4 + 3276) = 0;
      v45 = dword_65444C;
      v30 = (_BYTE *)(v53 + 1);
      *(_QWORD *)(v4 + 120) = v30;
    }
    else
    {
      v42 = *(_BYTE **)(v4 + 120);
      if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(v4 + 128) )
      {
        sub_439150(v4);
        v42 = *(_BYTE **)(v4 + 120);
      }
      *v42 = 1;
      v43 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
      *(_QWORD *)(v4 + 120) = v43;
      *v43 = v41;
      v44 = *(_QWORD *)(v4 + 120);
      *(_DWORD *)(v4 + 3276) = 0;
      v45 = dword_65442C;
      v30 = (_BYTE *)(v44 + 1);
      *(_QWORD *)(v4 + 120) = v30;
    }
    if ( v45 )
    {
      if ( v45 == 0x80000000 )
        v45 = 1 - v41;
      if ( v45 >= 0 )
      {
        v46 = *(_DWORD *)(v4 + 48);
LABEL_60:
        *(_DWORD *)(v4 + 48) = v45 + v46;
        goto LABEL_20;
      }
      v46 = *(_DWORD *)(v4 + 48);
      if ( *(_DWORD *)(v4 + 44) >= v46 )
        goto LABEL_60;
      *(_DWORD *)(v4 + 44) = v46;
      *(_DWORD *)(v4 + 48) = v45 + v46;
    }
LABEL_20:
    if ( v80 )
    {
      if ( v8 == 0 && v82 != 0 )
      {
        if ( v30 == *(_BYTE **)(v4 + 128) )
        {
          sub_439150(v4);
          v30 = *(_BYTE **)(v4 + 120);
        }
        *v30 = 73;
        *(_DWORD *)(v4 + 3276) = 0;
        v31 = dword_654D2C;
        ++*(_QWORD *)(v4 + 120);
        if ( !v31 )
          goto LABEL_29;
        if ( v31 == 0x80000000 )
        {
          v32 = *(_DWORD *)(v4 + 48);
          v31 = 1;
          goto LABEL_28;
        }
      }
      else
      {
        if ( (unsigned __int64)(v30 + 2) > *(_QWORD *)(v4 + 128) )
        {
          sub_439150(v4);
          v30 = *(_BYTE **)(v4 + 120);
        }
        *v30 = 78;
        v47 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
        *(_QWORD *)(v4 + 120) = v47;
        *v47 = v8;
        *(_DWORD *)(v4 + 3276) = 0;
        v31 = dword_654DCC;
        ++*(_QWORD *)(v4 + 120);
        if ( !v31 )
          goto LABEL_29;
        if ( v31 == 0x80000000 )
          v31 = 1 - v8;
      }
LABEL_26:
      if ( v31 < 0 )
      {
        v32 = *(_DWORD *)(v4 + 48);
        if ( *(_DWORD *)(v4 + 44) < v32 )
        {
          *(_DWORD *)(v4 + 44) = v32;
          *(_DWORD *)(v4 + 48) = v31 + v32;
          goto LABEL_29;
        }
      }
      else
      {
        v32 = *(_DWORD *)(v4 + 48);
      }
LABEL_28:
      *(_DWORD *)(v4 + 48) = v31 + v32;
LABEL_29:
      LODWORD(a4) = 0;
      return (unsigned int)a4;
    }
    v33 = v8 == 0 ? 3 : 11;
    if ( (unsigned __int64)(v30 + 2) > *(_QWORD *)(v4 + 128) )
    {
      sub_439150(v4);
      v30 = *(_BYTE **)(v4 + 120);
    }
    *v30 = 127;
    v34 = (_BYTE *)(*(_QWORD *)(v4 + 120) + 1LL);
    *(_QWORD *)(v4 + 120) = v34;
    *v34 = v33;
    *(_DWORD *)(v4 + 3276) = 0;
    v35 = dword_6553EC;
    ++*(_QWORD *)(v4 + 120);
    if ( !v35 )
      goto LABEL_29;
    if ( v35 == 0x80000000 )
      v35 = 1 - v33;
    if ( v35 < 0 )
    {
      v36 = *(_DWORD *)(v4 + 48);
      if ( *(_DWORD *)(v4 + 44) < v36 )
      {
        *(_DWORD *)(v4 + 44) = v36;
        *(_DWORD *)(v4 + 48) = v36 + v35;
        goto LABEL_39;
      }
    }
    else
    {
      v36 = *(_DWORD *)(v4 + 48);
    }
    *(_DWORD *)(v4 + 48) = v36 + v35;
LABEL_39:
    LODWORD(a4) = 0;
    return (unsigned int)a4;
  }
  while ( 1 )
  {
    v13 = v10 + 24LL * *(int *)(v10 + 20);
    v10 = v13 + 24;
    if ( *(_DWORD *)(v13 + 24) != 2 )
      break;
    v14 = *(_DWORD *)(v13 + 64);
    v15 = *(_BYTE **)(v13 + 56);
    if ( v14 == 2 )
    {
      if ( *v15 == 45 && v15[1] == 45 )
      {
        v9 = 1;
        ++v11;
        goto LABEL_14;
      }
    }
    else if ( v14 <= 1 )
    {
      break;
    }
    v12 = (unsigned int)v14;
    if ( (unsigned int)v14 >= 9uLL )
      v12 = 8;
    if ( memcmp(*(const void **)(v13 + 56), "-nocase", v12) )
      break;
    ++v11;
    v8 = 1;
    if ( v7 - 2 <= v11 )
      goto LABEL_14;
  }
  LODWORD(a4) = 1;
  return (unsigned int)a4;
}

