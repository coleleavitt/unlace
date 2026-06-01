__int64 __fastcall sub_70AB20(__int64 a1, __int64 a2)
{
  if ( !*(_BYTE *)(a1 + 850) )
    return 1;
  if ( *(_DWORD *)(a1 + 616) <= 6u )
    return sub_813900(a1, *(_QWORD *)(a1 + 640));
  if ( a2 != qlseek(*(_QWORD *)(a1 + 640), 0, 1) )
  {
    if ( !under_debugger )
      interr(3327);
    BUG();
  }
  return 1;
}

