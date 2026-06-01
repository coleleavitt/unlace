__int64 __fastcall sub_3A3C50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r12

  result = sub_1F09A0(a1, a2, a3);
  if ( !(_DWORD)result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 712LL))(a1, a3);
    return 2 * (unsigned int)(v5 != (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 712LL))(a1, a2));
  }
  return result;
}
