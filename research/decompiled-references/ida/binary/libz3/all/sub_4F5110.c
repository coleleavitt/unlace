__int64 __fastcall sub_4F5110(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi

  result = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)result )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4++);
      result = sub_553300(a2, v5);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 8) );
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}

