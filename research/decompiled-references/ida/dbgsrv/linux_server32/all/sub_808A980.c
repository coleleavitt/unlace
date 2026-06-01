/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A980
// Address: 0x0808A980

//----- (0808A980) --------------------------------------------------------
int __usercall sub_808A980@<eax>(int a1@<eax>, int a2@<edx>)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  int result; // eax
  int v7; // esi
  bool v8; // sf
  bool v9; // of
  int v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // edx
  size_t v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // [esp+0h] [ebp-20h]

  switch ( sub_808A7D0((unsigned __int8 *)a1, (char *)a2) )
  {
    case 2u:
      v7 = *(_DWORD *)(a2 + 4);
      result = 1;
      v9 = __OFSUB__(*(_DWORD *)(a1 + 4), v7);
      v8 = *(_DWORD *)(a1 + 4) - v7 < 0;
      if ( *(_DWORD *)(a1 + 4) <= v7 )
        return -(v8 ^ v9);
      return result;
    case 3u:
      return sub_80C93A0(a1 + 4, a2 + 4);
    case 5u:
      return *(_DWORD *)(a1 + 4) != *(_DWORD *)(a2 + 4);
    case 6u:
      v10 = *(_DWORD *)(a2 + 4);
      result = 1;
      v9 = __OFSUB__(*(_DWORD *)(a1 + 4), v10);
      v8 = *(_DWORD *)(a1 + 4) - v10 < 0;
      if ( *(_DWORD *)(a1 + 4) <= v10 )
        return -(v8 ^ v9);
      return result;
    case 7u:
      v11 = *(_DWORD *)(a1 + 8);
      if ( !v11 )
      {
        v12 = *(_DWORD *)(a2 + 8);
        if ( v12 )
        {
          --v12;
          goto LABEL_16;
        }
        return v12 < v11;
      }
      v12 = *(_DWORD *)(a2 + 8);
      --v11;
      if ( !v12 )
        return v12 < v11;
      v13 = v12 - 1;
      v16 = v12 - 1;
      if ( v11 <= v12 - 1 )
        v13 = v11;
      result = memcmp(*(const void **)(a1 + 4), *(const void **)(a2 + 4), v13);
      v12 = v16;
      if ( !result )
      {
LABEL_16:
        if ( v11 < v12 )
          return -1;
        return v12 < v11;
      }
      return result;
    case 8u:
      v14 = *(_DWORD *)(a1 + 4);
      v15 = *(_DWORD *)(a2 + 4);
      result = 1;
      if ( v15 >= v14 )
        return -(v14 < v15);
      return result;
    case 9u:
      v4 = *(_DWORD *)(a1 + 4);
      v5 = *(_DWORD *)(a1 + 8);
      result = 1;
      if ( *(_QWORD *)(a2 + 4) >= __SPAIR64__(v5, v4) )
        return -(__SPAIR64__(v5, v4) < *(_QWORD *)(a2 + 4));
      return result;
    default:
      return 1;
  }
}
