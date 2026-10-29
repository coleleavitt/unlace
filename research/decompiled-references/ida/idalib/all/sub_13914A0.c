__int64 __fastcall sub_13914A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi

  result = *(_QWORD *)(a1 + 8);
  v4 = (*(_QWORD *)(a1 + 16) - result) >> 3;
  if ( v4 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_QWORD *)(result + 8 * v7++);
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 40LL))(v8, a2, a3);
      if ( v7 == v4 )
        break;
      result = *(_QWORD *)(a1 + 8);
    }
  }
  return result;
}
