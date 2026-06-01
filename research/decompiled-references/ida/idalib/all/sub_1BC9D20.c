__int64 __fastcall sub_1BC9D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25;
  if ( (unsigned int)v5 > 1 )
    v4 = sub_F63050(v4, a2, v5, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 42 )
  {
    v6 = sub_1BC7590(v6, a2, v5, a4);
    if ( !v6 )
      return 0;
  }
  result = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(result + 16) - 25 > 1 )
  {
    v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( (unsigned int)v8 > 1 )
      return 0;
    return sub_F63050(result, a2, v8, a4);
  }
  return result;
}
