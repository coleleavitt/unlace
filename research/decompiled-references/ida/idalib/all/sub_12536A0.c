__int64 __fastcall sub_12536A0(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, unsigned int); // rcx
  char v6; // dl
  __int64 v8; // [rsp+8h] [rbp-20h]

  v4 = std::use_facet<std::ctype<char>>(a1);
  LODWORD(v5) = 1;
  if ( ((unsigned __int16)a3 & *(_WORD *)(*(_QWORD *)(v4 + 48) + 2LL * a2)) == 0 )
  {
    LODWORD(v5) = 0;
    if ( (a3 & 0x10000) != 0 )
    {
      if ( *(_BYTE *)(v4 + 56) )
      {
        v6 = *(_BYTE *)(v4 + 152);
      }
      else
      {
        v8 = v4;
        std::ctype<char>::_M_widen_init(v4);
        v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 48LL);
        v6 = 95;
        if ( v5 != sub_124D700 )
          v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v5)(v8, 95, 95);
      }
      LOBYTE(v5) = a2 == (unsigned __int8)v6;
    }
  }
  return (unsigned int)v5;
}
