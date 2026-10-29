__int64 __fastcall sub_149E920(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(v1 + 32) != 22 )
    return 1;
  if ( (unsigned int)*(unsigned __int16 *)(v1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 56LL) + 144LL) )
    return sub_1568800(a1);
  *(_DWORD *)(a1 + 48) = sub_146A990(v1);
  return 0;
}
