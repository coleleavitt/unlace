/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EC58
// Address: 0x000000010005EC58

//----- (000000010005EC58) ----------------------------------------------------
_BYTE *__fastcall sub_10005EC58(__int64 a1, unsigned __int64 *a2)
{
  int v4; // w0
  _BYTE *result; // x0
  unsigned int v6; // w8
  const void *v7; // x21
  unsigned __int8 *v8; // x10
  int v10; // w8
  size_t v11; // x20
  unsigned __int64 v12; // x22
  _QWORD *v13; // x1
  _QWORD **v14; // x0
  __int64 v15; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = unpack_dd(a2, a2[1]);
  set_debug_event_code(a1, v4);
  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = unpack_dd(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  result = (_BYTE *)unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 16) = (_DWORD)result != 0;
  v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v6 <= 6 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) > 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 4 )
        {
          if ( v6 == 5 )
          {
            *(_QWORD *)(a1 + 24) = unpack_dq(a2, a2[1]) - 1;
            result = (_BYTE *)unpack_dq(a2, a2[1]);
            *(_QWORD *)(a1 + 32) = result - 1;
          }
          return result;
        }
        goto LABEL_15;
      }
      goto LABEL_9;
    }
    if ( v6 != 1 )
    {
      if ( v6 != 2 )
        return result;
LABEL_15:
      result = (_BYTE *)unpack_dd(a2, a2[1]);
      v10 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( v10 == 2 || v10 == 4 )
      {
        *(_DWORD *)(a1 + 24) = (_DWORD)result;
        return result;
      }
      goto LABEL_40;
    }
LABEL_32:
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (_BYTE *)sub_10005EA80((_QWORD *)(a1 + 24), a2);
  }
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 8 )
  {
    if ( v6 == 7 )
    {
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (_BYTE *)sub_10005EB70(a1 + 24, a2);
    }
    if ( v6 != 8 )
      return result;
    goto LABEL_32;
  }
  if ( v6 - 9 >= 2 )
  {
    if ( v6 != 11 )
      return result;
    goto LABEL_32;
  }
LABEL_9:
  v7 = (const void *)*a2;
  v8 = (unsigned __int8 *)*a2;
  while ( (unsigned __int64)v8 < a2[1] )
  {
    if ( !*v8++ )
    {
      *a2 = (unsigned __int64)v8;
      v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      goto LABEL_22;
    }
  }
  v7 = nullptr;
LABEL_22:
  if ( v6 - 9 >= 2 && v6 != 3 )
  {
    if ( under_debugger == 1 )
      goto LABEL_41;
    interr(3297);
LABEL_40:
    if ( under_debugger != 1 )
    {
LABEL_42:
      interr(3296);
      return sub_10005EEE0(v14, v15);
    }
LABEL_41:
    __break(1u);
    goto LABEL_42;
  }
  if ( v7 && (result = (_BYTE *)strlen((const char *)v7)) != nullptr )
  {
    v11 = (size_t)result;
    v12 = (unsigned __int64)(result + 1);
    v13 = *(_QWORD **)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(result + 1) )
    {
      v13 = qvector_reserve((_QWORD *)(a1 + 24), v13, v12, 1u);
      *(_QWORD *)(a1 + 24) = v13;
    }
    *(_QWORD *)(a1 + 32) = v12;
    result = memmove(v13, v7, v11);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v11) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  return result;
}
// 10005EE6C: variable '_28' is possibly undefined
// 10005EEDD: variable 'v14' is possibly undefined
// 10005EEDD: variable 'v15' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
