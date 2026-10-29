unsigned __int64 __fastcall sub_6CBB20(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 result; // rax
  __int64 v6; // rdi
  char v7; // al
  unsigned __int8 v8; // dl

  if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
        v4 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v4 & 8) != 0 )
        {
          result = ((*(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL))
                   | (unsigned __int64)(((unsigned __int8)a2 | (unsigned __int8)v4) & 7)) >> 6)
                 & 7;
          if ( (_DWORD)result )
            return result;
        }
        v6 = *(_QWORD *)v3;
        v7 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (unsigned __int8)(v7 - 2) > 4u )
          break;
        a2 = sub_6CB5B0(a1, a2);
        if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          return 0;
      }
      v8 = *(_BYTE *)(v6 + 16);
      if ( v8 != 41 )
      {
        if ( v7 == 41 )
        {
          v6 = sub_B0D320(v6);
          if ( v6 )
            goto LABEL_8;
          v6 = *(_QWORD *)v3;
          v8 = *(_BYTE *)(*(_QWORD *)v3 + 16LL);
        }
        if ( (unsigned int)v8 - 42 > 1 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
            return 0;
          v6 = sub_B0D320(v6);
          if ( !v6 )
            return 0;
        }
        while ( (*(_BYTE *)(v6 + 18) & 0x10) != 0 )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 42 > 1 )
            v6 = sub_B0D320(v6);
        }
      }
LABEL_8:
      a2 = *(_QWORD *)(v6 + 32);
      if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
        return 0;
    }
  }
  return 0;
}

