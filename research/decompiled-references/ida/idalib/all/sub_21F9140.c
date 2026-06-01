__int64 __fastcall sub_21F9140(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  *a1 = a2;
  result = (unsigned int)(v2 + 64);
  if ( (unsigned int)result > 0x7F )
  {
    result = operator new[](8LL * ((unsigned int)result >> 6));
    a1[1] = result;
  }
  return result;
}
