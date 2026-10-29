bool __fastcall sub_F42220(__int64 a1)
{
  char v1; // dl
  bool result; // al
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(_BYTE *)(a1 + 16);
  if ( (unsigned __int8)(v1 - 2) <= 4u || (result = 0, v1 == 42) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    return sub_F42170(&v3);
  }
  return result;
}

