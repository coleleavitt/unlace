__int64 __fastcall dyld4::APIs::_dyld_launch_mode(dyld4::APIs *this)
{
  unsigned __int64 v1; // x11
  __int16 v2; // w9
  int v3; // w10
  __int64 v4; // x8
  unsigned __int64 v5; // x12
  bool v6; // zf
  int v7; // w11
  unsigned int v8; // w9
  __int64 v9; // x19

  v1 = *((_QWORD *)this + 3);
  v2 = *(_WORD *)(v1 + 4);
  v3 = v2 & 1;
  if ( *((_BYTE *)this + 704) && *((_BYTE *)this + 823) )
    v3 |= 4u;
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)(v4 + 200);
  v6 = v5 >= v1 || v5 == 0;
  v7 = v3 | 8;
  if ( v6 )
    v7 = v3;
  if ( (v2 & 1) != 0 )
    v8 = v7;
  else
    v8 = v3;
  if ( *((_QWORD *)this + 18) )
    v9 = v8 | 0x20;
  else
    v9 = v8;
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 104) == 1 )
      v9 = (unsigned int)v9 | 0x40;
    else
      v9 = (unsigned int)v9;
  }
  if ( *(_BYTE *)(v4 + 184) )
    dyld4::RuntimeState::log(this, "_dyld_launch_mode() => 0x%08X\n", v9);
  return v9;
}
