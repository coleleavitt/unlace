unsigned __int8 *__fastcall sub_208AE40(__int64 a1, unsigned int a2)
{
  unsigned __int8 *result; // rax
  int v3; // edx

  result = *(unsigned __int8 **)(a1 + 40);
  if ( result )
  {
    v3 = *result;
    if ( (_BYTE)v3 == 4 )
    {
      return *(unsigned __int8 **)(*(_QWORD *)(*((_QWORD *)result + 16) + 8LL * a2) + 128LL);
    }
    else if ( (unsigned int)(v3 - 5) <= 0x20 )
    {
      return nullptr;
    }
    else
    {
      return *((unsigned __int8 **)result + 16);
    }
  }
  return result;
}
