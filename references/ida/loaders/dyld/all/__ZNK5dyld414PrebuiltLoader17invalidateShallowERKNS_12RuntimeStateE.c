_WORD *__fastcall dyld4::PrebuiltLoader::invalidateShallow(_WORD *this, const dyld4::RuntimeState *a2)
{
  _WORD *v3; // x20
  unsigned int v4; // w21
  __int16 v5; // w10
  __int64 v6; // x8
  __int64 v7; // x11
  __int16 v8; // w10

  if ( *(this + 12) )
  {
    v3 = this;
    v4 = 0;
    do
    {
      this = (_WORD *)dyld4::PrebuiltLoader::dependent(v3, a2, v4, nullptr);
      if ( this && (*(this + 2) & 1) != 0 )
      {
        v5 = *(this + 3);
        v6 = *((_QWORD *)a2 + 86);
        v7 = v5 >= 0 ? *((_QWORD *)a2 + 83) : *((_QWORD *)a2 + 86);
        if ( *(unsigned __int8 *)(v7 + (v5 & 0x7FFF)) == 255 )
        {
          v8 = v3[3];
          if ( v8 >= 0 )
            v6 = *((_QWORD *)a2 + 83);
          *(_BYTE *)(v6 + (v8 & 0x7FFF)) = -1;
        }
      }
      ++v4;
    }
    while ( v4 < (unsigned __int16)v3[12] );
  }
  return this;
}
