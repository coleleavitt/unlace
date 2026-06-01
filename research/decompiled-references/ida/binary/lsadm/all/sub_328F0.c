__int64 __fastcall sub_328F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = operator new(0x10u);
  *(_QWORD *)result = off_79730;
  *(_BYTE *)(result + 8) = 18;
  *(_DWORD *)(result + 9) = 0;
  *(_WORD *)(result + 13) = 0;
  if ( a1 )
  {
    if ( __CFADD__(a1, a2) || a1 + a2 < (unsigned __int64)(a1 + 6) )
    {
      if ( result )
        operator delete((void *)result, 0x10u);
      return 0;
    }
    else
    {
      *(_DWORD *)(result + 9) = *(_DWORD *)a1;
      *(_WORD *)(result + 13) = *(_WORD *)(a1 + 4);
    }
  }
  return result;
}

