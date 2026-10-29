__int64 __fastcall sub_144050(TSystemInit *this)
{
  __int64 v1; // rax
  unsigned __int64 (__fastcall *v2)(TView *, char); // rdx
  __int64 v3; // rax

  v1 = *(_QWORD *)this;
  v2 = *(unsigned __int64 (__fastcall **)(TView *, char))(*(_QWORD *)this + 208LL);
  if ( v2 == sub_144030 )
  {
    if ( byte_25022D )
    {
      sub_143F10(this, 0);
      v1 = *(_QWORD *)this;
    }
  }
  else
  {
    v2(this, 0);
    v1 = *(_QWORD *)this;
  }
  v3 = (*(__int64 (__fastcall **)(TSystemInit *))(v1 + 232))(this);
  if ( v3 )
    sub_187790(v3, 0);
  return TSystemInit::suspend(this);
}

