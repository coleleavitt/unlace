__int64 __fastcall sub_8E7030(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 184);
  result = *(unsigned int *)(*(_QWORD *)(a1 + 112) + 476LL);
  if ( (unsigned int)result > v1 )
    return v1;
  return result;
}

