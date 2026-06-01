__int64 __fastcall sub_F9EB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(__int16 *)(a2 + 30);
  LODWORD(v2) = *(_DWORD *)(v2 + 20);
  v4 = (int)v2 - 1LL;
  result = (unsigned int)(v2 - 1);
  if ( v3 <= v4 )
    result = (unsigned int)v3;
  if ( (int)result < 0 )
    result = 0;
  *(_WORD *)(a2 + 30) = result;
  return result;
}

