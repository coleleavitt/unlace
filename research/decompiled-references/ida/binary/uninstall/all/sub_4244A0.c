__int64 __fastcall sub_4244A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // edx
  unsigned int v7; // ecx
  _BOOL4 v9; // r15d
  __int64 v10; // r13
  __int64 v11; // r12
  _BYTE *v12; // rcx
  char v13; // al
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  unsigned int v16; // eax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  __int64 v35; // rax
  int v36; // ebx
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // edx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  __int64 v45; // rdx
  _BYTE *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // [rsp+1Ch] [rbp-3Ch] BYREF
  int v51; // [rsp+20h] [rbp-38h] BYREF
  int v52; // [rsp+24h] [rbp-34h] BYREF

  v5 = *(_QWORD *)(a4 + 3264);
  v6 = *(_DWORD *)(a2 + 28);
  v7 = 1;
  if ( (unsigned int)(v6 - 2) <= 1 )
  {
    v9 = v6 == 3;
    v10 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
    v11 = 24LL * (*(_DWORD *)(v5 + 28) - 1);
    sub_41F660(
      a1,
      v10,
      a4,
      1u,
      (unsigned int *)&v50,
      &v51,
      &v52,
      *(_DWORD *)(*(_QWORD *)(v11 + *(_QWORD *)(v5 + 16) + 8) + 4LL),
      *(_QWORD *)(*(_QWORD *)(v11 + *(_QWORD *)(v5 + 16) + 16) + 8LL));
    if ( !v9 )
    {
LABEL_4:
      v12 = *(_BYTE **)(a4 + 120);
      goto LABEL_5;
    }
    v21 = v10 + 24LL * *(int *)(v10 + 20);
    if ( *(_DWORD *)(v21 + 24) != 2 )
    {
      v22 = *(_QWORD *)(v5 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v11 + v22 + 8) + 8LL);
      v23 = *(_QWORD *)(v11 + v22 + 16);
      v24 = *(unsigned int *)(v21 + 44);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v23 + 16);
      sub_4399D0(a1, v21 + 48, v24, a4);
      goto LABEL_4;
    }
    v36 = sub_471010(a4, *(_QWORD *)(v21 + 56), *(unsigned int *)(v21 + 64), 0);
    if ( v36 > 255 )
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
      *v43 = HIBYTE(v36);
      v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v44;
      *v44 = BYTE2(v36);
      v45 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v45 + 1;
      *(_BYTE *)(v45 + 1) = BYTE1(v36);
      v46 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v46;
      *v46 = v36;
      v47 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v40 = dword_65444C;
      v12 = (_BYTE *)(v47 + 1);
      *(_QWORD *)(a4 + 120) = v12;
    }
    else
    {
      v37 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v37 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v37 = *(_BYTE **)(a4 + 120);
      }
      *v37 = 1;
      v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v38;
      *v38 = v36;
      v39 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v40 = dword_65442C;
      v12 = (_BYTE *)(v39 + 1);
      *(_QWORD *)(a4 + 120) = v12;
    }
    if ( v40 )
    {
      if ( v40 == 0x80000000 )
        v40 = 1 - v36;
      if ( v40 >= 0 )
      {
        v41 = *(_DWORD *)(a4 + 48);
LABEL_53:
        *(_DWORD *)(a4 + 48) = v40 + v41;
        goto LABEL_5;
      }
      v41 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v41 )
        goto LABEL_53;
      *(_DWORD *)(a4 + 44) = v41;
      *(_DWORD *)(a4 + 48) = v40 + v41;
    }
LABEL_5:
    if ( v51 )
    {
      if ( v52 )
      {
        if ( v50 >= 0 )
        {
          if ( v50 <= 255 )
          {
            if ( (unsigned __int64)(v12 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v12 = *(_BYTE **)(a4 + 120);
            }
            *(_QWORD *)(a4 + 120) = v12 + 1;
            *v12 = !v9 ? 10 : 17;
            *(_BYTE *)(*(_QWORD *)(a4 + 120))++ = v50;
            v29 = -(__int64)!v9;
            *(_DWORD *)(a4 + 3276) = 0;
            LOBYTE(v29) = v29 & 0x20;
            v19 = *(_DWORD *)((char *)&off_654400 + v29 + 556);
          }
          else
          {
            if ( (unsigned __int64)(v12 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v12 = *(_BYTE **)(a4 + 120);
            }
            *(_QWORD *)(a4 + 120) = v12 + 1;
            *v12 = !v9 ? 11 : 18;
            **(_BYTE **)(a4 + 120) = HIBYTE(v50);
            v13 = BYTE2(v50);
            v14 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v14;
            *v14 = v13;
            v15 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v16 = (unsigned int)v50 >> 8;
            *(_QWORD *)(a4 + 120) = v15;
            *v15 = v16;
            LOBYTE(v16) = v50;
            v17 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v17;
            *v17 = v16;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v18 = -(__int64)!v9;
            LOBYTE(v18) = v18 & 0x20;
            v19 = *(_DWORD *)((char *)&off_654400 + v18 + 588);
          }
LABEL_12:
          if ( !v19 )
            return 0;
          if ( v19 == 0x80000000 )
            v19 = 1 - v50;
          goto LABEL_15;
        }
        if ( v12 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v12 = *(_BYTE **)(a4 + 120);
        }
        *(_QWORD *)(a4 + 120) = v12 + 1;
        *v12 = !v9 ? 12 : 19;
        v48 = -(__int64)!v9;
        LOBYTE(v48) = v48 & 0x20;
        *(_DWORD *)(a4 + 3276) = 0;
        v19 = *(_DWORD *)((char *)&off_654400 + v48 + 620);
      }
      else
      {
        if ( v50 >= 0 )
        {
          if ( v50 > 255 )
          {
            if ( (unsigned __int64)(v12 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v12 = *(_BYTE **)(a4 + 120);
            }
            *(_QWORD *)(a4 + 120) = v12 + 1;
            *v12 = !v9 ? 14 : 21;
            **(_BYTE **)(a4 + 120) = HIBYTE(v50);
            v30 = BYTE2(v50);
            v31 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v31;
            *v31 = v30;
            v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v33 = (unsigned int)v50 >> 8;
            *(_QWORD *)(a4 + 120) = v32;
            *v32 = v33;
            LOBYTE(v33) = v50;
            v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v34;
            *v34 = v33;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v35 = -(__int64)!v9;
            LOBYTE(v35) = v35 & 0x20;
            v19 = *(_DWORD *)((char *)&off_654400 + v35 + 684);
          }
          else
          {
            if ( (unsigned __int64)(v12 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v12 = *(_BYTE **)(a4 + 120);
            }
            *(_QWORD *)(a4 + 120) = v12 + 1;
            *v12 = !v9 ? 13 : 20;
            *(_BYTE *)(*(_QWORD *)(a4 + 120))++ = v50;
            v28 = -(__int64)!v9;
            *(_DWORD *)(a4 + 3276) = 0;
            LOBYTE(v28) = v28 & 0x20;
            v19 = *(_DWORD *)((char *)&off_654400 + v28 + 652);
          }
          goto LABEL_12;
        }
        if ( v12 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v12 = *(_BYTE **)(a4 + 120);
        }
        *(_QWORD *)(a4 + 120) = v12 + 1;
        *v12 = !v9 ? 15 : 22;
        v49 = -(__int64)!v9;
        LOBYTE(v49) = v49 & 0x20;
        *(_DWORD *)(a4 + 3276) = 0;
        v19 = *(_DWORD *)((char *)&off_654400 + v49 + 716);
      }
      if ( !v19 )
        return 0;
      if ( v19 == 0x80000000 )
      {
        v20 = *(_DWORD *)(a4 + 48);
        v19 = 1;
LABEL_17:
        *(_DWORD *)(a4 + 48) = v19 + v20;
        return 0;
      }
LABEL_15:
      if ( v19 < 0 )
      {
        v20 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v20 )
        {
          *(_DWORD *)(a4 + 44) = v20;
          *(_DWORD *)(a4 + 48) = v19 + v20;
          return 0;
        }
      }
      else
      {
        v20 = *(_DWORD *)(a4 + 48);
      }
      goto LABEL_17;
    }
    if ( v12 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v12 = *(_BYTE **)(a4 + 120);
    }
    *(_QWORD *)(a4 + 120) = v12 + 1;
    *v12 = !v9 ? 16 : 23;
    v25 = -(__int64)!v9;
    *(_DWORD *)(a4 + 3276) = 0;
    LOBYTE(v25) = v25 & 0x20;
    v26 = *(_DWORD *)((char *)&off_654400 + v25 + 748);
    if ( !v26 )
      return 0;
    if ( v26 == 0x80000000 )
    {
      v27 = *(_DWORD *)(a4 + 48);
      v26 = 1;
    }
    else if ( v26 < 0 )
    {
      v27 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v27 )
      {
        *(_DWORD *)(a4 + 44) = v27;
        *(_DWORD *)(a4 + 48) = v27 + v26;
        return 0;
      }
    }
    else
    {
      v27 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v27 + v26;
    return 0;
  }
  return v7;
}

