__int64 __fastcall sub_9FCAF0(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v3 = _byteswap_uint64(a2);
  if ( a3 == 1 )
    v3 = a2;
  v5 = v3;
  return sub_22581D0(a1, &v5, 8);
}

