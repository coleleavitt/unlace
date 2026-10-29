__int64 __fastcall sub_41F340(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  int v7; // ecx
  int v8; // esi
  __int64 result; // rax
  int v10; // esi
  int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r12d
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  int v20; // edx
  int v21; // eax
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  unsigned int v24; // eax
  _BYTE *v25; // rcx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned int v28; // eax
  _BYTE *v29; // rcx
  int v30; // edx
  int v31; // eax
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  __int64 v37; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a4 + 3264);
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_DWORD *)(v6 + 28);
  v37 = v6;
  result = 1;
  v10 = v8 - 1;
  if ( v7 <= 2 )
    return result;
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
  v13 = 24LL * v10;
  do
  {
    while ( *(_DWORD *)v12 != 2 )
    {
      v14 = *(_QWORD *)(v37 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v13 + v14 + 8) + 4LL * v11);
      v15 = *(_QWORD *)(v13 + v14 + 16);
      v16 = *(unsigned int *)(v12 + 20);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v15 + 8LL * v11);
      sub_4399D0(a1, v12 + 24, v16, a4);
LABEL_4:
      ++v11;
      v12 += 24LL * *(int *)(v12 + 20) + 24;
      if ( *(_DWORD *)(a2 + 28) <= v11 )
        goto LABEL_17;
    }
    v17 = sub_471010(a4, *(_QWORD *)(v12 + 32), *(unsigned int *)(v12 + 40), 0);
    if ( v17 > 255 )
    {
      v32 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v32 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v32 = *(_BYTE **)(a4 + 120);
      }
      *v32 = 2;
      v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v33;
      *v33 = HIBYTE(v17);
      v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v34;
      *v34 = BYTE2(v17);
      v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v35;
      *v35 = BYTE1(v17);
      v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v36;
      *v36 = v17;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v20 = dword_65444C;
    }
    else
    {
      v18 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v18 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v18 = *(_BYTE **)(a4 + 120);
      }
      *v18 = 1;
      v19 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v19;
      *v19 = v17;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v20 = dword_65442C;
    }
    if ( !v20 )
      goto LABEL_4;
    if ( v20 == 0x80000000 )
      v20 = 1 - v17;
    if ( v20 >= 0 )
    {
      v21 = *(_DWORD *)(a4 + 48);
LABEL_15:
      *(_DWORD *)(a4 + 48) = v20 + v21;
      goto LABEL_16;
    }
    v21 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) >= v21 )
      goto LABEL_15;
    *(_DWORD *)(a4 + 44) = v21;
    *(_DWORD *)(a4 + 48) = v20 + v21;
LABEL_16:
    ++v11;
    v12 += 24LL * *(int *)(v12 + 20) + 24;
  }
  while ( *(_DWORD *)(a2 + 28) > v11 );
LABEL_17:
  v22 = *(_BYTE **)(a4 + 120);
  if ( (unsigned __int64)(v22 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v22 = *(_BYTE **)(a4 + 120);
  }
  *v22 = 110;
  v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  v24 = (unsigned int)(*(_DWORD *)(a2 + 28) - 2) >> 24;
  *(_QWORD *)(a4 + 120) = v23;
  *v23 = v24;
  v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  v26 = (unsigned int)(*(_DWORD *)(a2 + 28) - 2) >> 16;
  *(_QWORD *)(a4 + 120) = v25;
  *v25 = v26;
  v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  v28 = (unsigned int)(*(_DWORD *)(a2 + 28) - 2) >> 8;
  *(_QWORD *)(a4 + 120) = v27;
  *v27 = v28;
  v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  LOBYTE(v28) = *(_BYTE *)(a2 + 28) - 2;
  *(_QWORD *)(a4 + 120) = v29;
  *v29 = v28;
  *(_DWORD *)(a4 + 3276) = 0;
  v30 = dword_6551CC;
  ++*(_QWORD *)(a4 + 120);
  if ( v30 )
  {
    if ( v30 == 0x80000000 )
      v30 = 3 - *(_DWORD *)(a2 + 28);
    if ( v30 >= 0 )
    {
      v31 = *(_DWORD *)(a4 + 48);
      goto LABEL_24;
    }
    v31 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) >= v31 )
    {
LABEL_24:
      *(_DWORD *)(a4 + 48) = v30 + v31;
    }
    else
    {
      *(_DWORD *)(a4 + 44) = v31;
      *(_DWORD *)(a4 + 48) = v30 + v31;
    }
  }
  return 0;
}

