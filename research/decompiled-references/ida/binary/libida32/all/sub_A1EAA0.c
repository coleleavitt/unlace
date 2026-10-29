__int64 __fastcall sub_A1EAA0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  char v6; // [rsp+7h] [rbp-21h] BYREF
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, char *, _QWORD *))(*a1 + 120))(
             a1,
             a2,
             a4,
             0,
             &v6,
             v7);
  if ( (_BYTE)result )
  {
    sub_A1E350(a1, a3);
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 128))(a1, v7[0]);
  }
  return result;
}

