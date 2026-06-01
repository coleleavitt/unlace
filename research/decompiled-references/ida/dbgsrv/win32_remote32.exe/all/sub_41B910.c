/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B910
// Address: 0x0041B910

//----- (0041B910) --------------------------------------------------------
int __userpurge sub_41B910@<eax>(char *a1@<ebx>, int a2, int a3)
{
  char *v3; // esi
  __int8 *v4; // eax
  __int8 *v5; // edi
  __m128i *v6; // edi
  __m128i *v7; // eax
  __m128i *v9; // [esp+Ch] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-14h]
  int v11; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 12) )
    v3 = *(char **)(a2 + 8);
  else
    v3 = (char *)MultiByteStr;
  v4 = sub_464F10(v3, 0x3Du);
  v5 = v4;
  if ( v4 )
  {
    sub_41BB70(&v9, (unsigned int)v3, v4 - v3);
    v6 = (__m128i *)(v5 + 1);
    v11 = 0;
    v7 = (__m128i *)MultiByteStr;
    if ( v10 )
      v7 = v9;
    *(_DWORD *)(a3 + 8) = sub_456390(a1, (int)v6, v7, v6);
    v11 = 1;
    if ( v9 )
    {
      v10 = 0;
      sub_453A20(v9);
    }
  }
  return 0;
}
