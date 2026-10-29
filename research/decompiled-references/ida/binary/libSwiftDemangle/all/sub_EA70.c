unsigned __int64 __fastcall sub_EA70(__int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int16 v12; // cx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx

  v1 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v1;
  if ( !v1 || (v2 = v1 + 24, v1 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v13 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v13 < 0x20 )
      v13 = 32;
    *(_QWORD *)(a1 + 32) = v13;
    v14 = v13 + 8;
    v15 = malloc(v13 + 8);
    v16 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v15;
    *v15 = v16;
    v1 = ((unsigned __int64)v15 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v15 + v14;
    v2 = v1 + 24;
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(_WORD *)(v1 + 16) = 215;
  *(_BYTE *)(v1 + 18) = 0;
  v3 = *(_DWORD *)(a1 + 96);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
    if ( *(_WORD *)(v5 + 16) != 262 )
      goto LABEL_12;
    *(_DWORD *)(a1 + 96) = v4;
    if ( v5 )
      return sub_CD20((_QWORD *)a1, 221, v1);
    --v3;
LABEL_12:
    while ( v3 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      v9 = (unsigned int)(v3 - 1);
      v11 = *(_QWORD *)(v10 + 8 * v9);
      v12 = *(_WORD *)(v11 + 16);
      if ( v12 == 263 )
      {
        *(_DWORD *)(a1 + 96) = v9;
        if ( v3 == 1 )
          return 0;
        v7 = (unsigned int)(v3 - 2);
        v8 = *(_QWORD *)(v10 + 8 * v7);
        LODWORD(v9) = v7;
        if ( *(_WORD *)(v8 + 16) != 221 )
          return 0;
      }
      else
      {
        v8 = *(_QWORD *)(v10 + 8 * v9);
        v11 = 0;
        if ( v12 != 221 )
          return 0;
      }
      *(_DWORD *)(a1 + 96) = v9;
      if ( !v8 )
        return 0;
      sub_C080(v1, v8, (_QWORD *)a1);
      if ( v11 )
      {
        sub_C3A0(v1, 0);
        return sub_CD20((_QWORD *)a1, 221, v1);
      }
      v3 = *(_DWORD *)(a1 + 96);
    }
  }
  return 0;
}

