_DWORD *__fastcall sub_852890(__int64 a1, __int64 a2, char a3)
{
  unsigned int **v3; // rbx
  _DWORD *result; // rax
  unsigned int **v5; // r12
  unsigned int *v6; // rsi

  if ( a3
    || *(_BYTE *)(sub_7E4EB0(a1) + 284)
    || (unsigned __int8)sub_1668690(a1 + 832, a2)
    || *(_WORD *)(a2 + 4)
    || (result = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *result != 5 )
  {
    v3 = (unsigned int **)(a2 + 32);
    result = (_DWORD *)(8LL * *(unsigned int *)(a2 + 24));
    v5 = (unsigned int **)((char *)result + a2 + 32);
    if ( result )
    {
      do
      {
        v6 = *v3++;
        result = (_DWORD *)sub_7E5940(a1, v6);
      }
      while ( v5 != v3 );
    }
  }
  return result;
}

