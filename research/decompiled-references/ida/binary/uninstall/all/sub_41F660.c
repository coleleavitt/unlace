__int64 __fastcall sub_41F660(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        _DWORD *a7,
        int a8,
        __int64 a9)
{
  int v9; // r12d
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  _BYTE *v19; // rcx
  int v20; // eax
  int v21; // edx
  _BYTE *v22; // rsi
  bool i; // cc
  int v24; // ebx
  _BYTE *v25; // r15
  int v26; // esi
  int v27; // edx
  _BYTE *v28; // rcx
  bool j; // cc
  int v30; // ebx
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  int v36; // edx
  int v37; // eax
  int v38; // eax
  int v39; // edx
  _BYTE *v40; // rcx
  int v41; // ebx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  _BYTE *v46; // rcx
  int v47; // edx
  int v48; // eax
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  int v55; // [rsp+8h] [rbp-70h]
  int v56; // [rsp+Ch] [rbp-6Ch]
  int v57; // [rsp+10h] [rbp-68h]
  unsigned int v58; // [rsp+14h] [rbp-64h]
  int v59; // [rsp+14h] [rbp-64h]
  int v60; // [rsp+18h] [rbp-60h]
  int v61; // [rsp+1Ch] [rbp-5Ch]
  __int64 v62; // [rsp+20h] [rbp-58h]
  _BYTE *v63; // [rsp+28h] [rbp-50h]

  v9 = 0;
  v62 = 0;
  v57 = 0;
  v56 = 0;
  v60 = 0;
  v63 = nullptr;
  v61 = 0;
  v58 = -1;
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( a1 )
    {
      v9 = *(_DWORD *)(a2 + 20);
      if ( v9 > 1 && *(_DWORD *)(a2 + 24) == 4 )
      {
        v17 = v9;
        v18 = 24LL * v9;
        if ( *(_DWORD *)(v18 + a2) == 4 && *(_BYTE *)(*(_QWORD *)(v18 + a2 + 8) + *(int *)(v18 + a2 + 16) - 1LL) == 41 )
        {
          v19 = *(_BYTE **)(a2 + 32);
          v20 = *(_DWORD *)(a2 + 40);
          v21 = 0;
          v22 = v19;
          for ( i = v20 <= 0; !i; i = v20 <= v21 )
          {
            if ( *v19 == 40 )
            {
              v60 = 1;
              v53 = *(_DWORD *)(24LL * v9 + a2 + 16);
              if ( v53 == 1 )
              {
                v17 = --v9;
              }
              else
              {
                v56 = v9;
                *(_DWORD *)(24LL * v9 + a2 + 16) = v53 - 1;
              }
              v25 = v22;
              v24 = (_DWORD)v19 - (_DWORD)v22;
              v63 = v19 + 1;
              v61 = *(_DWORD *)(24 * v17 + a2 + 16) + *(_QWORD *)(24 * v17 + a2 + 8) - (_DWORD)v19 - 1;
              v55 = *(_DWORD *)(a2 + 56) + ~(_DWORD)v19;
              if ( v55 )
              {
                v54 = sub_4495F0(a1, 24 * v17);
                *(_DWORD *)v54 = 4;
                *(_DWORD *)(v54 + 20) = 0;
                v62 = v54;
                v57 = 1;
                *(_QWORD *)(v54 + 8) = v63;
                *(_DWORD *)(v54 + 16) = v55;
                memcpy((void *)(v54 + 24), (const void *)(a2 + 48), 24LL * (v9 - 1));
              }
              else
              {
                --v9;
                v62 = a2 + 48;
              }
              goto LABEL_21;
            }
            ++v21;
            ++v19;
          }
        }
      }
      if ( a1 )
      {
        v13 = a2 + 24;
        v14 = a3;
        *(_DWORD *)(a3 + 3272) = a8;
        v15 = *(unsigned int *)(a2 + 20);
        *(_QWORD *)(a3 + 3288) = a9;
LABEL_6:
        sub_4399D0(a1, v13, v15, v14);
        goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v24 = *(_DWORD *)(a2 + 40);
  v25 = *(_BYTE **)(a2 + 32);
  v60 = 1;
  if ( v25[v24 - 1] == 41 )
  {
    v39 = 0;
    v40 = *(_BYTE **)(a2 + 32);
    if ( v24 > 0 )
    {
      while ( *v40 != 40 )
      {
        ++v39;
        ++v40;
        if ( v39 >= v24 )
          goto LABEL_49;
      }
      v63 = v40 + 1;
      v61 = v24 - v39 - 2;
      v24 = v39;
    }
LABEL_49:
    if ( v63 != nullptr && a1 != 0 && v61 )
    {
      v9 = 1;
      v62 = sub_4495F0(a1, 24);
      v57 = 1;
      *(_DWORD *)v62 = 4;
      *(_DWORD *)(v62 + 20) = 0;
      *(_QWORD *)(v62 + 8) = v63;
      *(_DWORD *)(v62 + 16) = v61;
    }
  }
LABEL_21:
  v26 = 0;
  v27 = 0;
  v28 = v25;
  for ( j = v24 > 0; j; j = v27 < v24 )
  {
    if ( *v28 == 58 && v27 + 1 < v24 && v28[1] == 58 )
    {
      v26 = 1;
      break;
    }
    ++v27;
    ++v28;
  }
  if ( v26 == 0 && *(_QWORD *)(a3 + 24) != 0 )
  {
    v59 = sub_439880(v25);
    v38 = -1;
    if ( ((v59 > 255) & (a4 >> 1)) == 0 )
      v38 = v59;
    v58 = v38;
  }
  if ( ((v58 >> 31) & (a1 != 0)) != 0 )
  {
    v30 = sub_471010(a3, v25, (unsigned int)v24, 0);
    if ( v30 <= 255 )
    {
      v49 = *(_BYTE **)(a3 + 120);
      if ( (unsigned __int64)(v49 + 2) > *(_QWORD *)(a3 + 128) )
      {
        sub_439150(a3);
        v49 = *(_BYTE **)(a3 + 120);
      }
      *v49 = 1;
      v50 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v50;
      *v50 = v30;
      ++*(_QWORD *)(a3 + 120);
      *(_DWORD *)(a3 + 3276) = 0;
      v36 = dword_65442C;
    }
    else
    {
      v31 = *(_BYTE **)(a3 + 120);
      if ( (unsigned __int64)(v31 + 5) > *(_QWORD *)(a3 + 128) )
      {
        sub_439150(a3);
        v31 = *(_BYTE **)(a3 + 120);
      }
      *v31 = 2;
      v32 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v32;
      *v32 = HIBYTE(v30);
      v33 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v33;
      *v33 = BYTE2(v30);
      v34 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v34;
      *v34 = BYTE1(v30);
      v35 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v35;
      *v35 = v30;
      ++*(_QWORD *)(a3 + 120);
      *(_DWORD *)(a3 + 3276) = 0;
      v36 = dword_65444C;
    }
    if ( v36 )
    {
      if ( v36 == 0x80000000 )
        v36 = 1 - v30;
      if ( v36 < 0 )
      {
        v37 = *(_DWORD *)(a3 + 48);
        if ( *(_DWORD *)(a3 + 44) < v37 )
        {
          *(_DWORD *)(a3 + 44) = v37;
          *(_DWORD *)(a3 + 48) = v36 + v37;
          goto LABEL_30;
        }
      }
      else
      {
        v37 = *(_DWORD *)(a3 + 48);
      }
      *(_DWORD *)(a3 + 48) = v36 + v37;
    }
  }
LABEL_30:
  if ( v63 != nullptr && a1 != 0 )
  {
    if ( v61 )
    {
      v14 = a3;
      v13 = v62;
      *(_DWORD *)(a3 + 3272) = a8;
      v15 = (unsigned int)v9;
      *(_QWORD *)(a3 + 3288) = a9;
      goto LABEL_6;
    }
    v41 = sub_471010(a3, "", 0, 0);
    if ( v41 <= 255 )
    {
      v51 = *(_BYTE **)(a3 + 120);
      if ( (unsigned __int64)(v51 + 2) > *(_QWORD *)(a3 + 128) )
      {
        sub_439150(a3);
        v51 = *(_BYTE **)(a3 + 120);
      }
      *v51 = 1;
      v52 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v52;
      *v52 = v41;
      ++*(_QWORD *)(a3 + 120);
      *(_DWORD *)(a3 + 3276) = 0;
      v47 = dword_65442C;
    }
    else
    {
      v42 = *(_BYTE **)(a3 + 120);
      if ( (unsigned __int64)(v42 + 5) > *(_QWORD *)(a3 + 128) )
      {
        sub_439150(a3);
        v42 = *(_BYTE **)(a3 + 120);
      }
      *v42 = 2;
      v43 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v43;
      *v43 = HIBYTE(v41);
      v44 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v44;
      *v44 = BYTE2(v41);
      v45 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v45;
      *v45 = BYTE1(v41);
      v46 = (_BYTE *)(*(_QWORD *)(a3 + 120) + 1LL);
      *(_QWORD *)(a3 + 120) = v46;
      *v46 = v41;
      ++*(_QWORD *)(a3 + 120);
      *(_DWORD *)(a3 + 3276) = 0;
      v47 = dword_65444C;
    }
    if ( v47 )
    {
      if ( v47 == 0x80000000 )
        v47 = 1 - v41;
      if ( v47 < 0 )
      {
        v48 = *(_DWORD *)(a3 + 48);
        if ( *(_DWORD *)(a3 + 44) < v48 )
        {
          *(_DWORD *)(a3 + 44) = v48;
          *(_DWORD *)(a3 + 48) = v47 + v48;
          goto LABEL_7;
        }
      }
      else
      {
        v48 = *(_DWORD *)(a3 + 48);
      }
      *(_DWORD *)(a3 + 48) = v47 + v48;
    }
  }
LABEL_7:
  if ( v56 )
    ++*(_DWORD *)(a2 + 24LL * v56 + 16);
  if ( v57 )
    sub_449510(a1, v62);
  *a5 = v58;
  *a6 = v60;
  *a7 = v63 == nullptr;
  return 0;
}

