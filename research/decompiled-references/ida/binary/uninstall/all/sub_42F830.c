__int64 __fastcall sub_42F830(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v7; // r13d
  __int64 v9; // r12
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // ebp
  _BYTE *v16; // rsi
  _BYTE *v17; // rsi
  int v18; // ecx
  int v19; // edx
  _BYTE *v20; // rsi
  _BYTE *v21; // rsi
  __int64 v22; // rcx
  _BYTE *v23; // rsi
  _BYTE *v24; // rsi
  int v25; // eax
  int v26; // edx
  int v27; // r13d
  _BYTE *v28; // rsi
  int v29; // eax
  int v30; // edx
  _BYTE *v32; // rsi
  _BYTE *v33; // rsi
  _BYTE *v34; // rsi
  __int64 v35; // rdx
  _BYTE *v36; // rsi
  int v37; // ebp
  _BYTE *v38; // rsi
  _BYTE *v39; // rsi
  _BYTE *v40; // rsi
  __int64 v41; // rdx
  _BYTE *v42; // rsi
  int v43; // eax
  int v44; // edx
  _BYTE *v45; // rsi
  _BYTE *v46; // rsi
  __int64 v47; // [rsp+8h] [rbp-50h]
  __int64 v48; // [rsp+10h] [rbp-48h]

  v7 = 1;
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 28);
  v48 = *(_QWORD *)(a5 + 3264);
  if ( v10 > 1 )
  {
    v47 = 24LL * (*(_DWORD *)(v48 + 28) - 1);
    do
    {
      while ( 1 )
      {
        v14 = v9 + 24LL * *(int *)(v9 + 20);
        v9 = v14 + 24;
        if ( *(_DWORD *)(v14 + 24) == 2 )
          break;
        v11 = *(_QWORD *)(v48 + 16);
        *(_DWORD *)(a5 + 3272) = *(_DWORD *)(*(_QWORD *)(v47 + v11 + 8) + 4LL * v7);
        v12 = *(_QWORD *)(v47 + v11 + 16);
        v13 = *(unsigned int *)(v14 + 44);
        *(_QWORD *)(a5 + 3288) = *(_QWORD *)(v12 + 8LL * v7);
        sub_4399D0(a1, v14 + 48, v13, a5);
LABEL_4:
        v10 = *(_DWORD *)(a2 + 28);
        if ( v10 <= ++v7 )
          goto LABEL_17;
      }
      v15 = sub_471010(a5, *(_QWORD *)(v14 + 56), *(unsigned int *)(v14 + 64), 0);
      if ( v15 > 255 )
      {
        v32 = *(_BYTE **)(a5 + 120);
        if ( (unsigned __int64)(v32 + 5) > *(_QWORD *)(a5 + 128) )
        {
          sub_439150(a5);
          v32 = *(_BYTE **)(a5 + 120);
        }
        *v32 = 2;
        v33 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
        *(_QWORD *)(a5 + 120) = v33;
        *v33 = HIBYTE(v15);
        v34 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
        *(_QWORD *)(a5 + 120) = v34;
        *v34 = BYTE2(v15);
        v35 = *(_QWORD *)(a5 + 120);
        *(_QWORD *)(a5 + 120) = v35 + 1;
        *(_BYTE *)(v35 + 1) = BYTE1(v15);
        v36 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
        *(_QWORD *)(a5 + 120) = v36;
        *v36 = v15;
        ++*(_QWORD *)(a5 + 120);
        *(_DWORD *)(a5 + 3276) = 0;
        v18 = dword_65444C;
      }
      else
      {
        v16 = *(_BYTE **)(a5 + 120);
        if ( (unsigned __int64)(v16 + 2) > *(_QWORD *)(a5 + 128) )
        {
          sub_439150(a5);
          v16 = *(_BYTE **)(a5 + 120);
        }
        *v16 = 1;
        v17 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
        *(_QWORD *)(a5 + 120) = v17;
        *v17 = v15;
        ++*(_QWORD *)(a5 + 120);
        *(_DWORD *)(a5 + 3276) = 0;
        v18 = dword_65442C;
      }
      if ( !v18 )
        goto LABEL_4;
      if ( v18 == 0x80000000 )
        v18 = 1 - v15;
      if ( v18 < 0 )
      {
        v19 = *(_DWORD *)(a5 + 48);
        if ( *(_DWORD *)(a5 + 44) < v19 )
        {
          *(_DWORD *)(a5 + 44) = v19;
          *(_DWORD *)(a5 + 48) = v18 + v19;
          goto LABEL_16;
        }
      }
      else
      {
        v19 = *(_DWORD *)(a5 + 48);
      }
      *(_DWORD *)(a5 + 48) = v18 + v19;
LABEL_16:
      v10 = *(_DWORD *)(a2 + 28);
      ++v7;
    }
    while ( v10 > v7 );
  }
LABEL_17:
  if ( v10 <= 2 )
  {
    v37 = sub_471010(a5, a3, 0xFFFFFFFFLL, 0);
    if ( v37 <= 255 )
    {
      v45 = *(_BYTE **)(a5 + 120);
      if ( (unsigned __int64)(v45 + 2) > *(_QWORD *)(a5 + 128) )
      {
        sub_439150(a5);
        v45 = *(_BYTE **)(a5 + 120);
      }
      *v45 = 1;
      v46 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
      *(_QWORD *)(a5 + 120) = v46;
      *v46 = v37;
      ++*(_QWORD *)(a5 + 120);
      *(_DWORD *)(a5 + 3276) = 0;
      v43 = dword_65442C;
    }
    else
    {
      v38 = *(_BYTE **)(a5 + 120);
      if ( (unsigned __int64)(v38 + 5) > *(_QWORD *)(a5 + 128) )
      {
        sub_439150(a5);
        v38 = *(_BYTE **)(a5 + 120);
      }
      *v38 = 2;
      v39 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
      *(_QWORD *)(a5 + 120) = v39;
      *v39 = HIBYTE(v37);
      v40 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
      *(_QWORD *)(a5 + 120) = v40;
      *v40 = BYTE2(v37);
      v41 = *(_QWORD *)(a5 + 120);
      *(_QWORD *)(a5 + 120) = v41 + 1;
      *(_BYTE *)(v41 + 1) = BYTE1(v37);
      v42 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
      *(_QWORD *)(a5 + 120) = v42;
      *v42 = v37;
      ++*(_QWORD *)(a5 + 120);
      *(_DWORD *)(a5 + 3276) = 0;
      v43 = dword_65444C;
    }
    if ( !v43 )
      goto LABEL_54;
    if ( v43 == 0x80000000 )
      v43 = 1 - v37;
    if ( v43 < 0 )
    {
      v44 = *(_DWORD *)(a5 + 48);
      if ( *(_DWORD *)(a5 + 44) < v44 )
      {
        *(_DWORD *)(a5 + 44) = v44;
        *(_DWORD *)(a5 + 48) = v43 + v44;
        goto LABEL_54;
      }
    }
    else
    {
      v44 = *(_DWORD *)(a5 + 48);
    }
    *(_DWORD *)(a5 + 48) = v43 + v44;
LABEL_54:
    ++v7;
  }
  if ( v7 > 3 )
  {
    v20 = *(_BYTE **)(a5 + 120);
    if ( (unsigned __int64)(v20 + 5) > *(_QWORD *)(a5 + 128) )
    {
      sub_439150(a5);
      v20 = *(_BYTE **)(a5 + 120);
    }
    *v20 = 126;
    v21 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
    *(_QWORD *)(a5 + 120) = v21;
    *v21 = (unsigned int)(v7 - 1) >> 24;
    v22 = *(_QWORD *)(a5 + 120);
    *(_QWORD *)(a5 + 120) = v22 + 1;
    *(_BYTE *)(v22 + 1) = (unsigned int)(v7 - 1) >> 16;
    v23 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
    *(_QWORD *)(a5 + 120) = v23;
    *v23 = (unsigned __int16)(v7 - 1) >> 8;
    v24 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
    *(_QWORD *)(a5 + 120) = v24;
    *v24 = v7 - 1;
    *(_DWORD *)(a5 + 3276) = 0;
    v25 = dword_6553CC;
    ++*(_QWORD *)(a5 + 120);
    if ( v25 )
    {
      if ( v25 == 0x80000000 )
        v25 = 2 - v7;
      if ( v25 >= 0 )
      {
        v26 = *(_DWORD *)(a5 + 48);
LABEL_26:
        *(_DWORD *)(a5 + 48) = v25 + v26;
        goto LABEL_27;
      }
      v26 = *(_DWORD *)(a5 + 48);
      if ( *(_DWORD *)(a5 + 44) >= v26 )
        goto LABEL_26;
      *(_DWORD *)(a5 + 44) = v26;
      *(_DWORD *)(a5 + 48) = v25 + v26;
    }
  }
LABEL_27:
  v27 = v7 - 1;
  if ( v27 > 1 )
  {
    v28 = *(_BYTE **)(a5 + 120);
    do
    {
      if ( v28 == *(_BYTE **)(a5 + 128) )
      {
        sub_439150(a5);
        v28 = *(_BYTE **)(a5 + 120);
      }
      *v28 = a4;
      v28 = (_BYTE *)(*(_QWORD *)(a5 + 120) + 1LL);
      *(_QWORD *)(a5 + 120) = v28;
      *(_DWORD *)(a5 + 3276) = a4 == 105;
      v29 = *((_DWORD *)&off_654400 + 8 * a4 + 3);
      if ( v29 )
      {
        if ( v29 == 0x80000000 )
        {
          v30 = *(_DWORD *)(a5 + 48);
          v29 = 1;
        }
        else if ( v29 < 0 )
        {
          v30 = *(_DWORD *)(a5 + 48);
          if ( *(_DWORD *)(a5 + 44) < v30 )
            *(_DWORD *)(a5 + 44) = v30;
        }
        else
        {
          v30 = *(_DWORD *)(a5 + 48);
        }
        *(_DWORD *)(a5 + 48) = v30 + v29;
      }
      --v27;
    }
    while ( v27 > 1 );
  }
  return 0;
}

