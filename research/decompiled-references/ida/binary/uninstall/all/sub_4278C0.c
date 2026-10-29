__int64 __fastcall sub_4278C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  char v14; // al
  _BYTE *v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  char v26; // al
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  __int64 v33; // rcx
  char v34; // al
  _BYTE *v35; // rcx
  char v36; // al
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  unsigned int v39; // eax
  _BYTE *v40; // rcx
  char v41; // al
  _BYTE *v42; // rcx
  char v43; // al
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  unsigned int v46; // eax
  _BYTE *v47; // rcx
  int v48; // [rsp+24h] [rbp-34h] BYREF
  int v49; // [rsp+28h] [rbp-30h] BYREF
  int v50; // [rsp+2Ch] [rbp-2Ch] BYREF

  v5 = *(_QWORD *)(a4 + 3264);
  result = 1;
  if ( *(_QWORD *)(a4 + 24) && *(_DWORD *)(a2 + 28) == 3 )
  {
    v7 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
    v8 = 24LL * (*(_DWORD *)(v5 + 28) - 1);
    sub_41F660(
      a1,
      v7,
      a4,
      1u,
      (unsigned int *)&v48,
      &v49,
      &v50,
      *(_DWORD *)(*(_QWORD *)(v8 + *(_QWORD *)(v5 + 16) + 8) + 4LL),
      *(_QWORD *)(*(_QWORD *)(v8 + *(_QWORD *)(v5 + 16) + 16) + 8LL));
    v9 = v7 + 24LL * *(int *)(v7 + 20);
    if ( *(_DWORD *)(v9 + 24) == 2 )
    {
      v18 = sub_471010(a4, *(_QWORD *)(v9 + 56), *(unsigned int *)(v9 + 64), 0);
      if ( v18 > 255 )
      {
        v28 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v28 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v28 = *(_BYTE **)(a4 + 120);
        }
        *v28 = 2;
        v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v29;
        *v29 = HIBYTE(v18);
        v30 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v30;
        *v30 = BYTE2(v18);
        v31 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v31 + 1;
        *(_BYTE *)(v31 + 1) = BYTE1(v18);
        v32 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v32;
        *v32 = v18;
        v33 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v22 = dword_65444C;
        v13 = (_BYTE *)(v33 + 1);
        *(_QWORD *)(a4 + 120) = v13;
      }
      else
      {
        v19 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v19 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v19 = *(_BYTE **)(a4 + 120);
        }
        *v19 = 1;
        v20 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v20;
        *v20 = v18;
        v21 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v22 = dword_65442C;
        v13 = (_BYTE *)(v21 + 1);
        *(_QWORD *)(a4 + 120) = v13;
      }
      if ( v22 )
      {
        if ( v22 == 0x80000000 )
          v22 = 1 - v18;
        if ( v22 < 0 )
        {
          v23 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v23 )
            *(_DWORD *)(a4 + 44) = v23;
        }
        else
        {
          v23 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v22 + v23;
      }
    }
    else
    {
      v10 = *(_QWORD *)(v5 + 16);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v8 + v10 + 8) + 8LL);
      v11 = *(_QWORD *)(v8 + v10 + 16);
      v12 = *(unsigned int *)(v9 + 44);
      *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v11 + 16);
      sub_4399D0(a1, v9 + 48, v12, a4);
      v13 = *(_BYTE **)(a4 + 120);
    }
    if ( v49 )
    {
      if ( v50 )
      {
        if ( v48 >= 0 )
        {
          if ( v48 > 255 )
          {
            if ( (unsigned __int64)(v13 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v13 = *(_BYTE **)(a4 + 120);
            }
            *v13 = 89;
            v34 = HIBYTE(v48);
            v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v35;
            *v35 = v34;
            v36 = BYTE2(v48);
            v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v37;
            *v37 = v36;
            v38 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v39 = (unsigned int)v48 >> 8;
            *(_QWORD *)(a4 + 120) = v38;
            *v38 = v39;
            LOBYTE(v39) = v48;
            v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v40;
            *v40 = v39;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v16 = dword_654F2C;
          }
          else
          {
            if ( (unsigned __int64)(v13 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v13 = *(_BYTE **)(a4 + 120);
            }
            *v13 = 88;
            v14 = v48;
            v15 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v15;
            *v15 = v14;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v16 = dword_654F0C;
          }
LABEL_13:
          if ( !v16 )
            return 0;
          if ( v16 == 0x80000000 )
            v16 = 1 - v48;
          goto LABEL_16;
        }
        if ( v13 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v13 = *(_BYTE **)(a4 + 120);
        }
        *v13 = 93;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v16 = dword_654FAC;
      }
      else
      {
        if ( v48 >= 0 )
        {
          if ( v48 > 255 )
          {
            if ( (unsigned __int64)(v13 + 5) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v13 = *(_BYTE **)(a4 + 120);
            }
            *v13 = 91;
            v41 = HIBYTE(v48);
            v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v42;
            *v42 = v41;
            v43 = BYTE2(v48);
            v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v44;
            *v44 = v43;
            v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            v46 = (unsigned int)v48 >> 8;
            *(_QWORD *)(a4 + 120) = v45;
            *v45 = v46;
            LOBYTE(v46) = v48;
            v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v47;
            *v47 = v46;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v16 = dword_654F6C;
          }
          else
          {
            if ( (unsigned __int64)(v13 + 2) > *(_QWORD *)(a4 + 128) )
            {
              sub_439150(a4);
              v13 = *(_BYTE **)(a4 + 120);
            }
            *v13 = 90;
            v26 = v48;
            v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
            *(_QWORD *)(a4 + 120) = v27;
            *v27 = v26;
            ++*(_QWORD *)(a4 + 120);
            *(_DWORD *)(a4 + 3276) = 0;
            v16 = dword_654F4C;
          }
          goto LABEL_13;
        }
        if ( v13 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v13 = *(_BYTE **)(a4 + 120);
        }
        *v13 = 92;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v16 = dword_654F8C;
      }
      if ( !v16 )
        return 0;
      if ( v16 == 0x80000000 )
      {
        v16 = 1;
        goto LABEL_17;
      }
LABEL_16:
      if ( v16 < 0 )
      {
        v17 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v17 )
          *(_DWORD *)(a4 + 44) = v17;
        goto LABEL_18;
      }
LABEL_17:
      v17 = *(_DWORD *)(a4 + 48);
LABEL_18:
      *(_DWORD *)(a4 + 48) = v16 + v17;
      return 0;
    }
    if ( v13 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v13 = *(_BYTE **)(a4 + 120);
    }
    *v13 = 93;
    *(_DWORD *)(a4 + 3276) = 0;
    v24 = dword_654FAC;
    ++*(_QWORD *)(a4 + 120);
    if ( !v24 )
      return 0;
    if ( v24 == 0x80000000 )
    {
      v24 = 1;
    }
    else if ( v24 < 0 )
    {
      v25 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v25 )
        *(_DWORD *)(a4 + 44) = v25;
      goto LABEL_38;
    }
    v25 = *(_DWORD *)(a4 + 48);
LABEL_38:
    *(_DWORD *)(a4 + 48) = v25 + v24;
    return 0;
  }
  return result;
}

