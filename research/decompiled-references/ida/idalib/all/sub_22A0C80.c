__int64 __fastcall sub_22A0C80(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rax

  result = *(unsigned __int8 *)(a1 + 24);
  if ( (_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 8) == 7 )
  {
    v4 = *(_DWORD **)a1;
    if ( **(_DWORD **)a1 == *(_DWORD *)a3
      && *((_WORD *)v4 + 2) == *(_WORD *)(a3 + 4)
      && *((_BYTE *)v4 + 6) == *(_BYTE *)(a3 + 6) )
    {
      v5 = *a2;
      *(_BYTE *)(a1 + 24) = 1;
      *(_QWORD *)(a1 + 16) = v5;
      return 1;
    }
  }
  return result;
}
