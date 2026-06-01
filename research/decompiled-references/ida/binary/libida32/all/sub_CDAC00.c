__int64 __fastcall sub_CDAC00(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // rbp
  unsigned int v4; // r12d
  void *v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-30h]
  char v7; // [rsp+Ch] [rbp-2Ch]
  void *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-20h]

  v1 = *(unsigned __int8 *)(a1 + 19);
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 <= 0x40 )
  {
    v2 = *(void **)a1;
LABEL_3:
    LOBYTE(v1) = v2 == nullptr;
    return v1;
  }
  sub_21E17D0(&v8);
  v4 = v9;
  v2 = v8;
  v1 = (((unsigned __int8)v1 >> 5) ^ 1) & 1;
  v6 = v9;
  v5 = v8;
  v7 = v1;
  if ( v9 <= 0x40 )
    goto LABEL_3;
  LOBYTE(v1) = (unsigned int)sub_21E2A40(&v5) == v4;
  if ( !v2 )
    return v1;
  operator delete[](v2);
  return v1;
}

