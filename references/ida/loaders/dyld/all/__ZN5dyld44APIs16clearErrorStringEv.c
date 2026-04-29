__int64 __fastcall dyld4::APIs::clearErrorString(__int64 this)
{
  if ( *(_QWORD *)(this + 808) && *((_BYTE *)gProcessInfo + 25) )
  {
    this = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 120) + 64LL))(*(_QWORD *)(this + 120));
    if ( this )
      *(_BYTE *)(this + 8) = 0;
  }
  return this;
}
