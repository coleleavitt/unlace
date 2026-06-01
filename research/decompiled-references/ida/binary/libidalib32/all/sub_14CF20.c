__int64 __fastcall sub_14CF20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r12d

  result = sub_161320();
  if ( !(_DWORD)result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 408LL))(a1, a3);
    return 2 * (unsigned int)(v5 != (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 408LL))(a1, a2));
  }
  return result;
}

