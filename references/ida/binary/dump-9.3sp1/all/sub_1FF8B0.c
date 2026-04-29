__int64 __fastcall sub_1FF8B0(__int64 a1, int a2, int *a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = 1;
  if ( (**(_DWORD **)(a1 + 8) & 0x8000000) == 0 )
  {
    result = sub_1FF360(a1, (_QWORD *)(a1 + 56), a2, a3, a4, a5);
    if ( !(_DWORD)result )
    {
      if ( *(_BYTE *)(a1 + 109) )
        return sub_1FF360(a1, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 800LL), a2, a3, a4, a5);
    }
  }
  return result;
}
