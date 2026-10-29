__int64 __fastcall sub_7C8720(int a1, __int64 a2)
{
  _BOOL4 v3; // ebp
  __int16 v4; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a1 == -1 || a1 == 10 )
  {
    v4 = 0;
    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 10, &v4) )
    {
      v3 = v4 != 0;
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 24LL))(a2, 11, v4 != 0);
      (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a2 + 24LL))(a2, 12, v3);
      (*(void (__fastcall **)(__int64, __int64, _BOOL4))(*(_QWORD *)a2 + 24LL))(a2, 13, v3);
    }
  }
  return 1;
}
