__int64 __fastcall sub_A5E7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx

  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(result + 16) - 35;
  if ( (unsigned int)v6 > 1 )
    return sub_F63050(result, a2, v6, a4, a5);
  return result;
}
