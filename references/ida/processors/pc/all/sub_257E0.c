__int64 __fastcall sub_257E0(__int64 a1, _BYTE *a2, unsigned __int64 *a3, __int64 *a4, _QWORD *a5, char a6)
{
  unsigned __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 i; // rbx
  __int64 v25; // rcx

  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(a1 + 144);
  v13 = *(_QWORD *)(a1 + 32);
  if ( !v11 )
  {
    if ( v13 <= 0 )
      goto LABEL_30;
    v14 = *(_QWORD *)(a1 + 8);
    v18 = -1;
    v17 = 0;
    goto LABEL_8;
  }
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 0;
  v16 = 0;
  while ( (*(_BYTE *)(v14 + 32 * v15 + 26) & 1) != 0 )
  {
    v15 = ++v16;
    v17 = v16;
    if ( v16 >= v11 )
      goto LABEL_6;
  }
  v17 = v16;
LABEL_6:
  v18 = v11 - 1;
  v11 = 0;
  if ( v13 != -1 && v17 < v13 )
  {
LABEL_8:
    v19 = v17;
    v11 = 0;
    do
    {
      v20 = v19++;
      v11 += *(_QWORD *)(v14 + 32 * v20 + 16);
    }
    while ( v19 < v13 );
    v21 = v13 - 1 - v17;
    if ( v17 + 1 > v13 )
      v21 = 0;
    v17 += v21 + 1;
  }
  if ( v17 <= v18 )
  {
    v22 = 0;
    v23 = v14 + 32 * v18;
    while ( *(_WORD *)(v23 + 24) != 0xFFFF )
    {
      --v18;
      v22 += *(_QWORD *)(v23 + 16);
      v23 -= 32;
      if ( v17 > v18 )
        goto LABEL_31;
    }
    for ( i = 0; v17 <= v18; i += *(_QWORD *)(v14 + 32 * v25 + 16) )
      v25 = v17++;
    goto LABEL_19;
  }
LABEL_30:
  v22 = 0;
LABEL_31:
  i = 0;
LABEL_19:
  if ( a3 )
    *a3 = v11;
  if ( a4 )
    *a4 = v22;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 32) == -1 || *(_BYTE *)(a1 + 177) )
    {
      if ( !a6 )
      {
        *a2 = 0;
        if ( !*(_BYTE *)(v12 + 144) )
          return i;
        goto LABEL_34;
      }
    }
    else
    {
      *a2 = 1;
    }
  }
  if ( !*(_BYTE *)(v12 + 144) )
    return i;
LABEL_34:
  sub_24060(v12, *(_QWORD *)(a1 + 152), v11, i, v22, a5);
  return i;
}
