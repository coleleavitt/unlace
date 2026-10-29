__int64 __fastcall sub_1654AF0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r12
  _QWORD *v4; // rax
  unsigned int v6; // ecx
  __int64 v7; // rcx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // r9d

  if ( a2[5] != a1[5] )
    return 0;
  v3 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a2[2] & 4) != 0 )
    v3 = *(_QWORD *)v3;
  v4 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a1[2] & 4) != 0 )
    v4 = (_QWORD *)*v4;
  if ( v4 == (_QWORD *)v3
    || (unsigned __int8)sub_B8E180((unsigned __int64)v4)
    && (*(_BYTE *)(v3 + 8) & 0x7F) != 0x18
    && (*(_BYTE *)(v3 + 8) & 0x7F) != 0 )
  {
    v7 = *(_QWORD *)&byte_8[a2[6] & 0xFFFFFFFFFFFFFFF0LL];
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v7 | (unsigned __int8)a2[6]) & 7;
    v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v9 + 16LL) == 26 )
      {
        v9 = ((unsigned __int8)v7 | (unsigned __int8)a2[6]) & 7;
        v10 = (v8 >> 3) & 1;
      }
      else
      {
        v9 = 0;
        v10 = 0;
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
      v10 = 0;
    }
    v11 = *(_QWORD *)&byte_8[a1[6] & 0xFFFFFFFFFFFFFFF0LL];
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v11 | (unsigned __int8)a1[6]) & 7;
    v13 = 0;
    v14 = v12 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)v14 + 16LL) == 26 )
      {
        v14 = v12 & 7;
        if ( (v12 & 8) != 0 )
          v14 |= *(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
      }
      else
      {
        v13 = 0;
        v14 = 0;
      }
    }
    if ( v10 )
      v9 |= *(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v9 == v14 )
    {
      v15 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_WORD *)(*(_QWORD *)v15 + 22LL) == *(_WORD *)(*(_QWORD *)v13 + 22LL) )
      {
        v6 = sub_1654AC0(*(_QWORD *)(*(_QWORD *)v13 + 24LL), *(_QWORD *)(*(_QWORD *)v15 + 24LL));
        if ( (_BYTE)v6 )
        {
          v19 = 0;
          if ( !v16 )
            return v6;
          while ( (unsigned __int8)sub_1654AC0(*(_QWORD *)(v18 + 8 * v19 + 48), *(_QWORD *)(v17 + 8 * v19 + 48)) )
          {
            v19 = v20 + 1;
            if ( v21 == (_DWORD)v19 )
              return v6;
          }
        }
      }
    }
  }
  return 0;
}
