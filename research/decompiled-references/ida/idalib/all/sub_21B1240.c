char __fastcall sub_21B1240(_DWORD *a1, __int64 *a2)
{
  __int64 (*v2)(void); // rax
  char result; // al
  __int64 v4; // rdx

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v2 == (char *)sub_21B1110 )
    result = a1[2] == 12;
  else
    result = v2();
  v4 = *a2 + 10;
  if ( result )
    v4 = *a2 + 14;
  *a2 = v4;
  return result;
}
