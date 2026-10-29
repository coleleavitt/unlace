/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A4B8
// Address: 0x000000000044A4B8

//----- (000000000044A4B8) ----------------------------------------------------
__int64 __fastcall sub_44A4B8(__int64 a1, char *s)
{
  unsigned int v4; // w20
  size_t v6; // x0
  size_t v7; // x24
  size_t v8; // x23
  __int64 v9; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v11; // [xsp+48h] [xbp-18h]
  __int64 v12; // [xsp+50h] [xbp-10h]

  if ( a1 && *(_BYTE *)a1 == 5 )
  {
    ptr = nullptr;
    v11 = 0;
    v12 = 0;
    if ( s )
    {
      v6 = strlen(s);
      v7 = v6 + 1;
      v8 = v6;
      ptr = sub_491288((__int64)&ptr, nullptr, v6 + 1, 1u);
      v11 = v7;
      memmove(ptr, s, v8);
      *((_BYTE *)ptr + v8) = 0;
    }
    v9 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    if ( !sub_44A400(v9, (const char **)&ptr) )
    {
      sub_486A58(0, s);
      v4 = sub_4869C8(1538);
    }
    if ( ptr )
    {
      v11 = 0;
      j__free(ptr);
    }
  }
  else
  {
    return (unsigned int)sub_4869C8(1532);
  }
  return v4;
}
