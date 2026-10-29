char *__fastcall sub_5E6630(__int64 a1, unsigned int a2, _QWORD *a3)
{
  if ( a2 > 3 || unk_2C81928 && *(_DWORD *)(a1 + 4) )
    return nullptr;
  if ( a3 )
    *a3 = 2;
  return (char *)&unk_23AFC60 + 12 * (int)a2 + 6;
}
