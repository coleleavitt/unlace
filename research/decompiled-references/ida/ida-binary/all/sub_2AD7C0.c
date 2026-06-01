__int64 __fastcall user_graph_place_t__::vfunc_6(unsigned int *a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, int); // rax
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(__int64, int); // rax
  __int64 (__fastcall *v10)(__int64, _DWORD *); // rax

  v3 = *(_QWORD *)a2;
  v4 = a1[3];
  v5 = *(__int64 (__fastcall **)(__int64, int))(v3 + 72);
  if ( v5 == interactive_graph_t__::vfunc_9 )
    result = sub_29AC50((__int64)a2, v4);
  else
    result = v5((__int64)a2, v4);
  if ( !(_BYTE)result )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL);
    if ( v7 == user_graph_place_t__::vfunc_7 )
    {
      v8 = a1[3];
      while ( (--v8 & 0x80000000) == 0 )
      {
        v9 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 72LL);
        if ( v9 == interactive_graph_t__::vfunc_9 )
        {
          result = sub_29AC50((__int64)a2, v8);
          if ( (_BYTE)result )
            goto LABEL_10;
        }
        else
        {
          result = v9((__int64)a2, v8);
          if ( (_BYTE)result )
          {
LABEL_10:
            a1[3] = v8;
            return result;
          }
        }
      }
    }
    else
    {
      result = v7((__int64)a1, (__int64)a2);
      if ( (_BYTE)result )
        return result;
    }
    v10 = *(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 64LL);
    if ( v10 == user_graph_place_t__::vfunc_8 )
    {
      result = sub_2AD180(a2, a1[3]);
      if ( (_DWORD)result != -1 )
        a1[3] = result;
    }
    else
    {
      return v10((__int64)a1, a2);
    }
  }
  return result;
}
