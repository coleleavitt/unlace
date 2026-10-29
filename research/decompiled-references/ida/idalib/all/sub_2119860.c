unsigned __int64 __fastcall sub_2119860(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 result; // rax
  void *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdi
  const void *v14; // rsi
  size_t v15; // rbx
  char v16; // al
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  _QWORD v19[2]; // [rsp+0h] [rbp-38h] BYREF
  int v20; // [rsp+10h] [rbp-28h]

  v4 = a4;
  result = *(unsigned __int8 *)(a1 + 212);
  if ( (unsigned __int8)(result - 2) <= 1u )
  {
    if ( *(_BYTE *)(a1 + 172) )
      sub_2221C70("Unhandled storage-mapping class for .text csect", 1);
    return sub_2119720(a1, v4);
  }
  if ( (unsigned __int8)(result - 4) <= 7u )
  {
    v16 = *(_BYTE *)(a1 + 172);
    if ( v16 != 1 && v16 != 16 )
      sub_2221C70("Unhandled storage-mapping class for .rodata csect.", 1);
    return sub_2119720(a1, v4);
  }
  switch ( (_BYTE)result )
  {
    case 0x14:
      if ( (*(_BYTE *)(a1 + 172) & 0xFB) != 1 && *(_BYTE *)(a1 + 172) != 16 )
        sub_2221C70("Unexepected storage-mapping class for ReadOnlyWithRel kind", 1);
      return sub_2119720(a1, v4);
    case 0xD:
      if ( *(_BYTE *)(a1 + 172) != 20 )
        sub_2221C70("Unhandled storage-mapping class for .tdata csect.", 1);
      return sub_2119720(a1, v4);
    case 0x13:
      v17 = *(_BYTE *)(a1 + 172);
      if ( v17 <= 0x16u )
      {
        result = 1LL << v17;
        if ( ((1LL << v17) & 0x10420) != 0 )
          return sub_2119720(a1, v4);
        if ( (result & 0x400008) != 0 )
          return result;
        if ( (result & 0x8000) != 0 )
        {
          v18 = *(_QWORD *)(v4 + 32);
          result = *(_QWORD *)(v4 + 24) - v18;
          if ( result <= 5 )
            return sub_227BF10(v4, "\t.toc\n", 6);
          *(_DWORD *)v18 = 1869884937;
          *(_WORD *)(v18 + 4) = 2659;
          *(_QWORD *)(v4 + 32) += 6LL;
          return result;
        }
      }
      sub_2221C70("Unhandled storage-mapping class for .data csect.", 1);
  }
  if ( *(_BYTE *)(a1 + 174) )
  {
    if ( *(_BYTE *)(a1 + 172) == 16 )
    {
      if ( (_BYTE)result == 18 )
        return result;
      return sub_2119720(a1, v4);
    }
    if ( *(_BYTE *)(a1 + 173) == 3 )
      return result;
  }
  if ( (result & 0xFD) == 0xC )
    return sub_2119720(a1, v4);
  if ( (_BYTE)result || !*(_BYTE *)(a1 + 204) )
    sub_2221C70("Printing for this SectionKind is unimplemented.", 1);
  v7 = *(void **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) - (_QWORD)v7 > 9u )
  {
    v8 = a4;
    qmemcpy(v7, "\n\t.dwsect ", 10);
    *(_QWORD *)(a4 + 32) += 10LL;
  }
  else
  {
    v8 = sub_227BF10(a4, "\n\t.dwsect ", 10);
  }
  v9 = *(_QWORD *)(a1 + 200);
  v19[1] = "0x%x";
  v20 = v9;
  v19[0] = off_2C73118;
  v10 = sub_227C560(v8, v19);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 10);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = 10;
  }
  v12 = *(_QWORD *)(v4 + 24);
  v13 = *(_BYTE **)(v4 + 32);
  v14 = *(const void **)(a1 + 152);
  v15 = *(_QWORD *)(a1 + 160);
  if ( v15 > v12 - (unsigned __int64)v13 )
  {
    v4 = sub_227BF10(v4, v14, v15);
    v13 = *(_BYTE **)(v4 + 32);
    v12 = *(_QWORD *)(v4 + 24);
  }
  else if ( v15 )
  {
    memcpy(v13, v14, v15);
    v12 = *(_QWORD *)(v4 + 24);
    v13 = (_BYTE *)(v15 + *(_QWORD *)(v4 + 32));
    *(_QWORD *)(v4 + 32) = v13;
  }
  if ( (unsigned __int64)v13 >= v12 )
  {
    v4 = sub_227BA10(v4, 58);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v13 + 1;
    *v13 = 58;
  }
  result = *(_QWORD *)(v4 + 32);
  if ( result >= *(_QWORD *)(v4 + 24) )
    return sub_227BA10(v4, 10);
  *(_QWORD *)(v4 + 32) = result + 1;
  *(_BYTE *)result = 10;
  return result;
}
