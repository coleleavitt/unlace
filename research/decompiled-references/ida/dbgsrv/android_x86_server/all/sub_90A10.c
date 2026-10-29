/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90A10
// Address: 0x00090A10

//----- (00090A10) --------------------------------------------------------
int __cdecl sub_90A10(int a1, unsigned int *a2)
{
  int v2; // eax
  int result; // eax
  _BYTE *v4; // ecx
  const char *v6; // esi
  int v7; // ecx
  size_t v8; // ecx
  unsigned int v9; // esi
  void *v10; // eax
  size_t v11; // esi
  unsigned int v12; // [esp+0h] [ebp-1Ch]
  const char *v13; // [esp+0h] [ebp-1Ch]
  size_t v14; // [esp+8h] [ebp-14h]

  v2 = unpack_dd(a2, a2[1]);
  set_debug_event_code((_DWORD *)a1, v2);
  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 8) = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
  *(_BYTE *)(a1 + 12) = unpack_dd(a2, a2[1]) != 0;
  result = *(_DWORD *)(a1 + 16);
  switch ( result & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      return sub_90720(a1 + 20, (int)a2);
    case 2:
    case 4:
      result = unpack_dd(a2, a2[1]);
      v7 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
      if ( v7 == 2 || v7 == 4 )
      {
        *(_DWORD *)(a1 + 20) = result;
        return result;
      }
      if ( !(_BYTE)under_debugger )
        interr(3296);
      goto LABEL_25;
    case 3:
    case 9:
    case 0xA:
      v4 = (_BYTE *)*a2;
      v12 = *a2;
      while ( (unsigned int)v4 < a2[1] )
      {
        if ( *v4++ == 0 )
        {
          *a2 = (unsigned int)v4;
          result = *(_DWORD *)(a1 + 16);
          v6 = (const char *)v12;
          goto LABEL_11;
        }
      }
      v6 = nullptr;
LABEL_11:
      result &= 0xFFFFFFFu;
      if ( (unsigned int)(result - 9) >= 2 && result != 3 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3297);
LABEL_25:
        BUG();
      }
      if ( v6 && (result = strlen(v6)) != 0 )
      {
        v8 = result;
        v13 = v6;
        v9 = result + 1;
        v10 = *(void **)(a1 + 20);
        if ( *(_DWORD *)(a1 + 28) < v9 )
        {
          v14 = v8;
          v10 = qvector_reserve(a1 + 20, v10, v9, 1u);
          v8 = v14;
          *(_DWORD *)(a1 + 20) = v10;
        }
        *(_DWORD *)(a1 + 24) = v9;
        v11 = v8;
        memmove(v10, v13, v8);
        result = *(_DWORD *)(a1 + 20);
        *(_BYTE *)(result + v11) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 24) = 0;
      }
      return result;
    case 5:
      *(_DWORD *)(a1 + 20) = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
      result = unpack_dq((unsigned __int8 **)a2, a2[1]) - 1;
      *(_DWORD *)(a1 + 24) = result;
      return result;
    case 7:
      return (int)sub_90920(a1 + 20, a2);
    default:
      return result;
  }
}
// 13E34C: using guessed type int under_debugger;
