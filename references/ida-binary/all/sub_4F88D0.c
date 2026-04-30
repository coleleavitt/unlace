bool __fastcall sub_4F88D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = (unsigned int)qsscanf(a3, "%a", &v4) == 1;
  if ( result )
    *a2 = v4;
  return result;
}
