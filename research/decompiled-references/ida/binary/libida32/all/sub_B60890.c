__int64 __fastcall sub_B60890(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned __int64 v9; // rdx
  __int64 *v10; // rax
  char v11; // bl
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+88h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 7) != 0 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 )
    return 0;
  v4 = sub_FBA390(v2);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( v4 <= 2 )
  {
    if ( (*(_BYTE *)(a1 + 28) & 0x7B) == 0x2B || (((*(_BYTE *)(a1 + 28) & 0x7F) + 61) & 0x7Fu) <= 1 )
      return 0;
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v7 = (_QWORD *)*v7;
    if ( (*(_BYTE *)(sub_B6AD60(v7) + 8) & 0x7F) != 0 )
    {
      v8 = *(_BYTE *)(a1 + 28) & 0x7F;
      if ( (unsigned int)(v8 - 40) <= 6 )
      {
        v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v9 = *(_QWORD *)v9;
        if ( ((*(_BYTE *)(v9 + 8) + 70) & 0x7Fu) <= 3 )
          return 0;
        v14 = 1;
        v10 = &v15;
        do
        {
          *v10 = -1;
          v10 += 2;
        }
        while ( v10 != &v16 );
        v11 = sub_B5D9A0((__int64)&v14, a1, 7u) & 7;
        if ( (v14 & 1) == 0 )
          operator delete();
        if ( v11 == 3 || v11 == 6 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 1LL) & 8) == 0 )
            return 2;
          v12 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
            v12 = *(_QWORD *)v12;
          if ( ((*(_BYTE *)(v12 + 8) + 70) & 0x7Fu) > 3 )
          {
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 4) != 0 )
              v13 = *(_QWORD *)(v13 + 8);
            if ( (unsigned __int8)sub_B6A780(v13) )
              return 2;
          }
        }
        v8 = *(_BYTE *)(a1 + 28) & 0x7F;
      }
      if ( (unsigned int)(v8 - 34) > 5 || !(unsigned __int8)sub_B5DEB0(a1) )
        return 0;
      return 2;
    }
  }
  return v5;
}

