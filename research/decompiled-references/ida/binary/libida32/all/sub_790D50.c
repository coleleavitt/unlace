__int64 *__fastcall sub_790D50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r9d

  result = *(__int64 **)(a1 + 1544);
  v4 = *result;
  if ( *result )
  {
    sub_78E9A0((_QWORD *)*result, 0, a3);
    return (__int64 *)sub_71BD70(v4, 0, v5, v6, v7, v8);
  }
  return result;
}

