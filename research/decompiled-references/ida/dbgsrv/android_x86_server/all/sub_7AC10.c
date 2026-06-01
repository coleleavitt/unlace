/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7AC10
// Address: 0x0007AC10

//----- (0007AC10) --------------------------------------------------------
unsigned __int8 __cdecl sub_7AC10(int a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 result; // al
  size_t v4; // eax
  size_t v5; // edi
  _DWORD *v6; // ecx
  void *v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  _DWORD *v12; // ecx
  _BYTE *v13; // eax
  int v14; // ecx
  int v15; // edi
  unsigned __int8 *v16; // esi
  int v17; // eax
  size_t v18; // [esp+Ch] [ebp-20h]
  unsigned int v19; // [esp+Ch] [ebp-20h]
  int v20; // [esp+14h] [ebp-18h]
  size_t v21; // [esp+18h] [ebp-14h]

  result = a3;
  *(_DWORD *)(a2 + 4) = 0;
  if ( !a3 )
  {
    v4 = strlen((const char *)(a1 + 1034));
    if ( v4 )
    {
      v18 = v4;
      v5 = v4 + 1;
      v6 = (_DWORD *)a2;
      if ( *(_DWORD *)(a2 + 8) >= v4 + 1 )
      {
        v7 = *(void **)a2;
      }
      else
      {
        v7 = qvector_reserve(a2, *(void **)a2, v4 + 1, 1u);
        v6 = (_DWORD *)a2;
        *(_DWORD *)a2 = v7;
      }
      v6[1] = v5;
      v8 = v6;
      memmove(v7, (const void *)(a1 + 1034), v18);
      *(_BYTE *)(*v8 + v18) = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 0;
    }
    v9 = __strlen_chk("|", 2);
    v10 = *(_DWORD *)(a2 + 4);
    v11 = v10 - 1;
    if ( !v10 )
      v11 = 0;
    v20 = v11 + v9;
    v19 = v11 + v9 + 1;
    v12 = (_DWORD *)a2;
    v21 = v9;
    if ( *(_DWORD *)(a2 + 8) >= v19 )
    {
      v13 = *(_BYTE **)a2;
    }
    else
    {
      v13 = qvector_reserve(a2, *(void **)a2, v19, 1u);
      v12 = (_DWORD *)a2;
      *(_DWORD *)a2 = v13;
    }
    v12[1] = v19;
    v13[v20] = 0;
    result = (unsigned __int8)memmove((void *)(*v12 + v11), "|", v21);
    v14 = a2;
    v15 = *(unsigned __int16 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 8) )
    {
      v16 = (unsigned __int8 *)(a1 + 10);
      do
      {
        v17 = *v16++;
        result = sub_31370(v14, "%02X", v17);
        v14 = a2;
        --v15;
      }
      while ( v15 );
    }
  }
  return result;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
