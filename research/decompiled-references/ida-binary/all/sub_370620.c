__int64 __fastcall sub_370620(_DWORD *a1, char a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = a1[3];
  result = v2 | 1u;
  if ( a2 )
    result = v2 & 0xFFFFFFFE;
  a1[3] = result;
  if ( v2 != (_DWORD)result )
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *(_BYTE *)(result + 336) = 1;
  }
  return result;
}
