__int64 __fastcall sub_6AFF70(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdx

  result = *(_QWORD *)(a1 + 48);
  if ( result )
  {
    v2 = 0;
    do
    {
      if ( v2 >= *(_DWORD *)(result - 4) )
        break;
      v3 = v2++;
      sub_8E3A50(*(_QWORD *)(result + 8 * v3) + 80LL);
      result = *(_QWORD *)(a1 + 48);
    }
    while ( result );
  }
  return result;
}

