/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9F6A0
// Address: 0x000000000009F6A0

//----- (000000000009F6A0) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_9F6A0(__int64 a1, unsigned __int64 *a2)
{
  int v4; // w0
  pthread_mutex_t *result; // x0
  unsigned int *v6; // x1
  int v7; // w8
  const void *v8; // x21
  unsigned __int8 *v9; // x10
  int v11; // w8
  int v12; // w8
  void *v13; // x1
  unsigned __int64 v14; // x22
  size_t v15; // x20

  v4 = unpack_dd(a2, a2[1]);
  set_debug_event_code(a1, v4);
  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_DWORD *)(a1 + 4) = unpack_dd(a2, a2[1]);
  *(_QWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  result = (pthread_mutex_t *)unpack_dd(a2, a2[1]);
  v7 = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(a1 + 16) = (_DWORD)result != 0;
  switch ( v7 & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      result = (pthread_mutex_t *)sub_9F3E8(a1 + 24, a2);
      break;
    case 2:
    case 4:
      result = (pthread_mutex_t *)unpack_dd(a2, a2[1]);
      v11 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
      if ( v11 != 2 && v11 != 4 )
        goto LABEL_23;
      *(_DWORD *)(a1 + 24) = (_DWORD)result;
      break;
    case 3:
    case 9:
    case 0xA:
      v8 = (const void *)*a2;
      v9 = (unsigned __int8 *)*a2;
      while ( (unsigned __int64)v9 < a2[1] )
      {
        if ( !*v9++ )
        {
          *a2 = (unsigned __int64)v9;
          v7 = *(_DWORD *)(a1 + 20);
          goto LABEL_11;
        }
      }
      v8 = nullptr;
LABEL_11:
      v12 = v7 & 0xFFFFFFF;
      if ( (unsigned int)(v12 - 9) < 2 || v12 == 3 )
      {
        if ( v8 && (result = (pthread_mutex_t *)strlen((const char *)v8)) != nullptr )
        {
          v13 = *(void **)(a1 + 24);
          v14 = (unsigned __int64)&result->__lock + 1;
          v15 = (size_t)result;
          if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)&result->__lock + 1 )
          {
            v13 = qvector_reserve((pthread_mutex_t *)(a1 + 24), v13, v14, 1u);
            *(_QWORD *)(a1 + 24) = v13;
          }
          *(_QWORD *)(a1 + 32) = v14;
          result = (pthread_mutex_t *)memmove(v13, v8, v15);
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v15) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = 0;
        }
      }
      else
      {
        if ( !under_debugger )
        {
          result = interr(3297);
LABEL_23:
          if ( !under_debugger )
            result = interr(3296);
        }
        __break(1u);
        result = sub_9F8B4(result, v6);
      }
      break;
    case 5:
      *(_QWORD *)(a1 + 24) = unpack_dq(a2, a2[1]) - 1;
      result = (pthread_mutex_t *)unpack_dq(a2, a2[1]);
      *(_QWORD *)(a1 + 32) = (char *)result - 1;
      break;
    case 7:
      result = (pthread_mutex_t *)sub_9F5BC(a1 + 24, a2);
      break;
    default:
      return result;
  }
  return result;
}
// 9F8B1: variable 'v6' is possibly undefined
// 168DF0: using guessed type char under_debugger;
