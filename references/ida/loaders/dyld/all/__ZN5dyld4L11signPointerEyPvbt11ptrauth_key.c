dyld4 *__fastcall dyld4::signPointer(
        dyld4 *this,
        __int64 a2,
        void *a3,
        unsigned __int16 a4,
        unsigned int a5,
        ptrauth_key a6)
{
  unsigned __int64 v6; // x1
  dyld4 *v7; // x17

  if ( this )
  {
    v6 = a2 & 0xFFFFFFFFFFFFLL | ((unsigned __int64)a4 << 48);
    if ( a5 > 3 )
      dyld4::signPointer(this, v6, a3, a4, a5, a6);
    switch ( a5 )
    {
      case 0u:
        v7 = this;
        break;
      case 1u:
        v7 = this;
        break;
      case 2u:
        v7 = this;
        break;
      case 3u:
        v7 = this;
        break;
    }
    return v7;
  }
  return this;
}
