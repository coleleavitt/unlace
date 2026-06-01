__int64 __fastcall sub_1B3EC00(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5, __m128 a6, __m128 a7)
{
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 result; // rax

  v10 = a2;
  if ( (unsigned __int8)sub_B8E180(*(_QWORD *)(a1 + 544)) )
    return 0;
  v11 = &a2[a3];
  if ( a2 == v11 )
    return 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(*v10 + 8) == 53 )
    {
      result = sub_1B3E1A0(*v10, *a4, a1, *(_QWORD *)(a1 + 608), a5, a6, a7);
      if ( (_BYTE)result )
        break;
    }
    if ( v11 == ++v10 )
      return 0;
  }
  return result;
}
