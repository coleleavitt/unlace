/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49130
// Address: 0x00049130

//----- (00049130) --------------------------------------------------------
int __cdecl sub_49130(int a1)
{
  int v1; // ecx
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  int v5; // esi
  char *v6; // eax
  char v7; // dl
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // ecx
  _BYTE *v11; // eax
  char v13; // [esp+6h] [ebp-16h]
  char v14; // [esp+6h] [ebp-16h]
  char v15; // [esp+7h] [ebp-15h] BYREF
  unsigned int v16; // [esp+8h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 132);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 132) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 112);
  if ( v3 + -4 - v2 )
  {
    sub_52090(*(_DWORD **)(a1 + 108), v2, v3 + -4 - v2);
    *(_BYTE *)(a1 + 116) = -1;
  }
  else
  {
    if ( v3 <= 4 )
    {
      if ( !(_BYTE)under_debugger )
        interr(708);
      BUG();
    }
    v4 = v3 - 5;
    *(_DWORD *)(a1 + 112) = v3 - 5;
    v5 = *(_DWORD *)(a1 + 108);
    v6 = *(char **)v5;
    v7 = *(_BYTE *)(*(_DWORD *)v5 + v3 - 5);
    v8 = *(_DWORD *)(v5 + 4);
    if ( v8 >= v4 )
    {
      if ( v8 != v4 )
      {
        v15 = 0;
        v14 = v7;
        sub_43860((char **)v5, v4, &v15);
        v7 = v14;
      }
    }
    else
    {
      v13 = v7;
      if ( *(_DWORD *)(v5 + 8) < v4 )
      {
        v6 = (char *)qvector_reserve(v5, v6, v4, 1u);
        *(_DWORD *)v5 = v6;
        v8 = *(_DWORD *)(v5 + 4);
      }
      memset(&v6[v8], 0, v4 - v8);
      *(_DWORD *)(v5 + 4) = v4;
      v7 = v13;
    }
    *(_BYTE *)(a1 + 116) = -87;
    if ( v7 == -85 )
    {
      *(_BYTE *)(a1 + 116) = -85;
      v9 = *(_DWORD *)(a1 + 108);
      v10 = *(_DWORD *)(v9 + 4);
      if ( *(_DWORD *)(v9 + 8) >= (unsigned int)(v10 + 1) )
      {
        v11 = *(_BYTE **)v9;
      }
      else
      {
        v11 = qvector_reserve(v9, *(void **)v9, v10 + 1, 1u);
        *(_DWORD *)v9 = v11;
        v10 = *(_DWORD *)(v9 + 4);
      }
      v11[v10] = -85;
      ++*(_DWORD *)(v9 + 4);
      ++*(_DWORD *)(a1 + 112);
      sub_46F00(a1, 0);
      sub_46F00(a1, 0);
    }
    else
    {
      sub_492B0(a1);
    }
  }
  return 0;
}
// 13E34C: using guessed type int under_debugger;
