/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089810
// Address: 0x08089810

//----- (08089810) --------------------------------------------------------
int __cdecl sub_8089810(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // esi
  int v3; // eax
  int v5; // eax
  size_t v6; // ebp
  void *v7; // eax
  int v8; // [esp-18h] [ebp-28h]
  int v9; // [esp-14h] [ebp-24h]
  int v10; // [esp-10h] [ebp-20h]

  v2 = a1;
  if ( a1 != a2 )
  {
    if ( *a1 == 10 )
    {
      v2 = sub_8089920(a1, 1);
      if ( !v2 )
        return sub_80C7850();
    }
    sub_8089430((int)v2);
    v3 = *a2;
    *v2 = v3;
    switch ( v3 )
    {
      case 2:
      case 6:
      case 8:
        *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 1);
        break;
      case 3:
        *(__m128i *)(v2 + 4) = _mm_loadu_si128((const __m128i *)(a2 + 4));
        break;
      case 5:
        v5 = *((_DWORD *)a2 + 1);
        *((_DWORD *)v2 + 1) = v5;
        ++*(_DWORD *)(v5 + 24);
        break;
      case 7:
        *((_DWORD *)v2 + 1) = 0;
        *((_DWORD *)v2 + 2) = 0;
        *((_DWORD *)v2 + 3) = 0;
        v6 = *((_DWORD *)a2 + 2);
        if ( v6 )
        {
          v7 = sub_80CF8B0(*((_DWORD *)a2 + 2));
          *((_DWORD *)v2 + 3) = v6;
          *((_DWORD *)v2 + 1) = v7;
          memcpy(v7, *((const void **)a2 + 1), v6);
          *((_DWORD *)v2 + 2) = v6;
        }
        break;
      case 9:
      case 10:
        *(_QWORD *)(v2 + 4) = *(_QWORD *)(a2 + 4);
        break;
      default:
        if ( !byte_811F8A1 )
          sub_80CFF40(283, v8, v9, v10);
        JUMPOUT(0x804E52B);
    }
  }
  return 0;
}
// 808990C: control flows out of bounds to 804E52B
// 808991A: variable 'v8' is possibly undefined
// 808991A: variable 'v9' is possibly undefined
// 808991A: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
