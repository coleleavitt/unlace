__int64 __fastcall sub_127AD70(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx

  result = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 8) == 11 )
  {
    v4 = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 == *(_QWORD *)a3
      && *((_WORD *)v4 + 4) == *(_WORD *)(a3 + 8)
      && *((_BYTE *)v4 + 10) == *(_BYTE *)(a3 + 10) )
    {
      v5 = a2[1];
      v6 = *a2;
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 24) = v5;
      *(_QWORD *)(a1 + 16) = v6;
      return 1;
    }
  }
  return result;
}
