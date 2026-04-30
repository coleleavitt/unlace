__int64 __fastcall sub_55C960(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)result )
  {
    if ( *a1 )
      return 1;
    v3 = **(_QWORD **)(a2 + 8);
    if ( (v3 & 1) != 0 || *(_WORD *)(v3 + 40) != 0xFFFF )
    {
      return 1;
    }
    else
    {
      *a1 = 1;
      return 3;
    }
  }
  return result;
}
