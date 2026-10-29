unsigned __int64 __fastcall sub_B7E900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx

  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( (v8 & 0x80u) != 0LL && (v8 & 0x8000000) == 0 )
      sub_B78E40(a1);
    v7 = (_QWORD *)a1;
    if ( (*(_BYTE *)(a1 + 74) & 1) == 0 )
    {
      v7 = sub_B7E7B0(a1, a2, a3, a4, a5, a6);
      if ( !v7 )
        break;
    }
    if ( (_QWORD *)a1 == v7 )
      break;
    a1 = (__int64)v7;
  }
  result = *(_QWORD *)(a1 + 80);
  if ( result && (*(_BYTE *)(result + 28) & 0x7Fu) - 49 > 2 )
  {
    do
    {
      v10 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v10;
    }
    while ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 49 > 2 );
  }
  return result;
}
