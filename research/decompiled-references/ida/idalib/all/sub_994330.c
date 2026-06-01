__int64 __fastcall sub_994330(__int64 a1)
{
  char v1; // al

  while ( 1 )
  {
    v1 = *(_BYTE *)(a1 + 16);
    if ( (unsigned __int8)(v1 - 2) > 4u )
      return 0;
    if ( v1 == 6 && *(_QWORD *)(a1 + 40) )
      break;
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  }
  return a1;
}
