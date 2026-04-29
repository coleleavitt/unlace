unsigned __int64 __fastcall sub_38590(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  qsnprintf();
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 56LL))(a1, &v2, 33);
  return v3 - __readfsqword(0x28u);
}
