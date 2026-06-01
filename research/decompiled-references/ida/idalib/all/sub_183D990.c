unsigned __int64 __fastcall sub_183D990(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  if ( (*(_DWORD *)a2 & 0x10000) == 0 )
    sub_183D8A0(a1, &v3);
  return v3;
}
