__int64 __fastcall interactive_graph_t__::vfunc_20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 248);
  v3 = v2 + 8;
  result = *(_QWORD *)(v2 + 16);
  if ( !result )
    return result;
  v5 = v3;
  do
  {
    while ( 1 )
    {
      if ( (int)a2 > *(_DWORD *)(result + 32) )
      {
        result = *(_QWORD *)(result + 24);
        goto LABEL_7;
      }
      if ( (_DWORD)a2 == *(_DWORD *)(result + 32) && SHIDWORD(a2) > *(_DWORD *)(result + 36) )
        break;
      v5 = result;
      result = *(_QWORD *)(result + 16);
      if ( !result )
        goto LABEL_8;
    }
    result = *(_QWORD *)(result + 24);
LABEL_7:
    ;
  }
  while ( result );
LABEL_8:
  if ( v3 != v5
    && *(_DWORD *)(v5 + 32) <= (int)a2
    && (*(_DWORD *)(v5 + 32) != (_DWORD)a2 || *(_DWORD *)(v5 + 36) <= SHIDWORD(a2)) )
  {
    return v5 + 40;
  }
  return result;
}
