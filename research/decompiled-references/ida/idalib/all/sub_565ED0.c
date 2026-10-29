_BYTE *__fastcall sub_565ED0(_BYTE *a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // bp
  int v3; // eax
  _BYTE *v5; // [rsp+8h] [rbp-20h] BYREF

  v2 = *a2;
  v5 = a2 + 1;
  v3 = sub_6B3760(&v5);
  if ( v3 == -1 )
    return nullptr;
  if ( a1 )
  {
    a1[2] = v3;
    a1[2] &= 1u;
    *a1 = 1LL << ((v2 >> 4) & 3);
    a1[1] = v3 >> 1;
  }
  return v5;
}
