__int64 __fastcall sub_78FE10(
        __int64 a1,
        unsigned int a2,
        __int64 (__fastcall *a3)(_QWORD, _QWORD, __int64, const void *, size_t, __int64),
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int16 *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  unsigned __int8 v11; // r9
  size_t v12; // r8
  const void *v13; // rdi
  unsigned __int32 v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // r13d

  v6 = *(_QWORD *)(a1 + 1544);
  *(_DWORD *)(v6 + 48) = _byteswap_ulong(a2);
  v7 = *(_QWORD *)v6;
  *(_WORD *)(v6 + 45) = 5;
  sub_723E90(v7, (unsigned __int16 *)(v6 + 45));
  while ( 1 )
  {
    sub_720F20(v7);
    if ( !v8 )
      break;
    v9 = (__int64)v8 - 1;
    if ( v8 == (__int16 *)((char *)&dword_0 + 1) )
      break;
    v10 = *v8;
    if ( *((_BYTE *)v8 + 2) != 46 )
      break;
    if ( v10 > 5u )
    {
      v11 = *((_BYTE *)v8 + 7);
      v12 = *(unsigned __int16 *)(v9 + v10 + 3);
      v13 = (const void *)(v9 + v10 + 5);
      v14 = _byteswap_ulong(*(_DWORD *)((char *)v8 + 3));
      switch ( v10 )
      {
        case 7u:
          v15 = *((unsigned __int8 *)v8 + 8);
LABEL_10:
          if ( a3 )
          {
            v16 = a3(v14, v11, v15, v13, v12, a4);
            if ( v16 )
              goto LABEL_12;
          }
          break;
        case 0xAu:
          v15 = _byteswap_ulong(*((_DWORD *)v8 + 2));
          if ( v11 != 83 || v14 != *(_DWORD *)(v7 + 5876) || (*(_BYTE *)(v7 + 5984) & 1) != 0 )
            goto LABEL_10;
          sub_78E0C0((_QWORD *)v7, (unsigned int)v15 >> 8, v13, v12);
          break;
        case 6u:
          v15 = 0xFFFFFFFFLL;
          goto LABEL_10;
      }
    }
  }
  v16 = 0;
LABEL_12:
  sub_78FBC0(v7);
  return v16;
}

