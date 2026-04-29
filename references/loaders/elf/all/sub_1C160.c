__int64 __fastcall sub_1C160(__int64 a1, unsigned __int64 a2, const char *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  int v18; // edx
  int v19; // eax

  if ( strcmp(a3, ".TOC.") )
    return 1;
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v6 + 520) == 1 )
  {
    if ( *(_WORD *)(a2 + 54) || *(_BYTE *)(a2 + 92) != 1 || (*(_BYTE *)(a2 + 52) & 0xF) != 0 )
      return 1;
    v15 = *(_QWORD *)(v6 + 288);
    if ( a2 && a2 >= v15 && v15 + 96LL * *(_QWORD *)(v6 + 296) >= a2 )
    {
      v16 = *(_QWORD *)(v6 + 312);
      v17 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a2 - v15) >> 5);
      v18 = 1;
      v19 = v17;
      if ( v17 >= v16 )
      {
        v19 = v17 - v16;
        v18 = 2;
      }
    }
    else
    {
      v19 = 0;
      v18 = 0;
    }
    *(_DWORD *)(a1 + 384) = v19;
    *(_DWORD *)(a1 + 380) = v18;
    *(_BYTE *)(a2 + 93) = 0;
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 56);
    if ( !v7 )
      return 1;
    if ( *(_BYTE *)(a2 + 92) )
      return 1;
    if ( (*(_BYTE *)(a2 + 52) & 0xF) != 1 )
      return 1;
    v8 = *(_QWORD *)(a1 + 396);
    if ( v8 >= v7 )
      return 1;
    v9 = v7 - v8;
    if ( !(unsigned __int8)is_mapped(v7 - v8) )
      return 1;
    v10 = v9;
    v11 = (_QWORD *)getseg(v9);
    if ( !v11 || v9 != *v11 )
      return 1;
    v13 = *(_QWORD *)(a2 + 56);
    v14 = *(_QWORD *)(a1 + 396);
    *(_QWORD *)(a1 + 388) = v13;
    if ( *(_DWORD *)(get_ph(v10, ".TOC.", v12) + 4) == 15 )
    {
      sub_101F0(0xBB9u, v13, v14);
      *(_DWORD *)(a1 + 376) = 4;
      return 1;
    }
    sub_1AAC0();
    return sub_1C2D0();
  }
}
