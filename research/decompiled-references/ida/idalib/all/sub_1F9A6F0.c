__int64 __fastcall sub_1F9A6F0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rsi

  sub_1F9A420(a1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8));
  sub_9B9C90(a1[2], *(unsigned int *)(a2 + 16));
  result = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)result )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(result - 1) + 8;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + v4);
      v4 += 8;
      result = sub_1F95F90((__int64)a1, v6);
    }
    while ( v5 != v4 );
  }
  return result;
}
