/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806EA50
// Address: 0x0806EA50

//----- (0806EA50) --------------------------------------------------------
_DWORD *__cdecl sub_806EA50(int a1, int a2, const char *a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  __m128i *v7; // eax
  __int64 v9; // [esp-44h] [ebp-44h]
  __m128i *v10; // [esp-2Ch] [ebp-2Ch] BYREF
  int v11; // [esp-28h] [ebp-28h]
  int v12; // [esp-24h] [ebp-24h]
  unsigned int v13; // [esp-20h] [ebp-20h]

  v13 = __readgsdword(0x14u);
  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( v13 == __readgsdword(0x14u) )
      sub_8068EB0();
LABEL_24:
    sub_80D7AB0();
  }
  v10 = nullptr;
  v11 = 0;
  v3 = *(_DWORD **)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20);
  v12 = 0;
  v5 = v3;
  if ( !(v4 << 6) )
  {
    v3 = nullptr;
    goto LABEL_19;
  }
  if ( v3[1] != a2 )
    goto LABEL_4;
  if ( v3 )
  {
LABEL_8:
    if ( (*(_DWORD *)(a1 + 140) != 0) + *(_DWORD *)(a1 + 144) > 0 )
    {
      if ( *(_QWORD *)(a1 + 156) )
      {
        HIDWORD(v9) = *v3;
        LODWORD(v9) = a1 + 140;
        sub_806E910(*(_DWORD *)(a1 + 132), &v10, v9);
        if ( v11 )
        {
          v7 = v10;
          goto LABEL_12;
        }
      }
    }
  }
  v7 = (__m128i *)&dword_80DDFD8;
LABEL_12:
  if ( strcmp(v7->m128i_i8, a3) )
  {
    v5 = *(_DWORD **)(a1 + 16);
    v4 = *(_DWORD *)(a1 + 20);
LABEL_4:
    v6 = &v5[16 * v4];
    while ( 1 )
    {
      v3 += 16;
      if ( v3 == v6 )
        break;
      if ( a2 == v3[1] )
      {
        v11 = 0;
        goto LABEL_8;
      }
    }
    v3 = nullptr;
  }
  if ( v10 )
  {
    v11 = 0;
    sub_80CF780(v10);
  }
LABEL_19:
  if ( v13 != __readgsdword(0x14u) )
    goto LABEL_24;
  return v3;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
