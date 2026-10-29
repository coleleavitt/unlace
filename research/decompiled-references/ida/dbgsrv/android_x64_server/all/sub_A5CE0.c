/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5CE0
// Address: 0x00000000000A5CE0

//----- (00000000000A5CE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5CE0(__int64 a1, unsigned __int64 *a2)
{
  int v2; // eax
  unsigned __int64 result; // rax
  const void *v4; // r15
  _BYTE *v5; // rdx
  int v7; // ecx
  size_t v8; // r12
  unsigned __int64 v9; // rbx
  void *v10; // rax

  v2 = unpack_dd(a2, a2[1]);
  set_debug_event_code(a1, v2);
  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = unpack_dd(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  *(_BYTE *)(a1 + 16) = (unsigned int)unpack_dd(a2, a2[1]) != 0;
  result = *(unsigned int *)(a1 + 20);
  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      return sub_A5A30(a1 + 24, a2);
    case 2:
    case 4:
      result = unpack_dd(a2, a2[1]);
      v7 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( v7 == 2 || v7 == 4 )
      {
        *(_DWORD *)(a1 + 24) = result;
        return result;
      }
      if ( !(_BYTE)under_debugger )
        interr(3296);
      goto LABEL_25;
    case 3:
    case 9:
    case 0xA:
      v4 = (const void *)*a2;
      v5 = (_BYTE *)*a2;
      while ( (unsigned __int64)v5 < a2[1] )
      {
        if ( *v5++ == 0 )
        {
          *a2 = (unsigned __int64)v5;
          LODWORD(result) = *(_DWORD *)(a1 + 20);
          goto LABEL_11;
        }
      }
      v4 = nullptr;
LABEL_11:
      result &= 0xFFFFFFFu;
      if ( (unsigned int)(result - 9) >= 2 && (_DWORD)result != 3 )
      {
        if ( !(_BYTE)under_debugger )
          interr(3297);
LABEL_25:
        BUG();
      }
      if ( v4 && (result = strlen((const char *)v4)) != 0 )
      {
        v8 = result;
        v9 = result + 1;
        v10 = *(void **)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v9 )
        {
          v10 = qvector_reserve(a1 + 24, *(char **)(a1 + 24), v9, 1u);
          *(_QWORD *)(a1 + 24) = v10;
        }
        *(_QWORD *)(a1 + 32) = v9;
        memmove(v10, v4, v8);
        result = *(_QWORD *)(a1 + 24);
        *(_BYTE *)(result + v8) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 32) = 0;
      }
      return result;
    case 5:
      *(_QWORD *)(a1 + 24) = unpack_dq(a2, a2[1]) - 1;
      result = unpack_dq(a2, a2[1]) - 1;
      *(_QWORD *)(a1 + 32) = result;
      return result;
    case 7:
      return (unsigned __int64)sub_A5C00(a1 + 24, a2);
    default:
      return result;
  }
}
// 158B40: using guessed type __int64 under_debugger;
