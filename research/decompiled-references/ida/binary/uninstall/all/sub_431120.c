__int64 __fastcall sub_431120(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  int v7; // edx
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // ebp
  _BYTE *v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // edx
  int v19; // r13d
  _BYTE *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // ebp
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  __int64 v34; // rdx
  _BYTE *v35; // rcx
  int v36; // eax
  int v37; // edx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  __int64 v40; // [rsp+8h] [rbp-40h]

  v5 = 1;
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_QWORD *)(a2 + 32);
  v40 = *(_QWORD *)(a4 + 3264);
  if ( v7 > 1 )
  {
    v9 = 24LL * (*(_DWORD *)(v40 + 28) - 1);
    do
    {
      while ( 1 )
      {
        v13 = v8 + 24LL * *(int *)(v8 + 20);
        v8 = v13 + 24;
        if ( *(_DWORD *)(v13 + 24) == 2 )
          break;
        v10 = *(_QWORD *)(v40 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v9 + v10 + 8) + 4LL * v5);
        v11 = *(_QWORD *)(v9 + v10 + 16);
        v12 = *(unsigned int *)(v13 + 44);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v11 + 8LL * v5);
        sub_4399D0(a1, v13 + 48, v12, a4);
LABEL_4:
        v7 = *(_DWORD *)(a2 + 28);
        if ( v7 <= ++v5 )
          goto LABEL_17;
      }
      v14 = sub_471010(a4, *(_QWORD *)(v13 + 56), *(unsigned int *)(v13 + 64), 0);
      if ( v14 > 255 )
      {
        v25 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v25 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v25 = *(_BYTE **)(a4 + 120);
        }
        *v25 = 2;
        v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v26;
        *v26 = HIBYTE(v14);
        v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v27;
        *v27 = BYTE2(v14);
        v28 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v28 + 1;
        *(_BYTE *)(v28 + 1) = BYTE1(v14);
        v29 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v29 + 1;
        *(_BYTE *)(v29 + 1) = v14;
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
        v16 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v16 + 1;
        *(_BYTE *)(v16 + 1) = v14;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v17 = dword_65442C;
      }
      if ( !v17 )
        goto LABEL_4;
      if ( v17 == 0x80000000 )
        v17 = 1 - v14;
      if ( v17 < 0 )
      {
        v18 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v18 )
        {
          *(_DWORD *)(a4 + 44) = v18;
          *(_DWORD *)(a4 + 48) = v17 + v18;
          goto LABEL_16;
        }
      }
      else
      {
        v18 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v17 + v18;
LABEL_16:
      v7 = *(_DWORD *)(a2 + 28);
      ++v5;
    }
    while ( v7 > v5 );
  }
LABEL_17:
  if ( v7 <= 2 )
  {
    v30 = sub_471010(a4, "1", 1, 0);
    if ( v30 <= 255 )
    {
      v38 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v38 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v38 = *(_BYTE **)(a4 + 120);
      }
      *v38 = 1;
      v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v39;
      *v39 = v30;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v36 = dword_65442C;
    }
    else
    {
      v31 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v31 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v31 = *(_BYTE **)(a4 + 120);
      }
      *v31 = 2;
      v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v32;
      *v32 = HIBYTE(v30);
      v33 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v33;
      *v33 = BYTE2(v30);
      v34 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v34 + 1;
      *(_BYTE *)(v34 + 1) = BYTE1(v30);
      v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v35;
      *v35 = v30;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v36 = dword_65444C;
    }
    if ( !v36 )
      goto LABEL_45;
    if ( v36 == 0x80000000 )
      v36 = 1 - v30;
    if ( v36 < 0 )
    {
      v37 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v37 )
      {
        *(_DWORD *)(a4 + 44) = v37;
        *(_DWORD *)(a4 + 48) = v36 + v37;
        goto LABEL_45;
      }
    }
    else
    {
      v37 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v36 + v37;
LABEL_45:
    ++v5;
  }
  v19 = v5 - 1;
  if ( v19 > 1 )
  {
    v20 = *(_BYTE **)(a4 + 120);
    do
    {
      if ( v20 == *(_BYTE **)(a4 + 128) )
      {
        sub_439150(a4);
        v20 = *(_BYTE **)(a4 + 120);
      }
      *v20 = 99;
      v21 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v20 = (_BYTE *)(v21 + 1);
      *(_QWORD *)(a4 + 120) = v21 + 1;
      v22 = dword_65506C;
      if ( dword_65506C )
      {
        if ( dword_65506C == 0x80000000 )
        {
          v23 = *(_DWORD *)(a4 + 48);
          v22 = 1;
        }
        else if ( dword_65506C < 0 )
        {
          v23 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v23 )
            *(_DWORD *)(a4 + 44) = v23;
        }
        else
        {
          v23 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v23 + v22;
      }
      --v19;
    }
    while ( v19 > 1 );
  }
  return 0;
}

