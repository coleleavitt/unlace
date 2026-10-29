__int64 __fastcall sub_AB8C00(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 v4; // r12
  __int64 v5; // r13

  LODWORD(result) = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( (_DWORD)result == -1
    || (result = (unsigned int)result, a2 != *(__int64 **)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)result)) )
  {
    result = sub_AB8AD0(a1, *a2);
    if ( !(_BYTE)result )
    {
      v3 = (**(__int64 (__fastcall ***)(__int64, __int64 *))a1)(a1, a2);
      sub_AB6BC0((__int64 *)a1, v3);
      v4 = *(_QWORD *)(a1 + 16);
      v5 = *a2;
      if ( !(unsigned int)sub_8E7030(v4) )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, *a2);
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 7488) + 56LL))(
                 *(_QWORD *)(v4 + 7488),
                 v5);
      if ( (_BYTE)result )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, *a2);
    }
  }
  return result;
}

