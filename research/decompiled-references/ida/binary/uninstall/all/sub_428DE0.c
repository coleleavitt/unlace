__int64 __fastcall sub_428DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  __int64 result; // rax
  int v7; // r15d
  __int64 v8; // rbp
  int v9; // r13d
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r12d
  _BYTE *v15; // rsi
  _BYTE *v16; // rsi
  int v17; // edx
  int v18; // ecx
  _BYTE *v19; // rsi
  _BYTE *v20; // rsi
  __int64 v21; // rcx
  _BYTE *v22; // rsi
  _BYTE *v23; // rsi
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r12
  int v28; // r13d
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  _BYTE *v36; // rsi
  char v37; // al
  _BYTE *v38; // rsi
  char v39; // al
  _BYTE *v40; // rsi
  _BYTE *v41; // rsi
  unsigned int v42; // eax
  _BYTE *v43; // rsi
  int v44; // eax
  _BYTE *v45; // rsi
  _BYTE *v46; // rsi
  _BYTE *v47; // rsi
  _BYTE *v48; // rsi
  _BYTE *v49; // rsi
  _BYTE *v50; // rsi
  int v51; // ecx
  __int64 v52; // rax
  __int64 *v53; // rdi
  int v54; // ebp
  _BYTE *v55; // rsi
  _BYTE *v56; // rsi
  __int64 v57; // rsi
  int v58; // eax
  int v59; // ecx
  _BYTE *v60; // rsi
  _BYTE *v61; // rsi
  _BYTE *v62; // rsi
  __int64 v63; // rdx
  _BYTE *v64; // rsi
  __int64 v65; // rsi
  __int64 v66; // [rsp+0h] [rbp-48h]
  int v68; // [rsp+14h] [rbp-34h] BYREF

  v5 = *(_DWORD *)(a2 + 28);
  v66 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v7 = *(_DWORD *)(v66 + 28) - 1;
  if ( v5 <= 1 )
    return result;
  v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
  if ( v5 == 3 )
  {
    v26 = v8 + 24LL * *(int *)(v8 + 20);
    if ( *(_DWORD *)(v26 + 24) == 2 )
    {
      v27 = sub_48DF10(*(void **)(v26 + 56), *(unsigned int *)(v26 + 64));
      v28 = sub_47C180(0, v27, &v68);
      v29 = *(_DWORD *)v27 - 1;
      v30 = *(_DWORD *)v27 == 1;
      *(_DWORD *)v27 = v29;
      if ( v29 < 0 || v30 )
      {
        v52 = *(_QWORD *)(v27 + 24);
        if ( v52 && *(_QWORD *)(v52 + 8) )
        {
          sub_47B120(v27);
        }
        else
        {
          v53 = *(__int64 **)(v27 + 8);
          if ( v53 && v53 != off_656088 )
            Tcl_Free((__int64)v53);
          *(_DWORD *)(v27 + 16) = -1;
          sub_496830(v27);
        }
      }
      if ( !v28 && v68 >= 0 )
      {
        if ( *(_DWORD *)v8 == 2 )
        {
          v54 = sub_471010(a4, *(_QWORD *)(v8 + 32), *(unsigned int *)(v8 + 40), 0);
          if ( v54 > 255 )
          {
            v60 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v60 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v60 = *(_BYTE **)(a4 + 120);
            }
            *v60 = 2;
            v61 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v61;
            *v61 = HIBYTE(v54);
            v62 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v62;
            *v62 = BYTE2(v54);
            v63 = *(_QWORD *)(a4 + 120);
            *(_QWORD *)(a4 + 120) = v63 + 1;
            *(_BYTE *)(v63 + 1) = BYTE1(v54);
            v64 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v64;
            *v64 = v54;
            v65 = *(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v58 = dword_65444C;
            v36 = (_BYTE *)(v65 + 1);
            *(_QWORD *)(a4 + 120) = v36;
          }
          else
          {
            v55 = *(_BYTE **)(a4 + 120);
            if ( (unsigned __int64)(v55 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v55 = *(_BYTE **)(a4 + 120);
            }
            *v55 = 1;
            v56 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v56;
            *v56 = v54;
            v57 = *(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v58 = dword_65442C;
            v36 = (_BYTE *)(v57 + 1);
            *(_QWORD *)(a4 + 120) = v36;
          }
          if ( !v58 )
            goto LABEL_35;
          if ( v58 == 0x80000000 )
            v58 = 1 - v54;
          if ( v58 < 0 )
          {
            v59 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v59 )
            {
              *(_DWORD *)(a4 + 44) = v59;
              *(_DWORD *)(a4 + 48) = v58 + v59;
              goto LABEL_35;
            }
          }
          else
          {
            v59 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v58 + v59;
        }
        else
        {
          v31 = *(_QWORD *)(v66 + 16);
          v32 = 24LL * v7;
          v33 = *(_QWORD *)(v32 + v31 + 8);
          v34 = *(_QWORD *)(*(_QWORD *)(v32 + v31 + 16) + 8LL);
          *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v33 + 4);
          v35 = *(unsigned int *)(v8 + 20);
          *(_QWORD *)(a4 + 3288) = v34;
          sub_4399D0(a1, v8 + 24, v35, a4);
          v36 = *(_BYTE **)(a4 + 120);
        }
LABEL_35:
        if ( (unsigned __int64)(v36 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v36 = *(_BYTE **)(a4 + 120);
        }
        *v36 = 103;
        v37 = HIBYTE(v68);
        v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v38;
        *v38 = v37;
        v39 = BYTE2(v68);
        v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v40;
        *v40 = v39;
        v41 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        v42 = (unsigned int)v68 >> 8;
        *(_QWORD *)(a4 + 120) = v41;
        *v41 = v42;
        LOBYTE(v42) = v68;
        v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v43;
        *v43 = v42;
        *(_DWORD *)(a4 + 3276) = 0;
        v44 = dword_6550EC;
        ++*(_QWORD *)(a4 + 120);
        if ( !v44 )
          return 0;
        if ( v44 == 0x80000000 )
          v44 = 1 - v68;
        goto LABEL_47;
      }
    }
  }
  v9 = 1;
  v10 = 24LL * v7;
  do
  {
    while ( *(_DWORD *)v8 != 2 )
    {
      v11 = *(_QWORD *)(v66 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v10 + v11 + 8) + 4LL * v9);
      v12 = *(_QWORD *)(v10 + v11 + 16);
      v13 = *(unsigned int *)(v8 + 20);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v12 + 8LL * v9);
      sub_4399D0(a1, v8 + 24, v13, a4);
LABEL_5:
      ++v9;
      v8 += 24LL * *(int *)(v8 + 20) + 24;
      if ( v9 >= v5 )
        goto LABEL_18;
    }
    v14 = sub_471010(a4, *(_QWORD *)(v8 + 32), *(unsigned int *)(v8 + 40), 0);
    if ( v14 > 255 )
    {
      v45 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v45 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v45 = *(_BYTE **)(a4 + 120);
      }
      *v45 = 2;
      v46 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v46;
      *v46 = HIBYTE(v14);
      v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v47;
      *v47 = BYTE2(v14);
      v48 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v48;
      *v48 = BYTE1(v14);
      v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v49;
      *v49 = v14;
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
    ++v9;
    v8 += 24LL * *(int *)(v8 + 20) + 24;
  }
  while ( v9 < v5 );
LABEL_18:
  if ( v5 == 3 )
  {
    v50 = *(_BYTE **)(a4 + 120);
    if ( v50 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v50 = *(_BYTE **)(a4 + 120);
    }
    *v50 = 80;
    *(_DWORD *)(a4 + 3276) = 0;
    v44 = dword_654E0C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v44 )
      return 0;
    if ( v44 == 0x80000000 )
    {
      v51 = *(_DWORD *)(a4 + 48);
      v44 = 1;
      goto LABEL_49;
    }
LABEL_47:
    if ( v44 < 0 )
    {
      v51 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v51 )
      {
        *(_DWORD *)(a4 + 44) = v51;
        *(_DWORD *)(a4 + 48) = v44 + v51;
        return 0;
      }
    }
    else
    {
      v51 = *(_DWORD *)(a4 + 48);
    }
LABEL_49:
    *(_DWORD *)(a4 + 48) = v44 + v51;
    return 0;
  }
  v19 = *(_BYTE **)(a4 + 120);
  if ( (unsigned __int64)(v19 + 5) > *(_QWORD *)(a4 + 128) )
  {
    sub_439150(a4);
    v19 = *(_BYTE **)(a4 + 120);
  }
  *v19 = 94;
  v20 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v20;
  *v20 = (unsigned int)(v5 - 1) >> 24;
  v21 = *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a4 + 120) = v21 + 1;
  *(_BYTE *)(v21 + 1) = (unsigned int)(v5 - 1) >> 16;
  v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v22;
  *v22 = (unsigned __int16)(v5 - 1) >> 8;
  v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
  *(_QWORD *)(a4 + 120) = v23;
  *v23 = v5 - 1;
  *(_DWORD *)(a4 + 3276) = 0;
  v24 = dword_654FCC;
  ++*(_QWORD *)(a4 + 120);
  if ( v24 )
  {
    if ( v24 == 0x80000000 )
      v24 = 2 - v5;
    if ( v24 >= 0 )
    {
      v25 = *(_DWORD *)(a4 + 48);
      goto LABEL_26;
    }
    v25 = *(_DWORD *)(a4 + 48);
    if ( *(_DWORD *)(a4 + 44) >= v25 )
    {
LABEL_26:
      *(_DWORD *)(a4 + 48) = v25 + v24;
    }
    else
    {
      *(_DWORD *)(a4 + 44) = v25;
      *(_DWORD *)(a4 + 48) = v25 + v24;
    }
  }
  return 0;
}

