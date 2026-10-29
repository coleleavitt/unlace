__int64 __fastcall sub_5EBCA0(__int64 *a1, _BYTE *a2)
{
  unsigned int v2; // r12d
  __int64 v4; // rbx
  __int64 v5; // rbp
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( !*((_BYTE *)a1 + 51) )
  {
    v2 = sub_5E1D80(0, a2);
    if ( (_BYTE)v2 )
    {
      v4 = *a1;
      v5 = *a1 + 144 * a1[1];
      if ( v5 == *a1 )
        return v2;
      while ( 1 )
      {
        v6[0] = 0;
        v6[0] = get_tinfo_property(*(_QWORD *)(v4 + 64), 9);
        if ( (get_tinfo_property(v6[0], 2) & 0xF) != 0xC )
          break;
        v4 += 144;
        clear_tinfo_t(v6);
        if ( v4 == v5 )
          return v2;
      }
      clear_tinfo_t(v6);
    }
  }
  return 0;
}
