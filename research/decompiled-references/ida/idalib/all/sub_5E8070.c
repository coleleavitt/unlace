__int64 __fastcall sub_5E8070(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( !under_debugger )
      interr(1635);
LABEL_11:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 400) )
  {
    if ( !under_debugger )
      interr(811);
    goto LABEL_11;
  }
  if ( *(_QWORD *)(a1 + 448) )
  {
    if ( !under_debugger )
      interr(812);
    goto LABEL_11;
  }
  sub_5E79E0(a1);
  *(_BYTE *)(a1 + 753) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  return 0;
}
