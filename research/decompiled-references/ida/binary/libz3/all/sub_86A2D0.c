__int64 __fastcall sub_86A2D0(__int64 a1, unsigned int *a2, unsigned __int8 a3, unsigned __int8 a4, double a5)
{
  char v8; // dl
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v8 = sub_7E6250((_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 72), (__int64)a2, a3, a4, a5);
  result = 4294967294LL;
  if ( v8 )
    return a3 ^ (unsigned int)sub_7E4F30(a1, a2);
  return result;
}

