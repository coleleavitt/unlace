__int64 __fastcall sub_27DC40(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _BYTE v4[4]; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( a2
    && (v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 112LL))(a2), get_place_class(v4, 0, v2))
    && (v4[0] & 1) != 0 )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  }
  else
  {
    return -1;
  }
}
