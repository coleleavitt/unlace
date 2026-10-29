/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91210
// Address: 0x00091210

//----- (00091210) --------------------------------------------------------
unsigned int __cdecl sub_91210(int a1, unsigned int *a2)
{
  unsigned int v2; // eax
  int *v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int v6; // edi
  char *v7; // eax
  unsigned int v8; // edi
  int *v9; // ecx
  int v10; // esi
  int v11; // eax
  int v13; // [esp+8h] [ebp-34h]
  unsigned int v14; // [esp+Ch] [ebp-30h]
  char v15[24]; // [esp+10h] [ebp-2Ch] BYREF
  unsigned int v16; // [esp+28h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  v2 = unpack_dd(a2, a2[1]);
  v3 = (int *)a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 >= v2 )
  {
    if ( v4 != v2 )
    {
      *(_OWORD *)v15 = 0;
      v8 = v2;
      sub_91F70((char **)a1, v2, v15);
      v3 = (int *)a1;
      v2 = v8;
    }
  }
  else
  {
    v5 = v2;
    if ( *(_DWORD *)(a1 + 8) >= v2 )
    {
      v7 = *(char **)a1;
      v6 = a1;
    }
    else
    {
      v6 = a1;
      v7 = (char *)qvector_reserve(a1, *(void **)a1, v2, 0x10u);
      *(_DWORD *)a1 = v7;
      v4 = *(_DWORD *)(a1 + 4);
    }
    memset(&v7[16 * v4], 0, 16 * (v5 - v4));
    *(_DWORD *)(v6 + 4) = v5;
    v2 = v5;
    v3 = (int *)v6;
  }
  if ( (int)v2 > 0 )
  {
    v9 = v3;
    v10 = 12;
    do
    {
      v14 = v2;
      v13 = *v9;
      *(_DWORD *)(v13 + v10 - 12) = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
      *(_DWORD *)(v13 + v10 - 8) = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
      *(_DWORD *)(v13 + v10 - 4) = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
      v11 = unpack_dd(a2, a2[1]);
      v9 = (int *)a1;
      *(_BYTE *)(v13 + v10) = v11 != 0;
      v10 += 16;
      v2 = v14 - 1;
    }
    while ( v14 != 1 );
  }
  return __readgsdword(0x14u);
}
