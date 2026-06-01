__int64 __fastcall sub_B450E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // eax
  _DWORD *v6; // rdx
  _DWORD *v7; // rdx

  sub_9671F0(a1);
  LODWORD(result) = sub_B39350(a2, *(_DWORD *)(a1 + 8));
  if ( (_DWORD)result == -1
    || (result = (unsigned int)result, a2 != *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)result)) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 2417LL) )
      return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
    v5 = sub_15F0200(a1 + 56);
    v6 = *(_DWORD **)(a3 + 24);
    if ( v6 )
    {
      if ( v5 == *v6 && !v6[1] && *(_BYTE *)(sub_15F0420(a1 + 56) + 100) )
        return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
    }
    result = sub_15F0200(a1 + 56);
    v7 = *(_DWORD **)(a3 + 24);
    if ( v7 )
    {
      if ( (_DWORD)result == *v7 )
      {
        result = (unsigned int)v7[1];
        if ( !(_DWORD)result && v7[6] != 2 )
          return (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, a2);
      }
    }
  }
  return result;
}

