__int64 __fastcall sub_85D390(__int64 a1, unsigned int *a2, unsigned __int8 a3, unsigned __int8 a4, double a5)
{
  int v5; // ebp
  char v6; // dl
  __int64 result; // rax

  v5 = a3;
  v6 = sub_7E6250((_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 72), (__int64)a2, a3, a4, a5);
  result = 4294967294LL;
  if ( v6 )
    return v5 ^ (unsigned int)sub_7E4F30(a1, a2);
  return result;
}

