unsigned __int64 __fastcall sub_69E930(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)result != -1 )
  {
    result = sub_69E890(*(__int64 **)(a2 + 1480), result, a3);
    if ( a3 )
      *(_DWORD *)(a1 + 24) = -1;
  }
  return result;
}

