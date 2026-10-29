char __fastcall sub_1036260(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (*v3)(void); // rax

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 480LL);
  if ( (char *)v3 == (char *)sub_10358F0 )
    return (unsigned int)sub_10AFEA0(a1, a2, a3) != -1;
  else
    return v3();
}
