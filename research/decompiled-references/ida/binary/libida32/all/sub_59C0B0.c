__int64 __fastcall sub_59C0B0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 0xFFFFFFFFLL;
  if ( a2 < *(_QWORD *)(a1 + 48) )
  {
    v3 = *(_QWORD *)(a1 + 40) + 24 * a2;
    if ( *(_QWORD *)v3 )
      return *(unsigned int *)(v3 + 8);
  }
  return result;
}

