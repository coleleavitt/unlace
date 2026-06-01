unsigned __int64 __fastcall sub_2231160(__int64 a1, char a2)
{
  __int64 v2; // rbp
  unsigned __int64 result; // rax
  char v4; // bl
  _WORD *v5; // rdx
  void *v6; // rdx
  __int64 v7; // rdx
  void *v8; // rdx
  _WORD *v9; // rdx
  __int64 v10; // rax
  void *v11; // rdx

  v2 = a1;
  result = a2 & 3;
  v4 = a2 & 0xC;
  if ( (_BYTE)result == 1 )
  {
    v8 = *(void **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) - (_QWORD)v8 <= 0xEu )
    {
      result = sub_227BF10(a1, "address_is_null", 15);
    }
    else
    {
      result = 0x5F73736572646461LL;
      qmemcpy(v8, "address_is_null", 15);
      *(_QWORD *)(a1 + 32) += 15LL;
    }
  }
  else
  {
    if ( !(_BYTE)result )
    {
      if ( v4 != 4 )
      {
        if ( v4 != 12 )
          return result;
        v11 = *(void **)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) - (_QWORD)v11 > 9u )
        {
LABEL_25:
          qmemcpy(v11, "provenance", 10);
          *(_QWORD *)(v2 + 32) += 10LL;
          return 25955;
        }
        return sub_227BF10(v2, "provenance", 10);
      }
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(a1 + 32);
    result = *(_QWORD *)(a1 + 24) - v7;
    if ( result <= 6 )
    {
      result = sub_227BF10(a1, "address", 7);
    }
    else
    {
      *(_DWORD *)v7 = 1919181921;
      *(_WORD *)(v7 + 4) = 29541;
      *(_BYTE *)(v7 + 6) = 115;
      *(_QWORD *)(a1 + 32) += 7LL;
    }
  }
  if ( v4 == 4 )
  {
    v5 = *(_WORD **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) - (_QWORD)v5 > 1u )
    {
      *v5 = 8236;
      v6 = (void *)(*(_QWORD *)(a1 + 32) + 2LL);
      *(_QWORD *)(a1 + 32) = v6;
LABEL_9:
      if ( *(_QWORD *)(v2 + 24) - (_QWORD)v6 <= 0xEu )
        return sub_227BF10(v2, "read_provenance", 15);
      qmemcpy(v6, "read_provenance", 15);
      *(_QWORD *)(v2 + 32) += 15LL;
      return 0x6F72705F64616572LL;
    }
    v2 = sub_227BF10(a1, ", ", 2);
LABEL_8:
    v6 = *(void **)(v2 + 32);
    goto LABEL_9;
  }
  if ( v4 == 12 )
  {
    v9 = *(_WORD **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) - (_QWORD)v9 > 1u )
    {
      *v9 = 8236;
      v11 = (void *)(*(_QWORD *)(a1 + 32) + 2LL);
      *(_QWORD *)(a1 + 32) = v11;
    }
    else
    {
      v10 = sub_227BF10(a1, ", ", 2);
      v11 = *(void **)(v10 + 32);
      v2 = v10;
    }
    if ( *(_QWORD *)(v2 + 24) - (_QWORD)v11 > 9u )
      goto LABEL_25;
    return sub_227BF10(v2, "provenance", 10);
  }
  return result;
}
