__int64 __fastcall sub_1272E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  int v5; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  v5 = 0x10000;
  while ( (unsigned int)sub_8F730(
                          (__int64)"Add mapping\n"
                                   "\n"
                                   "<~F~rom:N::18::> (nonexisting address)\n"
                                   "<~T~o  :N::18::> (existing address)\n"
                                   "<~S~ize:N::18::>\n"
                                   "\n"
                                   "\n",
                          &dword_252E54,
                          &dword_252E50,
                          &v5) )
  {
    v3 = (unsigned int)dword_252E50;
    if ( (unsigned __int8)add_mapping() )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1);
      return 0;
    }
    sub_92120((__int64)"Cannot add mapping!", v3);
  }
  return 0;
}

