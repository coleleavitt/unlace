__int64 __fastcall sub_7DFC30(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4, __int64 a5, int a6)
{
  int v6; // ebx
  char v7; // dl
  __int64 result; // rax

  v6 = a3;
  v7 = sub_7E6250(a1, *(_QWORD *)(a1 + 24), a2, a3, a4, a6);
  result = 4294967294LL;
  if ( v7 )
    return v6 ^ (unsigned int)sub_7E4F30(a1 - 48, a2);
  return result;
}

