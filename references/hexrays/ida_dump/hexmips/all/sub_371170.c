unsigned __int64 __fastcall sub_371170(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = qalloc_or_throw(240);
  sub_3709E0(v1, a1, (__int64)"local types", v2, v3);
  v6 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, v1, &v6, &callui, v4);
  return v7 - __readfsqword(0x28u);
}
