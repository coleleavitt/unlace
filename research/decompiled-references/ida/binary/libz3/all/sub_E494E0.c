__int64 __fastcall sub_E494E0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdi

  if ( *(_BYTE *)(a1 + 98) )
    v2 = *(_QWORD **)(a1 + 104);
  else
    v2 = *(_QWORD **)(a1 + 112);
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v2 + 32LL))(v2, a2);
  if ( *a2 )
  {
    v4 = v2[7];
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 32LL))(v4, a2);
  }
  return result;
}

