__int64 __fastcall sub_86B1C0(__int64 a1, unsigned int *a2, unsigned __int8 a3, unsigned __int8 a4, double a5)
{
  __int64 v7; // rbp
  char v9; // dl
  __int64 result; // rax

  v7 = a1 - 48;
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 512LL))(v7);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  v9 = sub_7E6250((_QWORD *)a1, *(_QWORD *)(a1 + 24), (__int64)a2, a3, a4, a5);
  result = 4294967294LL;
  if ( v9 )
    return a3 ^ (unsigned int)sub_7E4F30(v7, a2);
  return result;
}

