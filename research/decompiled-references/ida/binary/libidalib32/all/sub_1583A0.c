__int64 __fastcall sub_1583A0(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 480);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 128LL))(v1);
    get_custom_data_type_ids();
    return 1;
  }
  else
  {
    sub_1582F0();
    return sub_1583D0();
  }
}

