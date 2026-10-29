bool __fastcall dyld4::APIs::dyld_has_inserted_or_interposing_libraries(dyld4::APIs *this)
{
  __int64 v1; // x8
  _BOOL8 v2; // x19

  v1 = *((_QWORD *)this + 1);
  if ( *((_QWORD *)this + 18) )
    v2 = 1;
  else
    v2 = *(_DWORD *)(v1 + 484) != 0;
  if ( *(_BYTE *)(v1 + 184) )
    dyld4::RuntimeState::log(this, "dyld_has_inserted_or_interposing_libraries() => %d\n", v2);
  return v2;
}
