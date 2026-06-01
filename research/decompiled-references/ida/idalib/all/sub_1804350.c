__int64 __fastcall sub_1804350(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx

  v4 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  result = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(unsigned __int8 *)(result + 16);
  if ( (_BYTE)v6 != 48 )
  {
    if ( *(_BYTE *)(v4 + 16) != 42 )
    {
      if ( (_BYTE)v6 != 42 )
        return 0;
      v4 = sub_F63050(v4, a2, v6, a4);
      if ( !v4 )
        return 0;
    }
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(result + 16) != 48 )
      return 0;
  }
  return result;
}
