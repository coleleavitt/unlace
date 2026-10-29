/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42790
// Address: 0x00042790

//----- (00042790) --------------------------------------------------------
char __cdecl sub_42790(int a1, int a2)
{
  int v2; // ecx
  void **v3; // eax
  unsigned int v4; // esi
  void *v5; // eax
  unsigned int v6; // edx
  size_t v7; // esi
  const void *v8; // ecx
  void *v9; // eax
  unsigned int v10; // esi
  __int64 v11; // xmm0_8
  char result; // al
  size_t v13; // [esp-8h] [ebp-24h]
  void **v14; // [esp+0h] [ebp-1Ch]
  const void *v15; // [esp+4h] [ebp-18h]
  const void *v16; // [esp+4h] [ebp-18h]
  unsigned int v17; // [esp+8h] [ebp-14h]

  v2 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a1 != a2 )
  {
    v3 = (void **)(a1 + 12);
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 < 2 )
    {
      *(_DWORD *)(a1 + 4) = 0;
    }
    else
    {
      v15 = *(const void **)a2;
      v5 = qvector_reserve(a1, nullptr, v4, 1u);
      *(_DWORD *)a1 = v5;
      *(_DWORD *)(a1 + 4) = v4;
      memmove(v5, v15, v4 - 1);
      *(_BYTE *)(*(_DWORD *)a1 + v4 - 1) = 0;
      v2 = a2;
      v3 = (void **)(a1 + 12);
    }
    v6 = *(_DWORD *)(v2 + 16);
    if ( !v6 || (v7 = v6 - 1, v6 == 1) )
    {
      *(_DWORD *)(a1 + 16) = 0;
    }
    else
    {
      v8 = *(const void **)(v2 + 12);
      if ( *(_DWORD *)(a1 + 20) >= v6 )
      {
        v9 = *v3;
      }
      else
      {
        v16 = v8;
        v17 = v6;
        v14 = v3;
        v9 = qvector_reserve((int)v3, *v3, v6, 1u);
        *v14 = v9;
        v6 = v17;
        v8 = v16;
      }
      *(_DWORD *)(a1 + 16) = v6;
      v13 = v7;
      v10 = v6;
      memmove(v9, v8, v13);
      *(_BYTE *)(*(_DWORD *)(a1 + 12) + v10 - 1) = 0;
      v2 = a2;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v2 + 40);
  v11 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(v2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(v2 + 60);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(v2 + 64);
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(v2 + 65);
  result = *(_BYTE *)(v2 + 66);
  *(_BYTE *)(a1 + 66) = result;
  return result;
}
