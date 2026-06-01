__int64 __fastcall sub_4842F0(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  char v6; // al
  unsigned int v7; // r12d
  __int64 v9; // rax
  const char *v10; // rsi
  const char *v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  char *v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+50h] [rbp-38h]
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]

  v4 = *(_BYTE *)(a1 + 184);
  v24 = __readfsqword(0x28u);
  v6 = v4 & 0x3F;
  if ( v6 == 13 )
  {
    if ( (*(_BYTE *)(a2 + 184) & 0x3F) != 0xD )
      return 0;
  }
  else
  {
    v7 = 0;
    if ( v6 != 29 || (*(_BYTE *)(a2 + 184) & 0x3F) != 0x1D )
      return v7;
  }
  v9 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(a2 + 160) )
  {
    v10 = *(const char **)(a2 + 152);
    v11 = haystack;
    if ( !v9 )
      goto LABEL_8;
  }
  else
  {
    v10 = haystack;
    if ( !v9 )
      goto LABEL_9;
  }
  v11 = *(const char **)(a1 + 152);
LABEL_8:
  v17 = a3;
  v12 = strcmp(v11, v10);
  a3 = v17;
  if ( v12 )
    return 0;
LABEL_9:
  v7 = *(_BYTE *)(a1 + 400) & 1;
  if ( (*(_BYTE *)(a1 + 400) & 1) != 0 )
  {
    v7 = *(_BYTE *)(a2 + 400) & 1;
    if ( (*(_BYTE *)(a2 + 400) & 1) != 0
      && (((*(_DWORD *)(a1 + 404) ^ *(_DWORD *)(a2 + 404)) & 0xFFFFFDFF) != 0
       || *(_WORD *)(a1 + 408) != *(_WORD *)(a2 + 408)) )
    {
      v13 = *(_QWORD *)(switch_dbctx(*(int *)(a3 + 8)) + 1480);
      v19 = nullptr;
      v14 = *(_QWORD *)(v13 + 8);
      v23 = 1;
      v22 = 0;
      v20 = 0;
      v21 = 0;
      if ( (unsigned __int8)sub_47F2B0((_QWORD *)a1, (__int64)&v19, 0x80u) )
      {
        v15 = *(_DWORD *)(a2 + 404);
        v16 = *(unsigned __int8 *)(a1 + 184);
        v18 = 0;
        BYTE1(v15) &= ~2u;
        *(_DWORD *)(a1 + 404) = v15;
        HIDWORD(v22) = v15;
        BYTE1(v23) = *(_BYTE *)(a2 + 408);
        *(_BYTE *)(a1 + 408) = BYTE1(v23);
        LOBYTE(v15) = *(_BYTE *)(a2 + 409);
        *(_BYTE *)(a1 + 409) = v15;
        BYTE2(v23) = v15;
        if ( (unsigned __int8)create_tinfo(&v18, v16, 13, &v19) )
        {
          sub_4816A0((__int64 *)a1, v14, *(_DWORD *)(a1 + 176), (__int64)&v18);
          clear_tinfo_t(&v18);
          sub_37B290(&v19);
          return v7;
        }
        if ( !under_debugger )
          interr(2160);
      }
      else if ( !under_debugger )
      {
        interr(2159);
      }
      BUG();
    }
  }
  return v7;
}

