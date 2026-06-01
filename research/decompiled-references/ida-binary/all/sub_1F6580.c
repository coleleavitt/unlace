_DWORD *__fastcall sub_1F6580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  _DWORD *result; // rax

  if ( !*(_QWORD *)(a1 + 424) )
  {
    sub_1E69C0(a5, a1, a2, a3, a4);
    return (_DWORD *)sub_1F6620();
  }
  v5 = *(_DWORD *)(a1 + 416);
  if ( v5 == 2 )
  {
    result = *(_DWORD **)(a1 + 896);
    if ( !result )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 472LL))(result);
  }
  else
  {
    if ( v5 != 3 )
    {
      if ( !*(_BYTE *)(a1 + 968) || v5 != 1 )
      {
LABEL_6:
        result = nullptr;
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 472LL))(result);
      }
      return (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 888) + 472LL))(*(_QWORD *)(a1 + 888));
    }
    result = *(_DWORD **)(a1 + 904);
    if ( !result )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 472LL))(result);
  }
  if ( !result[96] )
  {
    if ( *(_BYTE *)(a1 + 968) )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 472LL))(result);
    goto LABEL_6;
  }
  return result;
}
