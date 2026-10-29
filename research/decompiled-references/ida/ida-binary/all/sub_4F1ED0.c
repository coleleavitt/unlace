bool __fastcall sub_4F1ED0(__int64 a1, _QWORD *a2, __int64 a3)
{
  const char *v3; // rdi
  bool v4; // zf
  bool result; // al
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v3 = &s1;
  v4 = *(_QWORD *)(a3 + 8) == 0;
  v7 = __readfsqword(0x28u);
  if ( !v4 )
    v3 = *(const char **)a3;
  result = (unsigned int)qsscanf(v3, "%a", &v6) == 1;
  if ( result )
    *a2 = v6;
  return result;
}
