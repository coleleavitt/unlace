__int64 __fastcall sub_4315E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 result; // rax
  int v8; // r13d
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // ebp
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi
  int v17; // edx
  int v18; // ecx
  _BYTE *v19; // rsi
  int v20; // eax
  int v21; // ecx
  _BYTE *v22; // rsi
  _BYTE *v23; // rsi
  __int64 v24; // rcx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  int v27; // eax
  _BYTE *v28; // rsi
  bool v29; // zf
  int v30; // ecx
  _BYTE *v31; // rsi
  _BYTE *v32; // rsi
  _BYTE *v33; // rsi
  _BYTE *v34; // rsi
  int v35; // edx
  __int64 v36; // rax
  _BYTE *v37; // rsi
  int v38; // ecx
  __int64 v39; // rax
  int v40; // eax
  int v41; // ecx
  _BYTE *v42; // rsi
  _BYTE *v43; // rsi
  _BYTE *v44; // rsi
  _BYTE *v45; // rsi
  _BYTE *v46; // rsi
  _BYTE *v47; // rsi
  __int64 v48; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 32);
  v48 = *(_QWORD *)(a4 + 3264);
  result = 1;
  if ( *(_DWORD *)(a2 + 28) == 1 )
    return result;
  v8 = 1;
  if ( *(int *)(a2 + 28) <= 1 )
    goto LABEL_30;
  v9 = 24LL * (*(_DWORD *)(*(_QWORD *)(a4 + 3264) + 28LL) - 1);
  do
  {
    while ( 1 )
    {
      v13 = v6 + 24LL * *(int *)(v6 + 20);
      v6 = v13 + 24;
      if ( *(_DWORD *)(v13 + 24) == 2 )
        break;
      v10 = *(_QWORD *)(v48 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v9 + v10 + 8) + 4LL * v8);
      v11 = *(_QWORD *)(v9 + v10 + 16);
      v12 = *(unsigned int *)(v13 + 44);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v11 + 8LL * v8);
      sub_4399D0(a1, v13 + 48, v12, a4);
LABEL_5:
      if ( *(_DWORD *)(a2 + 28) <= ++v8 )
        goto LABEL_18;
    }
    v14 = sub_471010(a4, *(_QWORD *)(v13 + 56), *(unsigned int *)(v13 + 64), 0);
    if ( v14 > 255 )
    {
      v42 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v42 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v42 = *(_BYTE **)(a4 + 120);
      }
      *v42 = 2;
      v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v43;
      *v43 = HIBYTE(v14);
      v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v44;
      *v44 = BYTE2(v14);
      v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v45;
      *v45 = BYTE1(v14);
      v46 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v46;
      *v46 = v14;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v17 = dword_65444C;
    }
    else
    {
      v15 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v15 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v15 = *(_BYTE **)(a4 + 120);
      }
      *v15 = 1;
      v16 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v16;
      *v16 = v14;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v17 = dword_65442C;
    }
    if ( !v17 )
      goto LABEL_5;
    if ( v17 == 0x80000000 )
      v17 = 1 - v14;
    if ( v17 >= 0 )
    {
      v18 = *(_DWORD *)(a4 + 48);
LABEL_16:
      *(_DWORD *)(a4 + 48) = v17 + v18;
      goto LABEL_17;
    }
    v18 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) >= v18 )
      goto LABEL_16;
    *(_DWORD *)(a4 + 44) = v18;
    *(_DWORD *)(a4 + 48) = v17 + v18;
LABEL_17:
    ++v8;
  }
  while ( *(_DWORD *)(a2 + 28) > v8 );
LABEL_18:
  if ( v8 != 2 )
  {
    if ( v8 == 3 )
    {
      v19 = *(_BYTE **)(a4 + 120);
      if ( v19 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v19 = *(_BYTE **)(a4 + 120);
      }
      *v19 = 54;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v20 = dword_654ACC;
      goto LABEL_23;
    }
LABEL_30:
    v22 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v22 + 5) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v22 = *(_BYTE **)(a4 + 120);
    }
    *v22 = 126;
    v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v23;
    *v23 = (unsigned int)(v8 - 1) >> 24;
    v24 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v24 + 1;
    *(_BYTE *)(v24 + 1) = (unsigned int)(v8 - 1) >> 16;
    v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v25;
    *v25 = (unsigned __int16)(v8 - 1) >> 8;
    v26 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v26 + 1;
    *(_BYTE *)(v26 + 1) = v8 - 1;
    *(_DWORD *)(a4 + 3276) = 0;
    v27 = dword_6553CC;
    v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v29 = dword_6553CC == 0;
    *(_QWORD *)(a4 + 120) = v28;
    if ( !v29 )
    {
      if ( v27 == 0x80000000 )
        v27 = 2 - v8;
      if ( v27 < 0 )
      {
        v30 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v30 )
        {
          *(_DWORD *)(a4 + 44) = v30;
          *(_DWORD *)(a4 + 48) = v27 + v30;
          goto LABEL_38;
        }
      }
      else
      {
        v30 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v27 + v30;
    }
LABEL_38:
    while ( 2 )
    {
      if ( --v8 <= 1 )
        return 0;
      if ( (unsigned __int64)(v28 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v28 = *(_BYTE **)(a4 + 120);
      }
      *v28 = 126;
      v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v31;
      *v31 = 0;
      v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v32;
      *v32 = 0;
      v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v33;
      *v33 = 0;
      v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v34;
      *v34 = 2;
      *(_DWORD *)(a4 + 3276) = 0;
      v35 = dword_6553CC;
      v36 = *(_QWORD *)(a4 + 120) + 1LL;
      v29 = dword_6553CC == 0;
      v37 = (_BYTE *)v36;
      *(_QWORD *)(a4 + 120) = v36;
      if ( v29 )
        goto LABEL_46;
      if ( v35 == 0x80000000 )
      {
        v35 = -1;
      }
      else if ( v35 >= 0 )
      {
        v38 = *(_DWORD *)(a4 + 48);
        goto LABEL_45;
      }
      v38 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v38 )
        *(_DWORD *)(a4 + 44) = v38;
LABEL_45:
      *(_DWORD *)(a4 + 48) = v35 + v38;
LABEL_46:
      if ( v36 == *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v37 = *(_BYTE **)(a4 + 120);
      }
      *v37 = 54;
      v39 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v28 = (_BYTE *)(v39 + 1);
      *(_QWORD *)(a4 + 120) = v39 + 1;
      v40 = dword_654ACC;
      if ( dword_654ACC )
      {
        if ( dword_654ACC == 0x80000000 )
        {
          v41 = *(_DWORD *)(a4 + 48);
          v40 = 1;
          goto LABEL_52;
        }
        if ( dword_654ACC >= 0 )
        {
          v41 = *(_DWORD *)(a4 + 48);
LABEL_52:
          *(_DWORD *)(a4 + 48) = v41 + v40;
          continue;
        }
        v41 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v41 )
          goto LABEL_52;
        *(_DWORD *)(a4 + 44) = v41;
        *(_DWORD *)(a4 + 48) = v41 + v40;
      }
      continue;
    }
  }
  v47 = *(_BYTE **)(a4 + 120);
  if ( v47 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v47 = *(_BYTE **)(a4 + 120);
  }
  *v47 = 59;
  ++*(_QWORD *)(a4 + 120);
  *(_DWORD *)(a4 + 3276) = 0;
  v20 = dword_654B6C;
LABEL_23:
  if ( v20 )
  {
    if ( v20 == 0x80000000 )
    {
      v21 = *(_DWORD *)(a4 + 48);
      v20 = 1;
    }
    else
    {
      if ( v20 >= 0 )
      {
        v21 = *(_DWORD *)(a4 + 48);
        goto LABEL_27;
      }
      v21 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v21 )
      {
        *(_DWORD *)(a4 + 44) = v21;
        *(_DWORD *)(a4 + 48) = v20 + v21;
        return 0;
      }
    }
LABEL_27:
    *(_DWORD *)(a4 + 48) = v20 + v21;
  }
  return 0;
}

