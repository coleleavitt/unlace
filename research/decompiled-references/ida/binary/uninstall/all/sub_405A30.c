__int64 __fastcall sub_405A30(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 64) )
    sub_4979A0();
  *(_QWORD *)(a1 + 64) = 0;
  return Tcl_NotifyChannel(*(_QWORD *)a1, *(unsigned int *)(a1 + 12));
}

