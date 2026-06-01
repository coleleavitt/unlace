__int64 __fastcall sub_580B50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD); // r15
  unsigned int v10; // eax
  __int64 result; // rax

  *(_QWORD *)(a5 + 8) = a1;
  v7 = sub_79B770(a1, a2, a3, 80);
  if ( v7 >= a4 )
    return 0;
  v8 = v7;
  while ( 1 )
  {
    v9 = **(__int64 (__fastcall ***)(__int64, _QWORD, _QWORD))a5;
    v10 = sub_79B3A0(a1, a2, v8, 65);
    result = v9(a5, v8, v10);
    if ( (_DWORD)result )
      break;
    v8 = sub_79B840(a1, a2, v8, 80);
    if ( v8 >= a4 )
      return 0;
  }
  return result;
}

