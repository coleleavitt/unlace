__int64 __fastcall sub_5CC290(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( !under_debugger )
      interr(1635);
LABEL_11:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 392) )
  {
    if ( !under_debugger )
      interr(811);
    goto LABEL_11;
  }
  if ( *(_QWORD *)(a1 + 440) )
  {
    if ( !under_debugger )
      interr(812);
    goto LABEL_11;
  }
  sub_5CBC00(a1);
  *(_BYTE *)(a1 + 737) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  return 0;
}

