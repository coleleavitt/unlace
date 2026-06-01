__int64 __fastcall sub_21FEE00(__int64 a1, __int64 a2)
{
  const __m128i *v2; // rdx
  char v5; // al
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rsi
  char v9; // al
  __int64 v10; // rdx
  char v11; // cl
  int v12; // ecx
  char v13; // al
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // rsi
  char v17; // al
  __int64 v18; // rdi
  char v19; // dl
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx

  v2 = *(const __m128i **)a2;
  if ( *(_UNKNOWN **)a2 == &unk_26F7D80 )
  {
    sub_21F7EC0(a1, a2);
    return a1;
  }
  else if ( v2 == (const __m128i *)&unk_26F7D60 )
  {
    sub_21F7D90(a1, a2);
    return a1;
  }
  else if ( v2 == (const __m128i *)&unk_26F7D40 )
  {
    sub_21F7C60(a1, a2);
    return a1;
  }
  else
  {
    if ( v2 == (const __m128i *)dword_26F7D20 )
    {
      sub_21F7B00(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7D00 )
    {
      sub_21F8900(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7B00 )
    {
      sub_21FEC10(a1, (const __m128i **)a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7CE0 )
    {
      sub_21F7FF0(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7CC0 )
    {
      sub_21F84B0(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7CA0 )
    {
      sub_21F8120(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7C80 )
    {
      sub_21F85C0(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7C60 )
    {
      sub_21F86E0(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7C40 )
    {
      sub_21F87F0(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7C20 )
    {
      sub_21F8250(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7C00 )
    {
      sub_21F8380(a1, a2);
    }
    else if ( v2 == (const __m128i *)&unk_26F7BE0 )
    {
      v9 = *(_BYTE *)(a2 + 20);
      v10 = 255;
      v11 = v9 & 7;
      if ( (v9 & 7) != 1 )
      {
        if ( v11 == 3 || !v11 )
        {
          v10 = 255;
        }
        else
        {
          v12 = *(_DWORD *)(a2 + 16);
          LOBYTE(v10) = v12 + 127;
          if ( v12 == -126 )
            v10 = *(_QWORD *)(a2 + 8) & 1LL;
          else
            v10 = (unsigned __int8)v10;
        }
      }
      *(_DWORD *)(a1 + 8) = 8;
      *(_QWORD *)a1 = v10 | ((unsigned __int64)((v9 & 8) != 0) << 7);
    }
    else if ( v2 == (const __m128i *)&unk_26F7BC0 )
    {
      v5 = *(_BYTE *)(a2 + 20);
      if ( (v5 & 7) == 0 || (*(_BYTE *)(a2 + 20) & 7) == 3 )
      {
        v6 = 0;
        v8 = 0;
      }
      else
      {
        v6 = *(_QWORD *)(a2 + 8) & 4LL;
        v7 = *(_DWORD *)(a2 + 16) + 3;
        v8 = *(_QWORD *)(a2 + 8) & 3LL;
        if ( v7 != 1 )
          v6 = (4 * (_BYTE)v7) & 0x1C;
      }
      *(_DWORD *)(a1 + 8) = 6;
      *(_QWORD *)a1 = v8 | v6 | (32LL * ((v5 & 8) != 0));
    }
    else if ( v2 == (const __m128i *)&unk_26F7BA0 )
    {
      v17 = *(_BYTE *)(a2 + 20);
      if ( (v17 & 7) == 3 || (v17 & 7) == 0 )
      {
        v22 = 0;
        v21 = 0;
      }
      else
      {
        v18 = *(_DWORD *)(a2 + 16) + 1;
        v19 = *(_QWORD *)(a2 + 8);
        v20 = *(_QWORD *)(a2 + 8) & 8LL;
        v21 = v19 & 7;
        v22 = (8 * (_BYTE)v18) & 0x18;
        if ( v18 == 1 )
          v22 = v20;
      }
      *(_DWORD *)(a1 + 8) = 6;
      *(_QWORD *)a1 = v22 | v21 | (32LL * ((v17 & 8) != 0));
    }
    else if ( v2 == (const __m128i *)&unk_26F7B80 )
    {
      v13 = *(_BYTE *)(a2 + 20);
      if ( (v13 & 7) == 0 || (*(_BYTE *)(a2 + 20) & 7) == 3 )
      {
        v14 = 0;
        v16 = 0;
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 8) & 2LL;
        v15 = *(_DWORD *)(a2 + 16) + 1;
        v16 = *(_QWORD *)(a2 + 8) & 1LL;
        if ( v15 != 1 )
          v14 = (2 * (_BYTE)v15) & 6;
      }
      *(_DWORD *)(a1 + 8) = 4;
      *(_QWORD *)a1 = v16 | v14 | (8LL * ((v13 & 8) != 0));
    }
    else
    {
      sub_21FA8B0(a1, a2);
    }
    return a1;
  }
}
