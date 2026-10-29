void __fastcall sub_43AA10(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbp
  int i; // r14d
  int v8; // r12d
  _BYTE *v9; // rcx
  _BYTE *v10; // rcx
  int v11; // edx
  int v12; // eax
  int v13; // ebp
  _BYTE *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  bool v17; // zf
  int v18; // eax
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax

  if ( a3 == 1 && *(_DWORD *)a2 == 2 )
  {
    sub_438190(a1, *(_BYTE **)(a2 + 32), *(unsigned int *)(a2 + 40), a4, 1);
    return;
  }
  v6 = a2;
  for ( i = 0; i < a3; ++i )
  {
    sub_4399D0(a1, (_DWORD *)(v6 + 24), *(_DWORD *)(v6 + 20), a4);
    if ( a3 - 1 > i )
    {
      v8 = sub_471010(a4, " ", 1, 0);
      if ( v8 > 255 )
      {
        v19 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v19 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v19 = *(_BYTE **)(a4 + 120);
        }
        *v19 = 2;
        v20 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v20;
        *v20 = HIBYTE(v8);
        v21 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v21;
        *v21 = BYTE2(v8);
        v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v22;
        *v22 = BYTE1(v8);
        v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v23;
        *v23 = v8;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v11 = dword_65444C;
      }
      else
      {
        v9 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v9 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v9 = *(_BYTE **)(a4 + 120);
        }
        *v9 = 1;
        v10 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v10;
        *v10 = v8;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v11 = dword_65442C;
      }
      if ( v11 )
      {
        if ( v11 == 0x80000000 )
          v11 = 1 - v8;
        if ( v11 >= 0 )
        {
          v12 = *(_DWORD *)(a4 + 48);
LABEL_15:
          *(_DWORD *)(a4 + 48) = v11 + v12;
          goto LABEL_3;
        }
        v12 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v12 )
          goto LABEL_15;
        *(_DWORD *)(a4 + 44) = v12;
        *(_DWORD *)(a4 + 48) = v11 + v12;
      }
    }
LABEL_3:
    v6 += 24LL * *(int *)(v6 + 20) + 24;
  }
  v13 = 2 * a3 - 1;
  if ( v13 > 255 )
  {
    v14 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
      goto LABEL_25;
    while ( 1 )
    {
      *v14 = 5;
      v15 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v15 + 1;
      *(_BYTE *)(v15 + 1) = -1;
      *(_DWORD *)(a4 + 3276) = 0;
      v16 = dword_6544AC;
      v14 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v17 = dword_6544AC == 0;
      *(_QWORD *)(a4 + 120) = v14;
      if ( v17 )
        goto LABEL_23;
      if ( v16 == 0x80000000 )
        break;
      if ( v16 < 0 )
        goto LABEL_27;
      v18 = *(_DWORD *)(a4 + 48);
LABEL_22:
      *(_DWORD *)(a4 + 48) = v16 + v18;
LABEL_23:
      v13 -= 254;
      if ( v13 <= 255 )
        goto LABEL_33;
      if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
      {
LABEL_25:
        sub_439150(a4);
        v14 = *(_BYTE **)(a4 + 120);
      }
    }
    v16 = -254;
LABEL_27:
    v18 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v18 )
      *(_DWORD *)(a4 + 44) = v18;
    goto LABEL_22;
  }
  v14 = *(_BYTE **)(a4 + 120);
LABEL_33:
  if ( v13 > 1 )
  {
    if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v14 = *(_BYTE **)(a4 + 120);
    }
    *v14 = 5;
    v24 = *(_QWORD *)(a4 + 120);
    *(_QWORD *)(a4 + 120) = v24 + 1;
    *(_BYTE *)(v24 + 1) = v13;
    *(_DWORD *)(a4 + 3276) = 0;
    v25 = dword_6544AC;
    v14 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    v17 = dword_6544AC == 0;
    *(_QWORD *)(a4 + 120) = v14;
    if ( !v17 )
    {
      if ( v25 == 0x80000000 )
        v25 = 1 - v13;
      if ( v25 < 0 )
      {
        v26 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v26 )
        {
          *(_DWORD *)(a4 + 44) = v26;
          *(_DWORD *)(a4 + 48) = v25 + v26;
          goto LABEL_42;
        }
      }
      else
      {
        v26 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v25 + v26;
    }
  }
LABEL_42:
  if ( v14 == *(_BYTE **)(a4 + 128) )
  {
    sub_439150(a4);
    v14 = *(_BYTE **)(a4 + 120);
  }
  *v14 = 9;
  *(_DWORD *)(a4 + 3276) = 0;
  v27 = dword_65452C;
  ++*(_QWORD *)(a4 + 120);
  if ( v27 )
  {
    if ( v27 == 0x80000000 )
    {
      v28 = *(_DWORD *)(a4 + 48);
      v27 = 1;
    }
    else if ( v27 < 0 )
    {
      v28 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v28 )
        *(_DWORD *)(a4 + 44) = v28;
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v27 + v28;
  }
}

