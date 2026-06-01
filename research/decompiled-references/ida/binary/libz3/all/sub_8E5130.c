__int64 __fastcall sub_8E5130(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  if ( !*(_BYTE *)(a1 + 176) && qword_1C7EC50 == *(_QWORD *)(a1 + 8984) && !*(_BYTE *)(a1 + 2416) )
    return sub_8E5080(a1, a2);
  result = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
  if ( (unsigned int)result > v3 )
    result = v3;
  *(_DWORD *)(a1 + 184) = result;
  return result;
}

