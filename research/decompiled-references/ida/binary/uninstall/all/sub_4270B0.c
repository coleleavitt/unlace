__int64 __fastcall sub_4270B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v6; // edx
  __int64 v8; // r14
  __int64 v9; // r13
  _BYTE *v10; // rcx
  char v11; // al
  _BYTE *v12; // rcx
  int v13; // edx
  int v14; // eax
  char v15; // al
  _BYTE *v16; // rcx
  __int64 v17; // rsi
  int v18; // edx
  _BYTE *v19; // rsi
  _BYTE *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // al
  _BYTE *v26; // rcx
  __int64 v27; // rsi
  int v28; // eax
  char v29; // al
  _BYTE *v30; // rcx
  char v31; // al
  _BYTE *v32; // rcx
  void *v33; // r14
  unsigned int v34; // r13d
  int *v35; // rax
  int *v36; // rbx
  int v37; // ebp
  int v38; // eax
  bool v39; // zf
  int v40; // ebx
  _BYTE *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // edx
  int v45; // eax
  char v46; // al
  _BYTE *v47; // rcx
  char v48; // al
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  _BYTE *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 *v57; // rdi
  int v58; // [rsp+24h] [rbp-44h]
  int v59; // [rsp+28h] [rbp-40h] BYREF
  int v60; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v61; // [rsp+30h] [rbp-38h] BYREF
  int v62; // [rsp+34h] [rbp-34h] BYREF

  v5 = *(_QWORD *)(a4 + 3264);
  v6 = 1;
  if ( (unsigned int)(*(_DWORD *)(a2 + 28) - 2) > 1 )
    return v6;
  v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
  v9 = 24LL * (*(_DWORD *)(v5 + 28) - 1);
  sub_41F660(
    a1,
    v8,
    a4,
    3u,
    (unsigned int *)&v60,
    &v61,
    &v62,
    *(_DWORD *)(*(_QWORD *)(v9 + *(_QWORD *)(v5 + 16) + 8) + 4LL),
    *(_QWORD *)(*(_QWORD *)(v9 + *(_QWORD *)(v5 + 16) + 16) + 8LL));
  v59 = 1;
  v58 = 0;
  if ( *(_DWORD *)(a2 + 28) != 3 )
    goto LABEL_4;
  v21 = v8 + 24LL * *(int *)(v8 + 20);
  if ( *(_DWORD *)(v21 + 24) != 2 )
  {
    v22 = *(_QWORD *)(v5 + 16);
    *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v9 + v22 + 8) + 8LL);
    v23 = *(_QWORD *)(v9 + v22 + 16);
    v24 = *(unsigned int *)(v21 + 44);
    *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v23 + 16);
    sub_4399D0(a1, v21 + 48, v24, a4);
    goto LABEL_5;
  }
  v33 = *(void **)(v21 + 56);
  v34 = *(_DWORD *)(v21 + 64);
  v35 = (int *)sub_48DF10(v33, v34);
  ++*v35;
  v36 = v35;
  v37 = sub_47C180(0, v35, &v59);
  v38 = *v36 - 1;
  v39 = *v36 == 1;
  *v36 = v38;
  if ( v38 < 0 || v39 )
  {
    v56 = *((_QWORD *)v36 + 3);
    if ( v56 && *(_QWORD *)(v56 + 8) )
    {
      sub_47B120(v36);
    }
    else
    {
      v57 = *((__int64 **)v36 + 1);
      if ( v57 && v57 != off_656088 )
        Tcl_Free((__int64)v57);
      v36[4] = -1;
      sub_496830(v36);
    }
  }
  if ( !v37 && v59 >= -127 && v59 <= 127 )
  {
LABEL_4:
    v58 = 1;
LABEL_5:
    v10 = *(_BYTE **)(a4 + 120);
    goto LABEL_6;
  }
  v40 = sub_471010(a4, v33, v34, 0);
  if ( v40 > 255 )
  {
    v50 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v50 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v50 = *(_BYTE **)(a4 + 120);
    }
    *v50 = 2;
    v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v51;
    *v51 = HIBYTE(v40);
    v52 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v52;
    *v52 = BYTE2(v40);
    v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v53;
    *v53 = BYTE1(v40);
    v54 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v54 + 1;
    *(_BYTE *)(v54 + 1) = v40;
    v55 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v44 = dword_65444C;
    v10 = (_BYTE *)(v55 + 1);
    *(_QWORD *)(a4 + 120) = v10;
  }
  else
  {
    v41 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v41 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v41 = *(_BYTE **)(a4 + 120);
    }
    *v41 = 1;
    v42 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v42 + 1;
    *(_BYTE *)(v42 + 1) = v40;
    v43 = *(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v44 = dword_65442C;
    v10 = (_BYTE *)(v43 + 1);
    *(_QWORD *)(a4 + 120) = v10;
  }
  if ( v44 )
  {
    if ( v44 == 0x80000000 )
      v44 = 1 - v40;
    if ( v44 < 0 )
    {
      v45 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v45 )
        *(_DWORD *)(a4 + 44) = v45;
    }
    else
    {
      v45 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v44 + v45;
  }
LABEL_6:
  if ( !v61 )
  {
    if ( v58 )
    {
      if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v10 = *(_BYTE **)(a4 + 120);
      }
      *v10 = 33;
      v11 = v59;
      v12 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v12;
      *v12 = v11;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v13 = dword_65482C;
LABEL_11:
      if ( !v13 )
        return 0;
      if ( v13 == 0x80000000 )
        v13 = 1 - v59;
      goto LABEL_14;
    }
    if ( v10 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v10 = *(_BYTE **)(a4 + 120);
    }
    *v10 = 28;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v13 = dword_65478C;
    goto LABEL_29;
  }
  if ( !v62 )
  {
    if ( v60 < 0 )
    {
      if ( v58 )
      {
        if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v10 = *(_BYTE **)(a4 + 120);
        }
        *v10 = 32;
        v46 = v59;
        v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v47;
        *v47 = v46;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v13 = dword_65480C;
        goto LABEL_11;
      }
      if ( v10 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v10 = *(_BYTE **)(a4 + 120);
      }
      *v10 = 27;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v13 = dword_65476C;
      goto LABEL_29;
    }
    if ( v58 )
    {
      if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v10 = *(_BYTE **)(a4 + 120);
      }
      *v10 = 31;
      v25 = v60;
      v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v26;
      *v26 = v25;
      v27 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v18 = dword_6547EC;
      v19 = (_BYTE *)(v27 + 1);
      v20 = v19;
      *(_QWORD *)(a4 + 120) = v19;
      goto LABEL_37;
    }
    if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v10 = *(_BYTE **)(a4 + 120);
    }
    *v10 = 26;
    v29 = v60;
    v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v30;
    *v30 = v29;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v13 = dword_65474C;
LABEL_49:
    if ( !v13 )
      return 0;
    if ( v13 == 0x80000000 )
      v13 = 1 - v60;
    goto LABEL_14;
  }
  if ( v60 < 0 )
  {
    if ( v58 )
    {
      if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v10 = *(_BYTE **)(a4 + 120);
      }
      *v10 = 30;
      v48 = v59;
      v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v49;
      *v49 = v48;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v13 = dword_6547CC;
      goto LABEL_11;
    }
    if ( v10 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v10 = *(_BYTE **)(a4 + 120);
    }
    *v10 = 25;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v13 = dword_65472C;
LABEL_29:
    if ( !v13 )
      return 0;
    if ( v13 == 0x80000000 )
    {
      v13 = 1;
      goto LABEL_15;
    }
LABEL_14:
    if ( v13 < 0 )
    {
      v14 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v14 )
        *(_DWORD *)(a4 + 44) = v14;
      goto LABEL_16;
    }
LABEL_15:
    v14 = *(_DWORD *)(a4 + 48);
LABEL_16:
    *(_DWORD *)(a4 + 48) = v13 + v14;
    return 0;
  }
  if ( !v58 )
  {
    if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v10 = *(_BYTE **)(a4 + 120);
    }
    *v10 = 24;
    v31 = v60;
    v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v32;
    *v32 = v31;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v13 = dword_65470C;
    goto LABEL_49;
  }
  if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v10 = *(_BYTE **)(a4 + 120);
  }
  *v10 = 29;
  v15 = v60;
  v16 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v16;
  *v16 = v15;
  v17 = *(_QWORD *)(a4 + 120);
  *(_DWORD *)(a4 + 3276) = 0;
  v18 = dword_6547AC;
  v19 = (_BYTE *)(v17 + 1);
  v20 = v19;
  *(_QWORD *)(a4 + 120) = v19;
LABEL_37:
  if ( v18 )
  {
    if ( v18 == 0x80000000 )
      v18 = 1 - v60;
    if ( v18 < 0 )
    {
      v28 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v28 )
        *(_DWORD *)(a4 + 44) = v28;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v18 + v28;
  }
  if ( v19 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v20 = *(_BYTE **)(a4 + 120);
  }
  v6 = 0;
  *v20 = v59;
  ++*(_QWORD *)(a4 + 120);
  return v6;
}

