__int64 __fastcall sub_43A7D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  int v6; // r14d
  _DWORD *i; // rbp
  __int64 v8; // rax
  _DWORD *v9; // rax
  _BYTE *v10; // rcx
  int v11; // edx
  int v12; // eax
  int v13; // ebp
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  int v16; // edx
  int v17; // eax
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx

  v4 = 1;
  v6 = *(_DWORD *)(a4 + 48);
  for ( i = *(_DWORD **)(a2 + 32); *(_DWORD *)(a2 + 28) > v4; ++v4 )
  {
    v8 = (int)i[5];
    *(_DWORD *)(a4 + 48) = v6;
    v9 = &i[6 * v8];
    i = v9 + 6;
    if ( v9[6] != 2 )
    {
      sub_4399D0(a1, v9 + 12, v9[11], a4);
      v10 = *(_BYTE **)(a4 + 120);
      if ( v10 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v10 = *(_BYTE **)(a4 + 120);
      }
      *v10 = 3;
      *(_DWORD *)(a4 + 3276) = 0;
      v11 = dword_65446C;
      ++*(_QWORD *)(a4 + 120);
      if ( v11 )
      {
        if ( v11 == 0x80000000 )
        {
          v12 = *(_DWORD *)(a4 + 48);
          v11 = 1;
        }
        else if ( v11 < 0 )
        {
          v12 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v12 )
            *(_DWORD *)(a4 + 44) = v12;
        }
        else
        {
          v12 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v11 + v12;
      }
    }
  }
  *(_DWORD *)(a4 + 48) = v6;
  v13 = sub_471010(a4, "", 0, 0);
  if ( v13 > 255 )
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
    *v20 = HIBYTE(v13);
    v21 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v21;
    *v21 = BYTE2(v13);
    v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v22;
    *v22 = BYTE1(v13);
    v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v23;
    *v23 = v13;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v16 = dword_65444C;
  }
  else
  {
    v14 = *(_BYTE **)(a4 + 120);
    if ( (unsigned __int64)(v14 + 2) > *(_QWORD *)(a4 + 128) )
    {
      sub_439150(a4);
      v14 = *(_BYTE **)(a4 + 120);
    }
    *v14 = 1;
    v15 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
    *(_QWORD *)(a4 + 120) = v15;
    *v15 = v13;
    ++*(_QWORD *)(a4 + 120);
    *(_DWORD *)(a4 + 3276) = 0;
    v16 = dword_65442C;
  }
  if ( v16 )
  {
    if ( v16 == 0x80000000 )
    {
      v16 = 1 - v13;
      if ( 1 - v13 >= 0 )
        goto LABEL_18;
    }
    else if ( v16 >= 0 )
    {
LABEL_18:
      v17 = *(_DWORD *)(a4 + 48);
LABEL_19:
      *(_DWORD *)(a4 + 48) = v16 + v17;
      return 0;
    }
    v17 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) < v17 )
      *(_DWORD *)(a4 + 44) = v17;
    goto LABEL_19;
  }
  return 0;
}

