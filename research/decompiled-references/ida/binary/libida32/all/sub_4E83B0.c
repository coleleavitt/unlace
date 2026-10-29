__int64 __fastcall sub_4E83B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char v4; // al
  unsigned int v5; // ebp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v4 = *(_BYTE *)(a2 + 1);
  v11 = __readfsqword(0x28u);
  if ( v4 == 1 )
  {
    v5 = 0x10000;
    v9 = (unsigned int)get_dtype_size(*(unsigned __int8 *)(a2 + 5)) - 1;
    if ( (unsigned int)v9 <= 7 )
    {
      v5 = dword_238A060[v9];
      if ( v5 != 0x10000 )
        v5 |= *(unsigned __int16 *)(a2 + 6);
    }
  }
  else
  {
    if ( v4 != 4 )
      return 0x10000;
    v5 = 0x10000;
    if ( (unsigned __int8)sub_4E7A40(a1, &v10, a2, a3, a4) )
    {
      v7 = (unsigned int)get_dtype_size(*(unsigned __int8 *)(a2 + 5)) - 1;
      if ( (unsigned int)v7 <= 7 )
      {
        v5 = dword_238A060[v7];
        if ( v5 != 0x10000 )
        {
          v8 = v10;
          if ( (unsigned int)(v10 + 0x7FFFFFF) > 0xFFFFFFE )
            return 0x10000;
          if ( v10 < 0 )
          {
            v5 |= 0x8000000u;
            v8 = -v10;
          }
          v5 |= v8 | 0x80000000;
        }
      }
    }
  }
  return v5;
}

