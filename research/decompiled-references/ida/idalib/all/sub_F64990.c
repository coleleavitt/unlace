__int64 __fastcall sub_F64990(__int64 a1)
{
  __int64 v2; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v2 + 16) != 40 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 40 )
        break;
      v2 = sub_F62E70(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v2 )
        break;
    }
    a1 = *(_QWORD *)(v2 + 32);
  }
  return a1;
}
