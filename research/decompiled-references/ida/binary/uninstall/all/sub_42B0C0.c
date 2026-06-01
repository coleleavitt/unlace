__int64 __fastcall sub_42B0C0(__int64 a1, unsigned __int8 a2, int a3, int a4, __int64 a5)
{
  int v8; // ebp
  _BYTE *v9; // rcx
  _BYTE *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int8 *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  __int64 v19; // rcx
  int v20; // edx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  __int64 v25; // rsi
  _BYTE *v26; // rcx
  int v27; // eax
  int v28; // edx
  _BYTE *v29; // rcx
  __int64 v30; // rdx
  __int64 result; // rax

  v8 = sub_470E40(a1, a5, 0);
  if ( v8 > 255 )
  {
    v14 = *(_BYTE **)(a1 + 120);
    if ( (unsigned __int64)(v14 + 5) > *(_QWORD *)(a1 + 128) )
    {
      sub_439150(a1);
      v14 = *(_BYTE **)(a1 + 120);
    }
    *v14 = 2;
    v15 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
    *(_QWORD *)(a1 + 120) = v15;
    *v15 = HIBYTE(v8);
    v16 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
    *(_QWORD *)(a1 + 120) = v16;
    *v16 = BYTE2(v8);
    v17 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 120) = v17 + 1;
    *(_BYTE *)(v17 + 1) = BYTE1(v8);
    v18 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
    *(_QWORD *)(a1 + 120) = v18;
    *v18 = v8;
    v19 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 3276) = 0;
    v12 = dword_65444C;
    v13 = (unsigned __int8 *)(v19 + 1);
    *(_QWORD *)(a1 + 120) = v13;
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 120);
    if ( (unsigned __int64)(v9 + 2) > *(_QWORD *)(a1 + 128) )
    {
      sub_439150(a1);
      v9 = *(_BYTE **)(a1 + 120);
    }
    *v9 = 1;
    v10 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
    *(_QWORD *)(a1 + 120) = v10;
    *v10 = v8;
    v11 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 3276) = 0;
    v12 = dword_65442C;
    v13 = (unsigned __int8 *)(v11 + 1);
    *(_QWORD *)(a1 + 120) = v13;
  }
  if ( v12 )
  {
    if ( v12 == 0x80000000 )
    {
      v12 = 1 - v8;
      if ( 1 - v8 >= 0 )
        goto LABEL_11;
    }
    else if ( v12 >= 0 )
    {
LABEL_11:
      v20 = *(_DWORD *)(a1 + 48);
LABEL_12:
      *(_DWORD *)(a1 + 48) = v12 + v20;
      goto LABEL_13;
    }
    v20 = *(_DWORD *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 44) < v20 )
      *(_DWORD *)(a1 + 44) = v20;
    goto LABEL_12;
  }
LABEL_13:
  if ( (unsigned __int64)(v13 + 5) > *(_QWORD *)(a1 + 128) )
  {
    sub_439150(a1);
    v13 = *(unsigned __int8 **)(a1 + 120);
  }
  *v13 = a2;
  v21 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
  *(_QWORD *)(a1 + 120) = v21;
  *v21 = HIBYTE(a3);
  v22 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
  *(_QWORD *)(a1 + 120) = v22;
  *v22 = BYTE2(a3);
  v23 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
  *(_QWORD *)(a1 + 120) = v23;
  *v23 = BYTE1(a3);
  v24 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
  *(_QWORD *)(a1 + 120) = v24;
  *v24 = a3;
  v25 = *(_QWORD *)(a1 + 120) + 1LL;
  v26 = (_BYTE *)v25;
  *(_QWORD *)(a1 + 120) = v25;
  *(_DWORD *)(a1 + 3276) = a2 == 105;
  v27 = *((_DWORD *)&off_654400 + 8 * a2 + 3);
  if ( v27 )
  {
    if ( v27 == 0x80000000 )
    {
      v27 = 1 - a3;
      if ( 1 - a3 >= 0 )
        goto LABEL_18;
    }
    else if ( v27 >= 0 )
    {
LABEL_18:
      v28 = *(_DWORD *)(a1 + 48);
LABEL_19:
      *(_DWORD *)(a1 + 48) = v28 + v27;
      goto LABEL_20;
    }
    v28 = *(_DWORD *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 44) < v28 )
      *(_DWORD *)(a1 + 44) = v28;
    goto LABEL_19;
  }
LABEL_20:
  if ( (unsigned __int64)(v25 + 4) > *(_QWORD *)(a1 + 128) )
  {
    sub_439150(a1);
    v26 = *(_BYTE **)(a1 + 120);
  }
  *v26 = HIBYTE(a4);
  v29 = (_BYTE *)(*(_QWORD *)(a1 + 120) + 1LL);
  *(_QWORD *)(a1 + 120) = v29;
  *v29 = BYTE2(a4);
  v30 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v30 + 1;
  *(_BYTE *)(v30 + 1) = BYTE1(a4);
  result = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = result + 1;
  *(_BYTE *)(result + 1) = a4;
  ++*(_QWORD *)(a1 + 120);
  return result;
}

