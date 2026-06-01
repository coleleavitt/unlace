/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80687B0
// Address: 0x080687B0

//----- (080687B0) --------------------------------------------------------
int __cdecl sub_80687B0(int a1, int a2, int a3)
{
  bool v3; // zf
  _DWORD *v4; // ecx
  unsigned int v5; // ecx
  int v6; // edx
  int result; // eax
  unsigned int *v8; // ecx
  int v9; // eax
  int v10; // [esp-18h] [ebp-74h]
  int v11; // [esp-14h] [ebp-70h]
  int v12; // [esp-10h] [ebp-6Ch]
  __int64 v13; // [esp+14h] [ebp-48h] BYREF
  int v14; // [esp+1Ch] [ebp-40h]
  char v15; // [esp+20h] [ebp-3Ch]
  int v16; // [esp+24h] [ebp-38h]
  _BYTE v17[24]; // [esp+28h] [ebp-34h] BYREF
  unsigned int v18; // [esp+40h] [ebp-1Ch]

  v3 = *(_BYTE *)(a1 + 770) == 0;
  v18 = __readgsdword(0x14u);
  if ( !v3 && !*(_BYTE *)(a1 + 733) )
  {
    if ( !byte_811F8A1 )
    {
      if ( v18 == __readgsdword(0x14u) )
        sub_80CFF40(30059, v10, v11, v12);
      sub_80D7AB0();
    }
    BUG();
  }
  do
  {
    while ( *(_DWORD *)(a1 + 64) == *(_DWORD *)(a1 + 80) )
    {
      v15 = 0;
      memset(v17, 0, sizeof(v17));
      v14 = -1;
      v16 = 0;
      v13 = 0xFFFFFFFFLL;
      if ( !sub_8067D80(a1, (int)&v13, a3) )
      {
        sub_80C6090(&v13);
        result = 0;
        goto LABEL_9;
      }
      if ( (v16 & 0xFFFFFFF) != 0 )
      {
        v9 = *(_DWORD *)(a1 + 80);
        if ( v9 == *(_DWORD *)(a1 + 88) - 44 )
        {
          sub_8061440((_DWORD *)(a1 + 56), (int)&v13);
        }
        else
        {
          *(_BYTE *)(v9 + 12) = 0;
          *(_DWORD *)(v9 + 8) = -1;
          *(_DWORD *)(v9 + 16) = 0;
          *(_QWORD *)v9 = 0xFFFFFFFFLL;
          sub_80C62B0(v9, (int)&v13);
          *(_DWORD *)(a1 + 80) += 44;
        }
        *(_BYTE *)(a1 + 768) = 0;
        sub_80C6090(&v13);
      }
      else
      {
        sub_80C6090(&v13);
      }
    }
    sub_80C62B0(a2, *(_DWORD *)(a1 + 64));
    v4 = *(_DWORD **)(a1 + 64);
    if ( v4 == (_DWORD *)(*(_DWORD *)(a1 + 72) - 44) )
    {
      sub_80C6090(v4);
      operator delete(*(void **)(a1 + 68), 0x1E4u);
      v8 = (unsigned int *)(*(_DWORD *)(a1 + 76) + 4);
      *(_DWORD *)(a1 + 76) = v8;
      v5 = *v8;
      *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v5 + 484)).m128i_u64[0];
    }
    else
    {
      sub_80C6090(v4);
      v5 = *(_DWORD *)(a1 + 64) + 44;
    }
    *(_DWORD *)(a1 + 64) = v5;
  }
  while ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 0 );
  v6 = *(_DWORD *)(a1 + 228);
  *(_BYTE *)(a1 + 770) = 1;
  if ( v6 )
  {
    result = 2;
    if ( v5 != *(_DWORD *)(a1 + 80) )
      goto LABEL_9;
  }
  else
  {
    *(_BYTE *)(a1 + 769) = 0;
    result = 2;
    if ( v5 != *(_DWORD *)(a1 + 80) )
      goto LABEL_9;
  }
  result = 1;
LABEL_9:
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 8068A24: variable 'v10' is possibly undefined
// 8068A24: variable 'v11' is possibly undefined
// 8068A24: variable 'v12' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
