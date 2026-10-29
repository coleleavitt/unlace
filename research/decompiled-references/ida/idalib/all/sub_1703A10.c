__int64 __fastcall sub_1703A10(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( a3 && (result = (*(_BYTE *)(a3 + 28) & 0x7Fu) - 26, (unsigned int)result <= 0x1A) )
    {
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      result = *(_QWORD *)(a3 + 48);
      *(_QWORD *)(a1 + 16) = result;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    *(_DWORD *)(a1 + 12) = a2;
  }
  return result;
}
