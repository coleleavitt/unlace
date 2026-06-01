/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B0FC
// Address: 0x000000010005B0FC

//----- (000000010005B0FC) ----------------------------------------------------
_BYTE *__fastcall sub_10005B0FC(__int64 a1, unsigned __int64 *a2)
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
      goto LABEL_36;
    }
    return (_BYTE *)sub_10005AF2C((_QWORD *)(a1 + 24), a2);
  }
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 8 )
  {
    if ( v6 == 7 )
      return (_BYTE *)sub_10005B018(a1 + 24, a2);
    if ( v6 != 8 )
      return result;
    return (_BYTE *)sub_10005AF2C((_QWORD *)(a1 + 24), a2);
  }
  if ( v6 - 9 >= 2 )
  {
    if ( v6 != 11 )
      return result;
    return (_BYTE *)sub_10005AF2C((_QWORD *)(a1 + 24), a2);
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
      goto LABEL_37;
    interr(3297);
LABEL_36:
    if ( under_debugger != 1 )
    {
LABEL_38:
      interr(3296);
      return sub_10005B360(v14, v15);
    }
LABEL_37:
    __break(1u);
    goto LABEL_38;
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
// 10005B35D: variable 'v14' is possibly undefined
// 10005B35D: variable 'v15' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
