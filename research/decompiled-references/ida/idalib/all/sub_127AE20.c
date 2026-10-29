__int64 __fastcall sub_127AE20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  result = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 8) == 13 )
  {
    v4 = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 == *(_QWORD *)a3
      && *((_DWORD *)v4 + 2) == *(_DWORD *)(a3 + 8)
      && *((_BYTE *)v4 + 12) == *(_BYTE *)(a3 + 12) )
    {
      v5 = *(_QWORD *)(a2 + 8);
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 16) = "32bit";
      *(_QWORD *)(a1 + 24) = v5;
      return 1;
    }
  }
  return result;
}
