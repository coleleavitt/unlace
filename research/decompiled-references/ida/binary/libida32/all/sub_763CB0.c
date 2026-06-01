__int64 __fastcall sub_763CB0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 112) )
    sub_761770((_QWORD *)(a1 + 104));
  if ( *(_QWORD *)(a1 + 136) )
    sub_761770((_QWORD *)(a1 + 128));
  v1 = *(_QWORD *)(a1 + 192);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 160) )
    {
      if ( !under_debugger )
        interr(262);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 224) )
    {
      if ( !under_debugger )
        interr(263);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 248) )
    {
      if ( !under_debugger )
        interr(264);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( !under_debugger )
        interr(265);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 296) )
    {
      if ( !under_debugger )
        interr(266);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      if ( !under_debugger )
        interr(267);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 344) )
    {
      if ( !under_debugger )
        interr(268);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 368) )
    {
      if ( !under_debugger )
        interr(269);
      goto LABEL_37;
    }
  }
  result = *(_QWORD *)(a1 + 184);
  if ( result )
  {
    if ( *(_DWORD *)(result + 136) == -1 )
    {
      *(_DWORD *)(result + 136) = 0;
      *(_QWORD *)(a1 + 184) = 0;
      goto LABEL_18;
    }
    if ( !under_debugger )
      interr(485);
LABEL_37:
    BUG();
  }
LABEL_18:
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 408) = 0;
  return result;
}

