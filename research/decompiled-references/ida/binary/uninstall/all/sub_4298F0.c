__int64 __fastcall sub_4298F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // ebp
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  int v25; // edx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  __int64 v28; // rcx

  result = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) == 2 )
  {
    v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    if ( *(_DWORD *)(v8 + 24) != 2 )
    {
      v9 = *(_QWORD *)(v6 + 16);
      v10 = 24LL * v7;
      v11 = *(_QWORD *)(v10 + v9 + 8);
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + v9 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v11 + 4);
      v13 = *(unsigned int *)(v8 + 44);
      *(_QWORD *)(a4 + 3288) = v12;
      sub_4399D0(a1, v8 + 48, v13, a4);
      v14 = *(_BYTE **)(a4 + 120);
      goto LABEL_4;
    }
    v17 = sub_471010(a4, *(_QWORD *)(v8 + 56), *(unsigned int *)(v8 + 64), 0);
    if ( v17 <= 255 )
    {
      v26 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v26 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v26 = *(_BYTE **)(a4 + 120);
      }
      *v26 = 1;
      v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v27;
      *v27 = v17;
      v28 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v24 = dword_65442C;
      v14 = (_BYTE *)(v28 + 1);
      *(_QWORD *)(a4 + 120) = v14;
    }
    else
    {
      v18 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v18 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v18 = *(_BYTE **)(a4 + 120);
      }
      *v18 = 2;
      v19 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v19;
      *v19 = HIBYTE(v17);
      v20 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v20;
      *v20 = BYTE2(v17);
      v21 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v21 + 1;
      *(_BYTE *)(v21 + 1) = BYTE1(v17);
      v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v22;
      *v22 = v17;
      v23 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v24 = dword_65444C;
      v14 = (_BYTE *)(v23 + 1);
      *(_QWORD *)(a4 + 120) = v14;
    }
    if ( v24 )
    {
      if ( v24 == 0x80000000 )
        v24 = 1 - v17;
      if ( v24 >= 0 )
      {
        v25 = *(_DWORD *)(a4 + 48);
LABEL_21:
        *(_DWORD *)(a4 + 48) = v24 + v25;
        goto LABEL_4;
      }
      v25 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v25 )
        goto LABEL_21;
      *(_DWORD *)(a4 + 44) = v25;
      *(_DWORD *)(a4 + 48) = v24 + v25;
    }
LABEL_4:
    if ( v14 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v14 = *(_BYTE **)(a4 + 120);
    }
    *v14 = 81;
    *(_DWORD *)(a4 + 3276) = 0;
    v15 = dword_654E2C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v15 )
      return 0;
    if ( v15 == 0x80000000 )
    {
      v16 = *(_DWORD *)(a4 + 48);
      v15 = 1;
    }
    else if ( v15 < 0 )
    {
      v16 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v16 )
      {
        *(_DWORD *)(a4 + 44) = v16;
        *(_DWORD *)(a4 + 48) = v16 + v15;
        return 0;
      }
    }
    else
    {
      v16 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v16 + v15;
    return 0;
  }
  return result;
}

