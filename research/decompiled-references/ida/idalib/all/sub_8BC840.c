__int64 __fastcall sub_8BC840(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( qseek(*(unsigned int *)(a1 + 16), *(_QWORD *)a1 * *(unsigned int *)(a2 + 24), 0) == -1 )
    off_2C820C0(a1, "Seeking", *(_DWORD *)(a2 + 24));
  result = (int)qwrite(*(unsigned int *)(a1 + 16), a2 + 30, *(_QWORD *)a1);
  if ( (int)result != *(_QWORD *)a1 )
    off_2C820C0(a1, "Writing", *(_DWORD *)(a2 + 24));
  *(_BYTE *)(a2 + 28) = 0;
  return result;
}
