__int64 __fastcall sub_1390530(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD v4[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v5; // [rsp+20h] [rbp-28h]

  v2 = *a2;
  v5 = 261;
  v4[0] = a2 + 4;
  v4[1] = v2;
  result = sub_228B020(v4, 0);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(
             *(_QWORD *)(a1 + 8),
             a2 + 4,
             v2,
             0,
             0);
  return result;
}
