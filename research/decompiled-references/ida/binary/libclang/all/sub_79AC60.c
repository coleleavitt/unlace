__int64 __fastcall sub_79AC60(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int8 v2; // al

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)(v1 + 8);
  if ( !v1 )
    return 0;
  v2 = *(_BYTE *)(v1 + 8) & 0x7F;
  if ( v2 == 6 )
    return 1;
  else
    return ((__int64 (*)(void))((char *)qword_3C91D68 + *((int *)qword_3C91D68 + v2)))();
}

