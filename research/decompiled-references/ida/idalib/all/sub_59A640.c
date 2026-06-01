__int64 __fastcall sub_59A640(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, unsigned __int64, __int64); // r15
  __int64 v10; // rax
  __int64 result; // rax

  *(_QWORD *)(a5 + 8) = a1;
  v7 = sub_7BEB00(a1, a2, a3, 80);
  if ( v7 >= a4 )
    return 0;
  v8 = v7;
  while ( 1 )
  {
    v9 = **(__int64 (__fastcall ***)(__int64, unsigned __int64, __int64))a5;
    v10 = sub_7BE710(a1, a2, v8, 65);
    result = v9(a5, v8, v10);
    if ( (_DWORD)result )
      break;
    v8 = sub_7BEBF0(a1, a2, v8, 80);
    if ( v8 >= a4 )
      return 0;
  }
  return result;
}
