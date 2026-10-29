__int64 __fastcall sub_699C70(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  bool v4; // [rsp+Fh] [rbp-29h] BYREF
  char *v5[5]; // [rsp+10h] [rbp-28h] BYREF

  v5[1] = (char *)__readfsqword(0x28u);
  v2 = sub_630850(a1, *(_QWORD *)(a1 + 8), a2, (const char **)v5, 0, 0, 0, 0);
  if ( (_BYTE)v2 )
  {
    if ( (*v5[0] & 0x3F) == 0x2D )
    {
      ++v5[0];
      if ( !(unsigned int)sub_693160(v5, &v4) )
        return v4;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}

