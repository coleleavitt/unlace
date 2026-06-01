unsigned __int64 __fastcall sub_21B1170(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 (*v3)(void); // rax
  char v4; // al
  unsigned __int64 result; // rax

  v2 = *a2;
  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v3 == (char *)sub_21B1110 )
    v4 = a1[2] == 12;
  else
    v4 = v3();
  result = v2 + (-(__int64)(v4 == 0) & 0xFFFFFFFFFFFFFFE0LL) + 72;
  *a2 = result;
  return result;
}
