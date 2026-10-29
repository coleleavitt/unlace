void *__fastcall sub_210D820(__int64 a1)
{
  void *v2; // rbp
  void *v4; // rax
  __int64 v5; // rbx
  char v6; // al
  char v7; // al
  void *v8; // rax

  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 0:
        v2 = sub_210D700(*(_QWORD *)(a1 + 16));
        v4 = sub_210D700(*(_QWORD *)(a1 + 24));
        if ( off_2C8EF40 == v2 )
          return v4;
        if ( off_2C8EF40 == v4 )
          return v2;
        if ( *(_DWORD *)a1 >> 8 == 18 )
          return off_2C8EF40;
        if ( !v2 )
          return v4;
        return v2;
      case 1:
        return off_2C8EF40;
      case 2:
        v5 = *(_QWORD *)(a1 + 16);
        v2 = *(void **)v5;
        if ( *(_QWORD *)v5 )
          return v2;
        v6 = *(_BYTE *)(v5 + 9);
        if ( (v6 & 8) != 0 )
          return off_2C8EF40;
        v7 = v6 | 8;
        *(_BYTE *)(v5 + 9) = v7;
        if ( (v7 & 0x70) == 0x20 && (*(_BYTE *)(v5 + 8) & 0x40) == 0 )
        {
          v8 = sub_210D700(*(_QWORD *)(v5 + 24));
          *(_QWORD *)v5 = v8;
          v2 = v8;
        }
        *(_BYTE *)(v5 + 9) &= ~8u;
        return v2;
      case 3:
      case 4:
        a1 = *(_QWORD *)(a1 + 16);
        continue;
      case 5:
        return (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 64LL))(a1 - 8);
    }
  }
}
