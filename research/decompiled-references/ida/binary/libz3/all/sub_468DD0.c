__int64 __fastcall sub_468DD0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rcx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  unsigned int *v7; // rax
  unsigned int *v8; // rsi
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // r12d
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  _OWORD v20[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v17 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)(a1 + 8) = v17;
  }
  LODWORD(v2) = *(_DWORD *)(a1 + 88);
  if ( (unsigned int)v2 <= 1 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v11 = **(_QWORD **)(a1 + 120);
    v20[0] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(unsigned __int64)v9);
    if ( !v11 )
      goto LABEL_35;
LABEL_26:
    ++*(_DWORD *)(v11 + 8);
    goto LABEL_27;
  }
  a1 += 136;
  v3 = sub_48D440(a1);
  v2 = (_QWORD *)*(unsigned int *)(v1 + 88);
  if ( !v3 )
  {
    v9 = *(_QWORD *)(v1 + 32);
    v11 = **(_QWORD **)(v1 + 120);
    v20[0] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(unsigned __int64)v9);
    if ( !v11 )
      goto LABEL_35;
    goto LABEL_26;
  }
  v7 = *(unsigned int **)(v1 + 176);
  if ( v7 )
  {
    v4 = *(v7 - 1);
    v8 = &v7[v4];
    if ( v7 != v8 )
    {
      v5 = *(_QWORD *)(v1 + 128);
      if ( v5 )
      {
        a1 = *(unsigned int *)(v5 - 4);
        do
        {
          v4 = *v7;
          if ( (unsigned int)v4 < (unsigned int)a1 )
            *(_BYTE *)(v5 + v4) = 1;
          ++v7;
        }
        while ( v7 != v8 );
      }
    }
  }
  v9 = *(_QWORD *)(v1 + 32);
  v10 = (_DWORD)v2 - *(_DWORD *)(v1 + 160);
  v11 = **(_QWORD **)(v1 + 120);
  v20[0] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)(unsigned __int64)v9);
  if ( !v11 )
  {
    if ( v10 < (unsigned int)v2 )
      goto LABEL_14;
    LODWORD(v2) = v10;
LABEL_35:
    v19 = *(_DWORD *)(v1 + 4);
    if ( v19 < (unsigned int)v2 )
      v19 = (unsigned int)v2;
    *(_DWORD *)(v1 + 4) = v19;
    if ( !(_DWORD)v2 )
    {
      v13 = 0;
      goto LABEL_22;
    }
    if ( (_DWORD)v2 == 1 )
    {
      a1 = v1;
      sub_467D10(v1, (__int64 *)v20, v1 + 224);
      v13 = 1;
      goto LABEL_22;
    }
    v13 = *(unsigned __int8 *)(v1 + 84);
    if ( !(_BYTE)v13 )
      goto LABEL_22;
    v11 = 0;
    goto LABEL_32;
  }
  ++*(_DWORD *)(v11 + 8);
  if ( v10 < (unsigned int)v2 )
  {
LABEL_14:
    ++*(_DWORD *)v1;
    a1 = v1;
    sub_466BB0(v1, v1 + 224, v4, v2, v5, v6);
    v12 = *(_DWORD *)(v1 + 4);
    if ( v12 < v10 )
      v12 = v10;
    *(_DWORD *)(v1 + 4) = v12;
    if ( !v10 )
    {
      v13 = 0;
LABEL_19:
      if ( !v11 )
        goto LABEL_22;
      goto LABEL_20;
    }
    if ( v10 == 1 )
    {
      a1 = v1;
      sub_467D10(v1, (__int64 *)v20, v1 + 224);
      goto LABEL_33;
    }
    v13 = *(unsigned __int8 *)(v1 + 84);
    if ( !(_BYTE)v13 )
      goto LABEL_19;
LABEL_32:
    a1 = v1;
    sub_467810(v1);
LABEL_33:
    v13 = 1;
    goto LABEL_19;
  }
  LODWORD(v2) = v10;
LABEL_27:
  v16 = *(_DWORD *)(v1 + 4);
  if ( v16 < (unsigned int)v2 )
    v16 = (unsigned int)v2;
  *(_DWORD *)(v1 + 4) = v16;
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 == 1 )
    {
      a1 = v1;
      sub_467D10(v1, (__int64 *)v20, v1 + 224);
      v13 = 1;
    }
    else
    {
      v13 = *(unsigned __int8 *)(v1 + 84);
      if ( (_BYTE)v13 )
        goto LABEL_32;
    }
  }
  else
  {
    v13 = 0;
  }
LABEL_20:
  if ( (*(_DWORD *)(v11 + 8))-- == 1 )
  {
    a1 = v9;
    sub_15D7BC0(v9, v11);
  }
LABEL_22:
  if ( *(_BYTE *)(v1 + 24) )
  {
    v18 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(v1 + 24) = 0;
    *(_QWORD *)(v1 + 16) += v18 - *(_QWORD *)(v1 + 8);
  }
  return v13;
}

