__int64 __fastcall sub_1279D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = 0x10000;
  while ( (unsigned int)sub_8F810(
                          (__int64)"Add mapping\n"
                                   "\n"
                                   "<~F~rom:N::18::> (nonexisting address)\n"
                                   "<~T~o  :N::18::> (existing address)\n"
                                   "<~S~ize:N::18::>\n"
                                   "\n"
                                   "\n",
                          &qword_253FF8,
                          &qword_253FF0,
                          v5) )
  {
    v3 = qword_253FF0;
    if ( (unsigned __int8)add_mapping() )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1);
      return 0;
    }
    sub_92200((__int64)"Cannot add mapping!", v3);
  }
  return 0;
}

