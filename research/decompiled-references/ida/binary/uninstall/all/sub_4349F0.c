__int64 __fastcall sub_4349F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  _BYTE *v7; // rcx
  char v8; // al
  _BYTE *v9; // rcx
  char v10; // al
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  unsigned int v13; // eax
  _BYTE *v14; // rcx
  int v15; // eax
  int v16; // edx
  _BYTE *v17; // rcx
  int v18; // eax
  int v19; // edx
  _BYTE *v20; // rcx
  char v21; // al
  _BYTE *v22; // rcx
  char v23; // al
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  int v30; // [rsp+24h] [rbp-14h] BYREF
  int v31; // [rsp+28h] [rbp-10h] BYREF
  _DWORD v32[3]; // [rsp+2Ch] [rbp-Ch] BYREF

  result = 1;
  v6 = *(_QWORD *)(a4 + 3264);
  if ( *(_DWORD *)(a2 + 28) == 2 )
  {
    sub_41F660(
      a1,
      *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24,
      a4,
      1u,
      (unsigned int *)&v30,
      &v31,
      v32,
      *(_DWORD *)(*(_QWORD *)(24LL * (*(_DWORD *)(v6 + 28) - 1) + *(_QWORD *)(v6 + 16) + 8) + 4LL),
      *(_QWORD *)(*(_QWORD *)(24LL * (*(_DWORD *)(v6 + 28) - 1) + *(_QWORD *)(v6 + 16) + 16) + 8LL));
    if ( v31 )
    {
      if ( v32[0] )
      {
        if ( v30 >= 0 )
        {
          v20 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v20 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v20 = *(_BYTE **)(a4 + 120);
          }
          *v20 = 0x80;
          v21 = HIBYTE(v30);
          v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v22;
          *v22 = v21;
          v23 = BYTE2(v30);
          v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v24;
          *v24 = v23;
          v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          v26 = (unsigned int)v30 >> 8;
          *(_QWORD *)(a4 + 120) = v25;
          *v25 = v26;
          LOBYTE(v26) = v30;
          v27 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v27;
          *v27 = v26;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v15 = dword_65540C;
          goto LABEL_8;
        }
        v29 = *(_BYTE **)(a4 + 120);
        if ( v29 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v29 = *(_BYTE **)(a4 + 120);
        }
        *v29 = -125;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v15 = dword_65546C;
      }
      else
      {
        if ( v30 >= 0 )
        {
          v7 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v7 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v7 = *(_BYTE **)(a4 + 120);
          }
          *v7 = -127;
          v8 = HIBYTE(v30);
          v9 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v9;
          *v9 = v8;
          v10 = BYTE2(v30);
          v11 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v11;
          *v11 = v10;
          v12 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          v13 = (unsigned int)v30 >> 8;
          *(_QWORD *)(a4 + 120) = v12;
          *v12 = v13;
          LOBYTE(v13) = v30;
          v14 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v14;
          *v14 = v13;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v15 = dword_65542C;
LABEL_8:
          if ( !v15 )
            return 0;
          if ( v15 == 0x80000000 )
            v15 = 1 - v30;
          goto LABEL_11;
        }
        v28 = *(_BYTE **)(a4 + 120);
        if ( v28 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v28 = *(_BYTE **)(a4 + 120);
        }
        *v28 = -126;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v15 = dword_65544C;
      }
      if ( !v15 )
        return 0;
      if ( v15 == 0x80000000 )
      {
        v16 = *(_DWORD *)(a4 + 48);
        v15 = 1;
LABEL_13:
        *(_DWORD *)(a4 + 48) = v15 + v16;
        return 0;
      }
LABEL_11:
      if ( v15 < 0 )
      {
        v16 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v16 )
        {
          *(_DWORD *)(a4 + 44) = v16;
          *(_DWORD *)(a4 + 48) = v15 + v16;
          return 0;
        }
      }
      else
      {
        v16 = *(_DWORD *)(a4 + 48);
      }
      goto LABEL_13;
    }
    v17 = *(_BYTE **)(a4 + 120);
    if ( v17 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v17 = *(_BYTE **)(a4 + 120);
    }
    *v17 = -125;
    *(_DWORD *)(a4 + 3276) = 0;
    v18 = dword_65546C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v18 )
      return 0;
    if ( v18 == 0x80000000 )
    {
      v19 = *(_DWORD *)(a4 + 48);
      v18 = 1;
    }
    else if ( v18 < 0 )
    {
      v19 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v19 )
      {
        *(_DWORD *)(a4 + 44) = v19;
        *(_DWORD *)(a4 + 48) = v19 + v18;
        return 0;
      }
    }
    else
    {
      v19 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v19 + v18;
    return 0;
  }
  return result;
}

