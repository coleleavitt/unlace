/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_689C8
// Address: 0x000689C8

//----- (000689C8) --------------------------------------------------------
int __fastcall sub_689C8(int a1, unsigned int *a2)
{
  int v4; // r0
  int result; // r0
  unsigned int v6; // r1
  _BYTE *v7; // r3
  const void *v8; // r6
  _BYTE *v9; // r6
  int v11; // r0
  size_t v12; // r0
  size_t v13; // r5
  void *v14; // r1
  unsigned int v15; // r2
  void *v16; // r0
  int v17; // r1
  unsigned int v18; // [sp+4h] [bp-4h]

  v4 = unpack_dd(a2, a2[1]);
  set_debug_event_code(a1, v4);
  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  *(_BYTE *)(a1 + 12) = unpack_dd(a2, a2[1]) != 0;
  result = *(_DWORD *)(a1 + 16);
  switch ( result & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      return sub_687D8(a1 + 20, a2);
    case 2:
    case 4:
      result = unpack_dd(a2, a2[1]);
      v17 = *(_DWORD *)(a1 + 16) & 0xFFFFFFF;
      if ( v17 == 2 || v17 == 4 )
      {
        *(_DWORD *)(a1 + 20) = result;
        return result;
      }
      if ( !under_debugger )
        interr(3296);
      goto LABEL_26;
    case 3:
    case 9:
    case 0xA:
      v6 = *a2;
      v7 = (_BYTE *)*a2;
      while ( 1 )
      {
        v8 = nullptr;
        if ( (unsigned int)v7 >= a2[1] )
          break;
        v9 = v7 + 1;
        if ( *v7++ == 0 )
        {
          *a2 = (unsigned int)v9;
          result = *(_DWORD *)(a1 + 16);
          v8 = (const void *)v6;
          break;
        }
      }
      v11 = result & 0xFFFFFFF;
      if ( (unsigned int)(v11 - 9) >= 2 && v11 != 3 )
      {
        if ( !under_debugger )
          interr(3297);
LABEL_26:
        __debugbreak();
      }
      if ( v8 && (v12 = strlen((const char *)v8)) != 0 )
      {
        v13 = v12;
        v14 = *(void **)(a1 + 20);
        v15 = v12 + 1;
        if ( *(_DWORD *)(a1 + 28) < v12 + 1 )
        {
          v18 = v12 + 1;
          v16 = qvector_reserve(a1 + 20, v14, v15, 1u);
          v15 = v18;
          v14 = v16;
          *(_DWORD *)(a1 + 20) = v16;
        }
        *(_DWORD *)(a1 + 24) = v15;
        memmove(v14, v8, v13);
        result = *(_DWORD *)(a1 + 20);
        *(_BYTE *)(result + v13) = 0;
      }
      else
      {
        result = 0;
LABEL_21:
        *(_DWORD *)(a1 + 24) = result;
      }
      return result;
    case 5:
      *(_DWORD *)(a1 + 20) = unpack_dq(a2, a2[1]) - 1;
      result = unpack_dq(a2, a2[1]) - 1;
      goto LABEL_21;
    case 7:
      return sub_6892C(a1 + 20, a2);
    default:
      return result;
  }
}
// E0550: using guessed type char under_debugger;
