__int64 __fastcall sub_53CAE0(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)get_ordinal_limit(*(_QWORD *)(a1 + 120)) - 1;
  if ( (unsigned int)result > 0xFFFFFFFD )
    return 0;
  return result;
}

