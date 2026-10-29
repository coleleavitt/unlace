__int64 __fastcall sub_4EC350(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rsi

  result = *(unsigned int *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)result )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3++);
      result = sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 48) );
  }
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}

