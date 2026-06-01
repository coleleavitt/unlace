__int64 __fastcall sub_B29360(__int64 a1, __int64 a2)
{
  int v3; // eax
  void *v4; // r12
  int v5; // eax
  void *v6; // r12
  unsigned int *v7; // r12
  bool v8; // zf
  unsigned int *v9; // r12
  unsigned int *v11; // rbp
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned int *v14; // r13
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  int v27; // eax
  int v28; // eax

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        *(_DWORD *)(a1 + 8) = 2;
      }
      else
      {
        if ( v3 )
        {
          sub_1872CE0("");
          sub_1873130(114, 48);
        }
        *(_DWORD *)(a1 + 8) = 0;
      }
      v4 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, a1 + 16);
      goto LABEL_7;
    }
    v20 = a1 + 16;
    v4 = qword_1C7F2C0;
    v21 = *(_DWORD *)(a2 + 16);
    if ( v21 )
    {
      v22 = a2 + 16;
      if ( *(_DWORD *)(a1 + 16) )
      {
        if ( (*(_BYTE *)(a1 + 36) & 1) == 0
          && *(_DWORD *)(a1 + 32) == 1
          && (*(_BYTE *)(a2 + 36) & 1) == 0
          && *(_DWORD *)(a2 + 32) == 1 )
        {
          sub_1831A80(qword_1C7F2C0, v20, v22, v20);
LABEL_7:
          sub_182CBA0(v4, a1 + 32);
          *(_BYTE *)(a1 + 36) &= ~1u;
          *(_DWORD *)(a1 + 32) = 1;
          goto LABEL_8;
        }
        sub_1851D20(qword_1C7F2C0, v20, v22, v20);
      }
      else
      {
        if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v20, v22);
        }
        else
        {
          *(_BYTE *)(a1 + 20) &= ~1u;
          *(_DWORD *)(a1 + 16) = v21;
        }
        if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
        {
          sub_182C690(v4, a1 + 32, a2 + 32);
        }
        else
        {
          v27 = *(_DWORD *)(a2 + 32);
          *(_BYTE *)(a1 + 36) &= ~1u;
          *(_DWORD *)(a1 + 32) = v27;
        }
      }
    }
    else
    {
      v23 = *(_BYTE *)(a1 + 20);
      if ( (v23 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v20, a1 + 16);
      else
        *(_BYTE *)(a1 + 20) = v23 & 0xFE;
      v24 = *(_BYTE *)(a1 + 36);
      if ( (v24 & 1) != 0 )
        sub_182C690(v4, a1 + 32, a1 + 32);
      else
        *(_BYTE *)(a1 + 36) = v24 & 0xFE;
    }
  }
LABEL_8:
  if ( *(_DWORD *)(a1 + 48) != 1 )
    goto LABEL_15;
  v5 = *(_DWORD *)(a2 + 48);
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      *(_DWORD *)(a1 + 48) = 2;
    }
    else
    {
      if ( v5 )
      {
        sub_1872CE0("");
        sub_1873130(114, 48);
      }
      *(_DWORD *)(a1 + 48) = 0;
    }
    v6 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, a1 + 56);
    goto LABEL_14;
  }
  v17 = a1 + 56;
  v6 = qword_1C7F2C0;
  v18 = *(_DWORD *)(a2 + 56);
  if ( v18 )
  {
    v19 = a2 + 56;
    if ( *(_DWORD *)(a1 + 56) )
    {
      if ( (*(_BYTE *)(a1 + 76) & 1) == 0
        && *(_DWORD *)(a1 + 72) == 1
        && (*(_BYTE *)(a2 + 76) & 1) == 0
        && *(_DWORD *)(a2 + 72) == 1 )
      {
        sub_1831A80(qword_1C7F2C0, v17, v19, a1 + 56);
LABEL_14:
        sub_182CBA0(v6, a1 + 72);
        *(_BYTE *)(a1 + 76) &= ~1u;
        *(_DWORD *)(a1 + 72) = 1;
        goto LABEL_15;
      }
      sub_1851D20(qword_1C7F2C0, v17, v19, a1 + 56);
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 60) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v17, v19);
      }
      else
      {
        *(_BYTE *)(a1 + 60) &= ~1u;
        *(_DWORD *)(a1 + 56) = v18;
      }
      if ( (*(_BYTE *)(a2 + 76) & 1) != 0 )
      {
        sub_182C690(v6, a1 + 72, a2 + 72);
      }
      else
      {
        v28 = *(_DWORD *)(a2 + 72);
        *(_BYTE *)(a1 + 76) &= ~1u;
        *(_DWORD *)(a1 + 72) = v28;
      }
    }
  }
  else
  {
    v25 = *(_BYTE *)(a1 + 60);
    if ( (v25 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v17, a1 + 56);
    else
      *(_BYTE *)(a1 + 60) = v25 & 0xFE;
    v26 = *(_BYTE *)(a1 + 76);
    if ( (v26 & 1) != 0 )
      sub_182C690(v6, a1 + 72, a1 + 72);
    else
      *(_BYTE *)(a1 + 76) = v26 & 0xFE;
  }
LABEL_15:
  v7 = nullptr;
  v8 = *(_DWORD *)(a1 + 8) == 1;
  *(_WORD *)(a1 + 88) |= *(_WORD *)(a2 + 88);
  if ( v8 )
  {
    v7 = *(unsigned int **)(a1 + 96);
    v14 = *(unsigned int **)(a2 + 96);
    if ( v7 )
    {
      if ( v14 != v7 && v14 )
      {
        v15 = sub_180C100(*(_QWORD *)(*(_QWORD *)a1 + 56LL), 24);
        v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v14);
        *v7 = (*v7 + 1) & 0x3FFFFFFF | *v7 & 0xC0000000;
        v7 = (unsigned int *)v15;
        *v14 = (*v14 + 1) & 0x3FFFFFFF | *v14 & 0xC0000000;
        *(_QWORD *)v15 = 0;
        *(__m128i *)(v15 + 8) = v16;
      }
    }
    else
    {
      v7 = *(unsigned int **)(a2 + 96);
    }
  }
  *(_QWORD *)(a1 + 96) = v7;
  v9 = nullptr;
  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v9 = *(unsigned int **)(a1 + 104);
    v11 = *(unsigned int **)(a2 + 104);
    if ( v9 )
    {
      if ( v11 && v11 != v9 )
      {
        v12 = sub_180C100(*(_QWORD *)(*(_QWORD *)a1 + 56LL), 24);
        v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v11);
        *v9 = (*v9 + 1) & 0x3FFFFFFF | *v9 & 0xC0000000;
        v9 = (unsigned int *)v12;
        *v11 = (*v11 + 1) & 0x3FFFFFFF | *v11 & 0xC0000000;
        *(_QWORD *)v12 = 0;
        *(__m128i *)(v12 + 8) = v13;
      }
    }
    else
    {
      v9 = v11;
    }
  }
  *(_QWORD *)(a1 + 104) = v9;
  return a1;
}

