__int64 __fastcall sub_42F590(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // r12d
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  __int64 v29; // rcx

  v5 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v8 = *(_DWORD *)(v5 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) == 2 )
  {
    v9 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    if ( *(_DWORD *)(v9 + 24) != 2 )
    {
      v10 = *(_QWORD *)(v5 + 16);
      v11 = 24LL * v8;
      v12 = *(_QWORD *)(v11 + v10 + 8);
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + v10 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v12 + 4);
      v14 = *(unsigned int *)(v9 + 44);
      *(_QWORD *)(a4 + 3288) = v13;
      sub_4399D0(a1, v9 + 48, v14, a4);
      v15 = *(_BYTE **)(a4 + 120);
      goto LABEL_4;
    }
    v18 = sub_471010(a4, *(_QWORD *)(v9 + 56), *(unsigned int *)(v9 + 64), 0);
    if ( v18 <= 255 )
    {
      v27 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v27 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v27 = *(_BYTE **)(a4 + 120);
      }
      *v27 = 1;
      v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v28;
      *v28 = v18;
      v29 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v25 = dword_65442C;
      v15 = (_BYTE *)(v29 + 1);
      *(_QWORD *)(a4 + 120) = v15;
    }
    else
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
      *v20 = HIBYTE(v18);
      v21 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v21;
      *v21 = BYTE2(v18);
      v22 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v22 + 1;
      *(_BYTE *)(v22 + 1) = BYTE1(v18);
      v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v23;
      *v23 = v18;
      v24 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v25 = dword_65444C;
      v15 = (_BYTE *)(v24 + 1);
      *(_QWORD *)(a4 + 120) = v15;
    }
    if ( v25 )
    {
      if ( v25 == 0x80000000 )
        v25 = 1 - v18;
      if ( v25 >= 0 )
      {
        v26 = *(_DWORD *)(a4 + 48);
LABEL_21:
        *(_DWORD *)(a4 + 48) = v25 + v26;
        goto LABEL_4;
      }
      v26 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v26 )
        goto LABEL_21;
      *(_DWORD *)(a4 + 44) = v26;
      *(_DWORD *)(a4 + 48) = v25 + v26;
    }
LABEL_4:
    if ( v15 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v15 = *(_BYTE **)(a4 + 120);
    }
    *v15 = a3;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = a3 == 105;
    v16 = *((_DWORD *)&off_654400 + 8 * a3 + 3);
    if ( !v16 )
      return 0;
    if ( v16 == 0x80000000 )
    {
      v17 = *(_DWORD *)(a4 + 48);
      v16 = 1;
    }
    else if ( v16 < 0 )
    {
      v17 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v17 )
      {
        *(_DWORD *)(a4 + 44) = v17;
        *(_DWORD *)(a4 + 48) = v17 + v16;
        return 0;
      }
    }
    else
    {
      v17 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v17 + v16;
    return 0;
  }
  return result;
}

