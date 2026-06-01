__int64 __fastcall sub_1896F80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rdx

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
  }
  v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v7 || !*v7 )
    return 0;
  result = sub_B8E970(*v7 + 48LL);
  if ( result && (*(_BYTE *)(result + 28) & 0x7F) != 0x32 )
  {
    do
    {
      v9 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v9;
    }
    while ( v9 && (*(_BYTE *)(v9 + 28) & 0x7F) != 0x32 );
  }
  return result;
}
