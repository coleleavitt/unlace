/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438EE0
// Address: 0x00438EE0

//----- (00438EE0) --------------------------------------------------------
unsigned int __userpurge sub_438EE0@<eax>(_DWORD *a1@<ecx>, __m128i a2@<xmm0>, int a3, int a4, const __m128i **a5)
{
  int v6; // ebx
  __m128i *v7; // eax
  int v8; // edx
  int v9; // ebx
  const __m128i *v10; // ebp
  unsigned int result; // eax
  int v12; // esi
  int v13; // eax
  int v14; // [esp+14h] [ebp+4h]

  v6 = a1[11] + 24 * a4;
  a1[24] = a1[16];
  v7 = sub_464A10(a2, *a5, *(const __m128i **)(v6 + 12));
  if ( v7 )
  {
    v8 = *(_DWORD *)(v6 + 16);
    v9 = a3;
    *a5 = (__m128i *)((char *)v7 + (v8 != 0 ? v8 - 1 : 0));
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a3 + 16))(a3, 0);
    a1[24] = a1[15];
  }
  else
  {
    v9 = a3;
    *a5 = (const __m128i *)sub_464F10((*a5)->m128i_i8, 0);
    (*(void (__stdcall **)(int, int))(*(_DWORD *)a3 + 16))(a3, a4 + 1);
  }
  v10 = *a5;
  v14 = a1[16];
  result = a1[23];
  if ( result < (unsigned int)*a5 )
  {
    v12 = sub_4399B0(a1[22], a1[23]);
    v13 = sub_4399B0(a1[23], (unsigned int)v10);
    result = (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v9 + 4))(v9, v12, v13, v14);
    a1[23] = v10;
  }
  return result;
}
