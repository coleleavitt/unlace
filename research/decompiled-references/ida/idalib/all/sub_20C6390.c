__int64 __fastcall sub_20C6390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  _QWORD *v8; // rax

  v6 = *(unsigned __int8 *)(a1 + 8);
  while ( 1 )
  {
    if ( (_BYTE)v6 == 16 || (unsigned int)(unsigned __int8)v6 - 17 <= 1 )
    {
      a1 = *(_QWORD *)(a1 + 24);
      a4 = *(unsigned __int8 *)(a1 + 8);
      v6 = a4;
      if ( (_DWORD)a4 == 12 )
        return 1;
      if ( (unsigned __int8)a4 <= 5u )
        goto LABEL_5;
      goto LABEL_11;
    }
    if ( (_BYTE)v6 != 20 )
      return sub_20C5F40(a1, a2, v6, a4, a5, a6);
    v8 = sub_20C5940(a1, a2, v6, a4, a5, a6);
    a4 = *((unsigned __int8 *)v8 + 8);
    a1 = (__int64)v8;
    v6 = a4;
    if ( (_DWORD)a4 == 12 )
      return 1;
    if ( (unsigned __int8)a4 <= 5u )
    {
LABEL_5:
      if ( ((1LL << a4) & 0x2F) != 0 )
        return 1;
    }
LABEL_11:
    if ( (v6 & 0xFD) == 4 || (v6 & 0xFB) == 0xA )
      return 1;
    if ( (unsigned __int8)(v6 - 15) > 3u && (_DWORD)a4 != 20 )
      return 0;
  }
}
