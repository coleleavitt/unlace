__int64 __fastcall sub_697010(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  *(_BYTE *)(a1 + 4544) &= sub_68DE10(a1, a2);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  result = *(_QWORD *)(a1 + 4408);
  if ( !result || (v3 = *(_DWORD *)(result - 4), v3 == *(_DWORD *)(result - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 4408));
    result = *(_QWORD *)(a1 + 4408);
    v3 = *(_DWORD *)(result - 4);
  }
  *(_QWORD *)(result + 8LL * v3) = a2;
  *(_DWORD *)(result - 4) = v3 + 1;
  return result;
}

