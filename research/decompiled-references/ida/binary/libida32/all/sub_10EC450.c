__int64 __fastcall sub_10EC450(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 48) = 0;
  if ( *(_BYTE *)(a2 + 48) )
  {
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    result = *(unsigned int *)(a2 + 8);
    if ( (_DWORD)result )
      result = sub_CCBE40(a1, a2);
    *(_BYTE *)(a1 + 48) = 1;
  }
  return result;
}

