__int64 __fastcall sub_7DAD20(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4, __int64 a5, int a6)
{
  __int64 v8; // rbp
  char v10; // dl
  __int64 result; // rax

  v8 = a1 - 48;
  if ( *(_DWORD *)(a1 + 56) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 512LL))(v8);
    while ( (*(_DWORD *)(a1 + 56))-- != 1 );
  }
  v10 = sub_7E6250(a1, *(_QWORD *)(a1 + 24), a2, a3, a4, a6);
  result = 4294967294LL;
  if ( v10 )
    return a3 ^ (unsigned int)sub_7E4F30(v8, a2);
  return result;
}

