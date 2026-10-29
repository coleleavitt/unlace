__int64 __fastcall sub_431B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 result; // rax
  int v9; // r15d
  int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // ebp
  _BYTE *v17; // rsi
  _BYTE *v18; // rsi
  int v19; // edx
  int v20; // eax
  _BYTE *v21; // rsi
  _BYTE *v22; // rsi
  __int64 v23; // rcx
  _BYTE *v24; // rsi
  _BYTE *v25; // rsi
  int v26; // edx
  _BYTE *v27; // rsi
  bool v28; // zf
  int v29; // eax
  _BYTE *v30; // rsi
  _BYTE *v31; // rsi
  _BYTE *v32; // rsi
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rcx
  _BYTE *v36; // rsi
  int v37; // eax
  _BYTE *v38; // rsi
  int v39; // edx
  int v40; // eax
  _BYTE *v41; // rsi
  _BYTE *v42; // rsi
  _BYTE *v43; // rsi
  _BYTE *v44; // rsi
  _BYTE *v45; // rsi
  int v46; // ebp
  _BYTE *v47; // rsi
  _BYTE *v48; // rsi
  int v49; // edx
  _BYTE *v50; // rsi
  _BYTE *v51; // rsi
  _BYTE *v52; // rsi
  _BYTE *v53; // rsi
  _BYTE *v54; // rsi
  int v55; // eax
  __int64 v56; // [rsp+8h] [rbp-40h]

  v6 = *(unsigned int *)(a2 + 28);
  v7 = *(_QWORD *)(a2 + 32);
  v56 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v9 = *(_DWORD *)(v56 + 28) - 1;
  if ( (_DWORD)v6 == 1 )
    return result;
  if ( (_DWORD)v6 != 2 )
    goto LABEL_3;
  LOBYTE(v6) = 3;
  v46 = sub_471010(a4, "1.0", v6, 0);
  if ( v46 > 255 )
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
    *v51 = HIBYTE(v46);
    v52 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v52;
    *v52 = BYTE2(v46);
    v53 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v53;
    *v53 = BYTE1(v46);
    v54 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v54;
    *v54 = v46;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v49 = dword_65444C;
  }
  else
  {
    v47 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v47 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v47 = *(_BYTE **)(a4 + 120);
    }
    *v47 = 1;
    v48 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v48;
    *v48 = v46;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v49 = dword_65442C;
  }
  if ( v49 )
  {
    if ( v49 == 0x80000000 )
      v49 = 1 - v46;
    if ( v49 < 0 )
    {
      v55 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v55 )
      {
        *(_DWORD *)(a4 + 44) = v55;
        *(_DWORD *)(a4 + 48) = v49 + v55;
        goto LABEL_74;
      }
    }
    else
    {
      v55 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v49 + v55;
  }
LABEL_74:
  LODWORD(v6) = *(_DWORD *)(a2 + 28);
LABEL_3:
  v10 = 1;
  if ( (int)v6 <= 1 )
    goto LABEL_41;
  v11 = 24LL * v9;
  do
  {
    while ( 1 )
    {
      v15 = v7 + 24LL * *(int *)(v7 + 20);
      v7 = v15 + 24;
      if ( *(_DWORD *)(v15 + 24) == 2 )
        break;
      v12 = *(_QWORD *)(v56 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v11 + v12 + 8) + 4LL * v10);
      v13 = *(_QWORD *)(v11 + v12 + 16);
      v14 = *(unsigned int *)(v15 + 44);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v13 + 8LL * v10);
      sub_4399D0(a1, v15 + 48, v14, a4);
LABEL_6:
      if ( *(_DWORD *)(a2 + 28) <= ++v10 )
        goto LABEL_19;
    }
    v16 = sub_471010(a4, *(_QWORD *)(v15 + 56), *(unsigned int *)(v15 + 64), 0);
    if ( v16 > 255 )
    {
      v41 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v41 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v41 = *(_BYTE **)(a4 + 120);
      }
      *v41 = 2;
      v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v42;
      *v42 = HIBYTE(v16);
      v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v43;
      *v43 = BYTE2(v16);
      v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v44;
      *v44 = BYTE1(v16);
      v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v45;
      *v45 = v16;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v19 = dword_65444C;
    }
    else
    {
      v17 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v17 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v17 = *(_BYTE **)(a4 + 120);
      }
      *v17 = 1;
      v18 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v18;
      *v18 = v16;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v19 = dword_65442C;
    }
    if ( !v19 )
      goto LABEL_6;
    if ( v19 == 0x80000000 )
      v19 = 1 - v16;
    if ( v19 >= 0 )
    {
      v20 = *(_DWORD *)(a4 + 48);
LABEL_17:
      *(_DWORD *)(a4 + 48) = v19 + v20;
      goto LABEL_18;
    }
    v20 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) >= v20 )
      goto LABEL_17;
    *(_DWORD *)(a4 + 44) = v20;
    *(_DWORD *)(a4 + 48) = v19 + v20;
LABEL_18:
    ++v10;
  }
  while ( *(_DWORD *)(a2 + 28) > v10 );
LABEL_19:
  if ( v10 > 3 )
  {
    v21 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v21 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v21 = *(_BYTE **)(a4 + 120);
    }
    *v21 = 126;
    v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v22;
    *v22 = (unsigned int)(v10 - 1) >> 24;
    v23 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v23 + 1;
    *(_BYTE *)(v23 + 1) = (unsigned int)(v10 - 1) >> 16;
    v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v24;
    *v24 = (unsigned __int16)(v10 - 1) >> 8;
    v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v25;
    *v25 = v10 - 1;
    *(_DWORD *)(a4 + 3276) = 0;
    v26 = dword_6553CC;
    v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v28 = dword_6553CC == 0;
    *(_QWORD *)(a4 + 120) = v27;
    if ( !v28 )
    {
      if ( v26 == 0x80000000 )
        v26 = 2 - v10;
      goto LABEL_25;
    }
    while ( 2 )
    {
      if ( --v10 <= 1 )
        return 0;
      if ( (unsigned __int64)(v27 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v27 = *(_BYTE **)(a4 + 120);
      }
      *v27 = 126;
      v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v30;
      *v30 = 0;
      v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v31;
      *v31 = 0;
      v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v32;
      *v32 = 0;
      v33 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v33 + 1;
      *(_BYTE *)(v33 + 1) = 2;
      *(_DWORD *)(a4 + 3276) = 0;
      v34 = dword_6553CC;
      v35 = *(_QWORD *)(a4 + 120) + 1LL;
      v28 = dword_6553CC == 0;
      v36 = (_BYTE *)v35;
      *(_QWORD *)(a4 + 120) = v35;
      if ( !v28 )
      {
        if ( v34 == 0x80000000 )
        {
          v34 = -1;
        }
        else if ( v34 >= 0 )
        {
          v37 = *(_DWORD *)(a4 + 48);
          goto LABEL_35;
        }
        v37 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v37 )
          *(_DWORD *)(a4 + 44) = v37;
LABEL_35:
        *(_DWORD *)(a4 + 48) = v34 + v37;
      }
      if ( v35 == *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v36 = *(_BYTE **)(a4 + 120);
      }
      *v36 = 56;
      *(_DWORD *)(a4 + 3276) = 0;
      v26 = dword_654B0C;
      v28 = dword_654B0C == 0;
      v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v27;
      if ( !v28 )
      {
        if ( v26 == 0x80000000 )
        {
          v29 = *(_DWORD *)(a4 + 48);
          v26 = 1;
          goto LABEL_27;
        }
LABEL_25:
        if ( v26 < 0 )
        {
          v29 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v29 )
          {
            *(_DWORD *)(a4 + 44) = v29;
            *(_DWORD *)(a4 + 48) = v26 + v29;
            continue;
          }
        }
        else
        {
          v29 = *(_DWORD *)(a4 + 48);
        }
LABEL_27:
        *(_DWORD *)(a4 + 48) = v26 + v29;
        continue;
      }
      continue;
    }
  }
LABEL_41:
  v38 = *(_BYTE **)(a4 + 120);
  if ( v38 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v38 = *(_BYTE **)(a4 + 120);
  }
  *v38 = 56;
  *(_DWORD *)(a4 + 3276) = 0;
  v39 = dword_654B0C;
  ++*(_QWORD *)(a4 + 120);
  if ( v39 )
  {
    if ( v39 == 0x80000000 )
    {
      v40 = *(_DWORD *)(a4 + 48);
      v39 = 1;
    }
    else
    {
      if ( v39 >= 0 )
      {
        v40 = *(_DWORD *)(a4 + 48);
        goto LABEL_47;
      }
      v40 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v40 )
      {
        *(_DWORD *)(a4 + 44) = v40;
        *(_DWORD *)(a4 + 48) = v39 + v40;
        return 0;
      }
    }
LABEL_47:
    *(_DWORD *)(a4 + 48) = v39 + v40;
  }
  return 0;
}

