/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A290
// Address: 0x0808A290

//----- (0808A290) --------------------------------------------------------
int __cdecl sub_808A290(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // esi
  int v3; // eax
  int v5; // eax
  int v6; // edx
  int v7; // [esp-Ch] [ebp-18h]
  int v8; // [esp-8h] [ebp-14h]
  int v9; // [esp-4h] [ebp-10h]

  v2 = a1;
  if ( a1 == a2 )
    return 0;
  if ( *a1 != 10 || (v2 = sub_8089920(a1, 1)) != nullptr )
  {
    sub_8089430((int)v2);
    v3 = *a2;
    *v2 = v3;
    switch ( v3 )
    {
      case 2:
      case 5:
      case 6:
      case 8:
        *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 1);
        break;
      case 3:
        *(__m128i *)(v2 + 4) = _mm_loadu_si128((const __m128i *)(a2 + 4));
        break;
      case 7:
        v5 = *((_DWORD *)v2 + 2);
        v6 = *((_DWORD *)v2 + 3);
        *((_DWORD *)v2 + 1) = *((_DWORD *)a2 + 1);
        *((_DWORD *)v2 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)v2 + 3) = *((_DWORD *)a2 + 3);
        *((_DWORD *)a2 + 2) = v5;
        *((_DWORD *)a2 + 3) = v6;
        break;
      case 9:
      case 10:
        *(_QWORD *)(v2 + 4) = *(_QWORD *)(a2 + 4);
        break;
      default:
        if ( !byte_811F8A1 )
          sub_80CFF40(282, v7, v8, v9);
        JUMPOUT(0x804E61A);
    }
    *a2 = 2;
    *((_DWORD *)a2 + 1) = 0;
    return 0;
  }
  return sub_80C7850();
}
// 808A354: control flows out of bounds to 804E61A
// 808A362: variable 'v7' is possibly undefined
// 808A362: variable 'v8' is possibly undefined
// 808A362: variable 'v9' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
