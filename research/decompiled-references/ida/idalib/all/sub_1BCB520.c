__int64 __fastcall sub_1BCB520(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  result = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(unsigned __int8 *)(result + 16);
  if ( (_BYTE)v4 != 26 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) == 26 )
    {
      result = sub_F63050(result, a2, v4, v5);
      if ( result )
        return result;
      result = *(_QWORD *)v2;
      LOBYTE(v4) = *(_BYTE *)(*(_QWORD *)v2 + 16LL);
    }
    if ( (_BYTE)v4 == 33
      || (v7 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v7 + 16) == 33)
      && (result = sub_F63050(result, a2, v7, v5)) != 0 )
    {
      result = *(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(result + 16) == 26 )
        return result;
      v6 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v6 + 16) == 26 )
        return sub_F63050(result, a2, v6, v5);
    }
    return 0;
  }
  return result;
}
