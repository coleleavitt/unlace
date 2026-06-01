__int64 __fastcall sub_E7A930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  v6 = sub_B7E870(a1, a2, a3, a4, a5, a6);
  if ( !v6 )
    v6 = (_QWORD *)a1;
  result = sub_B8E970((__int64)(v6 + 8));
  if ( result && (*(_BYTE *)(result + 28) & 0x7F) != 0x21 )
  {
    do
    {
      v8 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v8;
    }
    while ( v8 && (*(_BYTE *)(v8 + 28) & 0x7F) != 0x21 );
  }
  return result;
}
