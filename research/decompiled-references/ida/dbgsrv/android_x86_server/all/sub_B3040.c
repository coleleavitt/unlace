/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3040
// Address: 0x000B3040

//----- (000B3040) --------------------------------------------------------
bool __fastcall sub_B3040(__int64 *a1, __int64 *a2)
{
  bool result; // al
  __int64 *v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  __int64 *v7; // ecx
  int v8; // ebx
  __int64 *v9; // edx
  bool v10; // cc
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  __int64 *v14; // edi
  int v15; // eax
  __int64 v16; // xmm0_8
  __int64 v17; // xmm0_8
  bool v18; // cc
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  int v21; // ecx
  int v22; // ebx
  int v23; // edx
  int v24; // edi
  int v26; // [esp+1Ch] [ebp-20h]
  _DWORD *v27; // [esp+1Ch] [ebp-20h]
  int v28; // [esp+20h] [ebp-1Ch]
  int v29; // [esp+24h] [ebp-18h]

  result = 1;
  switch ( a2 - a1 )
  {
    case 0:
    case 1:
      return result;
    case 2:
      if ( *((_DWORD *)a2 - 2) == *(_DWORD *)a1 )
      {
        v4 = a2;
        if ( *((_DWORD *)a2 - 1) >= *((_DWORD *)a1 + 1) )
          return result;
      }
      else
      {
        v4 = a2;
        if ( *((_DWORD *)a2 - 2) >= *(_DWORD *)a1 )
          return result;
      }
      v16 = *a1;
      *a1 = *(v4 - 1);
      *(v4 - 1) = v16;
      return result;
    case 3:
      sub_B2E00(a1, (_DWORD *)a1 + 2, (_DWORD *)a2 - 2);
      return 1;
    case 4:
      v14 = a1 + 2;
      v27 = a1 + 1;
      sub_B2E00(a1, (_DWORD *)a1 + 2, (_DWORD *)a1 + 4);
      v15 = *((_DWORD *)a1 + 4);
      if ( *((_DWORD *)a2 - 2) == v15 )
      {
        if ( *((_DWORD *)a2 - 1) >= *((_DWORD *)a1 + 5) )
          return 1;
      }
      else if ( *((_DWORD *)a2 - 2) >= v15 )
      {
        return 1;
      }
      v17 = *v14;
      *v14 = *(a2 - 1);
      *(a2 - 1) = v17;
      v18 = *(_DWORD *)v14 < *v27;
      if ( *(_DWORD *)v14 == *v27 )
        v18 = *((_DWORD *)a1 + 5) < *((_DWORD *)a1 + 3);
      result = 1;
      if ( !v18 )
        return result;
      v19 = _mm_loadu_si128((const __m128i *)(a1 + 1));
      v20 = _mm_shuffle_epi32(v19, 78);
      *(__m128i *)(a1 + 1) = v20;
      v21 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 231));
      v22 = _mm_cvtsi128_si32(v20);
      if ( *(_DWORD *)a1 == v22 )
      {
        if ( *((_DWORD *)a1 + 1) <= v21 )
          return result;
      }
      else if ( *(_DWORD *)a1 <= v22 )
      {
        return result;
      }
      v23 = *(_DWORD *)a1;
      v24 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v21;
      *(_DWORD *)a1 = v22;
      *((_DWORD *)a1 + 3) = v24;
      *((_DWORD *)a1 + 2) = v23;
      return 1;
    case 5:
      sub_B2EE0(a1, (_DWORD *)a1 + 2, (_DWORD *)a1 + 4, (_DWORD *)a1 + 6, (_DWORD *)a2 - 2);
      return 1;
    default:
      v5 = a1 + 2;
      sub_B2E00(a1, (_DWORD *)a1 + 2, (_DWORD *)a1 + 4);
      v6 = a1 + 3;
      v7 = a2;
      if ( a1 + 3 == a2 )
        return 1;
      v8 = 0;
      v28 = 16;
      break;
  }
  while ( 1 )
  {
    v9 = (__int64 *)v5;
    v5 = v6;
    v10 = *v6 < *(_DWORD *)v9;
    if ( *v6 == *(_DWORD *)v9 )
      v10 = v6[1] < *((_DWORD *)v9 + 1);
    if ( v10 )
    {
      v29 = v8;
      v11 = *v6;
      v26 = v6[1];
      *(_QWORD *)v6 = *v9;
      if ( v9 != a1 )
      {
        v12 = v28;
        do
        {
          if ( *(_DWORD *)((char *)a1 + v12 - 8) == v11 )
          {
            if ( *(_DWORD *)((char *)a1 + v12 - 4) <= v26 )
            {
              v9 = (__int64 *)((char *)a1 + v12);
              goto LABEL_18;
            }
          }
          else if ( *(_DWORD *)((char *)a1 + v12 - 8) <= v11 )
          {
            goto LABEL_18;
          }
          --v9;
          v13 = *(_DWORD *)((char *)a1 + v12 - 8);
          *(_DWORD *)((char *)a1 + v12 + 4) = *(_DWORD *)((char *)a1 + v12 - 4);
          *(_DWORD *)((char *)a1 + v12) = v13;
          v12 -= 8;
        }
        while ( v12 );
        v9 = a1;
LABEL_18:
        v7 = a2;
      }
      *(_DWORD *)v9 = v11;
      *((_DWORD *)v9 + 1) = v26;
      v8 = v29 + 1;
      if ( v29 == 7 )
        return v5 + 2 == (_DWORD *)v7;
    }
    v6 = v5 + 2;
    v28 += 8;
    if ( v5 + 2 == (_DWORD *)v7 )
      return 1;
  }
}
