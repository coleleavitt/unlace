__int64 __fastcall sub_4FC490(__int64 a1, _QWORD *a2, __int64 *a3, const char *a4)
{
  unsigned int v4; // r13d
  int v7; // eax
  int v9; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v7 = qsscanf(a4, "%d", &v9);
  LOBYTE(v4) = v7 == 1;
  if ( v7 == 1 )
    *a2 = v9;
  else
    sub_169A50(a3, (__int64)"Failed to parse value representation '%s'", a4);
  return v4;
}
