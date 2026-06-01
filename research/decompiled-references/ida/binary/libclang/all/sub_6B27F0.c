_QWORD *__fastcall sub_6B27F0(_QWORD *a1, __int64 a2)
{
  char v2; // r9
  _QWORD *result; // rax
  unsigned __int8 v4; // si

  v2 = *(_BYTE *)(a2 + 23);
  result = a1;
  if ( (v2 & 8) != 0 )
  {
    v4 = *(_BYTE *)(((a2 + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) + 48 + 4LL * ((v2 & 0x10) != 0) + 7)
                   & 0xFFFFFFFFFFFFFFF8LL)
                  + 1);
    if ( v4 > 0xFu )
    {
      if ( (v4 & 8) == 0 )
        JUMPOUT(0x6B2865);
      JUMPOUT(0x6B28BA);
    }
  }
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return result;
}

