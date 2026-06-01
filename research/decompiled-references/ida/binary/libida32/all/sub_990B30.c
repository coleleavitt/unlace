__int64 __fastcall sub_990B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdi

  result = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
  {
    do
    {
      v6 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43 > 1 )
        v6 = sub_F3F310(v6, a2, a3, a4, a5);
      result = *(_QWORD *)(v6 + 32);
    }
    while ( (*(_BYTE *)(v6 + 18) & 0x10) != 0 );
  }
  return result;
}

