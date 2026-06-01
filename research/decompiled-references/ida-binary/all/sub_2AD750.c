__int64 __fastcall user_graph_place_t__::vfunc_7(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 (__fastcall *v4)(__int64, int); // rax

  v2 = *(_DWORD *)(a1 + 12);
  while ( (--v2 & 0x80000000) == 0 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 72LL);
    if ( v4 == interactive_graph_t__::vfunc_9 )
    {
      result = sub_29AC50(a2, v2);
      if ( (_BYTE)result )
        goto LABEL_6;
    }
    else
    {
      result = v4(a2, v2);
      if ( (_BYTE)result )
      {
LABEL_6:
        *(_DWORD *)(a1 + 12) = v2;
        return result;
      }
    }
  }
  return 0;
}
