__int64 __fastcall sub_D2F5E0(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rcx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  void *v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]

  v2 = *(void **)a1;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = (unsigned __int64)(v3 + 63) >> 6;
  if ( v4 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)v3 <= 0x40 )
    {
      v6 = v2;
LABEL_4:
      LOBYTE(v1) = v6 == nullptr;
      return v1;
    }
    sub_2205470(&v6, v2, 0);
  }
  else
  {
    sub_2205610(&v6, v3, v4, v2);
  }
  v1 = v7;
  if ( v7 <= 0x40 )
    goto LABEL_4;
  LOBYTE(v1) = v1 == (unsigned int)sub_2206780(&v6);
  if ( !v6 )
    return v1;
  operator delete[](v6);
  return v1;
}
