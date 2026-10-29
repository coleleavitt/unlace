__int64 __fastcall sub_7840F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 120) )
    sub_781BB0((_QWORD *)(a1 + 112));
  if ( *(_QWORD *)(a1 + 144) )
    sub_781BB0((_QWORD *)(a1 + 136));
  v1 = *(_QWORD *)(a1 + 200);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      if ( !under_debugger )
        interr(262);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      if ( !under_debugger )
        interr(263);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      if ( !under_debugger )
        interr(264);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      if ( !under_debugger )
        interr(265);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      if ( !under_debugger )
        interr(266);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      if ( !under_debugger )
        interr(267);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 352) )
    {
      if ( !under_debugger )
        interr(268);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 376) )
    {
      if ( !under_debugger )
        interr(269);
      goto LABEL_37;
    }
  }
  result = *(_QWORD *)(a1 + 192);
  if ( result )
  {
    if ( *(_DWORD *)(result + 136) == -1 )
    {
      *(_DWORD *)(result + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_18;
    }
    if ( !under_debugger )
      interr(485);
LABEL_37:
    BUG();
  }
LABEL_18:
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 416) = 0;
  return result;
}
