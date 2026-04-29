__int64 __fastcall sub_11C320(__int64 a1, _QWORD *a2, int a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) != 4 )
  {
    if ( *(_BYTE *)(a1 + 48) == 4 )
    {
      if ( !a3 )
      {
LABEL_10:
        if ( a2 )
          *a2 = a1 + 32;
        return *(_QWORD *)(a1 + 56);
      }
LABEL_4:
      result = 0;
      if ( a3 != **(_DWORD **)(a1 + 56) )
        return result;
      goto LABEL_10;
    }
    return 0;
  }
  if ( a3 && **(_DWORD **)(a1 + 40) != a3 )
  {
    if ( *(_BYTE *)(a1 + 48) == 4 )
      goto LABEL_4;
    return 0;
  }
  if ( a2 )
    *a2 = a1 + 48;
  return *(_QWORD *)(a1 + 40);
}
