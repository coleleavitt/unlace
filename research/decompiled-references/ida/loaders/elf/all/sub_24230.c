__int64 __fastcall sub_24230(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 byte; // bl
  __int64 v10; // r8
  char v12; // al
  bool v13; // dl

  v4 = a3 - 1;
  byte = get_byte(a3 - 1);
  if ( a2 == 42 )
  {
    v12 = get_byte(a3 - 3);
    v13 = (v12 & 4) != 0;
    if ( (v12 & 8) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
    {
      put_byte(a3 - 3, v13 | v12 & 0xFBu);
      if ( (int)a4 == a4 )
        goto LABEL_3;
LABEL_7:
      sub_40E00(a3, a4, v7, v8, v10);
      goto LABEL_3;
    }
    put_byte(a3 - 3, v13 | v12 & 0xF3u);
  }
  if ( HIDWORD(a4) )
    goto LABEL_7;
LABEL_3:
  put_byte(a3 - 2, 199);
  put_byte(v4, (byte >> 3) & 7 | 0xC0u);
  sub_424F0(a1, a3, a4, 0, 4, 0, 0, 0);
  sub_40E20(a1, a3 - 2, 0);
  return 1;
}

