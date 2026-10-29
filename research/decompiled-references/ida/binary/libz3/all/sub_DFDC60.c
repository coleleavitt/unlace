void __fastcall sub_DFDC60(_QWORD *a1, int a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  std::ostream *v3; // rbx

  if ( a1[37] )
  {
    sub_DFBCB0(a1);
    if ( *(_QWORD *)(a1[37] + 912LL) )
    {
      sub_DFBCB0(a1);
      std::ostream::flush((std::ostream *)(*(_QWORD *)(a1[37] + 912LL) + 16LL));
    }
  }
  switch ( a2 )
  {
    case 0:
      v2 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v2 != sub_305010 )
        goto LABEL_15;
      v3 = (std::ostream *)a1[51];
      goto LABEL_10;
    case 1:
      v2 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v2 != sub_305010 )
        goto LABEL_15;
      v3 = (std::ostream *)a1[51];
LABEL_10:
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_DF6320(v3);
      return;
    case -1:
      v2 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v2 == sub_305010 )
      {
        v3 = (std::ostream *)a1[51];
        goto LABEL_10;
      }
LABEL_15:
      v3 = (std::ostream *)v2((__int64)a1);
      goto LABEL_10;
  }
}

