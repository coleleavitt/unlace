bool __fastcall sub_7BCA00(__int64 a1)
{
  char v1; // al

  v1 = (*(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) >> 3) & 3;
  if ( v1 == 1 )
    return 1;
  if ( v1 == 2 )
    return 0;
  return sub_7BC660(a1);
}

