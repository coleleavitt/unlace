bool __fastcall sub_16BA690(__int64 a1)
{
  unsigned __int64 v1; // rdx
  bool result; // al
  void *v3; // rcx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  bool v7; // [rsp+1h] [rbp-29h]
  void *v8; // [rsp+2h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+Ah] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)(v1 + 40);
  result = 0;
  if ( (*(_WORD *)v1 & 0x1FF) == 0x34 )
  {
    v3 = *(void **)(v1 + 16);
    v4 = *(unsigned int *)(v1 + 24);
    v5 = (unsigned __int64)(v4 + 63) >> 6;
    if ( v5 > 1 )
    {
      sub_2205610(&v8, v4, v5, v3);
    }
    else
    {
      v9 = v4;
      if ( (unsigned int)v4 <= 0x40 )
      {
        v8 = v3;
        return v8 == nullptr;
      }
      sub_2205470(&v8, v3, 0);
    }
    v6 = v9;
    if ( v9 <= 0x40 )
      return v8 == nullptr;
    if ( v6 - (unsigned int)sub_2206780(&v8) <= 0x40 )
    {
      result = *(_QWORD *)v8 == 0;
LABEL_12:
      v7 = result;
      operator delete[](v8);
      return v7;
    }
    result = 0;
    if ( v8 )
      goto LABEL_12;
  }
  return result;
}
