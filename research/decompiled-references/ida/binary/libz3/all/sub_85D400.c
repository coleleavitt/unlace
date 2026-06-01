__int64 __fastcall sub_85D400(_QWORD *a1, unsigned int *a2, unsigned __int8 a3, unsigned __int8 a4, double a5)
{
  int v5; // ebx
  char v6; // dl
  __int64 result; // rax

  v5 = a3;
  v6 = sub_7E6250(a1, a1[3], (__int64)a2, a3, a4, a5);
  result = 4294967294LL;
  if ( v6 )
    return v5 ^ (unsigned int)sub_7E4F30((__int64)(a1 - 6), a2);
  return result;
}

