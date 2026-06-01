__int64 __fastcall sub_577FD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v3 = 0;
    do
    {
      if ( v3 >= *(_DWORD *)(result - 4) )
        break;
      v4 = v3++;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 8 * v4) + 40LL))(
        *(_QWORD *)(result + 8 * v4),
        a2);
      result = *(_QWORD *)(a1 + 32);
    }
    while ( result );
  }
  return result;
}

