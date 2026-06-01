__int64 __fastcall sub_37D150(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 idc_class; // rax

  v2 = *(_QWORD *)(qword_2CCB598 + 624);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 0x40) == 0 )
      callui();
    callui();
  }
  idc_class = find_idc_class("exception");
  idcv_object(a2, idc_class);
  return throw_idc_exception(a2, "Debugger not present");
}
