__int64 __fastcall sub_46610(int a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(__int64 *, __int64, __int64); // rcx
  _BOOL8 v12; // rdx
  int v13; // eax
  _BOOL8 v14; // rdx
  int v15; // eax
  void (__fastcall *v16)(__int64 *, __int64, __int64); // rbp
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  const char *v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+8h] [rbp-20h]
  __int64 v26; // [rsp+10h] [rbp-18h]

  v2 = *a2;
  v25 = __readfsqword(0x28u);
  v4 = (*(__int64 (__fastcall **)(__int64 *))(v2 + 72))(a2);
  if ( *(_BYTE *)(v4 + 517) )
    return 1;
  v5 = v4;
  if ( a1 == -1 )
  {
    *(_BYTE *)(v4 + 517) = 1;
    HIWORD(v24) = sub_46530((_DWORD *)v4);
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 1, (char *)&v24 + 6);
  }
  else
  {
    if ( a1 != 1 )
    {
      if ( a1 == -2 )
      {
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 2, (char *)&v24 + 6);
        v15 = 7;
        if ( HIWORD(v24) != 5 )
        {
          v15 = HIWORD(v24);
          if ( HIWORD(v24) == 4 )
            v15 = 5;
        }
        *(_DWORD *)(v5 + 304) = v15;
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 4, (char *)&v24 + 6);
        *(_DWORD *)(v5 + 316) = HIWORD(v24);
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 3, (char *)&v24 + 6);
        *(_DWORD *)(v5 + 320) = HIWORD(v24);
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 5, (char *)&v24 + 6);
        *(_DWORD *)(v5 + 308) = HIWORD(v24);
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 6, (char *)&v24 + 6);
        *(_DWORD *)(v5 + 328) = HIWORD(v24);
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 7, (char *)&v24 + 6);
        *(_BYTE *)(v5 + 392) = HIWORD(v24) != 0;
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 8, (char *)&v24 + 6);
        *(_DWORD *)(v5 + 312) = HIWORD(v24);
        (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 9, (char *)&v24 + 6);
        *(_BYTE *)(v5 + 393) = BYTE6(v24);
      }
      return 1;
    }
    (*(void (__fastcall **)(__int64 *, __int64, char *))*a2)(a2, 1, (char *)&v24 + 6);
    if ( HIWORD(v24) > 0xDu )
    {
      v22 = "metaarm";
      HIWORD(v24) = 13;
    }
    else
    {
      v22 = off_A1440[HIWORD(v24)];
    }
    if ( !(unsigned __int8)sub_56980(v5 + 296, v22) )
    {
      sub_22E50((__int64)"Error setting architecture name %s", off_A1440[HIWORD(v24)]);
      return 1;
    }
  }
  v7 = *(unsigned int *)(v5 + 304);
  if ( (unsigned int)v7 <= 8 )
  {
    HIWORD(v24) = word_8B6A0[v7];
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 2, (char *)&v24 + 6);
    HIWORD(v24) = *(_DWORD *)(v5 + 316);
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 4, (char *)&v24 + 6);
    v8 = *(_DWORD *)(v5 + 320);
    if ( (unsigned __int16)v8 > 2u )
      LOWORD(v8) = 2;
    HIWORD(v24) = v8;
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 3, (char *)&v24 + 6);
    v9 = *(_DWORD *)(v5 + 308);
    if ( (unsigned __int16)v9 > 3u )
      LOWORD(v9) = 3;
    HIWORD(v24) = v9;
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 5, (char *)&v24 + 6);
    HIWORD(v24) = *(_DWORD *)(v5 + 328);
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 6, (char *)&v24 + 6);
    HIWORD(v24) = *(unsigned __int8 *)(v5 + 392);
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 7, (char *)&v24 + 6);
    HIWORD(v24) = *(_DWORD *)(v5 + 312);
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 8, (char *)&v24 + 6);
    HIWORD(v24) = *(unsigned __int8 *)(v5 + 393);
    (*(void (__fastcall **)(__int64 *, __int64, char *))(*a2 + 8))(a2, 9, (char *)&v24 + 6);
    v10 = *(unsigned int *)(v5 + 296);
    v11 = *(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 16);
    if ( (_DWORD)v10 == 9999 || (_DWORD)v10 == 22 )
    {
      v11(a2, 4, 1);
    }
    else
    {
      if ( (unsigned int)v10 > 0x15 || (v23 = -2308097, v12 = 0, _bittest64(&v23, v10)) )
        v12 = (*(_QWORD *)(v5 + 296) & 0xFFFFFFFFFFFFFFFBLL) != 0x4D0000000ALL;
      v11(a2, 4, v12);
      v13 = *(_DWORD *)(v5 + 296);
      if ( (unsigned int)(v13 - 2) > 1 )
      {
        v14 = v13 > 5;
LABEL_24:
        (*(void (__fastcall **)(__int64 *, __int64, _BOOL8))(*a2 + 16))(a2, 3, v14);
        (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 5, *(_DWORD *)(v5 + 308) != 0);
        (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 6, *(_DWORD *)(v5 + 324) != 0);
        v16 = *(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 16);
        v17 = sub_46530((_DWORD *)v5);
        v21 = 0;
        if ( v17 > 4u )
          v21 = (unsigned __int8)getinf_flag(3, 32, 0, v18, v19, v20, v24, v25, v26);
        v16(a2, 7, v21);
        (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 8, *(_DWORD *)(v5 + 312) != 0);
        (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 9, (*(_DWORD *)(v5 + 296) & 0xFFFFFFFB) == 17);
        *(_BYTE *)(v5 + 517) = 0;
        return 1;
      }
    }
    v14 = 1;
    goto LABEL_24;
  }
  sub_423D0();
  return sub_46B10();
}
