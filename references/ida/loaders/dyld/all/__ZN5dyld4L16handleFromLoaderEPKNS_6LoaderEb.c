unsigned __int64 __fastcall dyld4::handleFromLoader(dyld4 *this, const dyld4::Loader *a2, bool a3)
{
  if ( ((unsigned __int8)this & 1) != 0 )
    dyld4::handleFromLoader(this, a2, a3);
  if ( (unsigned __int64)this ^ (unsigned __int64)&dword_0 | (unsigned int)a2 )
    return (unsigned __int64)this ^ (unsigned __int64)&dword_0 | (unsigned int)a2;
  else
    return 0;
}
