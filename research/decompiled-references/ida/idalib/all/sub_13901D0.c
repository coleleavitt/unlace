__int64 __fastcall sub_13901D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v6; // [rsp+20h] [rbp-28h]

  v5[0] = a2;
  v6 = 261;
  v5[1] = a3;
  result = sub_228B020(v5, 0);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(
             *(_QWORD *)(a1 + 8),
             a2,
             a3,
             0,
             0);
  return result;
}
