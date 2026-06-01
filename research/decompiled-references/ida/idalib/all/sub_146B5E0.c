__int64 __fastcall sub_146B5E0(__int64 *a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  __int64 result; // rax
  __int64 v6; // rdx

  result = a2;
  *a1 = a2;
  if ( a5 != 1 && a4 )
    return sub_1564E40(a2, a3);
  if ( a5 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 608LL);
    v6 = *(_QWORD *)(result + 32);
    if ( v6 )
    {
      ++*(_WORD *)(v6 + 14);
      ++*(_WORD *)(result + 16);
    }
  }
  *a1 = 0;
  return result;
}
