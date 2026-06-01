unsigned __int64 __fastcall sub_16320(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // al
  unsigned __int64 v3; // r12
  int v4; // edx
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int16 v11; // cx
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx

  v1 = *(_QWORD *)(a1 + 72);
  if ( v1 < *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = v1 + 1;
    v2 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v1);
    if ( v2 == 100 )
    {
      v3 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(a1 + 8) = v3;
      if ( !v3 || (v14 = v3 + 24, v3 + 24 > *(_QWORD *)(a1 + 16)) )
      {
        v15 = 2LL * *(_QWORD *)(a1 + 32);
        if ( v15 < 0x20 )
          v15 = 32;
        *(_QWORD *)(a1 + 32) = v15;
        v16 = v15 + 8;
        v17 = malloc(v15 + 8);
        v18 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 24) = v17;
        *v17 = v18;
        v3 = ((unsigned __int64)v17 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(a1 + 16) = (char *)v17 + v16;
        v14 = v3 + 24;
      }
      *(_QWORD *)(a1 + 8) = v14;
      *(_WORD *)(v3 + 16) = 216;
      *(_BYTE *)(v3 + 18) = 0;
    }
    else
    {
      if ( v2 != 105 )
        return 0;
      v3 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v3 + 16) = 217;
      *(_BYTE *)(v3 + 18) = 0;
    }
    v4 = *(_DWORD *)(a1 + 96);
    if ( v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v5);
      if ( *(_WORD *)(v6 + 16) != 262 )
        goto LABEL_16;
      *(_DWORD *)(a1 + 96) = v5;
      if ( v6 )
        return sub_CD20((_QWORD *)a1, 221, v3);
      --v4;
LABEL_16:
      while ( v4 )
      {
        v12 = *(_QWORD *)(a1 + 88);
        v10 = (unsigned int)(v4 - 1);
        v13 = *(_QWORD *)(v12 + 8 * v10);
        v11 = *(_WORD *)(v13 + 16);
        if ( v11 == 263 )
        {
          *(_DWORD *)(a1 + 96) = v10;
          if ( v4 == 1 )
            return 0;
          v8 = v4 - 2;
          v9 = *(_QWORD *)(v12 + 8LL * v8);
          LODWORD(v10) = v8;
          v11 = *(_WORD *)(v9 + 16);
        }
        else
        {
          v9 = *(_QWORD *)(v12 + 8 * v10);
          v13 = 0;
        }
        if ( v11 != 221 )
          break;
        *(_DWORD *)(a1 + 96) = v10;
        if ( !v9 )
          break;
        sub_C080(v3, v9, (_QWORD *)a1);
        if ( v13 )
        {
          sub_C3A0(v3, 0);
          return sub_CD20((_QWORD *)a1, 221, v3);
        }
        v4 = *(_DWORD *)(a1 + 96);
      }
    }
    return 0;
  }
  return 0;
}

